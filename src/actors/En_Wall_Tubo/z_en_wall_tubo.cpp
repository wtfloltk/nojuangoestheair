extern "C" {
#include "z_en_wall_tubo.hpp"

#define FLAGS 0x80000010

void EnWallTubo_Init(Actor* actor, GameState* state);
void EnWallTubo_Destroy(Actor* actor, GameState* state);
void EnWallTubo_Update(Actor* actor, GameState* state);

/*
ActorInit En_Wall_Tubo_InitVars = {
    ACTOR_EN_WALL_TUBO,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnWallTubo),
    (ActorFunc)EnWallTubo_Init,
    (ActorFunc)EnWallTubo_Destroy,
    (ActorFunc)EnWallTubo_Update,
    (ActorFunc)NULL,
};
*/

#pragma GLOBAL_ASM("binary/EnWallTubo_Init.o")

#pragma GLOBAL_ASM("binary/EnWallTubo_Destroy.o")

#pragma GLOBAL_ASM("binary/EnWallTubo_Update.o")
}
