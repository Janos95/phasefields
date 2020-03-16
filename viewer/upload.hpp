//
// Created by janos on 13.03.20.
//

#include <Magnum/Trade/MeshData.h>
#include <Magnum/ImageView.h>

#include "object.hpp"

enum class CompileFlag: Magnum::UnsignedShort {
    GenerateFlatNormals = 1,
    GenerateSmoothNormals = 2,
    AddColorAttribute = 3,
    AddNormalAttribute = 4,
    AddVertexCoordsAttribute = 5,
};

using CompileFlags = Corrade::Containers::EnumSet<CompileFlag>;

Object upload(Magnum::Trade::MeshData& meshData, Magnum::ImageView2D image, CompileFlag flags = {});