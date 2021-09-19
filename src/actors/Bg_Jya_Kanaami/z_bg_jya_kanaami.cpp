extern "C" {
#include "z_bg_jya_kanaami.hpp"

#define FLAGS 0x80400000

void BgJyaKanaami_Init(Actor* actor, GameState* state);
void BgJyaKanaami_Destroy(Actor* actor, GameState* state);
void BgJyaKanaami_Update(Actor* actor, GameState* state);
void BgJyaKanaami_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Jya_Kanaami_InitVars = {
    ACTOR_BG_JYA_KANAAMI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaKanaami),
    (ActorFunc)BgJyaKanaami_Init,
    (ActorFunc)BgJyaKanaami_Destroy,
    (ActorFunc)BgJyaKanaami_Update,
    (ActorFunc)BgJyaKanaami_Draw,
};
*/

#pragma GLOBAL_ASM("binary/BgJyaKanaami_Init.o")

#pragma GLOBAL_ASM("binary/BgJyaKanaami_Destroy.o")

#pragma GLOBAL_ASM("binary/BgJyaKanaami_Update.o")

#pragma GLOBAL_ASM("binary/BgJyaKanaami_Draw.o")
}
