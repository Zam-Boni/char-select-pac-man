Lights1 paceffect_pacmanyellow_lights = gdSPDefLights1(
	0xFF, 0xFF, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Vtx paceffect_Left_Arm_Color_mesh_layer_1_vtx_0[12] = {
	{{{-1, 0, 11}, 0, {1008, 496}, {0xB4, 0x00, 0x66, 0xFF}}},
	{{{19, 0, 11}, 0, {1008, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{19, 11, 3}, 0, {803, -16}, {0x00, 0x79, 0x27, 0xFF}}},
	{{{-1, 11, 3}, 0, {803, 496}, {0xB4, 0x61, 0x20, 0xFF}}},
	{{{19, 7, -11}, 0, {598, -16}, {0x00, 0x4B, 0x99, 0xFF}}},
	{{{-1, 7, -11}, 0, {598, 496}, {0xB4, 0x3C, 0xAD, 0xFF}}},
	{{{19, -7, -11}, 0, {394, -16}, {0x00, 0xB5, 0x99, 0xFF}}},
	{{{-1, -7, -11}, 0, {394, 496}, {0xB4, 0xC4, 0xAD, 0xFF}}},
	{{{19, -11, 3}, 0, {189, -16}, {0x00, 0x87, 0x27, 0xFF}}},
	{{{-1, -11, 3}, 0, {189, 496}, {0xB4, 0x9F, 0x20, 0xFF}}},
	{{{19, 0, 11}, 0, {-16, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-1, 0, 11}, 0, {-16, 496}, {0xB4, 0x00, 0x66, 0xFF}}},
};

Gfx paceffect_Left_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Arm_Color_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 3, 0, 3, 7, 9, 0),
	gsSP1Triangle(3, 5, 7, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Forearm_skinned_mesh_layer_1_vtx_0[6] = {
	{{{19, -7, -11}, 0, {394, -16}, {0x00, 0xB5, 0x99, 0xFF}}},
	{{{19, -11, 3}, 0, {189, -16}, {0x00, 0x87, 0x27, 0xFF}}},
	{{{19, 7, -11}, 0, {598, -16}, {0x00, 0x4B, 0x99, 0xFF}}},
	{{{19, 11, 3}, 0, {803, -16}, {0x00, 0x79, 0x27, 0xFF}}},
	{{{19, 0, 11}, 0, {1008, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{19, 0, 11}, 0, {-16, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx paceffect_Left_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Forearm_mesh_layer_1_vtx_0[6] = {
	{{{5, 0, 11}, 0, {1008, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{5, 11, 3}, 0, {803, -16}, {0x00, 0x79, 0x27, 0xFF}}},
	{{{5, 7, -11}, 0, {598, -16}, {0x00, 0x4B, 0x99, 0xFF}}},
	{{{5, -7, -11}, 0, {394, -16}, {0x00, 0xB5, 0x99, 0xFF}}},
	{{{5, -11, 3}, 0, {189, -16}, {0x00, 0x87, 0x27, 0xFF}}},
	{{{5, 0, 11}, 0, {-16, -16}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx paceffect_Left_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Forearm_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(3, 4, 6, 0, 3, 6, 7, 0),
	gsSP2Triangles(2, 3, 7, 0, 2, 7, 8, 0),
	gsSP2Triangles(0, 2, 8, 0, 0, 8, 9, 0),
	gsSP2Triangles(1, 0, 9, 0, 1, 9, 10, 0),
	gsSP2Triangles(5, 1, 10, 0, 5, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Forearm_mesh_layer_1_vtx_1[29] = {
	{{{5, 11, 3}, 0, {803, -16}, {0x83, 0x17, 0x08, 0xFF}}},
	{{{5, 0, 11}, 0, {1008, -16}, {0x83, 0x00, 0x18, 0xFF}}},
	{{{7, 0, 20}, 0, {1008, -16}, {0x83, 0x00, 0x18, 0xFF}}},
	{{{7, 20, 5}, 0, {803, -16}, {0x83, 0x17, 0x08, 0xFF}}},
	{{{5, 7, -11}, 0, {598, -16}, {0x83, 0x0E, 0xEC, 0xFF}}},
	{{{7, 12, -18}, 0, {598, -16}, {0x83, 0x0E, 0xEC, 0xFF}}},
	{{{5, -7, -11}, 0, {394, -16}, {0x83, 0xF2, 0xEC, 0xFF}}},
	{{{7, -12, -18}, 0, {394, -16}, {0x83, 0xF2, 0xEC, 0xFF}}},
	{{{5, -11, 3}, 0, {189, -16}, {0x83, 0xE9, 0x08, 0xFF}}},
	{{{7, -20, 5}, 0, {189, -16}, {0x83, 0xE9, 0x08, 0xFF}}},
	{{{5, 0, 11}, 0, {-16, -16}, {0x83, 0x00, 0x18, 0xFF}}},
	{{{7, 0, 20}, 0, {-16, -16}, {0x83, 0x00, 0x18, 0xFF}}},
	{{{7, 20, 5}, 0, {803, -16}, {0x24, 0x74, 0x26, 0xFF}}},
	{{{7, 0, 20}, 0, {1008, -16}, {0x24, 0x00, 0x7A, 0xFF}}},
	{{{28, 0, 13}, 0, {1008, -16}, {0x4E, 0x00, 0x64, 0xFF}}},
	{{{28, 14, 4}, 0, {803, -16}, {0x4E, 0x60, 0x1F, 0xFF}}},
	{{{33, 0, -1}, 0, {803, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{7, 12, -18}, 0, {598, -16}, {0x24, 0x48, 0x9D, 0xFF}}},
	{{{28, 8, -13}, 0, {598, -16}, {0x4E, 0x3B, 0xAF, 0xFF}}},
	{{{33, 0, -1}, 0, {598, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{7, -12, -18}, 0, {394, -16}, {0x24, 0xB8, 0x9D, 0xFF}}},
	{{{28, -8, -13}, 0, {394, -16}, {0x4E, 0xC5, 0xAF, 0xFF}}},
	{{{33, 0, -1}, 0, {394, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{7, -20, 5}, 0, {189, -16}, {0x24, 0x8C, 0x26, 0xFF}}},
	{{{28, -14, 4}, 0, {189, -16}, {0x4E, 0xA0, 0x1F, 0xFF}}},
	{{{33, 0, -1}, 0, {189, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{7, 0, 20}, 0, {-16, -16}, {0x24, 0x00, 0x7A, 0xFF}}},
	{{{28, 0, 13}, 0, {-16, -16}, {0x4E, 0x00, 0x64, 0xFF}}},
	{{{33, 0, -1}, 0, {-16, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Forearm_mesh_layer_1_tri_1[] = {
	gsSPVertex(paceffect_Left_Forearm_mesh_layer_1_vtx_1 + 0, 29, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(15, 14, 16, 0, 17, 12, 15, 0),
	gsSP2Triangles(17, 15, 18, 0, 18, 15, 19, 0),
	gsSP2Triangles(20, 17, 18, 0, 20, 18, 21, 0),
	gsSP2Triangles(21, 18, 22, 0, 23, 20, 21, 0),
	gsSP2Triangles(23, 21, 24, 0, 24, 21, 25, 0),
	gsSP2Triangles(26, 23, 24, 0, 26, 24, 27, 0),
	gsSP1Triangle(27, 24, 28, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Hand_DL_mesh_layer_1_vtx_0[17] = {
	{{{38, -34, 28}, 0, {624, 1008}, {0x20, 0xAC, 0x5A, 0xFF}}},
	{{{38, -34, -30}, 0, {368, 1008}, {0x20, 0xAC, 0xA6, 0xFF}}},
	{{{55, -24, -1}, 0, {624, 1008}, {0x76, 0xD0, 0x00, 0xFF}}},
	{{{6, -25, 19}, 0, {624, 752}, {0xA4, 0xC2, 0x3E, 0xFF}}},
	{{{6, -25, -21}, 0, {368, 752}, {0xA4, 0xC2, 0xC2, 0xFF}}},
	{{{6, 15, 19}, 0, {624, 496}, {0xA4, 0x3E, 0x3E, 0xFF}}},
	{{{6, 15, -21}, 0, {368, 496}, {0xA4, 0x3E, 0xC2, 0xFF}}},
	{{{38, 24, 28}, 0, {624, 240}, {0x20, 0x54, 0x5A, 0xFF}}},
	{{{38, -34, 28}, 0, {880, 240}, {0x20, 0xAC, 0x5A, 0xFF}}},
	{{{6, -25, 19}, 0, {880, 496}, {0xA4, 0xC2, 0x3E, 0xFF}}},
	{{{55, -24, -1}, 0, {880, 240}, {0x76, 0xD0, 0x00, 0xFF}}},
	{{{55, 14, -1}, 0, {624, 240}, {0x76, 0x30, 0x00, 0xFF}}},
	{{{38, -34, -30}, 0, {112, 240}, {0x20, 0xAC, 0xA6, 0xFF}}},
	{{{55, 14, -1}, 0, {368, 240}, {0x76, 0x30, 0x00, 0xFF}}},
	{{{55, -24, -1}, 0, {112, 240}, {0x76, 0xD0, 0x00, 0xFF}}},
	{{{38, 24, -30}, 0, {368, 240}, {0x20, 0x54, 0xA6, 0xFF}}},
	{{{6, -25, -21}, 0, {112, 496}, {0xA4, 0xC2, 0xC2, 0xFF}}},
};

Gfx paceffect_Left_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Hand_DL_mesh_layer_1_vtx_0 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(1, 3, 4, 0, 4, 3, 5, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
	gsSP2Triangles(5, 8, 7, 0, 5, 9, 8, 0),
	gsSP2Triangles(7, 8, 10, 0, 7, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 15, 12, 0, 16, 6, 15, 0),
	gsSP2Triangles(6, 7, 15, 0, 15, 7, 13, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Arm_Color_mesh_layer_1_vtx_0[12] = {
	{{{-1, 0, -11}, 0, {1008, 496}, {0xB4, 0x00, 0x9A, 0xFF}}},
	{{{-1, 11, -2}, 0, {803, 496}, {0xB4, 0x61, 0xE0, 0xFF}}},
	{{{19, 11, -2}, 0, {803, -16}, {0x00, 0x79, 0xD9, 0xFF}}},
	{{{19, 7, 11}, 0, {598, -16}, {0x00, 0x4B, 0x67, 0xFF}}},
	{{{-1, 7, 11}, 0, {598, 496}, {0xB4, 0x3C, 0x53, 0xFF}}},
	{{{-1, -11, -2}, 0, {189, 496}, {0xB4, 0x9F, 0xE0, 0xFF}}},
	{{{-1, 0, -11}, 0, {-16, 496}, {0xB4, 0x00, 0x9A, 0xFF}}},
	{{{19, 0, -11}, 0, {-16, -16}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{19, -11, -2}, 0, {189, -16}, {0x00, 0x87, 0xD9, 0xFF}}},
	{{{-1, -7, 11}, 0, {394, 496}, {0xB4, 0xC4, 0x53, 0xFF}}},
	{{{19, -7, 11}, 0, {394, -16}, {0x00, 0xB5, 0x67, 0xFF}}},
	{{{19, 0, -11}, 0, {1008, -16}, {0x00, 0x00, 0x81, 0xFF}}},
};

Gfx paceffect_Right_Arm_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Arm_Color_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 4, 1, 0),
	gsSP2Triangles(1, 6, 5, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 4, 9, 10, 0),
	gsSP2Triangles(4, 10, 3, 0, 5, 9, 4, 0),
	gsSP1Triangle(0, 2, 11, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Forearm_skinned_mesh_layer_1_vtx_0[6] = {
	{{{19, -7, 11}, 0, {394, -16}, {0x00, 0xB5, 0x67, 0xFF}}},
	{{{19, -11, -2}, 0, {189, -16}, {0x00, 0x87, 0xD9, 0xFF}}},
	{{{19, 7, 11}, 0, {598, -16}, {0x00, 0x4B, 0x67, 0xFF}}},
	{{{19, 11, -2}, 0, {803, -16}, {0x00, 0x79, 0xD9, 0xFF}}},
	{{{19, 0, -11}, 0, {1008, -16}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{19, 0, -11}, 0, {-16, -16}, {0x00, 0x00, 0x81, 0xFF}}},
};

Gfx paceffect_Right_Forearm_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Forearm_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Forearm_mesh_layer_1_vtx_0[6] = {
	{{{5, 0, -11}, 0, {1008, -16}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{5, 11, -2}, 0, {803, -16}, {0x00, 0x79, 0xD9, 0xFF}}},
	{{{5, 7, 11}, 0, {598, -16}, {0x00, 0x4B, 0x67, 0xFF}}},
	{{{5, -7, 11}, 0, {394, -16}, {0x00, 0xB5, 0x67, 0xFF}}},
	{{{5, -11, -2}, 0, {189, -16}, {0x00, 0x87, 0xD9, 0xFF}}},
	{{{5, 0, -11}, 0, {-16, -16}, {0x00, 0x00, 0x81, 0xFF}}},
};

Gfx paceffect_Right_Forearm_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Forearm_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(3, 6, 4, 0, 3, 7, 6, 0),
	gsSP2Triangles(2, 7, 3, 0, 2, 8, 7, 0),
	gsSP2Triangles(0, 8, 2, 0, 0, 9, 8, 0),
	gsSP2Triangles(1, 9, 0, 0, 1, 10, 9, 0),
	gsSP2Triangles(5, 10, 1, 0, 5, 11, 10, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Forearm_mesh_layer_1_vtx_1[29] = {
	{{{5, 11, -2}, 0, {803, -16}, {0x83, 0x17, 0xF8, 0xFF}}},
	{{{7, 0, -19}, 0, {1008, -16}, {0x83, 0x00, 0xE8, 0xFF}}},
	{{{5, 0, -11}, 0, {1008, -16}, {0x83, 0x00, 0xE8, 0xFF}}},
	{{{7, 20, -5}, 0, {803, -16}, {0x83, 0x17, 0xF8, 0xFF}}},
	{{{5, 7, 11}, 0, {598, -16}, {0x83, 0x0E, 0x14, 0xFF}}},
	{{{7, 12, 18}, 0, {598, -16}, {0x83, 0x0E, 0x14, 0xFF}}},
	{{{5, -7, 11}, 0, {394, -16}, {0x83, 0xF2, 0x14, 0xFF}}},
	{{{7, -12, 18}, 0, {394, -16}, {0x83, 0xF2, 0x14, 0xFF}}},
	{{{5, -11, -2}, 0, {189, -16}, {0x83, 0xE9, 0xF8, 0xFF}}},
	{{{7, -20, -5}, 0, {189, -16}, {0x83, 0xE9, 0xF8, 0xFF}}},
	{{{5, 0, -11}, 0, {-16, -16}, {0x83, 0x00, 0xE8, 0xFF}}},
	{{{7, 0, -19}, 0, {-16, -16}, {0x83, 0x00, 0xE8, 0xFF}}},
	{{{7, 20, -5}, 0, {803, -16}, {0x24, 0x74, 0xDA, 0xFF}}},
	{{{28, 0, -13}, 0, {1008, -16}, {0x4E, 0x00, 0x9C, 0xFF}}},
	{{{7, 0, -19}, 0, {1008, -16}, {0x24, 0x00, 0x86, 0xFF}}},
	{{{28, 14, -3}, 0, {803, -16}, {0x4E, 0x60, 0xE1, 0xFF}}},
	{{{7, 12, 18}, 0, {598, -16}, {0x24, 0x48, 0x63, 0xFF}}},
	{{{28, 8, 13}, 0, {598, -16}, {0x4E, 0x3B, 0x51, 0xFF}}},
	{{{7, -12, 18}, 0, {394, -16}, {0x24, 0xB8, 0x63, 0xFF}}},
	{{{28, -8, 13}, 0, {394, -16}, {0x4E, 0xC5, 0x51, 0xFF}}},
	{{{7, -20, -5}, 0, {189, -16}, {0x24, 0x8C, 0xDA, 0xFF}}},
	{{{28, -14, -3}, 0, {189, -16}, {0x4E, 0xA0, 0xE1, 0xFF}}},
	{{{7, 0, -19}, 0, {-16, -16}, {0x24, 0x00, 0x86, 0xFF}}},
	{{{28, 0, -13}, 0, {-16, -16}, {0x4E, 0x00, 0x9C, 0xFF}}},
	{{{33, 0, 1}, 0, {-16, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{33, 0, 1}, 0, {189, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{33, 0, 1}, 0, {803, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{33, 0, 1}, 0, {394, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{33, 0, 1}, 0, {598, -16}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Forearm_mesh_layer_1_tri_1[] = {
	gsSPVertex(paceffect_Right_Forearm_mesh_layer_1_vtx_1 + 0, 29, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 15, 12, 0, 16, 17, 15, 0),
	gsSP2Triangles(18, 17, 16, 0, 18, 19, 17, 0),
	gsSP2Triangles(20, 19, 18, 0, 20, 21, 19, 0),
	gsSP2Triangles(22, 21, 20, 0, 22, 23, 21, 0),
	gsSP2Triangles(23, 24, 21, 0, 21, 25, 19, 0),
	gsSP2Triangles(15, 26, 13, 0, 19, 27, 17, 0),
	gsSP1Triangle(17, 28, 15, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Hand_DL_mesh_layer_1_vtx_0[17] = {
	{{{38, -34, -27}, 0, {624, 1008}, {0x20, 0xAC, 0xA6, 0xFF}}},
	{{{55, -24, 1}, 0, {624, 1008}, {0x76, 0xD0, 0x00, 0xFF}}},
	{{{38, -34, 30}, 0, {368, 1008}, {0x20, 0xAC, 0x5A, 0xFF}}},
	{{{6, -25, -18}, 0, {624, 752}, {0xA4, 0xC2, 0xC2, 0xFF}}},
	{{{6, -25, 21}, 0, {368, 752}, {0xA4, 0xC2, 0x3E, 0xFF}}},
	{{{6, 15, -18}, 0, {624, 496}, {0xA4, 0x3E, 0xC2, 0xFF}}},
	{{{6, 15, 21}, 0, {368, 496}, {0xA4, 0x3E, 0x3E, 0xFF}}},
	{{{38, 24, -27}, 0, {624, 240}, {0x20, 0x54, 0xA6, 0xFF}}},
	{{{38, 24, 30}, 0, {368, 240}, {0x20, 0x54, 0x5A, 0xFF}}},
	{{{6, -25, 21}, 0, {112, 496}, {0xA4, 0xC2, 0x3E, 0xFF}}},
	{{{38, -34, 30}, 0, {112, 240}, {0x20, 0xAC, 0x5A, 0xFF}}},
	{{{55, 14, 1}, 0, {368, 240}, {0x76, 0x30, 0x00, 0xFF}}},
	{{{55, -24, 1}, 0, {112, 240}, {0x76, 0xD0, 0x00, 0xFF}}},
	{{{38, -34, -27}, 0, {880, 240}, {0x20, 0xAC, 0xA6, 0xFF}}},
	{{{6, -25, -18}, 0, {880, 496}, {0xA4, 0xC2, 0xC2, 0xFF}}},
	{{{55, -24, 1}, 0, {880, 240}, {0x76, 0xD0, 0x00, 0xFF}}},
	{{{55, 14, 1}, 0, {624, 240}, {0x76, 0x30, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Hand_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Hand_DL_mesh_layer_1_vtx_0 + 0, 17, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 8, 6, 0),
	gsSP2Triangles(9, 10, 8, 0, 10, 11, 8, 0),
	gsSP2Triangles(10, 12, 11, 0, 8, 11, 7, 0),
	gsSP2Triangles(5, 13, 14, 0, 5, 7, 13, 0),
	gsSP2Triangles(7, 15, 13, 0, 7, 16, 15, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Thigh_Color_mesh_layer_1_vtx_0[12] = {
	{{{0, -16, 0}, 0, {1008, 496}, {0xB4, 0x9A, 0x00, 0xFF}}},
	{{{20, -16, 0}, 0, {1008, -16}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{20, -8, 11}, 0, {803, -16}, {0x00, 0xD9, 0x79, 0xFF}}},
	{{{0, -8, 11}, 0, {803, 496}, {0xB4, 0xE0, 0x61, 0xFF}}},
	{{{20, 5, 7}, 0, {598, -16}, {0x00, 0x67, 0x4B, 0xFF}}},
	{{{0, 5, 7}, 0, {598, 496}, {0xB4, 0x53, 0x3C, 0xFF}}},
	{{{20, 5, -7}, 0, {394, -16}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{0, 5, -7}, 0, {394, 496}, {0xB4, 0x53, 0xC4, 0xFF}}},
	{{{20, -8, -11}, 0, {189, -16}, {0x00, 0xD9, 0x87, 0xFF}}},
	{{{0, -8, -11}, 0, {189, 496}, {0xB4, 0xE0, 0x9F, 0xFF}}},
	{{{20, -16, 0}, 0, {-16, -16}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{0, -16, 0}, 0, {-16, 496}, {0xB4, 0x9A, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Thigh_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Thigh_Color_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 3, 0, 3, 7, 9, 0),
	gsSP1Triangle(3, 5, 7, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Leg_skinned_mesh_layer_1_vtx_0[6] = {
	{{{20, 5, -7}, 0, {394, -16}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{20, -8, -11}, 0, {189, -16}, {0x00, 0xD9, 0x87, 0xFF}}},
	{{{20, 5, 7}, 0, {598, -16}, {0x00, 0x67, 0x4B, 0xFF}}},
	{{{20, -8, 11}, 0, {803, -16}, {0x00, 0xD9, 0x79, 0xFF}}},
	{{{20, -16, 0}, 0, {1008, -16}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{20, -16, 0}, 0, {-16, -16}, {0x00, 0x81, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Leg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Leg_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Leg_mesh_layer_1_vtx_0[6] = {
	{{{5, -16, 0}, 0, {1008, -16}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{5, -8, 11}, 0, {803, -16}, {0x00, 0xD9, 0x79, 0xFF}}},
	{{{5, 5, 7}, 0, {598, -16}, {0x00, 0x67, 0x4B, 0xFF}}},
	{{{5, 5, -7}, 0, {394, -16}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{5, -8, -11}, 0, {189, -16}, {0x00, 0xD9, 0x87, 0xFF}}},
	{{{5, -16, 0}, 0, {-16, -16}, {0x00, 0x81, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Leg_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Leg_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(3, 4, 6, 0, 3, 6, 7, 0),
	gsSP2Triangles(2, 3, 7, 0, 2, 7, 8, 0),
	gsSP2Triangles(0, 2, 8, 0, 0, 8, 9, 0),
	gsSP2Triangles(1, 0, 9, 0, 1, 9, 10, 0),
	gsSP2Triangles(5, 1, 10, 0, 5, 10, 11, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Leg_mesh_layer_1_vtx_1[24] = {
	{{{5, -8, 11}, 0, {803, -16}, {0x83, 0xF9, 0x14, 0xFF}}},
	{{{5, -16, 0}, 0, {1008, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{7, -26, 0}, 0, {1008, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{7, -11, 21}, 0, {803, -16}, {0x83, 0xF9, 0x14, 0xFF}}},
	{{{5, 5, 7}, 0, {598, -16}, {0x83, 0x11, 0x0D, 0xFF}}},
	{{{7, 13, 13}, 0, {598, -16}, {0x83, 0x11, 0x0D, 0xFF}}},
	{{{5, 5, -7}, 0, {394, -16}, {0x83, 0x11, 0xF3, 0xFF}}},
	{{{7, 13, -13}, 0, {394, -16}, {0x83, 0x11, 0xF3, 0xFF}}},
	{{{5, -8, -11}, 0, {189, -16}, {0x83, 0xF9, 0xEC, 0xFF}}},
	{{{7, -11, -21}, 0, {189, -16}, {0x83, 0xF9, 0xEC, 0xFF}}},
	{{{5, -16, 0}, 0, {-16, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{7, -26, 0}, 0, {-16, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{7, -11, 21}, 0, {803, -16}, {0x14, 0xD9, 0x77, 0xFF}}},
	{{{7, -26, 0}, 0, {1008, -16}, {0x14, 0x83, 0x00, 0xFF}}},
	{{{20, -24, 0}, 0, {1008, -16}, {0x14, 0x83, 0x00, 0xFF}}},
	{{{20, -10, 19}, 0, {803, -16}, {0xF3, 0xBC, 0x6B, 0xFF}}},
	{{{7, 13, 13}, 0, {598, -16}, {0x14, 0x65, 0x4A, 0xFF}}},
	{{{20, 12, 12}, 0, {598, -16}, {0xC7, 0xF7, 0x71, 0xFF}}},
	{{{7, 13, -13}, 0, {394, -16}, {0x14, 0x65, 0xB6, 0xFF}}},
	{{{20, 12, -12}, 0, {394, -16}, {0xC7, 0xF8, 0x8F, 0xFF}}},
	{{{7, -11, -21}, 0, {189, -16}, {0x14, 0xD9, 0x89, 0xFF}}},
	{{{20, -10, -19}, 0, {189, -16}, {0xF3, 0xBC, 0x95, 0xFF}}},
	{{{7, -26, 0}, 0, {-16, -16}, {0x14, 0x83, 0x00, 0xFF}}},
	{{{20, -24, 0}, 0, {-16, -16}, {0x14, 0x83, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Leg_mesh_layer_1_tri_1[] = {
	gsSPVertex(paceffect_Left_Leg_mesh_layer_1_vtx_1 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
	gsSP2Triangles(18, 16, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 18, 19, 0, 20, 19, 21, 0),
	gsSP2Triangles(22, 20, 21, 0, 22, 21, 23, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Shoe_skinned_mesh_layer_1_vtx_0[6] = {
	{{{20, -10, 19}, 0, {803, -16}, {0xF3, 0xBC, 0x6B, 0xFF}}},
	{{{20, 12, -12}, 0, {394, -16}, {0xC7, 0xF8, 0x8F, 0xFF}}},
	{{{20, 12, 12}, 0, {598, -16}, {0xC7, 0xF7, 0x71, 0xFF}}},
	{{{20, -10, -19}, 0, {189, -16}, {0xF3, 0xBC, 0x95, 0xFF}}},
	{{{20, -24, 0}, 0, {1008, -16}, {0x07, 0x81, 0x00, 0xFF}}},
	{{{20, -24, 0}, 0, {-16, -16}, {0x07, 0x81, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Shoe_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Shoe_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Shoe_mesh_layer_1_vtx_0[6] = {
	{{{47, -21, 0}, 0, {1008, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
	{{{11, -5, 26}, 0, {803, -16}, {0xE4, 0xC0, 0x6A, 0xFF}}},
	{{{-17, 14, 16}, 0, {598, -16}, {0x9D, 0xDA, 0x46, 0xFF}}},
	{{{-17, 14, -16}, 0, {394, -16}, {0x9D, 0xDA, 0xBA, 0xFF}}},
	{{{11, -5, -26}, 0, {189, -16}, {0xE4, 0xC0, 0x96, 0xFF}}},
	{{{47, -21, 0}, 0, {-16, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Shoe_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Left_Shoe_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(0, 4, 6, 0, 7, 0, 6, 0),
	gsSP2Triangles(0, 7, 8, 0, 2, 0, 8, 0),
	gsSP2Triangles(1, 2, 8, 0, 1, 8, 9, 0),
	gsSP2Triangles(1, 9, 10, 0, 3, 1, 10, 0),
	gsSP2Triangles(3, 10, 11, 0, 5, 3, 11, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Left_Shoe_mesh_layer_1_vtx_1[26] = {
	{{{-13, 41, -19}, 0, {394, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-13, 41, 19}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{21, 28, 31}, 0, {803, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{21, 28, -31}, 0, {394, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{67, -16, 0}, 0, {-16, -16}, {0x59, 0xA5, 0x00, 0xFF}}},
	{{{56, 15, -31}, 0, {189, -16}, {0x2C, 0xDE, 0x8E, 0xFF}}},
	{{{77, 7, 0}, 0, {-16, -16}, {0x74, 0xCD, 0x00, 0xFF}}},
	{{{49, -10, -26}, 0, {189, -16}, {0x21, 0xB4, 0xA0, 0xFF}}},
	{{{47, -21, 0}, 0, {-16, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
	{{{11, -5, -26}, 0, {189, -16}, {0xE4, 0xC0, 0x96, 0xFF}}},
	{{{21, 28, -31}, 0, {189, -16}, {0xE6, 0xF2, 0x84, 0xFF}}},
	{{{-13, 41, -19}, 0, {394, -16}, {0x98, 0x08, 0xB8, 0xFF}}},
	{{{-17, 14, -16}, 0, {394, -16}, {0x9D, 0xDA, 0xBA, 0xFF}}},
	{{{-13, 41, 19}, 0, {598, -16}, {0x98, 0x08, 0x48, 0xFF}}},
	{{{-17, 14, 16}, 0, {598, -16}, {0x9D, 0xDA, 0x46, 0xFF}}},
	{{{21, 28, 31}, 0, {803, -16}, {0xE6, 0xF2, 0x7C, 0xFF}}},
	{{{11, -5, 26}, 0, {803, -16}, {0xE4, 0xC0, 0x6A, 0xFF}}},
	{{{49, -10, 26}, 0, {803, -16}, {0x21, 0xB4, 0x60, 0xFF}}},
	{{{47, -21, 0}, 0, {1008, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
	{{{67, -16, 0}, 0, {1008, -16}, {0x59, 0xA5, 0x00, 0xFF}}},
	{{{77, 7, 0}, 0, {1008, -16}, {0x74, 0xCD, 0x00, 0xFF}}},
	{{{56, 15, 31}, 0, {803, -16}, {0x2C, 0xDE, 0x72, 0xFF}}},
	{{{56, 15, 31}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{77, 7, 0}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{56, 15, -31}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{21, 28, -31}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
};

Gfx paceffect_Left_Shoe_mesh_layer_1_tri_1[] = {
	gsSPVertex(paceffect_Left_Shoe_mesh_layer_1_vtx_1 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(4, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(9, 5, 7, 0, 9, 10, 5, 0),
	gsSP2Triangles(9, 11, 10, 0, 9, 12, 11, 0),
	gsSP2Triangles(12, 13, 11, 0, 12, 14, 13, 0),
	gsSP2Triangles(14, 15, 13, 0, 14, 16, 15, 0),
	gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
	gsSP2Triangles(18, 19, 17, 0, 17, 19, 20, 0),
	gsSP2Triangles(17, 20, 21, 0, 15, 17, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 2, 22, 24, 0),
	gsSP1Triangle(2, 24, 25, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_PACBODY_mesh_layer_1_vtx_0[37] = {
	{{{8, 19, -3}, 0, {486, 22}, {0x32, 0x5F, 0x44, 0xFF}}},
	{{{0, 20, -3}, 0, {486, 22}, {0x00, 0x6F, 0x3E, 0xFF}}},
	{{{5, 19, -1}, 0, {486, 22}, {0x1B, 0x5E, 0x51, 0xFF}}},
	{{{0, 19, 0}, 0, {486, 22}, {0x00, 0x52, 0x61, 0xFF}}},
	{{{-5, 19, -1}, 0, {486, 22}, {0xE5, 0x5E, 0x51, 0xFF}}},
	{{{-8, 19, -3}, 0, {486, 22}, {0xCE, 0x5F, 0x44, 0xFF}}},
	{{{-10, 14, 1}, 0, {486, 22}, {0xD5, 0x38, 0x6A, 0xFF}}},
	{{{-14, 14, -3}, 0, {486, 22}, {0xBD, 0x3B, 0x5B, 0xFF}}},
	{{{-13, 8, 1}, 0, {486, 22}, {0xD0, 0x19, 0x73, 0xFF}}},
	{{{-19, 8, -3}, 0, {486, 22}, {0xB6, 0x1C, 0x64, 0xFF}}},
	{{{-14, 0, 2}, 0, {486, 22}, {0xCF, 0x00, 0x75, 0xFF}}},
	{{{-20, 0, -3}, 0, {486, 22}, {0xB4, 0x00, 0x66, 0xFF}}},
	{{{-13, -8, 1}, 0, {486, 22}, {0xD0, 0xE7, 0x73, 0xFF}}},
	{{{-19, -8, -3}, 0, {486, 22}, {0xB6, 0xE4, 0x64, 0xFF}}},
	{{{-10, -14, 1}, 0, {486, 22}, {0xD5, 0xC8, 0x6A, 0xFF}}},
	{{{-14, -14, -3}, 0, {486, 22}, {0xBD, 0xC5, 0x5B, 0xFF}}},
	{{{-5, -19, -1}, 0, {486, 22}, {0xE5, 0xA2, 0x51, 0xFF}}},
	{{{-8, -19, -3}, 0, {486, 22}, {0xCE, 0xA1, 0x44, 0xFF}}},
	{{{0, -20, -3}, 0, {486, 22}, {0x00, 0x91, 0x3E, 0xFF}}},
	{{{0, -19, 0}, 0, {486, 22}, {0x00, 0xAE, 0x61, 0xFF}}},
	{{{5, -19, -1}, 0, {486, 22}, {0x1B, 0xA2, 0x51, 0xFF}}},
	{{{8, -19, -3}, 0, {486, 22}, {0x32, 0xA1, 0x44, 0xFF}}},
	{{{10, -14, 1}, 0, {486, 22}, {0x2B, 0xC8, 0x6A, 0xFF}}},
	{{{14, -14, -3}, 0, {486, 22}, {0x43, 0xC5, 0x5B, 0xFF}}},
	{{{13, -8, 1}, 0, {486, 22}, {0x30, 0xE7, 0x73, 0xFF}}},
	{{{19, -8, -3}, 0, {486, 22}, {0x4A, 0xE4, 0x64, 0xFF}}},
	{{{14, 0, 2}, 0, {486, 22}, {0x31, 0x00, 0x75, 0xFF}}},
	{{{20, 0, -3}, 0, {486, 22}, {0x4C, 0x00, 0x66, 0xFF}}},
	{{{13, 8, 1}, 0, {486, 22}, {0x30, 0x19, 0x73, 0xFF}}},
	{{{19, 8, -3}, 0, {486, 22}, {0x4A, 0x1C, 0x64, 0xFF}}},
	{{{10, 14, 1}, 0, {486, 22}, {0x2B, 0x38, 0x6A, 0xFF}}},
	{{{14, 14, -3}, 0, {486, 22}, {0x43, 0x3B, 0x5B, 0xFF}}},
	{{{0, 14, 2}, 0, {486, 22}, {0x00, 0x27, 0x79, 0xFF}}},
	{{{0, 8, 3}, 0, {486, 22}, {0x00, 0x11, 0x7E, 0xFF}}},
	{{{0, 0, 4}, 0, {486, 22}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{0, -8, 3}, 0, {486, 22}, {0x00, 0xEF, 0x7E, 0xFF}}},
	{{{0, -14, 2}, 0, {486, 22}, {0x00, 0xD9, 0x79, 0xFF}}},
};

Gfx paceffect_PACBODY_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_PACBODY_mesh_layer_1_vtx_0 + 0, 37, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
	gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(12, 10, 11, 0, 12, 11, 13, 0),
	gsSP2Triangles(14, 12, 13, 0, 14, 13, 15, 0),
	gsSP2Triangles(16, 14, 15, 0, 16, 15, 17, 0),
	gsSP2Triangles(18, 16, 17, 0, 18, 19, 16, 0),
	gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
	gsSP2Triangles(21, 22, 20, 0, 21, 23, 22, 0),
	gsSP2Triangles(23, 24, 22, 0, 23, 25, 24, 0),
	gsSP2Triangles(25, 26, 24, 0, 25, 27, 26, 0),
	gsSP2Triangles(27, 28, 26, 0, 27, 29, 28, 0),
	gsSP2Triangles(29, 30, 28, 0, 29, 31, 30, 0),
	gsSP2Triangles(31, 2, 30, 0, 31, 0, 2, 0),
	gsSP2Triangles(30, 2, 3, 0, 30, 3, 32, 0),
	gsSP2Triangles(32, 3, 4, 0, 32, 4, 6, 0),
	gsSP2Triangles(33, 32, 6, 0, 33, 6, 8, 0),
	gsSP2Triangles(34, 33, 8, 0, 34, 8, 10, 0),
	gsSP2Triangles(35, 34, 10, 0, 35, 10, 12, 0),
	gsSP2Triangles(36, 35, 12, 0, 36, 12, 14, 0),
	gsSP2Triangles(19, 36, 14, 0, 19, 14, 16, 0),
	gsSP2Triangles(20, 36, 19, 0, 20, 22, 36, 0),
	gsSP2Triangles(22, 35, 36, 0, 22, 24, 35, 0),
	gsSP2Triangles(24, 34, 35, 0, 24, 26, 34, 0),
	gsSP2Triangles(26, 33, 34, 0, 26, 28, 33, 0),
	gsSP2Triangles(28, 32, 33, 0, 28, 30, 32, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Thigh_Color_mesh_layer_1_vtx_0[12] = {
	{{{0, -16, 0}, 0, {1008, 496}, {0xB4, 0x9A, 0x00, 0xFF}}},
	{{{0, -8, -11}, 0, {803, 496}, {0xB4, 0xE0, 0x9F, 0xFF}}},
	{{{20, -8, -11}, 0, {803, -16}, {0x00, 0xD9, 0x87, 0xFF}}},
	{{{20, 5, -7}, 0, {598, -16}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{0, 5, -7}, 0, {598, 496}, {0xB4, 0x53, 0xC4, 0xFF}}},
	{{{0, -8, 11}, 0, {189, 496}, {0xB4, 0xE0, 0x61, 0xFF}}},
	{{{0, -16, 0}, 0, {-16, 496}, {0xB4, 0x9A, 0x00, 0xFF}}},
	{{{20, -16, 0}, 0, {-16, -16}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{20, -8, 11}, 0, {189, -16}, {0x00, 0xD9, 0x79, 0xFF}}},
	{{{0, 5, 7}, 0, {394, 496}, {0xB4, 0x53, 0x3C, 0xFF}}},
	{{{20, 5, 7}, 0, {394, -16}, {0x00, 0x67, 0x4B, 0xFF}}},
	{{{20, -16, 0}, 0, {1008, -16}, {0x00, 0x81, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Thigh_Color_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Thigh_Color_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 5, 4, 1, 0),
	gsSP2Triangles(1, 6, 5, 0, 5, 6, 7, 0),
	gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
	gsSP2Triangles(9, 8, 10, 0, 4, 9, 10, 0),
	gsSP2Triangles(4, 10, 3, 0, 5, 9, 4, 0),
	gsSP1Triangle(0, 2, 11, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Leg_skinned_mesh_layer_1_vtx_0[6] = {
	{{{20, 5, 7}, 0, {394, -16}, {0x00, 0x67, 0x4B, 0xFF}}},
	{{{20, -8, 11}, 0, {189, -16}, {0x00, 0xD9, 0x79, 0xFF}}},
	{{{20, 5, -7}, 0, {598, -16}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{20, -8, -11}, 0, {803, -16}, {0x00, 0xD9, 0x87, 0xFF}}},
	{{{20, -16, 0}, 0, {1008, -16}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{20, -16, 0}, 0, {-16, -16}, {0x00, 0x81, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Leg_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Leg_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Leg_mesh_layer_1_vtx_0[6] = {
	{{{5, -16, 0}, 0, {1008, -16}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{5, -8, -11}, 0, {803, -16}, {0x00, 0xD9, 0x87, 0xFF}}},
	{{{5, 5, -7}, 0, {598, -16}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{5, 5, 7}, 0, {394, -16}, {0x00, 0x67, 0x4B, 0xFF}}},
	{{{5, -8, 11}, 0, {189, -16}, {0x00, 0xD9, 0x79, 0xFF}}},
	{{{5, -16, 0}, 0, {-16, -16}, {0x00, 0x81, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Leg_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Leg_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(3, 6, 4, 0, 3, 7, 6, 0),
	gsSP2Triangles(2, 7, 3, 0, 2, 8, 7, 0),
	gsSP2Triangles(0, 8, 2, 0, 0, 9, 8, 0),
	gsSP2Triangles(1, 9, 0, 0, 1, 10, 9, 0),
	gsSP2Triangles(5, 10, 1, 0, 5, 11, 10, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Leg_mesh_layer_1_vtx_1[24] = {
	{{{5, -8, -11}, 0, {803, -16}, {0x83, 0xF9, 0xEC, 0xFF}}},
	{{{7, -26, 0}, 0, {1008, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{5, -16, 0}, 0, {1008, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{7, -11, -21}, 0, {803, -16}, {0x83, 0xF9, 0xEC, 0xFF}}},
	{{{5, 5, -7}, 0, {598, -16}, {0x83, 0x11, 0xF3, 0xFF}}},
	{{{7, 13, -13}, 0, {598, -16}, {0x83, 0x11, 0xF3, 0xFF}}},
	{{{5, 5, 7}, 0, {394, -16}, {0x83, 0x11, 0x0D, 0xFF}}},
	{{{7, 13, 13}, 0, {394, -16}, {0x83, 0x11, 0x0D, 0xFF}}},
	{{{5, -8, 11}, 0, {189, -16}, {0x83, 0xF9, 0x14, 0xFF}}},
	{{{7, -11, 21}, 0, {189, -16}, {0x83, 0xF9, 0x14, 0xFF}}},
	{{{5, -16, 0}, 0, {-16, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{7, -26, 0}, 0, {-16, -16}, {0x83, 0xEB, 0x00, 0xFF}}},
	{{{7, -11, -21}, 0, {803, -16}, {0x14, 0xD9, 0x89, 0xFF}}},
	{{{20, -24, 0}, 0, {1008, -16}, {0x14, 0x83, 0x00, 0xFF}}},
	{{{7, -26, 0}, 0, {1008, -16}, {0x14, 0x83, 0x00, 0xFF}}},
	{{{20, -10, -19}, 0, {803, -16}, {0xF3, 0xBC, 0x95, 0xFF}}},
	{{{7, 13, -13}, 0, {598, -16}, {0x14, 0x65, 0xB6, 0xFF}}},
	{{{20, 12, -12}, 0, {598, -16}, {0xC7, 0xF7, 0x8F, 0xFF}}},
	{{{7, 13, 13}, 0, {394, -16}, {0x14, 0x65, 0x4A, 0xFF}}},
	{{{20, 12, 12}, 0, {394, -16}, {0xC7, 0xF8, 0x71, 0xFF}}},
	{{{7, -11, 21}, 0, {189, -16}, {0x14, 0xD9, 0x77, 0xFF}}},
	{{{20, -10, 19}, 0, {189, -16}, {0xF3, 0xBC, 0x6B, 0xFF}}},
	{{{7, -26, 0}, 0, {-16, -16}, {0x14, 0x83, 0x00, 0xFF}}},
	{{{20, -24, 0}, 0, {-16, -16}, {0x14, 0x83, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Leg_mesh_layer_1_tri_1[] = {
	gsSPVertex(paceffect_Right_Leg_mesh_layer_1_vtx_1 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
	gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
	gsSP2Triangles(16, 15, 12, 0, 16, 17, 15, 0),
	gsSP2Triangles(18, 17, 16, 0, 18, 19, 17, 0),
	gsSP2Triangles(20, 19, 18, 0, 20, 21, 19, 0),
	gsSP2Triangles(22, 21, 20, 0, 22, 23, 21, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Shoe_DL_skinned_mesh_layer_1_vtx_0[6] = {
	{{{20, -10, -19}, 0, {803, -16}, {0xF3, 0xBC, 0x95, 0xFF}}},
	{{{20, 12, 12}, 0, {394, -16}, {0xC7, 0xF8, 0x71, 0xFF}}},
	{{{20, 12, -12}, 0, {598, -16}, {0xC7, 0xF7, 0x8F, 0xFF}}},
	{{{20, -10, 19}, 0, {189, -16}, {0xF3, 0xBC, 0x6B, 0xFF}}},
	{{{20, -24, 0}, 0, {1008, -16}, {0x07, 0x81, 0x00, 0xFF}}},
	{{{20, -24, 0}, 0, {-16, -16}, {0x07, 0x81, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Shoe_DL_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Shoe_DL_skinned_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Shoe_DL_mesh_layer_1_vtx_0[6] = {
	{{{47, -21, 0}, 0, {1008, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
	{{{11, -5, -26}, 0, {803, -16}, {0xE4, 0xC0, 0x96, 0xFF}}},
	{{{-17, 14, -16}, 0, {598, -16}, {0x9D, 0xDA, 0xBA, 0xFF}}},
	{{{-17, 14, 16}, 0, {394, -16}, {0x9D, 0xDA, 0x46, 0xFF}}},
	{{{11, -5, 26}, 0, {189, -16}, {0xE4, 0xC0, 0x6A, 0xFF}}},
	{{{47, -21, 0}, 0, {-16, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Shoe_DL_mesh_layer_1_tri_0[] = {
	gsSPVertex(paceffect_Right_Shoe_DL_mesh_layer_1_vtx_0 + 0, 6, 6),
	gsSP2Triangles(0, 6, 4, 0, 7, 6, 0, 0),
	gsSP2Triangles(8, 7, 0, 0, 2, 8, 0, 0),
	gsSP2Triangles(1, 8, 2, 0, 1, 9, 8, 0),
	gsSP2Triangles(10, 9, 1, 0, 3, 10, 1, 0),
	gsSP2Triangles(3, 11, 10, 0, 5, 11, 3, 0),
	gsSPEndDisplayList(),
};

Vtx paceffect_Right_Shoe_DL_mesh_layer_1_vtx_1[26] = {
	{{{-13, 41, 19}, 0, {394, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{21, 28, 31}, 0, {394, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{21, 28, -31}, 0, {803, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{-13, 41, -19}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{67, -16, 0}, 0, {-16, -16}, {0x59, 0xA5, 0x00, 0xFF}}},
	{{{77, 7, 0}, 0, {-16, -16}, {0x74, 0xCD, 0x00, 0xFF}}},
	{{{56, 15, 31}, 0, {189, -16}, {0x2C, 0xDE, 0x72, 0xFF}}},
	{{{49, -10, 26}, 0, {189, -16}, {0x21, 0xB4, 0x60, 0xFF}}},
	{{{11, -5, 26}, 0, {189, -16}, {0xE4, 0xC0, 0x6A, 0xFF}}},
	{{{21, 28, 31}, 0, {189, -16}, {0xE6, 0xF2, 0x7C, 0xFF}}},
	{{{-13, 41, 19}, 0, {394, -16}, {0x98, 0x08, 0x48, 0xFF}}},
	{{{-17, 14, 16}, 0, {394, -16}, {0x9D, 0xDA, 0x46, 0xFF}}},
	{{{-13, 41, -19}, 0, {598, -16}, {0x98, 0x08, 0xB8, 0xFF}}},
	{{{-17, 14, -16}, 0, {598, -16}, {0x9D, 0xDA, 0xBA, 0xFF}}},
	{{{21, 28, -31}, 0, {803, -16}, {0xE6, 0xF2, 0x84, 0xFF}}},
	{{{11, -5, -26}, 0, {803, -16}, {0xE4, 0xC0, 0x96, 0xFF}}},
	{{{49, -10, -26}, 0, {803, -16}, {0x21, 0xB4, 0xA0, 0xFF}}},
	{{{56, 15, -31}, 0, {803, -16}, {0x2C, 0xDE, 0x8E, 0xFF}}},
	{{{77, 7, 0}, 0, {1008, -16}, {0x74, 0xCD, 0x00, 0xFF}}},
	{{{67, -16, 0}, 0, {1008, -16}, {0x59, 0xA5, 0x00, 0xFF}}},
	{{{47, -21, 0}, 0, {1008, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
	{{{47, -21, 0}, 0, {-16, -16}, {0x0C, 0x82, 0x00, 0xFF}}},
	{{{56, 15, -31}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{56, 15, 31}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{77, 7, 0}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
	{{{21, 28, 31}, 0, {598, -16}, {0x2C, 0x77, 0x00, 0xFF}}},
};

Gfx paceffect_Right_Shoe_DL_mesh_layer_1_tri_1[] = {
	gsSPVertex(paceffect_Right_Shoe_DL_mesh_layer_1_vtx_1 + 0, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
	gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
	gsSP2Triangles(14, 16, 15, 0, 14, 17, 16, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 16, 19, 0, 15, 16, 20, 0),
	gsSP2Triangles(21, 7, 8, 0, 4, 7, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 2, 23, 22, 0),
	gsSP1Triangle(2, 25, 23, 0),
	gsSPEndDisplayList(),
};


Gfx mat_paceffect_pacmanyellow[] = {
	gsSPLight(&paceffect_pacmanyellow_lights.l, 1),
    gsSPLight(&paceffect_pacmanyellow_lights.a, 2),
    gsSPCopyLightEXT(2, 15),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_paceffect_pacmanyellow[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Arm_Color_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Forearm_skinned_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Left_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Forearm_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Left_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Hand_DL_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Arm_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Arm_Color_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Arm_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Forearm_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Forearm_skinned_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Forearm_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Forearm_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Right_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Forearm_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Forearm_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Right_Forearm_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Hand_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Hand_DL_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Hand_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Thigh_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Thigh_Color_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Leg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Leg_skinned_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Leg_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Left_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Leg_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Left_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Shoe_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Shoe_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Shoe_skinned_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Shoe_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Shoe_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Shoe_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Left_Shoe_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Left_Shoe_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Left_Shoe_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Left_Shoe_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_PACBODY_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_PACBODY_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_PACBODY_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_PACBODY_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Thigh_Color_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Thigh_Color_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Thigh_Color_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Leg_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Leg_skinned_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Leg_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Leg_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Right_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Leg_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Leg_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Right_Leg_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Shoe_DL_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Shoe_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Shoe_DL_skinned_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Shoe_DL_skinned_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Shoe_DL_mesh_layer_1[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Shoe_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Right_Shoe_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_Right_Shoe_DL_mesh_layer_1_mat_override_pacmanyellow_0[] = {
	gsSPDisplayList(mat_paceffect_pacmanyellow),
	gsSPDisplayList(paceffect_Right_Shoe_DL_mesh_layer_1_tri_0),
	gsSPDisplayList(paceffect_Right_Shoe_DL_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_paceffect_pacmanyellow),
	gsSPEndDisplayList(),
};

Gfx paceffect_material_revert_render_settings[] = {
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

