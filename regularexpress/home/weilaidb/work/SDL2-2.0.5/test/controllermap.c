#define SCREEN_WIDTH    320
#define SCREEN_HEIGHT   480
#define SCREEN_WIDTH    512
#define SCREEN_HEIGHT   320
#define MARKER_BUTTON 1
#define MARKER_AXIS 2
typedef struct MappingStep
MappingStep;
SDL_Texture *
LoadTexture(SDL_Renderer *renderer, const char *file, SDL_bool transparent)
static SDL_bool
WatchJoystick(SDL_Joystick * joystick)
int
main(int argc, char *argv[])
{
const char *name;
int i;
SDL_Joystick *joystick;
SDL_LogSetPriority(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO);
if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_JOYSTICK) < 0)
SDL_Log("There are %d joysticks attached\n", SDL_NumJoysticks());
for (i = 0; i < SDL_NumJoysticks(); ++i)
if (SDL_NumJoysticks() > 0)
int
main(int argc, char *argv[])
