#if defined(__IPHONEOS__) || defined(__ANDROID__)
#define HAVE_OPENGLES
static SDLTest_CommonState *state;
static SDL_GLContext *context = NULL;
static int depth = 16;
static void
quit(int rc)
static void
Render()
int
main(int argc, char *argv[])
int
main(int argc, char *argv[])
