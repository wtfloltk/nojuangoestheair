extern "C" {
#include "z_bg_spot08_bakudankabe.hpp"

#define FLAGS 0x80400000

void BgSpot08Bakudankabe_Init(Actor* actor, GameState* state);
void BgSpot08Bakudankabe_Destroy(Actor* actor, GameState* state);
void BgSpot08Bakudankabe_Update(Actor* actor, GameState* state);
void BgSpot08Bakudankabe_Draw(Actor* actor, GameState* state);

/*
ActorInit Bg_Spot08_Bakudankabe_InitVars = {
    ACTOR_BG_SPOT08_BAKUDANKABE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT08_OBJ,
    sizeof(BgSpot08Bakudankabe),
    (ActorFunc)BgSpot08Bakudankabe_Init,
    (ActorFunc)BgSpot08Bakudankabe_Destroy,
    (ActorFunc)BgSpot08Bakudankabe_Update,
    (ActorFunc)BgSpot08Bakudankabe_Draw,
};
*/

#pragma GLOBAL_ASM("binary/BgSpot08Bakudankabe_Init.o")

#pragma GLOBAL_ASM("binary/BgSpot08Bakudankabe_Destroy.o")

#pragma GLOBAL_ASM("binary/BgSpot08Bakudankabe_Update.o")

#pragma GLOBAL_ASM("binary/BgSpot08Bakudankabe_Draw.o")
}
