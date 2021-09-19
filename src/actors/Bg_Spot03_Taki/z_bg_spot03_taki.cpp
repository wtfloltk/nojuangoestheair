extern "C" {
#include "z_bg_spot03_taki.hpp"

#define FLAGS 0x80400030

void BgSpot03Taki_Init(Actor* actor, GameState* state);
void BgSpot03Taki_Destroy(Actor* actor, GameState* state);
void BgSpot03Taki_Update(Actor* actor, GameState* state);
void BgSpot03Taki_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Spot03_Taki_InitVars = {
    ACTOR_BG_SPOT03_TAKI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT03_OBJECT,
    sizeof(BgSpot03Taki),
    (ActorFunc)BgSpot03Taki_Init,
    (ActorFunc)BgSpot03Taki_Destroy,
    (ActorFunc)BgSpot03Taki_Update,
    (ActorFunc)BgSpot03Taki_Draw,
};
*/

#pragma GLOBAL_ASM("binary/BgSpot03Taki_Init.o")

#pragma GLOBAL_ASM("binary/BgSpot03Taki_Destroy.o")

#pragma GLOBAL_ASM("binary/BgSpot03Taki_Update.o")

#pragma GLOBAL_ASM("binary/BgSpot03Taki_Draw.o")
}
