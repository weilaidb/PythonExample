#if SDL_JOYSTICK_DINPUT
#define DIDFT_OPTIONAL      0x80000000
#define INPUT_QSIZE 32
#define AXIS_MIN    -32768
#define AXIS_MAX    32767
#define JOY_AXIS_THRESHOLD  (((AXIS_MAX)-(AXIS_MIN))/100)
extern HWND SDL_HelperWindow;
static SDL_bool coinitialized = SDL_FALSE;
static LPDIRECTINPUT8 dinput = NULL;
static PRAWINPUTDEVICELIST SDL_RawDevList = NULL;
static UINT SDL_RawDevListCount = 0;
static DIOBJECTDATAFORMAT dfDIJoystick2[] = ;
const DIDATAFORMAT SDL_c_dfDIJoystick2 = ;
static int
SetDIerror(const char *function, HRESULT code)
static SDL_bool
SDL_IsXInputDevice(const GUID* pGuidProductFromDirectInput)
int
SDL_DINPUT_JoystickInit(void)
static BOOL CALLBACK
EnumJoysticksCallback(const DIDEVICEINSTANCE * pdidInstance, VOID * pContext)
void
SDL_DINPUT_JoystickDetect(JoyStick_DeviceData **pContext)
static BOOL CALLBACK
EnumDevObjectsCallback(LPCDIDEVICEOBJECTINSTANCE dev, LPVOID pvRef)
static int
SortDevFunc(const void *a, const void *b)
static void
SortDevObjects(SDL_Joystick *joystick)
int
SDL_DINPUT_JoystickOpen(SDL_Joystick * joystick, JoyStick_DeviceData *joystickdevice)
static Uint8
TranslatePOV(DWORD value)
static void
UpdateDINPUTJoystickState_Buffered(SDL_Joystick * joystick)
static void
UpdateDINPUTJoystickState_Polled(SDL_Joystick * joystick)
void
SDL_DINPUT_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_DINPUT_JoystickClose(SDL_Joystick * joystick)
void
SDL_DINPUT_JoystickQuit(void)
typedef struct JoyStick_DeviceData JoyStick_DeviceData;
int
SDL_DINPUT_JoystickInit(void)
void
SDL_DINPUT_JoystickDetect(JoyStick_DeviceData **pContext)
int
SDL_DINPUT_JoystickOpen(SDL_Joystick * joystick, JoyStick_DeviceData *joystickdevice)
void
SDL_DINPUT_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_DINPUT_JoystickClose(SDL_Joystick * joystick)
void
SDL_DINPUT_JoystickQuit(void)
