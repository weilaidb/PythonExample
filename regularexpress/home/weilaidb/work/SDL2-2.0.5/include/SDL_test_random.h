#define _SDL_test_random_h
#define SDLTest_RandomInt(c)        ((int)SDLTest_Random(c))
typedef struct  SDLTest_RandomContext;
void SDLTest_RandomInit(SDLTest_RandomContext * rndContext, unsigned int xi,
unsigned int ci);
void SDLTest_RandomInitTime(SDLTest_RandomContext *rndContext);
unsigned int SDLTest_Random(SDLTest_RandomContext *rndContext);
