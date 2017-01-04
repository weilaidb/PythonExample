#define VIDEO_USAGE \
"[--video driver] [--renderer driver] [--gldebug] [--info all|video|modes|render|event] [--log all|error|system|audio|video|render|input] [--display N] [--fullscreen | --fullscreen-desktop | --windows N] [--title title] [--icon icon.bmp] [--center | --position X,Y] [--geometry WxH] [--min-geometry WxH] [--max-geometry WxH] [--logical WxH] [--scale N] [--depth N] [--refresh R] [--vsync] [--noframe] [--resize] [--minimize] [--maximize] [--grab] [--allow-highdpi]"
#define AUDIO_USAGE \
"[--rate N] [--format U8|S8|U16|U16LE|U16BE|S16|S16LE|S16BE] [--channels N] [--samples N]"
SDLTest_CommonState *
SDLTest_CommonCreateState(char **argv, Uint32 flags)
int
SDLTest_CommonArg(SDLTest_CommonState * state, int index)
const char *
SDLTest_CommonUsage(SDLTest_CommonState * state)
static void
SDLTest_PrintRendererFlag(Uint32 flag)
static void
SDLTest_PrintPixelFormat(Uint32 format)
static void
SDLTest_PrintRenderer(SDL_RendererInfo * info)
static SDL_Surface *
SDLTest_LoadIcon(const char *file)
SDL_bool
SDLTest_CommonInit(SDLTest_CommonState * state)
static const char *
ControllerAxisName(const SDL_GameControllerAxis axis)
static const char *
ControllerButtonName(const SDL_GameControllerButton button)
static void
SDLTest_PrintEvent(SDL_Event * event)
static void
SDLTest_ScreenShot(SDL_Renderer *renderer)
static void
FullscreenTo(int index, int windowId)
void
SDLTest_CommonEvent(SDLTest_CommonState * state, SDL_Event * event, int *done)
void
SDLTest_CommonQuit(SDLTest_CommonState * state)
