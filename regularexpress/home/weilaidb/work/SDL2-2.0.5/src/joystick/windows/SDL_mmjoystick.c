#undef REGSTR_VAL_JOYOEMNAME
#define REGSTR_VAL_JOYOEMNAME "OEMName"
#define MAX_JOYSTICKS   16
#define MAX_AXES    6
#define MAX_BUTTONS 32
#define AXIS_MIN    -32768
#define AXIS_MAX    32767
#define JOY_AXIS_THRESHOLD      (((AXIS_MAX)-(AXIS_MIN))/256)
#define JOY_BUTTON_FLAG(n)  (1<<n)
static UINT SYS_JoystickID[MAX_JOYSTICKS];
static JOYCAPSA SYS_Joystick[MAX_JOYSTICKS];
static char *SYS_JoystickName[MAX_JOYSTICKS];
struct joystick_hwdata
;
static void SetMMerror(char *function, int code);
static char *
GetJoystickName(int index, const char *szRegKey)
static int SDL_SYS_numjoysticks = 0;
int
SDL_SYS_JoystickInit(void)
int SDL_SYS_NumJoysticks()
void SDL_SYS_JoystickDetect()
const char *
SDL_SYS_JoystickNameForDeviceIndex(int device_index)
SDL_JoystickID SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index)
int
SDL_SYS_JoystickOpen(SDL_Joystick * joystick, int device_index)
SDL_bool SDL_SYS_JoystickAttached(SDL_Joystick *joystick)
static Uint8
TranslatePOV(DWORD value)
void
SDL_SYS_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_SYS_JoystickClose(SDL_Joystick * joystick)
void
SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID( int device_index )
SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
void
SetMMerror(char *function, int code)
