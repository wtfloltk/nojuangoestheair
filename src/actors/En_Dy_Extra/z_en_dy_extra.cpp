extern "C" {
#include "z_en_dy_extra.hpp"

#define FLAGS 0x00000030

void EnDyExtra_Init(Actor* actor, GameState* state);
void EnDyExtra_Destroy(Actor* actor, GameState* state);
void EnDyExtra_Update(Actor* actor, GameState* state);
void EnDyExtra_Draw(Actor* actor, GameState* state);

/*
ActorInit En_Dy_Extra_InitVars = {
    ACTOR_EN_DY_EXTRA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DY_OBJ,
    sizeof(EnDyExtra),
    (ActorFunc)EnDyExtra_Init,
    (ActorFunc)EnDyExtra_Destroy,
    (ActorFunc)EnDyExtra_Update,
    (ActorFunc)EnDyExtra_Draw,
};
*/

#pragma GLOBAL_ASM("binary/EnDyExtra_Init.o")

#pragma GLOBAL_ASM("binary/EnDyExtra_Destroy.o")

#pragma GLOBAL_ASM("binary/EnDyExtra_Update.o")

#pragma GLOBAL_ASM("binary/EnDyExtra_Draw.o")
}
