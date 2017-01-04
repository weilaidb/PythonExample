#define SCREEN_WIDTH    320
#define SCREEN_HEIGHT   480
#define SCREEN_WIDTH    640
#define SCREEN_HEIGHT   480
SDL_Renderer *screen = NULL;
SDL_bool retval = SDL_FALSE;
SDL_bool done = SDL_FALSE;
static void
DrawRect(SDL_Renderer *r, const int x, const int y, const int w, const int h)
void
loop(void *arg)
static SDL_bool
WatchJoystick(SDL_Joystick * joystick)
int
main(int argc, char *argv[])
{
const char *name;
int i;
SDL_Joystick *joystick;
SDL_SetHint(SDL_HINT_ACCELEROMETER_AS_JOYSTICK, "0");
SDL_LogSetPriority(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO);
if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_JOYSTICK) < 0)
SDL_Log("There are %d joysticks attached\n", SDL_NumJoysticks());
for (i = 0; i < SDL_NumJoysticks(); ++i)
#if defined(__ANDROID__) || defined(__IPHONEOS__)
if (SDL_NumJoysticks() > 0)
int
main(int argc, char *argv[])
