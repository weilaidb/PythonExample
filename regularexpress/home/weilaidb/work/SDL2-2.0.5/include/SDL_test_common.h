#define _SDL_test_common_h
#if defined(__PSP__)
#define DEFAULT_WINDOW_WIDTH  480
#define DEFAULT_WINDOW_HEIGHT 272
#define DEFAULT_WINDOW_WIDTH  640
#define DEFAULT_WINDOW_HEIGHT 480
#define VERBOSE_VIDEO   0x00000001
#define VERBOSE_MODES   0x00000002
#define VERBOSE_RENDER  0x00000004
#define VERBOSE_EVENT   0x00000008
#define VERBOSE_AUDIO   0x00000010
typedef struct
SDLTest_CommonState;
SDLTest_CommonState *SDLTest_CommonCreateState(char **argv, Uint32 flags);
int SDLTest_CommonArg(SDLTest_CommonState * state, int index);
const char *SDLTest_CommonUsage(SDLTest_CommonState * state);
SDL_bool SDLTest_CommonInit(SDLTest_CommonState * state);
void SDLTest_CommonEvent(SDLTest_CommonState * state, SDL_Event * event, int *done);
void SDLTest_CommonQuit(SDLTest_CommonState * state);
