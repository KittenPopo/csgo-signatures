[CLIENT.DLL] {
	(OFFSET) AnimationOverlays = *(this + ["8B 87 ? ? ? ? 83 79 04 00 8B" + 2]); // Animation layers from player
	(OFFSET) AnimationState = this + ["89 87 ? ? ? ? 80 BF ? ? ? ? ? 74 07" + 2]; // Animation state from player
	(OFFSET) LastBoneSetupTime = this + ["C7 86 ? ? ? ? ? ? ? ? 89 86 ? ? ? ? 8B 06 FF" + 2]; // m_flLastBoneSetupTime from player
	(OFFSET) ModelPtr = this + ["8B B6 ? ? ? ? 85 F6 74 48" + 2]; // Model pointer from player
	(OFFSET) MostRecentModelBoneCounter = this + ["8B 86 ? ? ? ? 3B 05 ? ? ? ? 74" + 2]; // m_iMostRecentModelBoneCounter from player
	(OFFSET) SpawnTime = this + ["89 87 ? ? ? ? 89 B7 ? ? ? ? 89" + 2]; // Spawn time from player
	(OFFSET) achedBoneData = *(this + ["FF B7 ? ? ? ? 52" + 2]) + 4; // m_CachedBoneData from player
	(PTR) ModelBoneCounter = *(["80 3D ? ? ? ? ? 74 16 A1 ? ? ? ? 48 C7 81" + 10]); // g_iModelBoneCounter
}
