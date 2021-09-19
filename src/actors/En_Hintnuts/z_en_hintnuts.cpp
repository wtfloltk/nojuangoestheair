extern "C" {
#include "z_en_hintnuts.hpp"

#define FLAGS 0x00000005

void EnHintnuts_Init(Actor* actor, GameState* state);
void EnHintnuts_Destroy(Actor* actor, GameState* state);
void EnHintnuts_Update(Actor* actor, GameState* state);
void EnHintnuts_Draw(Actor* actor, GameState* state);

/*
ActorInit En_Hintnuts_InitVars = {
    ACTOR_EN_HINTNUTS,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_HINTNUTS,
    sizeof(EnHintnuts),
    (ActorFunc)EnHintnuts_Init,
    (ActorFunc)EnHintnuts_Destroy,
    (ActorFunc)EnHintnuts_Update,
    (ActorFunc)EnHintnuts_Draw,
};
*/

#pragma GLOBAL_ASM("binary/EnHintnuts_Init.o")

#pragma GLOBAL_ASM("binary/EnHintnuts_Destroy.o")

#pragma GLOBAL_ASM("binary/EnHintnuts_Update.o")

#pragma GLOBAL_ASM("binary/EnHintnuts_Draw.o")
}
