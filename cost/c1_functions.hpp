//
// Created by janos on 28.04.20.
//

#pragma once

#include <Corrade/Utility/StlMath.h>


template<class T>
struct F{
    T eval(const T x) const{
        if(x < a) return pow(x-a,2);
        if(x < b) return T{0};
        return pow(x-b,2);
    }
    T grad(const T x) const{
        if(x < a) return 2 * (x - a);
        if(x < b) return T{0};
        return 2 * (x - b);
    }
    T a, b;
};

class W
{
public:

    W(const double a, const double b): m_a(a), m_b(b), m_c3(-30. / std::pow(a - b, 5))
    {
    }

    template<class T>
    T operator()(const T& x) const{
        if(x < m_a)
            return 0.;
        if(x < m_b)
            return pow(x-m_a, 2) * pow(x - m_b, 2) * m_c3;

        return 0.;
    }
private:
    const double m_a,m_b,m_c3;
};

class WGrad
{
public:

    WGrad(const double a, const double b): m_a(a), m_b(b), m_c3(-30. / std::pow(a - b, 5))
    {
    }

    inline double operator()(const double x) const{
        if(x < m_a)
            return 0.;
        if(x < m_b)
            return 2. * ((x - m_a) * pow(x - m_b, 2)  + pow(x - m_a, 2) * (x - m_b)) * m_c3;
        return 0.;
    }
private:
    const double m_a,m_b,m_c3;
};

template<typename T>
struct DoubleWell
{
    auto eval(const T x) const {
        return 9./16. * std::pow(x * x - 1., 2);
    }

    auto grad(const T x) const {
        return 9. / 4.  * (x*x - 1) * x;
    }

};

template<class T>
struct SmoothStep{
    T eval(const T x) const{
        if(x < T(0)) return T{0};
        if(x < T(1.)) return -2. * std::pow(x, 3) + 3. * std::pow(x, 2);
        return T{1};
    }
    T grad(const T x) const{
        if(x < T(0)) return T{0};
        if(x < T(1.)) return -6. * std::pow(x, 2) + 6. * x;
        return T{0};
    }
};


template<class T>
struct Indicator{
    auto eval(const T x) const{
        return 1./4. * std::pow(x + 1., 2);
    }
    auto grad(const T x) const{
        return .5 * (x + 1.);
    }
};

