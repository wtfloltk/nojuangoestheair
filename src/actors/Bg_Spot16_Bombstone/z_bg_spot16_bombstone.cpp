extern "C" {
#include "z_bg_spot16_bombstone.hpp"

#define FLAGS 0x80400010

void BgSpot16Bombstone_Init(Actor* actor, GameState* state);
void BgSpot16Bombstone_Destroy(Actor* actor, GameState* state);
void BgSpot16Bombstone_Update(Actor* actor, GameState* state);
void BgSpot16Bombstone_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Spot16_Bombstone_InitVars = {
    ACTOR_BG_SPOT16_BOMBSTONE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_SPOT16_OBJ,
    sizeof(BgSpot16Bombstone),
    (ActorFunc)BgSpot16Bombstone_Init,
    (ActorFunc)BgSpot16Bombstone_Destroy,
    (ActorFunc)BgSpot16Bombstone_Update,
    (ActorFunc)BgSpot16Bombstone_Draw,
};
*/

#pragma GLOBAL_ASM("binary/BgSpot16Bombstone_Init.o")

#pragma GLOBAL_ASM("binary/BgSpot16Bombstone_Destroy.o")

#pragma GLOBAL_ASM("binary/BgSpot16Bombstone_Update.o")

#pragma GLOBAL_ASM("binary/BgSpot16Bombstone_Draw.o")
}
