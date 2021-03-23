AccumulatePose() -> "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ?"; // client.dll
AddEconItem() -> "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 14 53 56 57 8B F9 8B 08"; // client.dll
AddDependencies() -> "55 8B EC 81 EC BC 00 00 00 53 56 57"; // client.dll
AttachmentHelper() -> "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4"; // client.dll
BuildTransformations() -> "83 E4 F0 81 EC ? ? ? ? 56 57 8B F9 8B 0D ? ? ? ? 89" - 1; // client.dll
CAM_Think() -> "55 8B EC 83 E4 F8 81 EC ? ? ? ? 56 8B F1 8B 0D ? ? ? ? 57 85 C9"; // client.dll
CAchievementMgr::SaveGlobalState() -> "55 8B EC 51 53 56 8B F1 8B 0D ? ? ? ? 8B 81"; // client.dll
CBaseEntity::EmitSound() -> "55 8B EC 83 EC 4C 53 8B D9 8B "; // client.dll
CCSGOPlayerAnimState::Update() -> "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3"; // client.dll
CClientShadowMgr::InitDepthTextureShadow() -> "55 8B EC 83 EC 54 53 8B D9 8B 0D ? ? ? ? 89"; // client.dll
CEffectsList::DrawEffects() -> "55 8B EC 83 EC 08 A1 ? ? ? ? 89 4D FC 8B"; // client.dll
CL_Move() -> "55 8B EC 81 EC ? ? ? ? 53 56 57 8B 3D ? ? ? ? 8A"; // engine.dll
CL_SendMove() -> "55 8B EC A1 ? ? ? ? 81 EC ? ? ? ? B9 ? ? ? ? 53 8B 98"; //engine.dll
CModelRenderSystem::DrawBrushModels() -> "55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B 7D 0C 8B D9"; // client.dll
C_BaseAnimating::DrawModel() -> "55 8B EC 83 EC 14 53 56 8B F1 8B 0D ? ? ? ? 57 89"; // client.dll
C_BaseCombatWeapon::DrawModel() -> "55 8B EC 51 56 8B F1 8B 0D ? ? ? ? 57 8B B9"; // client.dll
C_BaseEntity::DrawBrushModel() -> "68 ? ? ? ? 6A 00 68 ? ? ? ? FF 15 ? ? ? ? 8B 45" - 0x1C; // client.dll
C_BaseEntity::InterpolateServerEntities() -> "55 8B EC 83 EC 1C 8B 0D ? ? ? ? 53 "; // client.dll
C_GameInstructor::Update() -> "55 8B EC 83 EC 10 53 8B D9 8B 0D ? ? ? ? 8B"; // client.dll
CacheSequences() -> "55 8B EC 83 E4 F8 83 EC 34 53 56 8B F1 57 8B"; // client.dll
CalcAbsolutePosition() -> "55 8B EC 83 E4 F0 83 EC 68 80 3D"; // client.dll
CalcAbsoluteVelocity() -> "55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 F7"; // client.dll
CalcPlayerView() -> "84 C0 75 08 57 8B CE E8 ? ? ? ? 8B 06"; // client.dll
CalculateView() -> "55 8B EC 83 EC 14 53 56 57 FF 75 18"; // client.dll
ChangeClantag() -> "53 56 57 8B DA 8B F9 FF 15"; // engine.dll
ClearDeathNotices() -> "55 8B EC 83 EC 0C 53 56 8B 71 58"; // client.dll
ClearNotices() -> "55 8B EC 83 EC 0C 53 56 8B 71 58"; // client.dll
ClipRayToHitbox() -> "55 8B EC 83 E4 F8 F3 0F 10 42"; // client.dll
CreateAnimationState() -> "55 8B EC 56 8B F1 B9 ? ? ? ? C7 46"; // client.dll
CreateMove() -> "55 8B EC 8B 0D ? ? ? ? 85 C9 75 06 B0"; // client.dll
DoProceduralFootPlant() -> "55 8B EC 83 E4 F8 81 EC FC 00 00 00 53 56 8B F1 57"; // client.dll
FindElement() -> "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; // client.dll
FindHudElement() -> "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; // client.dll
FireEventIntern() -> "55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 89 5C 24 0C"; // engine.dll
FrameStageNotify() -> "55 8B EC 8B 0D ? ? ? ? 8B 01 8B 80 ? ? ? ? FF D0 A2"; // client.dll
GetEyePosition() -> "55 8B EC 56 8B 75 08 57 8B F9 56 8B 07 FF 90"; // client.dll
GetSequenceActivity() -> "55 8B EC 83 7D 08 FF 56 8B F1"
GetSequenceLinearMotion() -> "55 8B EC 83 EC 0C 56 8B F1 57 8B FA 85 F6 75 14 68"; // client.dll
GetShotgunSpread() -> "55 8B EC 83 EC 10 56 8B 75 08 8D"; // client.dll
GetToolRecordingState() -> "55 8B EC 83 EC 08 53 56 8B F1 8B 0D ? ? ? ? 57 85"; // client.dll
GetViewmodelFOV() -> "55 8B EC 8B 0D ? ? ? ? 83 EC 08 57"; // client.dll
GetWeaponMoveAnimation() -> "53 56 57 8B F9 33 F6 8B 4F 60 8B 01 FF 90"; // client.dll
GetWeaponPrefix() -> "53 56 57 8B F9 33 F6 8B 4F 60"; // client.dll
GloweEffectSpectator() -> "55 8B EC 83 EC 14 53 8B 5D 0C 56 57 85 DB 74"; // client.dll
HasC4() -> "56 8B F1 85 F6 74 31 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 ?"; // client.dll
InvalidatePhysicsRecursive() -> "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3 56 83 E0 04"; // client.dll
IsCarryingHostage() -> "55 8B EC 8B 09 83 F9 FF"; // client.dll
IsEntityBreakable() -> "55 8B EC 51 56 8B F1 85 F6 74 ? 83 BE"; // client.dll
IsInIronsight() -> "53 56 8B F1 57 8B 4E 3C 85 C9 0F 84 ? ? ? ? 8B 81"; // client.dll
LineGoesThroughSmoke() -> "55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F"; // client.dll
LockStudioHdr() -> "55 8B EC 51 53 8B D9 56 57 8D B3"; // client.dll
LookupSequence() -> "85 C0 74 07 8B CE E8 ? ? ? ? 8B B6 ? ? ? ? 85 F6 74" - 0x18; // client.dll
ModifyEyePosition() -> "55 8B EC 83 E4 F8 83 EC 5C 53 8B D9 56 57 83"; // client.dll
OnLand() -> "55 8B EC 83 E4 F8 81 EC 28 02 00 00 56 8B F1 F3 0F 11 4C 24 08"; // client.dll
PhysicsRunThink() -> "55 8B EC 83 EC 10 53 56 57 8B F9 8B 87 ? ? ? ? C1 E8 16"; // client.dll
PutString() -> "55 8B EC 56 57 8B F9 8A"; // client.dll
RecordBones() -> "C3 55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 56 8B F1 8B 0D" + 2; // client.dll
RevealRanks() -> "55 8B EC 8B 0D ? ? ? ? 68"; // client.dll
SetAbsAngles() -> "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8"; // client.dll
SetAbsOrigin() -> "55 8B EC 83 E4 F8 51 53 56 57 8B F1"; // client.dll
SetDormant() -> "55 8B EC 53 8B 5D 08 56 8B F1 88 9E ? ? 00 00"; // client.dll
SetUpAimMatrix() -> "55 8B EC 81 EC ? ? ? ? 53 56 57 8B 3D"; // client.dll
SetUpLean() -> "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 F3"; // client.dll
SetUpMovement() -> "8B EC 83 E4 F8 81 EC ? ? ? ? 56 57 8B 3D ? ? ? ? 8B " - 1; // client.dll
SetUpVelocity() -> "55 8B EC 83 E4 F8 83 EC 30 56 57 8B 3D"; // client.dll
SetUpWeaponAction() -> "55 8B EC 51 53 56 57 8B F9 8B 77 60"; // client.dll
SetUpWholeBodyAction() -> "55 8B EC 83 EC 08 56 57 8B F9 8B 77"; // client.dll
SetupBones() -> "55 8B EC 83 E4 F0 B8 D8"; // client.dll
SetupMovement() -> "8B EC 83 E4 F8 83 EC 0C 53 56 57 8B 7D 08 8B F1 F3" - 1;  // client.dll
ShouldInterpolate() -> "A1 ? ? ? ? 56 57 8B F9 8B 30 8D 4F 08"; // client.dll
ShouldSkipAnimationFrame() -> "57 8B F9 8B 07 8B 80 ? ? ? ? FF D0 84 C0 75 02"; // client.dll
SolveDependencies() -> "55 8B EC 83 E4 F0 81 EC ? ? ? ? 8B 81"; // client.dll
StandardBlendingRules() -> "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 8B 75 08 57 8B F9 85 F6"; // client.dll
ThreadedBoneSetup() -> "55 8B EC 8B 0D ? ? ? ? 83 EC 24"; // client.dll
UpdateClientsideAnimation() -> "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36"; // client.dll
UpdateTargets() -> "55 8B EC 83 E4 F0 81 EC ? ? ? ? 33 D2"; // client.dll
WriteUserCmd() -> "55 8B EC 83 E4 F8 51 53 56 8B D9"; // client.dll
