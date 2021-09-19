extern "C" {
#include "z_obj_mure2.hpp"

#define FLAGS 0x00000000

void ObjMure2_Init(Actor* actor, GameState* state);
void ObjMure2_Destroy(Actor* actor, GameState* state);
void ObjMure2_Update(Actor* actor, GameState* state);

/*
ActorInit Obj_Mure2_InitVars = {
    ACTOR_OBJ_MURE2,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjMure2),
    (ActorFunc)ObjMure2_Init,
    (ActorFunc)Actor_Noop,
    (ActorFunc)ObjMure2_Update,
    (ActorFunc)NULL,
};
*/

#pragma GLOBAL_ASM("binary/ObjMure2_Init.o")

#pragma GLOBAL_ASM("binary/ObjMure2_Update.o")
}
