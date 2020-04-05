//
// Created by janos on 03.03.20.
//


#pragma once

#include "graph_common.hpp"

#include <enoki/autodiff.h>

#include <Corrade/Containers/Reference.h>
#include <Corrade/Utility/Assert.h>

#include <folly/Function.h>

#include <deque>
#include <numeric>
#include <limits>

template<class R>
class BreadthFirstSearch
{
public:

    explicit BreadthFirstSearch(const R& adjacencyList, int source):
            m_adjacencyList(adjacencyList),
            m_prev(adjacencyList.size(), -1),
            m_visited(adjacencyList.size(), false)
    {
        m_q.push_back(source);
    }

    bool step()
    {
        if(m_q.empty())
            return false;

        auto v = m_q.front();
        m_q.pop_front();

        for(const auto& [w, _]: m_adjacencyList[v]){
            if(!m_visited[w]){
                m_prev[w] = v;
                m_visited[w] = true;
                m_q.push_back(w);
            }
        }
        return true;
    }

    auto& enqueuedVertices(){
        return m_q;
    }

    auto run()
    {
        while(step())
            ;
    }

    [[nodiscard]] bool isConnected() const {
        return std::all_of(m_visited.begin(),m_visited.end(), [](const auto& x){ return x; });
    }

    graph::ReversedShortestPath<BreadthFirstSearch> getShortestPathReversed(const int start, const int target) const {
        auto &self = *this;
        CORRADE_INTERNAL_ASSERT(target >= 0 && start >= 0);
        return {{target, self},
                {start,  self}};
    }

private:
    friend graph::ReversedPathIterator<BreadthFirstSearch>;

    const R& m_adjacencyList;
    std::vector<int> m_prev;
    std::vector<bool> m_visited;
    std::deque<int> m_q;
};

