Lights1 pacdot_dotcolor_lights = gdSPDefLights1(
	0xFF, 0xB7, 0xAE,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Vtx pacdot_DOTDISPLAYLIST_mesh_layer_1_vtx_0[24] = {
	{{{-12, -12, 12}, 0, {-708, -68}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-12, 12, 12}, 0, {-452, -68}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-12, 12, -12}, 0, {-452, -324}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{-12, -12, -12}, 0, {-708, -324}, {0x81, 0x00, 0x00, 0xFF}}},
	{{{12, -12, 12}, 0, {-708, -836}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-12, 12, 12}, 0, {-452, -1092}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-12, -12, 12}, 0, {-708, -1092}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{12, 12, 12}, 0, {-452, -836}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-12, -12, -12}, 0, {-964, -580}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{12, -12, 12}, 0, {-708, -836}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{-12, -12, 12}, 0, {-964, -836}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{12, -12, -12}, 0, {-708, -580}, {0x00, 0x81, 0x00, 0xFF}}},
	{{{12, 12, -12}, 0, {-452, -580}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-12, 12, -12}, 0, {-196, -580}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-12, 12, 12}, 0, {-196, -836}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{12, 12, 12}, 0, {-452, -836}, {0x00, 0x7F, 0x00, 0xFF}}},
	{{{-12, -12, -12}, 0, {-708, -324}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{-12, 12, -12}, 0, {-452, -324}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{12, 12, -12}, 0, {-452, -580}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{12, -12, -12}, 0, {-708, -580}, {0x00, 0x00, 0x81, 0xFF}}},
	{{{12, -12, -12}, 0, {-708, -580}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{12, 12, 12}, 0, {-452, -836}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{12, -12, 12}, 0, {-708, -836}, {0x7F, 0x00, 0x00, 0xFF}}},
	{{{12, 12, -12}, 0, {-452, -580}, {0x7F, 0x00, 0x00, 0xFF}}},
};

Gfx pacdot_DOTDISPLAYLIST_mesh_layer_1_tri_0[] = {
	gsSPVertex(pacdot_DOTDISPLAYLIST_mesh_layer_1_vtx_0 + 0, 24, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSPEndDisplayList(),
};


Gfx mat_pacdot_dotcolor[] = {
	gsSPSetLights1(pacdot_dotcolor_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(960, 960, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pacdot_dotcolor[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx pacdot_DOTDISPLAYLIST_mesh_layer_1[] = {
	gsSPDisplayList(mat_pacdot_dotcolor),
	gsSPDisplayList(pacdot_DOTDISPLAYLIST_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_pacdot_dotcolor),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

