const GeoLayout pactramp_Trampoline_Switch_State_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, pactramp_Trampoline_Body_mesh_layer_1_mat_override_pactramp2_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout pactramp_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(0, bhv_trampoline_switch),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, pactramp_Trampoline_Body_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, pactramp_Trampoline_Switch_State_opt1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
