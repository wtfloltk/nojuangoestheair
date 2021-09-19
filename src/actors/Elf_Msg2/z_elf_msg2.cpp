extern "C" {
#include "z_elf_msg2.hpp"

#define FLAGS 0x00000010

void ElfMsg2_Init(Actor* actor, GameState* state);
void ElfMsg2_Destroy(Actor* actor, GameState* state);
void ElfMsg2_Update(Actor* actor, GameState* state);

/*
ActorInit Elf_Msg2_InitVars = {
    ACTOR_ELF_MSG2,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ElfMsg2),
    (ActorFunc)ElfMsg2_Init,
    (ActorFunc)ElfMsg2_Destroy,
    (ActorFunc)ElfMsg2_Update,
    (ActorFunc)NULL,
};
*/

#pragma GLOBAL_ASM("binary/ElfMsg2_Init.o")

#pragma GLOBAL_ASM("binary/ElfMsg2_Destroy.o")

#pragma GLOBAL_ASM("binary/ElfMsg2_Update.o")
}
