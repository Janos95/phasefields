//
// Created by janos on 10/17/20.
//

#pragma once

#include "Types.h"
#include <Corrade/Containers/StridedArrayView.h>

constexpr UnsignedByte CoolWarm[][3] = {
    {85, 72, 193 }, {86, 74, 194 }, {88, 76, 196 }, {89, 78, 198 },
    {90, 79, 199 }, {91, 81, 201 }, {92, 83, 202 }, {93, 85, 204 },
    {94, 87, 205 }, {95, 88, 207 }, {96, 90, 208 }, {97, 92, 209 },
    {98, 94, 211 }, {99, 95, 212 }, {100, 97, 214 }, {102, 99, 215 },
    {103, 101, 216 }, {104, 102, 218 }, {105, 104, 219 }, {106, 106, 220 },
    {107, 107, 221 }, {108, 109, 223 }, {109, 111, 224 }, {110, 113, 225 },
    {111, 114, 226 }, {112, 116, 227 }, {113, 118, 228 }, {115, 119, 230 },
    {116, 121, 231 }, {117, 123, 232 }, {118, 124, 233 }, {119, 126, 234 },
    {120, 127, 235 }, {121, 129, 236 }, {122, 131, 237 }, {123, 132, 238 },
    {125, 134, 238 }, {126, 135, 239 }, {127, 137, 240 }, {128, 139, 241 },
    {129, 140, 242 }, {130, 142, 243 }, {131, 143, 243 }, {132, 145, 244 },
    {133, 146, 245 }, {135, 148, 246 }, {136, 149, 246 }, {137, 151, 247 },
    {138, 152, 248 }, {139, 154, 248 }, {140, 155, 249 }, {141, 157, 249 },
    {142, 158, 250 }, {144, 160, 250 }, {145, 161, 251 }, {146, 162, 251 },
    {147, 164, 252 }, {148, 165, 252 }, {149, 166, 253 }, {150, 168, 253 },
    {151, 169, 253 }, {153, 170, 254 }, {154, 172, 254 }, {155, 173, 254 },
    {156, 174, 254 }, {157, 176, 255 }, {158, 177, 255 }, {159, 178, 255 },
    {160, 179, 255 }, {162, 181, 255 }, {163, 182, 255 }, {164, 183, 255 },
    {165, 184, 255 }, {166, 185, 255 }, {167, 186, 255 }, {168, 187, 255 },
    {169, 189, 255 }, {171, 190, 255 }, {172, 191, 255 }, {173, 192, 255 },
    {174, 193, 255 }, {175, 194, 255 }, {176, 195, 255 }, {177, 196, 254 },
    {178, 197, 254 }, {179, 198, 254 }, {180, 199, 253 }, {182, 200, 253 },
    {183, 201, 253 }, {184, 201, 252 }, {185, 202, 252 }, {186, 203, 252 },
    {187, 204, 251 }, {188, 205, 251 }, {189, 206, 250 }, {190, 206, 250 },
    {191, 207, 249 }, {192, 208, 249 }, {193, 209, 248 }, {194, 209, 247 },
    {195, 210, 247 }, {196, 211, 246 }, {197, 211, 245 }, {198, 212, 245 },
    {199, 212, 244 }, {200, 213, 243 }, {201, 214, 242 }, {202, 214, 242 },
    {203, 215, 241 }, {204, 215, 240 }, {205, 216, 239 }, {206, 216, 238 },
    {207, 217, 237 }, {208, 217, 236 }, {209, 217, 235 }, {210, 218, 234 },
    {211, 218, 233 }, {212, 218, 232 }, {213, 219, 231 }, {214, 219, 230 },
    {214, 219, 229 }, {215, 220, 228 }, {216, 220, 227 }, {217, 220, 226 },
    {218, 220, 225 }, {219, 220, 224 }, {219, 220, 222 }, {220, 221, 221 },
    {221, 220, 220 }, {222, 220, 219 }, {223, 220, 217 }, {224, 219, 216 },
    {225, 219, 214 }, {226, 218, 213 }, {227, 217, 211 }, {227, 217, 210 },
    {228, 216, 209 }, {229, 216, 207 }, {230, 215, 206 }, {231, 214, 204 },
    {231, 214, 203 }, {232, 213, 201 }, {233, 212, 200 }, {233, 211, 198 },
    {234, 211, 197 }, {235, 210, 195 }, {235, 209, 194 }, {236, 208, 192 },
    {236, 207, 190 }, {237, 207, 189 }, {237, 206, 187 }, {238, 205, 186 },
    {238, 204, 184 }, {239, 203, 183 }, {239, 202, 181 }, {240, 201, 180 },
    {240, 200, 178 }, {240, 199, 177 }, {241, 198, 175 }, {241, 197, 173 },
    {241, 196, 172 }, {242, 195, 170 }, {242, 194, 169 }, {242, 193, 167 },
    {242, 191, 166 }, {243, 190, 164 }, {243, 189, 162 }, {243, 188, 161 },
    {243, 187, 159 }, {243, 185, 158 }, {243, 184, 156 }, {243, 183, 154 },
    {243, 182, 153 }, {243, 180, 151 }, {243, 179, 150 }, {243, 178, 148 },
    {243, 176, 147 }, {243, 175, 145 }, {243, 174, 143 }, {243, 172, 142 },
    {243, 171, 140 }, {243, 169, 139 }, {243, 168, 137 }, {242, 167, 136 },
    {242, 165, 134 }, {242, 164, 133 }, {242, 162, 131 }, {241, 161, 129 },
    {241, 159, 128 }, {241, 158, 126 }, {240, 156, 125 }, {240, 154, 123 },
    {240, 153, 122 }, {239, 151, 120 }, {239, 150, 119 }, {238, 148, 117 },
    {238, 146, 116 }, {237, 145, 114 }, {237, 143, 113 }, {236, 141, 111 },
    {236, 140, 110 }, {235, 138, 108 }, {235, 136, 107 }, {234, 134, 105 },
    {234, 133, 104 }, {233, 131, 102 }, {232, 129, 101 }, {232, 127, 99 },
    {231, 126, 98 }, {230, 124, 97 }, {229, 122, 95 }, {229, 120, 94 },
    {228, 118, 92 }, {227, 116, 91 }, {226, 114, 89 }, {225, 112, 88 },
    {224, 111, 87 }, {224, 109, 85 }, {223, 107, 84 }, {222, 105, 83 },
    {221, 103, 81 }, {220, 101, 80 }, {219, 99, 78 }, {218, 97, 77 },
    {217, 95, 76 }, {216, 93, 75 }, {215, 91, 73 }, {214, 88, 72 },
    {213, 86, 71 }, {212, 84, 69 }, {210, 82, 68 }, {209, 80, 67 },
    {208, 78, 66 }, {207, 75, 64 }, {206, 73, 63 }, {205, 71, 62 },
    {203, 68, 61 }, {202, 66, 59 }, {201, 64, 58 }, {200, 61, 57 },
    {198, 59, 56 }, {197, 56, 55 }, {196, 54, 54 }, {194, 51, 52 },
    {193, 48, 51 }, {192, 45, 50 }, {190, 42, 49 }, {189, 39, 48 },
    {187, 36, 47 }, {186, 33, 46 }, {185, 29, 45 }, {183, 25, 44 },
    {182, 20, 43 }, {180, 15, 41 }, {179, 8, 40 }, {177, 1, 39 }
};

StaticArrayView<256, const Vector3ub> coolWarm() {
    return StaticArrayView<256, const Vector3ub>{reinterpret_cast<const Vector3ub*>(&CoolWarm[0][0])};
}