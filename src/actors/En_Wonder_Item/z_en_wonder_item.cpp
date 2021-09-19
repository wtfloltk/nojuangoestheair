extern "C" {
#include "z_en_wonder_item.hpp"

#define FLAGS 0x00000000

void EnWonderItem_Init(Actor* actor, GameState* state);
void EnWonderItem_Destroy(Actor* actor, GameState* state);
void EnWonderItem_Update(Actor* actor, GameState* state);

/*
ActorInit En_Wonder_Item_InitVars = {
    ACTOR_EN_WONDER_ITEM,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnWonderItem),
    (ActorFunc)EnWonderItem_Init,
    (ActorFunc)EnWonderItem_Destroy,
    (ActorFunc)EnWonderItem_Update,
    (ActorFunc)NULL,
};
*/

#pragma GLOBAL_ASM("binary/EnWonderItem_Init.o")

#pragma GLOBAL_ASM("binary/EnWonderItem_Destroy.o")

#pragma GLOBAL_ASM("binary/EnWonderItem_Update.o")
}
