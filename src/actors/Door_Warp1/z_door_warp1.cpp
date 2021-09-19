extern "C" {
#include "z_door_warp1.hpp"

#define FLAGS 0x00000030

void DoorWarp1_Init(Actor* actor, GameState* state);
void DoorWarp1_Destroy(Actor* actor, GameState* state);
void DoorWarp1_Update(Actor* actor, GameState* state);
void DoorWarp1_Draw(Actor* actor, GameState* state);

/*
ActorInit Door_Warp1_InitVars = {
    ACTOR_DOOR_WARP1,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_WARP1,
    sizeof(DoorWarp1),
    (ActorFunc)DoorWarp1_Init,
    (ActorFunc)DoorWarp1_Destroy,
    (ActorFunc)DoorWarp1_Update,
    (ActorFunc)DoorWarp1_Draw,
};
*/

#pragma GLOBAL_ASM("binary/DoorWarp1_Init.o")

#pragma GLOBAL_ASM("binary/DoorWarp1_Destroy.o")

#pragma GLOBAL_ASM("binary/DoorWarp1_Update.o")

#pragma GLOBAL_ASM("binary/DoorWarp1_Draw.o")
}
