#pragma once
#include "z3D.hpp"

Actor* Actor_Spawn(ActorContext* actorCtx, GlobalContext* globalCtx, s16 actorId, f32 posX, f32 posY, f32 posZ,
                   s16 rotX, s16 rotY, s16 rotZ, s16 params, s32 unk);
void Actor_Kill(Actor* actor);
void Actor_SetScale(Actor* actor, f32 scale);
ZARInfo* FUN_00372f38(Actor* actor, GlobalContext* globalCtx, SkeletonAnimationModel** skelAnimModel, s32 arg3, s32 arg4);
void FUN_00350f34(Actor* actor, SkeletonAnimationModel** skelAnimModel, s32 arg2);
void MTX34CopyAsm(nn_math_MTX34* dst, nn_math_MTX34* src);
void FUN_003721e0(SkeletonAnimationModel* skelAnimModel, nn_math_MTX34* modelMtx);
void FUN_00372170(SkeletonAnimationModel* skelAnimModel, s32 arg1);
void FUN_00370734(SkelAnime* skelAnime);
f32 Math_SinS(s16 angle);
f32 Math_CosS(s16 angle);
f32 Math_FAtan2F(f32 y, f32 x);
void Math_ApproachF(f32* pValue, f32 target, f32 fraction, f32 step);
Camera* Gameplay_GetCamera(GlobalContext* globalCtx, s16 camId);
void FUN_00367494(GlobalContext* globalCtx, CutsceneContext* csCtx);
s32 FUN_0036e980(GlobalContext* globalCtx, Actor* actor, u8 arg2);
s16 Gameplay_CreateSubCamera(GlobalContext* globalCtx);
s16 Gameplay_ChangeCameraStatus(GlobalContext* globalCtx, s16 camId, s16 status);
void Audio_PlaySoundGeneral(u32 sfxId, Vec3f* a1, u8 a2, f32* a3, f32* a4, f32* a5);
void FUN_0035af04(Player* player, s32 arg1);
void FUN_0036ec40(s32 arg0, s32 arg1, s32 arg2);
void TitleCard_InitBossName(GlobalContext* globalCtx, TitleCardContext* titleCtx, void* texture, s16 x, s16 y, s16 width, s16 height, f32 f);
void FUN_0036e9b8(GlobalContext* globalCtx, s16 camId, s16 arg2);
void FUN_00367374(GlobalContext* globalCtx, CutsceneContext* csCtx);
s32 Gameplay_CameraSetAtEye(GlobalContext* globalCtx, s16 camId, Vec3f* at, Vec3f* eye);
void Math_ApproachZeroF(f32* pValue, f32 fraction, f32 step);
f32 Rand_ZeroFloat(f32 f);
void FUN_0036f5d8(GlobalContext* globalCtx, s16 arg1, s16 arg2, s16 arg3);
void Actor_UpdateBgCheckInfo(GlobalContext* globalCtx, Actor* actor, f32 wallCheckHeight, f32 wallCheckRadius, f32 ceilingCheckHeight, s32 flags);
f32 Rand_CenteredFloat(f32 f);
void EffectSsKFire_Spawn(GlobalContext* globalCtx, Vec3f* pos, Vec3f* velocity, Vec3f* accel, s16 scaleMax, u8 type);
s32 FUN_0035b164(void);
s32 FUN_0035b0a0(void);
void FUN_0035af20(GlobalContext* globalCtx, s32 arg1, s16 arg2, s16 arg3, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5);
void Math_ApproachS(s16* pValue, s16 target, s16 scale, s16 step);
void FUN_00365860(Actor* actor);
void FUN_0036b96c(Actor* actor);
void FUN_003731e0(SkelAnime* skelAnime);
void FUN_0036788c(void* arg0);
void FUN_003542c4(void* arg0, s32 arg1, s32 arg2);
