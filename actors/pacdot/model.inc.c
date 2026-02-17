Lights1 pacdot_dotcolor_lights = gdSPDefLights1(
	0xFF, 0xB7, 0xAE,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Vtx pacdot_DOTDISPLAYLIST_mesh_layer_1_vtx_0[4] = {
	{{{12, -12, 0}, 0, {-708, -836}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-12, 12, 0}, 0, {-452, -1092}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{-12, -12, 0}, 0, {-708, -1092}, {0x00, 0x00, 0x7F, 0xFF}}},
	{{{12, 12, 0}, 0, {-452, -836}, {0x00, 0x00, 0x7F, 0xFF}}},
};

Gfx pacdot_DOTDISPLAYLIST_mesh_layer_1_tri_0[] = {
	gsSPVertex(pacdot_DOTDISPLAYLIST_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
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

