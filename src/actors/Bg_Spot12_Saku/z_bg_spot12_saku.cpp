extern "C" {
#include "z_bg_spot12_saku.hpp"

#define FLAGS 0x80400000

void BgSpot12Saku_Init(Actor* actor, GameState* state);
void BgSpot12Saku_Destroy(Actor* actor, GameState* state);
void BgSpot12Saku_Update(Actor* actor, GameState* state);
void BgSpot12Saku_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Spot12_Saku_InitVars = {
    ACTOR_BG_SPOT12_SAKU,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT12_OBJ,
    sizeof(BgSpot12Saku),
    (ActorFunc)BgSpot12Saku_Init,
    (ActorFunc)BgSpot12Saku_Destroy,
    (ActorFunc)BgSpot12Saku_Update,
    (ActorFunc)BgSpot12Saku_Draw,
};
*/

#pragma GLOBAL_ASM("binary/BgSpot12Saku_Init.o")

#pragma GLOBAL_ASM("binary/BgSpot12Saku_Destroy.o")

#pragma GLOBAL_ASM("binary/BgSpot12Saku_Update.o")

#pragma GLOBAL_ASM("binary/BgSpot12Saku_Draw.o")
}
