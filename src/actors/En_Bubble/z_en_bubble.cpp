extern "C" {
#include "z_en_bubble.hpp"

#define FLAGS 0x00000001

void EnBubble_Init(Actor* actor, GameState* state);
void EnBubble_Destroy(Actor* actor, GameState* state);
void EnBubble_Update(Actor* actor, GameState* state);
void EnBubble_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("binary/z_En_Bubble.data.o")

ActorInit En_Bubble_InitVars = {
    ACTOR_EN_BUBBLE,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_BUBBLE,
    sizeof(EnBubble),
    (ActorFunc)EnBubble_Init,
    (ActorFunc)EnBubble_Destroy,
    (ActorFunc)EnBubble_Update,
    (ActorFunc)EnBubble_Draw,
};

GLOBAL_ASM("binary/EnBubble_Init.o")

GLOBAL_ASM("binary/EnBubble_Destroy.o")

GLOBAL_ASM("binary/EnBubble_Update.o")

GLOBAL_ASM("binary/EnBubble_Draw.o")
}
