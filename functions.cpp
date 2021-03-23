// SIGNATURES FOR CLIENT.DLL

CreateAnimationState() -> "55 8B EC 56 8B F1 B9 ? ? ? ? C7 46"; // client.dll

UpdateAnimationState() -> "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3 0F 11 54 24"; // client.dll

SetAbsAngles() -> "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8"; // client.dll

SetAbsOrigin() -> "55 8B EC 83 E4 F8 51 53 56 57 8B F1"; // client.dll

InvalidatePhysicsRecursive() -> "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3 56 83 E0 04"; // client.dll

DoProceduralFootPlant() -> "55 8B EC 83 E4 F8 81 EC FC 00 00 00 53 56 8B F1 57"; // client.dll

ShouldSkipAnimationFrame() -> "57 8B F9 8B 07 8B 80 ? ? ? ? FF D0 84 C0 75 02"; // client.dll

UpdateClientsideAnimation() -> "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36"; // client.dll

SetupBones() -> "55 8B EC 83 E4 F0 B8 D8"; // client.dll

ClipRayToHitbox() -> "55 8B EC 83 E4 F8 F3 0F 10 42"; // client.dll

UpdateTargets() -> "55 8B EC 83 E4 F0 81 EC ? ? ? ? 33 D2"; // client.dll

SolveDependencies() -> "55 8B EC 83 E4 F0 81 EC ? ? ? ? 8B 81"; // client.dll

AccumulatePose() -> "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ?"; // client.dll

AddDependencies() -> "55 8B EC 81 EC BC 00 00 00 53 56 57"; // client.dll

AttachmentHelper() -> "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4"; // client.dll

LineGoesThroughSmoke() -> "55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F 57 C0"; // client.dll

FindHudElement() -> "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; // client.dll

ClearNotices() -> "55 8B EC 83 EC 0C 53 56 8B 71 58"; // client.dll

PhysicsRunThink() -> "55 8B EC 83 EC 10 53 56 57 8B F9 8B 87 ? ? ? ? C1 E8 16"; // client.dll

CalcPlayerView() -> "84 C0 75 08 57 8B CE E8 ? ? ? ? 8B 06"; // client.dll

GetShotgunSpread() -> "55 8B EC 83 EC 10 56 8B 75 08 8D"; // client.dll

RevealRanks() -> "55 8B EC 8B 0D ? ? ? ? 68"; // client.dll

CalcAbsoluteVelocity() -> "55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 F7"; // client.dll

CalcAbsolutePosition() -> "55 8B EC 83 E4 F0 83 EC 68 80 3D"; // client.dll

SetDormant() -> "55 8B EC 53 8B 5D 08 56 8B F1 88 9E ? ? 00 00"; // client.dll

LockStudioHdr() -> "55 8B EC 51 53 8B D9 56 57 8D B3"; // client.dll

IsCarryingHostage() -> "55 8B EC 8B 09 83 F9 FF"; // client.dll

FindElement() -> "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; // client.dll

OnLand() -> "55 8B EC 83 E4 F8 81 EC 28 02 00 00 56 8B F1 F3 0F 11 4C 24 08"; // client.dll

HasC4() -> "56 8B F1 85 F6 74 31 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 ?"; // client.dll

SetupMovement() -> "8B EC 83 E4 F8 83 EC 0C 53 56 57 8B 7D 08 8B F1 F3" - 1;  // client.dll

SetupLean() -> "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 F3 0F 10 48 10 56 57 8B F9"; // client.dll

ClearDeathNotices() -> "55 8B EC 83 EC 0C 53 56 8B 71 58"; // client.dll

GetWeaponMoveAnimation() -> "53 56 57 8B F9 33 F6 8B 4F 60 8B 01 FF 90"; // client.dll

GetSequenceLinearMotion() -> "55 8B EC 83 EC 0C 56 8B F1 57 8B FA 85 F6 75 14 68"; // client.dll

IsInIronsight() -> "53 56 8B F1 57 8B 4E 3C 85 C9 0F 84 ? ? ? ? 8B 81"; // client.dll

WriteUserCmd() -> "55 8B EC 83 E4 F8 51 53 56 8B D9"; // client.dll

IsEntityBreakable() -> "55 8B EC 51 56 8B F1 85 F6 74 ? 83 BE"; // client.dll

LineGoesThroughSmoke() -> "55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F"; // client.dll

// SIGNATURES FOR ENGINE.DLL

ChangeClantag() -> "53 56 57 8B DA 8B F9 FF 15"; // engine.dll
