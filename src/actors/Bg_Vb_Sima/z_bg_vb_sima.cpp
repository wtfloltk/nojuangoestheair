extern "C" {
#include "z_bg_vb_sima.hpp"

#define FLAGS 0x80400000

void BgVbSima_Init(Actor* actor, GameState* state);
void BgVbSima_Destroy(Actor* actor, GameState* state);
void BgVbSima_Update(Actor* actor, GameState* state);
void BgVbSima_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_Bg_Vb_Sima.data.o")

/*
ActorInit Bg_Vb_Sima_InitVars = {
    ACTOR_BG_VB_SIMA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_FD,
    sizeof(BgVbSima),
    (ActorFunc)BgVbSima_Init,
    (ActorFunc)BgVbSima_Destroy,
    (ActorFunc)BgVbSima_Update,
    (ActorFunc)BgVbSima_Draw,
};
*/

GLOBAL_ASM("binary/BgVbSima_Init.o")

GLOBAL_ASM("binary/BgVbSima_Destroy.o")

GLOBAL_ASM("binary/BgVbSima_Update.o")

GLOBAL_ASM("binary/BgVbSima_Draw.o")
}
