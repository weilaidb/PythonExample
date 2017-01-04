#if SDL_JOYSTICK_PSP
static SceCtrlData pad = ;
static SDL_sem *pad_sem = NULL;
static SDL_Thread *thread = NULL;
static int running = 0;
static const enum PspCtrlButtons button_map[] = ;
static int analog_map[256];
typedef struct
point;
static point a = ;
static point b = ;
static point c = ;
static point d = ;
static SDL_INLINE void lerp (point *dest, point *a, point *b, float t)
static int calc_bezier_y(float t)
int JoystickUpdate(void *data)
int SDL_SYS_JoystickInit(void)
int SDL_SYS_NumJoysticks()
void SDL_SYS_JoystickDetect()
const char * SDL_SYS_JoystickNameForDeviceIndex(int device_index)
SDL_JoystickID SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index)
const char *SDL_SYS_JoystickName(int index)
int SDL_SYS_JoystickOpen(SDL_Joystick *joystick, int device_index)
SDL_bool SDL_SYS_JoystickAttached(SDL_Joystick *joystick)
void SDL_SYS_JoystickUpdate(SDL_Joystick *joystick)
void SDL_SYS_JoystickClose(SDL_Joystick *joystick)
void SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID( int device_index )
SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
