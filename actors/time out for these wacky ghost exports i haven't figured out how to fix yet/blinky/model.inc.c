Lights1 mario_blinkyred_lights = gdSPDefLights1(
	0x4E, 0x0, 0x55,
	0xFF, 0x45, 0x0, 0x00, 0xD0, 0x28);

Lights1 mario_Metal__METAL__lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 mario_ghostblue_lights = gdSPDefLights1(
	0xD, 0x0, 0x30,
	0x0, 0x36, 0xFF, 0x00, 0xD0, 0x28);

Lights1 mario_blinkyhalf_lights = gdSPDefLights1(
	0x4E, 0x0, 0x55,
	0xFF, 0x45, 0x0, 0x00, 0xD0, 0x28);

Lights1 mario_blinkyclosed_lights = gdSPDefLights1(
	0x4E, 0x0, 0x55,
	0xFF, 0x45, 0x0, 0x00, 0xD0, 0x28);

Lights1 mario_ghostorange_lights = gdSPDefLights1(
	0x7F, 0x0, 0x2C,
	0xFF, 0x65, 0x7, 0x00, 0xD0, 0x28);

Lights1 mario_Cap__CAP__lights = gdSPDefLights1(
	0x7F, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 mario_Cap_Inside__CAP__lights = gdSPDefLights1(
	0x7F, 0x0, 0x0,
	0xFF, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 mario_Logo__EMBLEM__layer2_lights = gdSPDefLights1(
	0xFF, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Texture mario_blinkyface_ci8[] = {
	#include "actors/mario/blinkyface.ci8.inc.c"
};

Texture mario_blinkyface_pal_rgba16[] = {
	#include "actors/mario/blinkyface.rgba16.pal"
};

Texture mario_Metal_Shade_rgba16_rgba16[] = {
	#include "actors/mario/Metal_Shade.rgba16.inc.c"
};

Texture mario_Metal_Light_rgba16_rgba16[] = {
	#include "actors/mario/Metal_Light.rgba16.inc.c"
};

Texture mario_blinkydead_ia8[] = {
	#include "actors/mario/blinkydead.ia8.inc.c"
};

Texture mario_blinkyhalf_ci4[] = {
	#include "actors/mario/blinkyhalf.ci4.inc.c"
};

Texture mario_blinkyhalf_pal_rgba16[] = {
	#include "actors/mario/blinkyhalf.rgba16.pal"
};

Texture mario_blinkyclosed_ia8[] = {
	#include "actors/mario/blinkyclosed.ia8.inc.c"
};

Texture mario_wing_2_rgba16[] = {
	#include "actors/mario/wing_2.rgba16.inc.c"
};

Texture mario_wing1_rgba16[] = {
	#include "actors/mario/wing1.rgba16.inc.c"
};

Texture mario_innn_rgba16[] = {
	#include "actors/mario/innn.rgba16.inc.c"
};

Texture mario_custom_mario_logo_blend_rgba16[] = {
	#include "actors/mario/custom_mario_logo_blend.rgba16.inc.c"
};

Vtx mario_Butt_mesh_layer_1_vtx_0[25] = {
	{{{11, 79, 119}, 0, {74, 496}, {0xFE, 0x3F, 0x6E, 0xFF}}},
	{{{-55, 10, 132}, 0, {74, 496}, {0x19, 0x00, 0x7C, 0xFF}}},
	{{{11, -59, 119}, 0, {74, 496}, {0xFE, 0xC1, 0x6E, 0xFF}}},
	{{{-55, -104, 66}, 0, {74, 496}, {0x19, 0x94, 0x3E, 0xFF}}},
	{{{11, -127, 0}, 0, {74, 496}, {0xFE, 0x81, 0x00, 0xFF}}},
	{{{-55, -104, -66}, 0, {74, 496}, {0x19, 0x94, 0xC2, 0xFF}}},
	{{{11, -59, -119}, 0, {74, 496}, {0xFE, 0xC1, 0x92, 0xFF}}},
	{{{11, 147, 0}, 0, {74, 496}, {0xFE, 0x7F, 0x00, 0xFF}}},
	{{{-55, 124, 66}, 0, {74, 496}, {0x19, 0x6C, 0x3E, 0xFF}}},
	{{{11, 79, -119}, 0, {74, 496}, {0xFE, 0x3F, 0x92, 0xFF}}},
	{{{-55, 124, -66}, 0, {74, 496}, {0x19, 0x6C, 0xC2, 0xFF}}},
	{{{-55, 10, -132}, 0, {74, 496}, {0x19, 0x00, 0x84, 0xFF}}},
	{{{11, 10, 0}, 0, {74, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-55, -104, 66}, 0, {74, 496}, {0x8E, 0x31, 0xE4, 0xFF}}},
	{{{11, -59, 119}, 0, {74, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{11, -127, 0}, 0, {74, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-55, -104, -66}, 0, {74, 496}, {0x8E, 0x31, 0x1C, 0xFF}}},
	{{{11, -59, -119}, 0, {74, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-55, 10, -132}, 0, {74, 496}, {0x8E, 0x00, 0x39, 0xFF}}},
	{{{11, 79, -119}, 0, {74, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-55, 124, -66}, 0, {74, 496}, {0x8E, 0xCF, 0x1C, 0xFF}}},
	{{{11, 147, 0}, 0, {74, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-55, 124, 66}, 0, {74, 496}, {0x8E, 0xCF, 0xE4, 0xFF}}},
	{{{11, 79, 119}, 0, {74, 496}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-55, 10, 132}, 0, {74, 496}, {0x8E, 0x00, 0xC7, 0xFF}}},
};

Gfx mario_Butt_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Butt_mesh_layer_1_vtx_0 + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
	gsSP2Triangles(9, 10, 7, 0, 6, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
	gsSP2Triangles(12, 16, 15, 0, 17, 16, 12, 0),
	gsSP2Triangles(12, 18, 17, 0, 19, 18, 12, 0),
	gsSP2Triangles(12, 20, 19, 0, 21, 20, 12, 0),
	gsSP2Triangles(12, 22, 21, 0, 23, 22, 12, 0),
	gsSP2Triangles(12, 24, 23, 0, 14, 24, 12, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Head_DL_skinned_mesh_layer_1_vtx_0[6] = {
	{{{11, -127, 0}, 0, {74, 496}, {0xFE, 0x81, 0x00, 0xFF}}},
	{{{11, -59, -119}, 0, {74, 496}, {0xFE, 0xC1, 0x92, 0xFF}}},
	{{{11, -59, 119}, 0, {74, 496}, {0xFE, 0xC1, 0x6E, 0xFF}}},
	{{{11, 79, 119}, 0, {74, 496}, {0xFE, 0x3F, 0x6E, 0xFF}}},
	{{{11, 147, 0}, 0, {74, 496}, {0xFE, 0x7F, 0x00, 0xFF}}},
	{{{11, 79, -119}, 0, {74, 496}, {0xFE, 0x3F, 0x92, 0xFF}}},
};

Gfx mario_Head_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Head_DL_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Head_DL_mesh_layer_1_vtx_0[6] = {
	{{{-32, -140, 0}, 0, {74, 496}, {0xE9, 0x83, 0x00, 0xFF}}},
	{{{-32, -65, -130}, 0, {74, 496}, {0xE9, 0xC2, 0x94, 0xFF}}},
	{{{-32, 85, -130}, 0, {74, 496}, {0xE9, 0x3E, 0x94, 0xFF}}},
	{{{-32, 160, 0}, 0, {74, 496}, {0xE9, 0x7D, 0x00, 0xFF}}},
	{{{-32, 85, 130}, 0, {74, 496}, {0xE9, 0x3E, 0x6C, 0xFF}}},
	{{{-32, -65, 130}, 0, {74, 496}, {0xE9, 0xC2, 0x6C, 0xFF}}},
};

Gfx mario_Head_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Head_DL_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(1, 6, 0, 0, 1, 7, 6, 0),
	gsSP2Triangles(5, 7, 1, 0, 5, 8, 7, 0),
	gsSP2Triangles(4, 8, 5, 0, 4, 9, 8, 0),
	gsSP2Triangles(3, 9, 4, 0, 3, 10, 9, 0),
	gsSP2Triangles(2, 10, 3, 0, 2, 11, 10, 0),
	gsSP2Triangles(0, 11, 2, 0, 0, 6, 11, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Head_DL_mesh_layer_1_vtx_1[26] = {
	{{{-32, 160, 0}, 0, {1008, 875}, {0xE9, 0x7D, 0x00, 0xFF}}},
	{{{-32, 85, 130}, 0, {1628, 875}, {0xE9, 0x3E, 0x6C, 0xFF}}},
	{{{153, 106, 167}, 0, {1651, 213}, {0x1F, 0x3E, 0x6B, 0xFF}}},
	{{{153, 203, 0}, 0, {1008, 213}, {0x1F, 0x7B, 0x00, 0xFF}}},
	{{{230, 69, 101}, 0, {1492, -59}, {0x6C, 0x21, 0x39, 0xFF}}},
	{{{230, 127, 0}, 0, {1008, -59}, {0x6C, 0x42, 0x00, 0xFF}}},
	{{{153, 106, -167}, 0, {365, 213}, {0x1F, 0x3E, 0x95, 0xFF}}},
	{{{230, 69, -101}, 0, {524, -59}, {0x6C, 0x21, 0xC7, 0xFF}}},
	{{{-32, 85, -130}, 0, {388, 875}, {0xE9, 0x3E, 0x94, 0xFF}}},
	{{{-32, -65, -130}, 0, {74, 496}, {0xE9, 0xC2, 0x94, 0xFF}}},
	{{{-32, 85, -130}, 0, {74, 496}, {0xE9, 0x3E, 0x94, 0xFF}}},
	{{{153, 106, -167}, 0, {74, 496}, {0x1F, 0x3E, 0x95, 0xFF}}},
	{{{153, -86, -167}, 0, {74, 496}, {0x1F, 0xC2, 0x95, 0xFF}}},
	{{{230, 69, -101}, 0, {74, 496}, {0x6C, 0x21, 0xC7, 0xFF}}},
	{{{230, -49, -101}, 0, {74, 496}, {0x6C, 0xDF, 0xC7, 0xFF}}},
	{{{245, 10, 0}, 0, {74, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{230, 127, 0}, 0, {74, 496}, {0x6C, 0x42, 0x00, 0xFF}}},
	{{{230, 69, 101}, 0, {74, 496}, {0x6C, 0x21, 0x39, 0xFF}}},
	{{{230, -49, 101}, 0, {74, 496}, {0x6C, 0xDF, 0x39, 0xFF}}},
	{{{153, 106, 167}, 0, {74, 496}, {0x1F, 0x3E, 0x6B, 0xFF}}},
	{{{153, -86, 167}, 0, {74, 496}, {0x1F, 0xC2, 0x6B, 0xFF}}},
	{{{-32, 85, 130}, 0, {74, 496}, {0xE9, 0x3E, 0x6C, 0xFF}}},
	{{{-32, -65, 130}, 0, {74, 496}, {0xE9, 0xC2, 0x6C, 0xFF}}},
	{{{153, -183, 0}, 0, {74, 496}, {0x1F, 0x85, 0x00, 0xFF}}},
	{{{-32, -140, 0}, 0, {74, 496}, {0xE9, 0x83, 0x00, 0xFF}}},
	{{{230, -107, 0}, 0, {74, 496}, {0x6C, 0xBE, 0x00, 0xFF}}},
};

Gfx mario_Head_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_Head_DL_mesh_layer_1_vtx_1 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 3, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 3, 6, 0, 8, 0, 3, 0),
	gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
	gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(14, 13, 15, 0, 13, 16, 15, 0),
	gsSP2Triangles(16, 17, 15, 0, 17, 18, 15, 0),
	gsSP2Triangles(19, 18, 17, 0, 19, 20, 18, 0),
	gsSP2Triangles(21, 20, 19, 0, 21, 22, 20, 0),
	gsSP2Triangles(22, 23, 20, 0, 22, 24, 23, 0),
	gsSP2Triangles(24, 12, 23, 0, 24, 9, 12, 0),
	gsSP2Triangles(23, 12, 14, 0, 23, 14, 25, 0),
	gsSP2Triangles(25, 14, 15, 0, 18, 25, 15, 0),
	gsSP2Triangles(20, 25, 18, 0, 20, 23, 25, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Wing_DL_mesh_layer_4_vtx_0[4] = {
	{{{-7, -7, 3}, 0, {-16, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{97, -7, 22}, 0, {974, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{96, 206, 21}, 0, {974, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{-7, 205, 3}, 0, {-16, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
};

Gfx mario_Left_Wing_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_Left_Wing_DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Wing_DL_mesh_layer_4_vtx_1[4] = {
	{{{-110, 205, -16}, 0, {-16, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{-7, -7, 3}, 0, {974, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{-7, 205, 3}, 0, {974, -34}, {0xE9, 0x00, 0x7D, 0xFF}}},
	{{{-111, -7, -16}, 0, {-16, 1978}, {0xE9, 0x00, 0x7D, 0xFF}}},
};

Gfx mario_Left_Wing_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(mario_Left_Wing_DL_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Wing_DL_mesh_layer_4_vtx_0[4] = {
	{{{-7, -7, -3}, 0, {-16, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{97, -7, -22}, 0, {974, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{96, 206, -21}, 0, {974, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{-7, 205, -3}, 0, {-16, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
};

Gfx mario_Right_Wing_DL_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_Right_Wing_DL_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Wing_DL_mesh_layer_4_vtx_1[4] = {
	{{{-110, 205, 16}, 0, {-16, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{-7, -7, -3}, 0, {974, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{-7, 205, -3}, 0, {974, -34}, {0x17, 0x00, 0x7D, 0xFF}}},
	{{{-111, -7, 16}, 0, {-16, 1978}, {0x17, 0x00, 0x7D, 0xFF}}},
};

Gfx mario_Right_Wing_DL_mesh_layer_4_tri_1[] = {
	gsSPVertex(mario_Right_Wing_DL_mesh_layer_4_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Arm_Color_mesh_layer_1_vtx_0[11] = {
	{{{50, 0, 29}, 0, {151, 137}, {0xED, 0x00, 0x7E, 0xFF}}},
	{{{0, 0, 23}, 0, {151, 137}, {0xC3, 0x00, 0x6F, 0xFF}}},
	{{{0, -22, 7}, 0, {151, 137}, {0xC3, 0x96, 0x22, 0xFF}}},
	{{{50, 28, 9}, 0, {151, 137}, {0xED, 0x77, 0x27, 0xFF}}},
	{{{0, 22, 7}, 0, {151, 137}, {0xC3, 0x6A, 0x22, 0xFF}}},
	{{{50, 17, -24}, 0, {151, 137}, {0xED, 0x4A, 0x9A, 0xFF}}},
	{{{0, 14, -19}, 0, {151, 137}, {0xC3, 0x41, 0xA6, 0xFF}}},
	{{{50, -17, -24}, 0, {151, 137}, {0xED, 0xB6, 0x9A, 0xFF}}},
	{{{0, -14, -19}, 0, {151, 137}, {0xC3, 0xBF, 0xA6, 0xFF}}},
	{{{50, -28, 9}, 0, {151, 137}, {0xED, 0x89, 0x27, 0xFF}}},
	{{{-14, 0, 0}, 0, {151, 137}, {0x81, 0x00, 0x00, 0xFF}}},
};

Gfx mario_Left_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Left_Arm_Color_mesh_layer_1_vtx_0 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 2, 8, 0, 0, 2, 9, 0),
	gsSP2Triangles(8, 2, 10, 0, 2, 1, 10, 0),
	gsSP2Triangles(1, 4, 10, 0, 4, 6, 10, 0),
	gsSP1Triangle(6, 8, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Forearm_skinned_mesh_layer_1_vtx_0[5] = {
	{{{50, 0, 29}, 0, {151, 137}, {0xED, 0x00, 0x7E, 0xFF}}},
	{{{50, -28, 9}, 0, {151, 137}, {0xED, 0x89, 0x27, 0xFF}}},
	{{{50, -17, -24}, 0, {151, 137}, {0xED, 0xB6, 0x9A, 0xFF}}},
	{{{50, 17, -24}, 0, {151, 137}, {0xED, 0x4A, 0x9A, 0xFF}}},
	{{{50, 28, 9}, 0, {151, 137}, {0xED, 0x77, 0x27, 0xFF}}},
};

Gfx mario_Left_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Left_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Forearm_mesh_layer_1_vtx_0[5] = {
	{{{16, 34, 11}, 0, {151, 137}, {0xEA, 0x77, 0x27, 0xFF}}},
	{{{16, 0, 35}, 0, {151, 137}, {0xEA, 0x00, 0x7D, 0xFF}}},
	{{{16, 21, -29}, 0, {151, 137}, {0xEA, 0x4A, 0x9B, 0xFF}}},
	{{{16, -21, -29}, 0, {151, 137}, {0xEA, 0xB6, 0x9B, 0xFF}}},
	{{{16, -34, 11}, 0, {151, 137}, {0xEA, 0x89, 0x27, 0xFF}}},
};

Gfx mario_Left_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Left_Forearm_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(5, 0, 6, 0, 5, 4, 0, 0),
	gsSP2Triangles(7, 4, 5, 0, 7, 3, 4, 0),
	gsSP2Triangles(8, 3, 7, 0, 8, 2, 3, 0),
	gsSP2Triangles(9, 2, 8, 0, 9, 1, 2, 0),
	gsSP2Triangles(6, 1, 9, 0, 6, 0, 1, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Forearm_mesh_layer_1_vtx_1[23] = {
	{{{72, 54, 17}, 0, {189, 496}, {0x36, 0x6D, 0x24, 0xFF}}},
	{{{72, 0, 56}, 0, {-16, 496}, {0x36, 0x00, 0x73, 0xFF}}},
	{{{86, 0, 0}, 0, {189, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{22, 0, 44}, 0, {-16, 393}, {0xBD, 0x00, 0x6C, 0xFF}}},
	{{{22, 42, 13}, 0, {189, 393}, {0xBD, 0x66, 0x21, 0xFF}}},
	{{{72, 33, -46}, 0, {394, 496}, {0x36, 0x44, 0xA3, 0xFF}}},
	{{{86, 0, 0}, 0, {394, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{22, 26, -36}, 0, {394, 393}, {0xBD, 0x3F, 0xA9, 0xFF}}},
	{{{72, -33, -46}, 0, {598, 496}, {0x36, 0xBC, 0xA3, 0xFF}}},
	{{{86, 0, 0}, 0, {598, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{22, -26, -36}, 0, {598, 393}, {0xBD, 0xC1, 0xA9, 0xFF}}},
	{{{72, -54, 17}, 0, {803, 496}, {0x36, 0x93, 0x24, 0xFF}}},
	{{{86, 0, 0}, 0, {803, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{22, -42, 13}, 0, {803, 393}, {0xBD, 0x9A, 0x21, 0xFF}}},
	{{{72, 0, 56}, 0, {1008, 496}, {0x36, 0x00, 0x73, 0xFF}}},
	{{{86, 0, 0}, 0, {1008, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{22, 0, 44}, 0, {1008, 393}, {0xBD, 0x00, 0x6C, 0xFF}}},
	{{{16, -34, 11}, 0, {803, 290}, {0x94, 0xC1, 0x14, 0xFF}}},
	{{{16, 0, 35}, 0, {1008, 290}, {0x94, 0x00, 0x42, 0xFF}}},
	{{{16, -21, -29}, 0, {598, 290}, {0x94, 0xD9, 0xCA, 0xFF}}},
	{{{16, 21, -29}, 0, {394, 290}, {0x94, 0x27, 0xCA, 0xFF}}},
	{{{16, 34, 11}, 0, {189, 290}, {0x94, 0x3F, 0x14, 0xFF}}},
	{{{16, 0, 35}, 0, {-16, 290}, {0x94, 0x00, 0x42, 0xFF}}},
};

Gfx mario_Left_Forearm_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_Left_Forearm_mesh_layer_1_vtx_1 + 0, 23, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(0, 4, 3, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 5, 7, 4, 0),
	gsSP2Triangles(8, 7, 5, 0, 8, 5, 9, 0),
	gsSP2Triangles(8, 10, 7, 0, 11, 10, 8, 0),
	gsSP2Triangles(11, 8, 12, 0, 11, 13, 10, 0),
	gsSP2Triangles(14, 13, 11, 0, 14, 11, 15, 0),
	gsSP2Triangles(14, 16, 13, 0, 16, 17, 13, 0),
	gsSP2Triangles(16, 18, 17, 0, 13, 17, 19, 0),
	gsSP2Triangles(13, 19, 10, 0, 10, 19, 20, 0),
	gsSP2Triangles(10, 20, 7, 0, 7, 20, 21, 0),
	gsSP2Triangles(7, 21, 4, 0, 4, 21, 22, 0),
	gsSP1Triangle(4, 22, 3, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Hand_DL_mesh_layer_1_vtx_0[19] = {
	{{{0, 52, -52}, 0, {368, 1008}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{0, 52, 51}, 0, {624, 1008}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{88, 74, 74}, 0, {624, 752}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{88, 74, -74}, 0, {368, 752}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{142, 47, 0}, 0, {368, 752}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{0, -52, -52}, 0, {368, 240}, {0xA7, 0xC0, 0xC0, 0xFF}}},
	{{{0, 52, 51}, 0, {624, -16}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{0, 52, -52}, 0, {368, -16}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{0, -52, 51}, 0, {624, 240}, {0xA7, 0xC0, 0x40, 0xFF}}},
	{{{88, -74, -74}, 0, {368, 496}, {0x1F, 0xAC, 0xA6, 0xFF}}},
	{{{88, 74, -74}, 0, {112, 496}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{0, 52, -52}, 0, {112, 240}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{142, 47, 0}, 0, {112, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{142, -47, 0}, 0, {368, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
	{{{88, 74, 74}, 0, {880, 496}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{142, -47, 0}, 0, {624, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
	{{{142, 47, 0}, 0, {880, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{88, -74, 74}, 0, {624, 496}, {0x1F, 0xAC, 0x5A, 0xFF}}},
	{{{0, 52, 51}, 0, {880, 240}, {0xA7, 0x40, 0x40, 0xFF}}},
};

Gfx mario_Left_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Left_Hand_DL_mesh_layer_1_vtx_0 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 8, 6, 0, 9, 8, 5, 0),
	gsSP2Triangles(10, 9, 5, 0, 10, 5, 11, 0),
	gsSP2Triangles(9, 10, 12, 0, 9, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
	gsSP2Triangles(17, 14, 18, 0, 17, 18, 8, 0),
	gsSP2Triangles(9, 17, 8, 0, 17, 9, 15, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_vtx_0[26] = {
	{{{0, -52, -45}, 0, {368, 240}, {0xA7, 0xD7, 0xB0, 0xFF}}},
	{{{0, -52, 42}, 0, {624, 240}, {0xAA, 0xBD, 0x41, 0xFF}}},
	{{{0, 52, 42}, 0, {624, -16}, {0xA4, 0x40, 0x3C, 0xFF}}},
	{{{0, 52, -45}, 0, {368, -16}, {0xBB, 0x3F, 0xAA, 0xFF}}},
	{{{88, -59, 73}, 0, {624, 496}, {0x0C, 0xB0, 0x62, 0xFF}}},
	{{{0, 52, 42}, 0, {880, 240}, {0xA4, 0x40, 0x3C, 0xFF}}},
	{{{88, 74, 73}, 0, {880, 496}, {0x0A, 0x55, 0x5E, 0xFF}}},
	{{{192, 57, 0}, 0, {880, 496}, {0x6D, 0x40, 0x0B, 0xFF}}},
	{{{192, -57, 0}, 0, {624, 496}, {0x69, 0xB9, 0x0A, 0xFF}}},
	{{{88, -59, -20}, 0, {368, 496}, {0x37, 0x9B, 0xCB, 0xFF}}},
	{{{0, -52, 42}, 0, {624, 496}, {0xAA, 0xBD, 0x41, 0xFF}}},
	{{{83, -99, -66}, 0, {624, 496}, {0x31, 0x97, 0xCD, 0xFF}}},
	{{{0, -52, -45}, 0, {624, 240}, {0xA7, 0xD7, 0xB0, 0xFF}}},
	{{{83, -47, -80}, 0, {368, 496}, {0x33, 0x46, 0xA3, 0xFF}}},
	{{{88, 74, -20}, 0, {112, 496}, {0xFD, 0x66, 0xB4, 0xFF}}},
	{{{0, 52, -45}, 0, {112, 240}, {0xBB, 0x3F, 0xAA, 0xFF}}},
	{{{155, -57, -37}, 0, {368, 496}, {0x1C, 0xB3, 0x9E, 0xFF}}},
	{{{155, 57, -37}, 0, {112, 496}, {0x22, 0x45, 0x9B, 0xFF}}},
	{{{155, -57, -37}, 0, {624, 496}, {0x1C, 0xB3, 0x9E, 0xFF}}},
	{{{155, 57, -37}, 0, {880, 496}, {0x22, 0x45, 0x9B, 0xFF}}},
	{{{0, 52, -45}, 0, {368, 1008}, {0xBB, 0x3F, 0xAA, 0xFF}}},
	{{{0, 52, 42}, 0, {624, 1008}, {0xA4, 0x40, 0x3C, 0xFF}}},
	{{{88, 74, 73}, 0, {624, 752}, {0x0A, 0x55, 0x5E, 0xFF}}},
	{{{88, 74, -20}, 0, {368, 752}, {0xFD, 0x66, 0xB4, 0xFF}}},
	{{{155, 57, -37}, 0, {368, 752}, {0x22, 0x45, 0x9B, 0xFF}}},
	{{{192, 57, 0}, 0, {624, 752}, {0x6D, 0x40, 0x0B, 0xFF}}},
};

Gfx mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_vtx_0 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 1, 0, 4, 6, 5, 0),
	gsSP2Triangles(4, 7, 6, 0, 4, 8, 7, 0),
	gsSP2Triangles(9, 8, 4, 0, 4, 10, 9, 0),
	gsSP2Triangles(10, 11, 9, 0, 12, 11, 10, 0),
	gsSP2Triangles(13, 11, 12, 0, 9, 11, 13, 0),
	gsSP2Triangles(9, 13, 0, 0, 14, 9, 0, 0),
	gsSP2Triangles(14, 0, 15, 0, 14, 16, 9, 0),
	gsSP2Triangles(14, 17, 16, 0, 9, 16, 8, 0),
	gsSP2Triangles(7, 8, 18, 0, 7, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(22, 24, 23, 0, 22, 25, 24, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Arm_Color_mesh_layer_1_vtx_0[11] = {
	{{{50, 0, -28}, 0, {151, 137}, {0xED, 0x00, 0x82, 0xFF}}},
	{{{0, -22, -6}, 0, {151, 137}, {0xC3, 0x96, 0xDE, 0xFF}}},
	{{{0, 0, -22}, 0, {151, 137}, {0xC3, 0x00, 0x91, 0xFF}}},
	{{{50, -28, -8}, 0, {151, 137}, {0xED, 0x89, 0xD9, 0xFF}}},
	{{{0, -14, 20}, 0, {151, 137}, {0xC3, 0xBF, 0x5A, 0xFF}}},
	{{{50, -17, 25}, 0, {151, 137}, {0xED, 0xB6, 0x66, 0xFF}}},
	{{{0, 14, 20}, 0, {151, 137}, {0xC3, 0x41, 0x5A, 0xFF}}},
	{{{50, 17, 25}, 0, {151, 137}, {0xED, 0x4A, 0x66, 0xFF}}},
	{{{0, 22, -6}, 0, {151, 137}, {0xC3, 0x6A, 0xDE, 0xFF}}},
	{{{50, 28, -8}, 0, {151, 137}, {0xED, 0x77, 0xD9, 0xFF}}},
	{{{-14, 0, 1}, 0, {151, 137}, {0x81, 0x00, 0x00, 0xFF}}},
};

Gfx mario_Right_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Arm_Color_mesh_layer_1_vtx_0 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
	gsSP2Triangles(5, 6, 4, 0, 5, 7, 6, 0),
	gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
	gsSP2Triangles(9, 2, 8, 0, 9, 0, 2, 0),
	gsSP2Triangles(2, 10, 8, 0, 1, 10, 2, 0),
	gsSP2Triangles(4, 10, 1, 0, 6, 10, 4, 0),
	gsSP1Triangle(8, 10, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Forearm_skinned_mesh_layer_1_vtx_0[5] = {
	{{{50, 0, -28}, 0, {151, 137}, {0xED, 0x00, 0x82, 0xFF}}},
	{{{50, -28, -8}, 0, {151, 137}, {0xED, 0x89, 0xD9, 0xFF}}},
	{{{50, -17, 25}, 0, {151, 137}, {0xED, 0xB6, 0x66, 0xFF}}},
	{{{50, 17, 25}, 0, {151, 137}, {0xED, 0x4A, 0x66, 0xFF}}},
	{{{50, 28, -8}, 0, {151, 137}, {0xED, 0x77, 0xD9, 0xFF}}},
};

Gfx mario_Right_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Forearm_mesh_layer_1_vtx_0[5] = {
	{{{16, 34, -10}, 0, {151, 137}, {0xEA, 0x77, 0xD9, 0xFF}}},
	{{{16, 0, -34}, 0, {151, 137}, {0xEA, 0x00, 0x83, 0xFF}}},
	{{{16, -34, -10}, 0, {151, 137}, {0xEA, 0x89, 0xD9, 0xFF}}},
	{{{16, -21, 30}, 0, {151, 137}, {0xEA, 0xB6, 0x65, 0xFF}}},
	{{{16, 21, 30}, 0, {151, 137}, {0xEA, 0x4A, 0x65, 0xFF}}},
};

Gfx mario_Right_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Forearm_mesh_layer_1_vtx_0 + 0, 5, 5),
	gsSP2Triangles(5, 6, 0, 0, 6, 1, 0, 0),
	gsSP2Triangles(6, 7, 1, 0, 7, 2, 1, 0),
	gsSP2Triangles(7, 8, 2, 0, 8, 3, 2, 0),
	gsSP2Triangles(8, 9, 3, 0, 9, 4, 3, 0),
	gsSP2Triangles(9, 5, 4, 0, 5, 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Forearm_mesh_layer_1_vtx_1[23] = {
	{{{72, 54, -16}, 0, {189, 496}, {0x36, 0x6D, 0xDC, 0xFF}}},
	{{{86, 0, 1}, 0, {189, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{72, 0, -55}, 0, {-16, 496}, {0x36, 0x00, 0x8D, 0xFF}}},
	{{{22, 0, -43}, 0, {-16, 393}, {0xBD, 0x00, 0x94, 0xFF}}},
	{{{22, 42, -12}, 0, {189, 393}, {0xBD, 0x66, 0xDF, 0xFF}}},
	{{{16, 0, -34}, 0, {-16, 290}, {0x94, 0x00, 0xBE, 0xFF}}},
	{{{16, 34, -10}, 0, {189, 290}, {0x94, 0x3F, 0xEC, 0xFF}}},
	{{{22, 26, 37}, 0, {394, 393}, {0xBD, 0x3F, 0x57, 0xFF}}},
	{{{16, 21, 30}, 0, {394, 290}, {0x94, 0x27, 0x36, 0xFF}}},
	{{{22, -26, 37}, 0, {598, 393}, {0xBD, 0xC1, 0x57, 0xFF}}},
	{{{16, -21, 30}, 0, {598, 290}, {0x94, 0xD9, 0x36, 0xFF}}},
	{{{22, -42, -12}, 0, {803, 393}, {0xBD, 0x9A, 0xDF, 0xFF}}},
	{{{16, -34, -10}, 0, {803, 290}, {0x94, 0xC1, 0xEC, 0xFF}}},
	{{{22, 0, -43}, 0, {1008, 393}, {0xBD, 0x00, 0x94, 0xFF}}},
	{{{16, 0, -34}, 0, {1008, 290}, {0x94, 0x00, 0xBE, 0xFF}}},
	{{{72, 0, -55}, 0, {1008, 496}, {0x36, 0x00, 0x8D, 0xFF}}},
	{{{72, -54, -16}, 0, {803, 496}, {0x36, 0x93, 0xDC, 0xFF}}},
	{{{86, 0, 1}, 0, {1008, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{72, -33, 47}, 0, {598, 496}, {0x36, 0xBC, 0x5D, 0xFF}}},
	{{{86, 0, 1}, 0, {803, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{72, 33, 47}, 0, {394, 496}, {0x36, 0x44, 0x5D, 0xFF}}},
	{{{86, 0, 1}, 0, {598, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{86, 0, 1}, 0, {394, 496}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx mario_Right_Forearm_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_Right_Forearm_mesh_layer_1_vtx_1 + 0, 23, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
	gsSP2Triangles(7, 6, 8, 0, 9, 7, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 11, 9, 10, 0),
	gsSP2Triangles(11, 10, 12, 0, 13, 11, 12, 0),
	gsSP2Triangles(13, 12, 14, 0, 15, 11, 13, 0),
	gsSP2Triangles(15, 16, 11, 0, 15, 17, 16, 0),
	gsSP2Triangles(16, 9, 11, 0, 16, 18, 9, 0),
	gsSP2Triangles(16, 19, 18, 0, 18, 7, 9, 0),
	gsSP2Triangles(18, 20, 7, 0, 18, 21, 20, 0),
	gsSP2Triangles(20, 4, 7, 0, 20, 0, 4, 0),
	gsSP1Triangle(20, 22, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_DL_mesh_layer_1_vtx_0[19] = {
	{{{0, 52, 53}, 0, {368, 1008}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{88, 74, -73}, 0, {624, 752}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{0, 52, -50}, 0, {624, 1008}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{88, 74, 75}, 0, {368, 752}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{142, 47, 1}, 0, {368, 752}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{0, -52, 53}, 0, {368, 240}, {0xA7, 0xC0, 0x40, 0xFF}}},
	{{{0, 52, 53}, 0, {368, -16}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{0, 52, -50}, 0, {624, -16}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{0, -52, -50}, 0, {624, 240}, {0xA7, 0xC0, 0xC0, 0xFF}}},
	{{{88, -74, 75}, 0, {368, 496}, {0x1F, 0xAC, 0x5A, 0xFF}}},
	{{{88, -74, -73}, 0, {624, 496}, {0x1F, 0xAC, 0xA6, 0xFF}}},
	{{{0, 52, -50}, 0, {880, 240}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{88, 74, -73}, 0, {880, 496}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{142, -47, 1}, 0, {624, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
	{{{142, 47, 1}, 0, {880, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{88, 74, 75}, 0, {112, 496}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{0, 52, 53}, 0, {112, 240}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{142, 47, 1}, 0, {112, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{142, -47, 1}, 0, {368, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
};

Gfx mario_Right_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Hand_DL_mesh_layer_1_vtx_0 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 8, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
	gsSP2Triangles(12, 14, 13, 0, 10, 13, 9, 0),
	gsSP2Triangles(15, 16, 5, 0, 15, 5, 9, 0),
	gsSP2Triangles(9, 17, 15, 0, 9, 18, 17, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_vtx_0[26] = {
	{{{0, -52, 45}, 0, {368, 240}, {0xA7, 0xD7, 0x50, 0xFF}}},
	{{{0, 52, -42}, 0, {624, -16}, {0xA4, 0x40, 0xC4, 0xFF}}},
	{{{0, -52, -42}, 0, {624, 240}, {0xAA, 0xBD, 0xBF, 0xFF}}},
	{{{0, 52, 45}, 0, {368, -16}, {0xBB, 0x3F, 0x56, 0xFF}}},
	{{{88, -59, -73}, 0, {624, 496}, {0x0C, 0xB0, 0x9E, 0xFF}}},
	{{{0, 52, -42}, 0, {880, 240}, {0xA4, 0x40, 0xC4, 0xFF}}},
	{{{88, 74, -73}, 0, {880, 496}, {0x0A, 0x55, 0xA2, 0xFF}}},
	{{{192, 57, 0}, 0, {880, 496}, {0x6D, 0x40, 0xF5, 0xFF}}},
	{{{192, -57, 0}, 0, {624, 496}, {0x69, 0xB9, 0xF6, 0xFF}}},
	{{{155, -57, 37}, 0, {624, 496}, {0x1C, 0xB3, 0x62, 0xFF}}},
	{{{155, 57, 37}, 0, {880, 496}, {0x22, 0x45, 0x65, 0xFF}}},
	{{{88, -59, 20}, 0, {368, 496}, {0x37, 0x9B, 0x35, 0xFF}}},
	{{{0, -52, -42}, 0, {624, 496}, {0xAA, 0xBD, 0xBF, 0xFF}}},
	{{{83, -99, 66}, 0, {624, 496}, {0x31, 0x97, 0x33, 0xFF}}},
	{{{83, -47, 80}, 0, {368, 496}, {0x33, 0x46, 0x5D, 0xFF}}},
	{{{88, 74, 20}, 0, {112, 496}, {0xFD, 0x66, 0x4C, 0xFF}}},
	{{{155, -57, 37}, 0, {368, 496}, {0x1C, 0xB3, 0x62, 0xFF}}},
	{{{155, 57, 37}, 0, {112, 496}, {0x22, 0x45, 0x65, 0xFF}}},
	{{{0, 52, 45}, 0, {112, 240}, {0xBB, 0x3F, 0x56, 0xFF}}},
	{{{0, -52, 45}, 0, {624, 240}, {0xA7, 0xD7, 0x50, 0xFF}}},
	{{{0, 52, 45}, 0, {368, 1008}, {0xBB, 0x3F, 0x56, 0xFF}}},
	{{{88, 74, -73}, 0, {624, 752}, {0x0A, 0x55, 0xA2, 0xFF}}},
	{{{0, 52, -42}, 0, {624, 1008}, {0xA4, 0x40, 0xC4, 0xFF}}},
	{{{88, 74, 20}, 0, {368, 752}, {0xFD, 0x66, 0x4C, 0xFF}}},
	{{{155, 57, 37}, 0, {368, 752}, {0x22, 0x45, 0x65, 0xFF}}},
	{{{192, 57, 0}, 0, {624, 752}, {0x6D, 0x40, 0xF5, 0xFF}}},
};

Gfx mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_vtx_0 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 2, 5, 0, 4, 5, 6, 0),
	gsSP2Triangles(4, 6, 7, 0, 4, 7, 8, 0),
	gsSP2Triangles(7, 9, 8, 0, 7, 10, 9, 0),
	gsSP2Triangles(11, 4, 8, 0, 4, 11, 12, 0),
	gsSP2Triangles(12, 11, 13, 0, 11, 14, 13, 0),
	gsSP2Triangles(11, 0, 14, 0, 15, 0, 11, 0),
	gsSP2Triangles(15, 11, 16, 0, 11, 8, 16, 0),
	gsSP2Triangles(15, 16, 17, 0, 15, 18, 0, 0),
	gsSP2Triangles(19, 12, 13, 0, 14, 19, 13, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSP2Triangles(21, 23, 24, 0, 21, 24, 25, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_vtx_0[42] = {
	{{{88, -74, 75}, 0, {283, 496}, {0x20, 0xAE, 0x5B, 0xFF}}},
	{{{142, -16, 1}, 0, {283, 496}, {0x7B, 0xF9, 0x1F, 0xFF}}},
	{{{142, 24, 1}, 0, {197, 496}, {0x63, 0x0B, 0x4F, 0xFF}}},
	{{{88, -74, 75}, 0, {368, 496}, {0x20, 0xAE, 0x5B, 0xFF}}},
	{{{133, -53, 1}, 0, {368, 496}, {0x6F, 0xC3, 0xFB, 0xFF}}},
	{{{83, -25, -73}, 0, {709, 496}, {0x15, 0xEF, 0x84, 0xFF}}},
	{{{142, -16, 1}, 0, {709, 496}, {0x7B, 0xF9, 0x1F, 0xFF}}},
	{{{133, -53, 1}, 0, {624, 496}, {0x6F, 0xC3, 0xFB, 0xFF}}},
	{{{88, -74, -73}, 0, {624, 496}, {0x22, 0xAB, 0xA8, 0xFF}}},
	{{{0, -52, -50}, 0, {624, 240}, {0xA6, 0xC0, 0xC1, 0xFF}}},
	{{{0, -52, 53}, 0, {368, 240}, {0xA6, 0xC0, 0x3F, 0xFF}}},
	{{{0, -52, -50}, 0, {709, 240}, {0xA6, 0xC0, 0xC1, 0xFF}}},
	{{{88, -74, 75}, 0, {197, 496}, {0x20, 0xAE, 0x5B, 0xFF}}},
	{{{130, 56, 1}, 0, {112, 496}, {0x1A, 0x56, 0x5A, 0xFF}}},
	{{{73, 74, 75}, 0, {112, 496}, {0x14, 0x55, 0x5C, 0xFF}}},
	{{{0, -52, 53}, 0, {197, 240}, {0xA6, 0xC0, 0x3F, 0xFF}}},
	{{{0, 52, 53}, 0, {112, 240}, {0xA4, 0x3D, 0x3F, 0xFF}}},
	{{{0, -52, 53}, 0, {368, 69}, {0xA6, 0xC0, 0x3F, 0xFF}}},
	{{{0, 52, -50}, 0, {624, -16}, {0xA4, 0x3E, 0xC2, 0xFF}}},
	{{{0, -52, -50}, 0, {624, 69}, {0xA6, 0xC0, 0xC1, 0xFF}}},
	{{{0, 52, 53}, 0, {368, -16}, {0xA4, 0x3D, 0x3F, 0xFF}}},
	{{{0, 52, 53}, 0, {368, 1008}, {0xA4, 0x3D, 0x3F, 0xFF}}},
	{{{73, 74, -73}, 0, {624, 752}, {0xF4, 0x5D, 0xAA, 0xFF}}},
	{{{0, 52, -50}, 0, {624, 1008}, {0xA4, 0x3E, 0xC2, 0xFF}}},
	{{{73, 74, 75}, 0, {368, 752}, {0x14, 0x55, 0x5C, 0xFF}}},
	{{{130, 56, 1}, 0, {368, 752}, {0x1A, 0x56, 0x5A, 0xFF}}},
	{{{220, -23, 13}, 0, {709, 496}, {0x3C, 0xB6, 0x54, 0xFF}}},
	{{{142, -16, 1}, 0, {709, 496}, {0xF3, 0x9B, 0x4C, 0xFF}}},
	{{{227, -20, -33}, 0, {709, 496}, {0x5A, 0xB8, 0xCA, 0xFF}}},
	{{{78, 25, -73}, 0, {795, 496}, {0x01, 0x07, 0x81, 0xFF}}},
	{{{0, -52, -50}, 0, {795, 240}, {0xA6, 0xC0, 0xC1, 0xFF}}},
	{{{0, 52, -50}, 0, {880, 240}, {0xA4, 0x3E, 0xC2, 0xFF}}},
	{{{73, 74, -73}, 0, {880, 496}, {0xF4, 0x5D, 0xAA, 0xFF}}},
	{{{218, 55, -38}, 0, {795, 496}, {0x5F, 0xDE, 0xB4, 0xFF}}},
	{{{201, 97, -22}, 0, {880, 496}, {0x34, 0x71, 0xE5, 0xFF}}},
	{{{130, 56, 1}, 0, {880, 496}, {0x1A, 0x56, 0x5A, 0xFF}}},
	{{{209, 78, 20}, 0, {880, 496}, {0x32, 0x3F, 0x62, 0xFF}}},
	{{{142, 24, 1}, 0, {795, 496}, {0x12, 0x8C, 0x31, 0xFF}}},
	{{{218, 40, 8}, 0, {795, 496}, {0x58, 0xBD, 0x3E, 0xFF}}},
	{{{224, 29, -34}, 0, {795, 496}, {0x4F, 0x53, 0xC9, 0xFF}}},
	{{{142, 24, 1}, 0, {795, 496}, {0xF4, 0x66, 0x4A, 0xFF}}},
	{{{220, 19, 14}, 0, {795, 496}, {0x41, 0x42, 0x57, 0xFF}}},
};

Gfx mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_vtx_0 + 0, 42, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
	gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
	gsSP2Triangles(8, 7, 3, 0, 3, 9, 8, 0),
	gsSP2Triangles(3, 10, 9, 0, 8, 11, 5, 0),
	gsSP2Triangles(12, 2, 13, 0, 12, 13, 14, 0),
	gsSP2Triangles(14, 15, 12, 0, 14, 16, 15, 0),
	gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
	gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
	gsSP2Triangles(24, 25, 22, 0, 5, 26, 27, 0),
	gsSP2Triangles(5, 28, 26, 0, 29, 28, 5, 0),
	gsSP2Triangles(5, 30, 29, 0, 29, 30, 31, 0),
	gsSP2Triangles(29, 31, 32, 0, 32, 33, 29, 0),
	gsSP2Triangles(32, 34, 33, 0, 35, 34, 32, 0),
	gsSP2Triangles(35, 36, 34, 0, 37, 36, 35, 0),
	gsSP2Triangles(37, 38, 36, 0, 29, 38, 37, 0),
	gsSP2Triangles(29, 33, 38, 0, 34, 38, 33, 0),
	gsSP2Triangles(34, 36, 38, 0, 29, 39, 28, 0),
	gsSP2Triangles(40, 39, 29, 0, 40, 41, 39, 0),
	gsSP2Triangles(27, 41, 40, 0, 27, 26, 41, 0),
	gsSP2Triangles(39, 41, 26, 0, 39, 26, 28, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_vtx_0[33] = {
	{{{131, 47, -1}, 0, {1088, 212}, {0xE4, 0x5C, 0xAE, 0xFF}}},
	{{{107, -19, -33}, 0, {458, 16}, {0xCE, 0x0E, 0x8C, 0xFF}}},
	{{{78, 11, 40}, 0, {756, 802}, {0xD2, 0x40, 0x9D, 0xFF}}},
	{{{70, -52, 35}, 0, {180, 784}, {0xC6, 0xDB, 0x95, 0xFF}}},
	{{{114, -92, -11}, 0, {-164, 172}, {0xD0, 0xB9, 0xA2, 0xFF}}},
	{{{192, 11, -2}, 0, {-16, -16}, {0x53, 0x22, 0xA6, 0xFF}}},
	{{{107, -19, -33}, 0, {-16, -16}, {0xCE, 0x0E, 0x8C, 0xFF}}},
	{{{131, 47, -1}, 0, {-16, -16}, {0xE4, 0x5C, 0xAE, 0xFF}}},
	{{{182, -72, -8}, 0, {-16, -16}, {0x4A, 0xD9, 0xA0, 0xFF}}},
	{{{246, 29, 128}, 0, {-16, -16}, {0x71, 0x29, 0xD6, 0xFF}}},
	{{{183, 100, 86}, 0, {-16, -16}, {0x14, 0x7B, 0xE9, 0xFF}}},
	{{{129, 65, 103}, 0, {-16, -16}, {0xA4, 0x4D, 0x29, 0xFF}}},
	{{{78, 11, 40}, 0, {-16, -16}, {0xD2, 0x40, 0x9D, 0xFF}}},
	{{{45, 49, 53}, 0, {-16, -16}, {0xB1, 0x64, 0xFE, 0xFF}}},
	{{{18, -13, 33}, 0, {-16, -16}, {0x87, 0x12, 0xDC, 0xFF}}},
	{{{70, -52, 35}, 0, {-16, -16}, {0xC6, 0xDB, 0x95, 0xFF}}},
	{{{29, -82, 43}, 0, {-16, -16}, {0x9C, 0xB3, 0xF1, 0xFF}}},
	{{{106, -124, 90}, 0, {-16, -16}, {0x98, 0xBB, 0x17, 0xFF}}},
	{{{114, -92, -11}, 0, {-16, -16}, {0xD0, 0xB9, 0xA2, 0xFF}}},
	{{{151, -168, 67}, 0, {-16, -16}, {0xF7, 0x88, 0xD8, 0xFF}}},
	{{{228, -121, 117}, 0, {-16, -16}, {0x65, 0xC4, 0xCF, 0xFF}}},
	{{{181, -167, 138}, 0, {-16, -16}, {0x08, 0x84, 0x1B, 0xFF}}},
	{{{273, -105, 188}, 0, {-16, -16}, {0x6D, 0xC5, 0x1E, 0xFF}}},
	{{{285, -6, 196}, 0, {-16, -16}, {0x76, 0x1B, 0x26, 0xFF}}},
	{{{211, 81, 156}, 0, {-16, -16}, {0x26, 0x71, 0x2C, 0xFF}}},
	{{{228, 1, 228}, 0, {-16, -16}, {0xFC, 0x21, 0x7A, 0xFF}}},
	{{{192, 42, 190}, 0, {-16, -16}, {0xC4, 0x36, 0x62, 0xFF}}},
	{{{160, 65, 148}, 0, {-16, -16}, {0xB0, 0x43, 0x48, 0xFF}}},
	{{{216, -104, 220}, 0, {-16, -16}, {0xF4, 0xCF, 0x74, 0xFF}}},
	{{{171, -129, 178}, 0, {-16, -16}, {0xB6, 0xCD, 0x5A, 0xFF}}},
	{{{137, -137, 134}, 0, {-16, -16}, {0xA3, 0xC7, 0x41, 0xFF}}},
	{{{65, -53, 55}, 0, {-16, -16}, {0xBB, 0x08, 0x6A, 0xFF}}},
	{{{73, 11, 60}, 0, {-16, -16}, {0xBC, 0xFA, 0x6B, 0xFF}}},
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_vtx_0 + 0, 33, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 6, 5, 0, 8, 5, 9, 0),
	gsSP2Triangles(5, 10, 9, 0, 7, 10, 5, 0),
	gsSP2Triangles(10, 7, 11, 0, 12, 11, 7, 0),
	gsSP2Triangles(12, 13, 11, 0, 12, 14, 13, 0),
	gsSP2Triangles(15, 14, 12, 0, 16, 14, 15, 0),
	gsSP2Triangles(16, 15, 17, 0, 18, 17, 15, 0),
	gsSP2Triangles(17, 18, 19, 0, 8, 19, 18, 0),
	gsSP2Triangles(18, 6, 8, 0, 20, 19, 8, 0),
	gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
	gsSP2Triangles(23, 22, 20, 0, 20, 9, 23, 0),
	gsSP2Triangles(20, 8, 9, 0, 24, 23, 9, 0),
	gsSP2Triangles(25, 23, 24, 0, 25, 24, 26, 0),
	gsSP2Triangles(26, 24, 27, 0, 27, 24, 10, 0),
	gsSP2Triangles(24, 9, 10, 0, 10, 11, 27, 0),
	gsSP2Triangles(22, 23, 25, 0, 28, 22, 25, 0),
	gsSP2Triangles(21, 22, 28, 0, 29, 21, 28, 0),
	gsSP2Triangles(30, 21, 29, 0, 19, 21, 30, 0),
	gsSP2Triangles(17, 19, 30, 0, 31, 16, 17, 0),
	gsSP2Triangles(31, 14, 16, 0, 31, 32, 14, 0),
	gsSP2Triangles(13, 14, 32, 0, 11, 13, 32, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_vtx_1[10] = {
	{{{65, -53, 55}, 0, {-16, -16}, {0xBB, 0x08, 0x6A, 0xFF}}},
	{{{106, -124, 90}, 0, {-16, -16}, {0x98, 0xBB, 0x17, 0xFF}}},
	{{{137, -137, 134}, 0, {-16, -16}, {0xA3, 0xC7, 0x41, 0xFF}}},
	{{{73, 11, 60}, 0, {-16, -16}, {0xBC, 0xFA, 0x6B, 0xFF}}},
	{{{129, 65, 103}, 0, {-16, -16}, {0xA4, 0x4D, 0x29, 0xFF}}},
	{{{160, 65, 148}, 0, {-16, -16}, {0xB0, 0x43, 0x48, 0xFF}}},
	{{{192, 42, 190}, 0, {-16, -16}, {0xC4, 0x36, 0x62, 0xFF}}},
	{{{171, -129, 178}, 0, {-16, -16}, {0xB6, 0xCD, 0x5A, 0xFF}}},
	{{{216, -104, 220}, 0, {-16, -16}, {0xF4, 0xCF, 0x74, 0xFF}}},
	{{{228, 1, 228}, 0, {-16, -16}, {0xFC, 0x21, 0x7A, 0xFF}}},
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
	gsSP2Triangles(6, 5, 2, 0, 6, 2, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_vtx_2[19] = {
	{{{0, 52, 53}, 0, {368, 1008}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{88, 74, -73}, 0, {624, 752}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{0, 52, -50}, 0, {624, 1008}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{88, 74, 75}, 0, {368, 752}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{142, 47, 1}, 0, {368, 752}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{0, -52, 53}, 0, {368, 240}, {0xA7, 0xC0, 0x40, 0xFF}}},
	{{{0, 52, 53}, 0, {368, -16}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{0, 52, -50}, 0, {624, -16}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{0, -52, -50}, 0, {624, 240}, {0xA7, 0xC0, 0xC0, 0xFF}}},
	{{{88, -74, 75}, 0, {368, 496}, {0x1F, 0xAC, 0x5A, 0xFF}}},
	{{{88, -74, -73}, 0, {624, 496}, {0x1F, 0xAC, 0xA6, 0xFF}}},
	{{{0, 52, -50}, 0, {880, 240}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{88, 74, -73}, 0, {880, 496}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{142, -47, 1}, 0, {624, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
	{{{142, 47, 1}, 0, {880, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{88, 74, 75}, 0, {112, 496}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{0, 52, 53}, 0, {112, 240}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{142, 47, 1}, 0, {112, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{142, -47, 1}, 0, {368, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_2[] = {
	gsSPVertex(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_vtx_2 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 8, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
	gsSP2Triangles(12, 14, 13, 0, 10, 13, 9, 0),
	gsSP2Triangles(15, 16, 5, 0, 15, 5, 9, 0),
	gsSP2Triangles(9, 17, 15, 0, 9, 18, 17, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_vtx_0[11] = {
	{{{114, -92, -11}, 0, {-16, -16}, {0x99, 0xCB, 0xCB, 0xFF}}},
	{{{106, -124, 90}, 0, {-16, -16}, {0x9D, 0xB7, 0xE1, 0xFF}}},
	{{{70, -52, 35}, 0, {-16, -16}, {0x91, 0xE0, 0xCB, 0xFF}}},
	{{{78, 11, 40}, 0, {-16, -16}, {0x9C, 0x40, 0xD3, 0xFF}}},
	{{{129, 65, 103}, 0, {-16, -16}, {0xB0, 0x61, 0xEE, 0xFF}}},
	{{{131, 47, -1}, 0, {-16, -16}, {0xA8, 0x52, 0xD6, 0xFF}}},
	{{{131, 47, -1}, 0, {1088, 212}, {0xA8, 0x52, 0xD6, 0xFF}}},
	{{{107, -19, -33}, 0, {458, 16}, {0x95, 0x12, 0xBE, 0xFF}}},
	{{{78, 11, 40}, 0, {756, 802}, {0x9C, 0x40, 0xD3, 0xFF}}},
	{{{70, -52, 35}, 0, {180, 784}, {0x91, 0xE0, 0xCB, 0xFF}}},
	{{{114, -92, -11}, 0, {-164, 172}, {0x99, 0xCB, 0xCB, 0xFF}}},
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_tri_0[] = {
	gsSPVertex(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_vtx_0 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_vtx_0[33] = {
	{{{131, 47, -1}, 0, {1088, 212}, {0xE4, 0x5C, 0xAE, 0xFF}}},
	{{{107, -19, -33}, 0, {458, 16}, {0xCE, 0x0E, 0x8C, 0xFF}}},
	{{{78, 11, 40}, 0, {756, 802}, {0xD2, 0x40, 0x9D, 0xFF}}},
	{{{70, -52, 35}, 0, {180, 784}, {0xC6, 0xDB, 0x95, 0xFF}}},
	{{{114, -92, -11}, 0, {-164, 172}, {0xD0, 0xB9, 0xA2, 0xFF}}},
	{{{192, 11, -2}, 0, {-16, -16}, {0x53, 0x22, 0xA6, 0xFF}}},
	{{{107, -19, -33}, 0, {-16, -16}, {0xCE, 0x0E, 0x8C, 0xFF}}},
	{{{131, 47, -1}, 0, {-16, -16}, {0xE4, 0x5C, 0xAE, 0xFF}}},
	{{{182, -72, -8}, 0, {-16, -16}, {0x4A, 0xD9, 0xA0, 0xFF}}},
	{{{246, 29, 128}, 0, {-16, -16}, {0x71, 0x29, 0xD6, 0xFF}}},
	{{{183, 100, 86}, 0, {-16, -16}, {0x14, 0x7B, 0xE9, 0xFF}}},
	{{{129, 65, 103}, 0, {-16, -16}, {0xA4, 0x4D, 0x29, 0xFF}}},
	{{{78, 11, 40}, 0, {-16, -16}, {0xD2, 0x40, 0x9D, 0xFF}}},
	{{{45, 49, 53}, 0, {-16, -16}, {0xB1, 0x64, 0xFE, 0xFF}}},
	{{{18, -13, 33}, 0, {-16, -16}, {0x87, 0x12, 0xDC, 0xFF}}},
	{{{70, -52, 35}, 0, {-16, -16}, {0xC6, 0xDB, 0x95, 0xFF}}},
	{{{29, -82, 43}, 0, {-16, -16}, {0x9C, 0xB3, 0xF1, 0xFF}}},
	{{{106, -124, 90}, 0, {-16, -16}, {0x98, 0xBB, 0x17, 0xFF}}},
	{{{114, -92, -11}, 0, {-16, -16}, {0xD0, 0xB9, 0xA2, 0xFF}}},
	{{{151, -168, 67}, 0, {-16, -16}, {0xF7, 0x88, 0xD8, 0xFF}}},
	{{{228, -121, 117}, 0, {-16, -16}, {0x65, 0xC4, 0xCF, 0xFF}}},
	{{{181, -167, 138}, 0, {-16, -16}, {0x08, 0x84, 0x1B, 0xFF}}},
	{{{273, -105, 188}, 0, {-16, -16}, {0x6D, 0xC5, 0x1E, 0xFF}}},
	{{{285, -6, 196}, 0, {-16, -16}, {0x76, 0x1B, 0x26, 0xFF}}},
	{{{211, 81, 156}, 0, {-16, -16}, {0x26, 0x71, 0x2C, 0xFF}}},
	{{{228, 1, 228}, 0, {-16, -16}, {0xFC, 0x21, 0x7A, 0xFF}}},
	{{{192, 42, 190}, 0, {-16, -16}, {0xC4, 0x36, 0x62, 0xFF}}},
	{{{160, 65, 148}, 0, {-16, -16}, {0xB0, 0x43, 0x48, 0xFF}}},
	{{{216, -104, 220}, 0, {-16, -16}, {0xF4, 0xCF, 0x74, 0xFF}}},
	{{{171, -129, 178}, 0, {-16, -16}, {0xB6, 0xCD, 0x5A, 0xFF}}},
	{{{137, -137, 134}, 0, {-16, -16}, {0xA3, 0xC7, 0x41, 0xFF}}},
	{{{65, -53, 55}, 0, {-16, -16}, {0xBB, 0x08, 0x6A, 0xFF}}},
	{{{73, 11, 60}, 0, {-16, -16}, {0xBC, 0xFA, 0x6B, 0xFF}}},
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_vtx_0 + 0, 33, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 6, 5, 0, 8, 5, 9, 0),
	gsSP2Triangles(5, 10, 9, 0, 7, 10, 5, 0),
	gsSP2Triangles(10, 7, 11, 0, 12, 11, 7, 0),
	gsSP2Triangles(12, 13, 11, 0, 12, 14, 13, 0),
	gsSP2Triangles(15, 14, 12, 0, 16, 14, 15, 0),
	gsSP2Triangles(16, 15, 17, 0, 18, 17, 15, 0),
	gsSP2Triangles(17, 18, 19, 0, 8, 19, 18, 0),
	gsSP2Triangles(18, 6, 8, 0, 20, 19, 8, 0),
	gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
	gsSP2Triangles(23, 22, 20, 0, 20, 9, 23, 0),
	gsSP2Triangles(20, 8, 9, 0, 24, 23, 9, 0),
	gsSP2Triangles(25, 23, 24, 0, 25, 24, 26, 0),
	gsSP2Triangles(26, 24, 27, 0, 27, 24, 10, 0),
	gsSP2Triangles(24, 9, 10, 0, 10, 11, 27, 0),
	gsSP2Triangles(22, 23, 25, 0, 28, 22, 25, 0),
	gsSP2Triangles(21, 22, 28, 0, 29, 21, 28, 0),
	gsSP2Triangles(30, 21, 29, 0, 19, 21, 30, 0),
	gsSP2Triangles(17, 19, 30, 0, 31, 16, 17, 0),
	gsSP2Triangles(31, 14, 16, 0, 31, 32, 14, 0),
	gsSP2Triangles(13, 14, 32, 0, 11, 13, 32, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_vtx_1[10] = {
	{{{65, -53, 55}, 0, {-16, -16}, {0xBB, 0x08, 0x6A, 0xFF}}},
	{{{106, -124, 90}, 0, {-16, -16}, {0x98, 0xBB, 0x17, 0xFF}}},
	{{{137, -137, 134}, 0, {-16, -16}, {0xA3, 0xC7, 0x41, 0xFF}}},
	{{{73, 11, 60}, 0, {-16, -16}, {0xBC, 0xFA, 0x6B, 0xFF}}},
	{{{129, 65, 103}, 0, {-16, -16}, {0xA4, 0x4D, 0x29, 0xFF}}},
	{{{160, 65, 148}, 0, {-16, -16}, {0xB0, 0x43, 0x48, 0xFF}}},
	{{{192, 42, 190}, 0, {-16, -16}, {0xC4, 0x36, 0x62, 0xFF}}},
	{{{171, -129, 178}, 0, {-16, -16}, {0xB6, 0xCD, 0x5A, 0xFF}}},
	{{{216, -104, 220}, 0, {-16, -16}, {0xF4, 0xCF, 0x74, 0xFF}}},
	{{{228, 1, 228}, 0, {-16, -16}, {0xFC, 0x21, 0x7A, 0xFF}}},
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_vtx_1 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
	gsSP2Triangles(6, 5, 2, 0, 6, 2, 7, 0),
	gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_vtx_2[19] = {
	{{{0, 52, 53}, 0, {368, 1008}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{88, 74, -73}, 0, {624, 752}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{0, 52, -50}, 0, {624, 1008}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{88, 74, 75}, 0, {368, 752}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{142, 47, 1}, 0, {368, 752}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{0, -52, 53}, 0, {368, 240}, {0xA7, 0xC0, 0x40, 0xFF}}},
	{{{0, 52, 53}, 0, {368, -16}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{0, 52, -50}, 0, {624, -16}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{0, -52, -50}, 0, {624, 240}, {0xA7, 0xC0, 0xC0, 0xFF}}},
	{{{88, -74, 75}, 0, {368, 496}, {0x1F, 0xAC, 0x5A, 0xFF}}},
	{{{88, -74, -73}, 0, {624, 496}, {0x1F, 0xAC, 0xA6, 0xFF}}},
	{{{0, 52, -50}, 0, {880, 240}, {0xA7, 0x40, 0xC0, 0xFF}}},
	{{{88, 74, -73}, 0, {880, 496}, {0x1F, 0x54, 0xA6, 0xFF}}},
	{{{142, -47, 1}, 0, {624, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
	{{{142, 47, 1}, 0, {880, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{88, 74, 75}, 0, {112, 496}, {0x1F, 0x54, 0x5A, 0xFF}}},
	{{{0, 52, 53}, 0, {112, 240}, {0xA7, 0x40, 0x40, 0xFF}}},
	{{{142, 47, 1}, 0, {112, 496}, {0x75, 0x31, 0x00, 0xFF}}},
	{{{142, -47, 1}, 0, {368, 496}, {0x75, 0xCF, 0x00, 0xFF}}},
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_2[] = {
	gsSPVertex(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_vtx_2 + 0, 19, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 10, 8, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
	gsSP2Triangles(12, 14, 13, 0, 10, 13, 9, 0),
	gsSP2Triangles(15, 16, 5, 0, 15, 5, 9, 0),
	gsSP2Triangles(9, 17, 15, 0, 9, 18, 17, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_vtx_0[11] = {
	{{{114, -92, -11}, 0, {-16, -16}, {0x99, 0xCB, 0xCB, 0xFF}}},
	{{{106, -124, 90}, 0, {-16, -16}, {0x9D, 0xB7, 0xE1, 0xFF}}},
	{{{70, -52, 35}, 0, {-16, -16}, {0x91, 0xE0, 0xCB, 0xFF}}},
	{{{78, 11, 40}, 0, {-16, -16}, {0x9C, 0x40, 0xD3, 0xFF}}},
	{{{129, 65, 103}, 0, {-16, -16}, {0xB0, 0x61, 0xEE, 0xFF}}},
	{{{131, 47, -1}, 0, {-16, -16}, {0xA8, 0x52, 0xD6, 0xFF}}},
	{{{131, 47, -1}, 0, {1088, 212}, {0xA8, 0x52, 0xD6, 0xFF}}},
	{{{107, -19, -33}, 0, {458, 16}, {0x95, 0x12, 0xBE, 0xFF}}},
	{{{78, 11, 40}, 0, {756, 802}, {0x9C, 0x40, 0xD3, 0xFF}}},
	{{{70, -52, 35}, 0, {180, 784}, {0x91, 0xE0, 0xCB, 0xFF}}},
	{{{114, -92, -11}, 0, {-164, 172}, {0x99, 0xCB, 0xCB, 0xFF}}},
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_tri_0[] = {
	gsSPVertex(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_vtx_0 + 0, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_vtx_0[8] = {
	{{{178, -177, 128}, 0, {-16, 2032}, {0xA8, 0xB3, 0xCF, 0xFF}}},
	{{{319, -248, -14}, 0, {-16, -16}, {0xA8, 0xB3, 0xCF, 0xFF}}},
	{{{349, -325, 53}, 0, {974, -16}, {0xA8, 0xB3, 0xCF, 0xFF}}},
	{{{207, -253, 195}, 0, {974, 2032}, {0xA8, 0xB3, 0xCF, 0xFF}}},
	{{{414, 206, 82}, 0, {974, -16}, {0xBD, 0x65, 0xD8, 0xFF}}},
	{{{368, 146, 7}, 0, {-16, -16}, {0xBD, 0x65, 0xD9, 0xFF}}},
	{{{212, 96, 143}, 0, {-16, 2032}, {0xBD, 0x65, 0xD9, 0xFF}}},
	{{{258, 156, 218}, 0, {974, 2032}, {0xBD, 0x65, 0xD8, 0xFF}}},
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_vtx_1[8] = {
	{{{368, 146, 7}, 0, {974, -16}, {0xBD, 0x65, 0xD9, 0xFF}}},
	{{{166, 37, 68}, 0, {-16, 2032}, {0xBE, 0x65, 0xD9, 0xFF}}},
	{{{212, 96, 143}, 0, {974, 2032}, {0xBD, 0x65, 0xD9, 0xFF}}},
	{{{322, 87, -67}, 0, {-16, -16}, {0xBE, 0x65, 0xD9, 0xFF}}},
	{{{178, -177, 128}, 0, {974, 2032}, {0xA8, 0xB3, 0xCF, 0xFF}}},
	{{{149, -100, 60}, 0, {-16, 2032}, {0xA8, 0xB3, 0xCF, 0xFF}}},
	{{{319, -248, -14}, 0, {974, -16}, {0xA8, 0xB3, 0xCF, 0xFF}}},
	{{{290, -171, -81}, 0, {-16, -16}, {0xA8, 0xB3, 0xCE, 0xFF}}},
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_mario_blinkyred[] = {
	gsSPSetLights1(mario_blinkyred_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_blinkyface_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 25),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, mario_blinkyface_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_blinkyred[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Metal__METAL_[] = {
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPSetLights1(mario_Metal__METAL__lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Metal__METAL_[] = {
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_ghostblue[] = {
	gsSPSetLights1(mario_ghostblue_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, mario_blinkydead_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_ghostblue[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_blinkyhalf[] = {
	gsSPSetLights1(mario_blinkyhalf_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_blinkyhalf_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 9),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, mario_blinkyhalf_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_blinkyhalf[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_blinkyclosed[] = {
	gsSPSetLights1(mario_blinkyclosed_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, mario_blinkyclosed_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_blinkyclosed[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Wing_Tip[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_wing_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Wing_Tip[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Wing_Base[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_wing1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Wing_Base[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_ghostorange[] = {
	gsSPSetLights1(mario_ghostorange_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_ghostorange[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Cap__CAP_[] = {
	gsSPSetLights1(mario_Cap__CAP__lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Cap__CAP_[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Cap_Inside__CAP_[] = {
	gsSPSetLights1(mario_Cap_Inside__CAP__lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 115, 115, 115, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Cap_Inside__CAP_[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_mario_Logo__EMBLEM__layer2[] = {
	gsSPSetLights1(mario_Logo__EMBLEM__layer2_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL1, SHADE, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, SHADE, TEXEL1, SHADE, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_innn_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, mario_custom_mario_logo_blend_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Logo__EMBLEM__layer2[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_DECAL, G_RM_AA_ZB_OPA_DECAL2),
	gsSPEndDisplayList(),
};

Gfx mario_Butt_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Butt_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPEndDisplayList(),
};

Gfx mario_Butt_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Butt_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Butt_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Butt_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPEndDisplayList(),
};

Gfx mario_Butt_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Butt_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPEndDisplayList(),
};

Gfx mario_Butt_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Butt_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Head_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_skinned_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Head_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_skinned_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Head_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_skinned_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Head_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_skinned_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Head_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPEndDisplayList(),
};

Gfx mario_Head_DL_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Head_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Wing_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Wing_DL_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Wing_DL_mesh_layer_4_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Wing_DL_mesh_layer_4_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Wing_DL_mesh_layer_4_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Left_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Wing_DL_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Wing_DL_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Wing_DL_mesh_layer_4_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Wing_DL_mesh_layer_4_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Wing_DL_mesh_layer_4_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Wing_DL_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Arm_Color_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Arm_Color_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Arm_Color_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Arm_Color_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_skinned_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_skinned_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_skinned_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_skinned_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Forearm_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_DL_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_DL_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_DL_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Left_Hand_Open_Switch_Option_Left_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Arm_Color_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Arm_Color_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Arm_Color_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Arm_Color_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_skinned_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_skinned_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_skinned_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_skinned_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_blinkyred),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyred),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostblue),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostblue),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_blinkyhalf),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyhalf),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Forearm_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_blinkyclosed),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_blinkyclosed),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_DL_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_DL_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_DL_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_DL_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Open_Switch_Option_Right_Hand_Open_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Peace_Switch_Option_Right_Hand_Peace_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Cap_Switch_Option_Right_Hand_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_Cap__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_mario_Cap__CAP_),
	gsSPDisplayList(mat_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_mario_Cap_Inside__CAP_),
	gsSPDisplayList(mat_mario_ghostorange),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_mario_ghostorange),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Metal__METAL_),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Metal__METAL_),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_Logo__EMBLEM__layer2),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Right_Hand_Wing_Cap_mesh_layer_2_tri_0),
	gsSPDisplayList(mat_revert_mario_Logo__EMBLEM__layer2),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_mat_override_ghostblue_1[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_mat_override_blinkyhalf_2[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_mat_override_blinkyclosed_3[] = {
	gsSPDisplayList(mat_mario_Wing_Tip),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_mario_Wing_Tip),
	gsSPDisplayList(mat_mario_Wing_Base),
	gsSPDisplayList(mario_Right_Hand_Wing_Cap_Swtich_Option_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_mario_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx mario_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP  | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

