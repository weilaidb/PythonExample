#if SDL_JOYSTICK_DINPUT || SDL_JOYSTICK_XINPUT
#if !defined(__WINRT__)
#define INITGUID
#define DEVICE_NOTIFY_WINDOW_HANDLE 0x00000000
static SDL_bool s_bDeviceAdded = SDL_FALSE;
static SDL_bool s_bDeviceRemoved = SDL_FALSE;
static SDL_JoystickID s_nInstanceID = -1;
static SDL_cond *s_condJoystickThread = NULL;
static SDL_mutex *s_mutexJoyStickEnum = NULL;
static SDL_Thread *s_threadJoystick = NULL;
static SDL_bool s_bJoystickThreadQuit = SDL_FALSE;
JoyStick_DeviceData *SYS_Joystick;
static SDL_bool s_bWindowsDeviceChanged = SDL_FALSE;
typedef struct
SDL_DeviceNotificationData;
static void
SDL_CleanupDeviceNotification(SDL_DeviceNotificationData *data)
static int
SDL_CreateDeviceNotification(SDL_DeviceNotificationData *data)
static void
SDL_CheckDeviceNotification(SDL_DeviceNotificationData *data)
typedef struct
SDL_DeviceNotificationData;
static LRESULT CALLBACK
SDL_PrivateJoystickDetectProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
static void
SDL_CleanupDeviceNotification(SDL_DeviceNotificationData *data)
static int
SDL_CreateDeviceNotification(SDL_DeviceNotificationData *data)
static void
SDL_CheckDeviceNotification(SDL_DeviceNotificationData *data)
static int
SDL_JoystickThread(void *_data)
void SDL_SYS_AddJoystickDevice(JoyStick_DeviceData *device)
int
SDL_SYS_JoystickInit(void)
int
SDL_SYS_NumJoysticks()
void
SDL_SYS_JoystickDetect()
const char *
SDL_SYS_JoystickNameForDeviceIndex(int device_index)
SDL_JoystickID
SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index)
int
SDL_SYS_JoystickOpen(SDL_Joystick * joystick, int device_index)
SDL_bool
SDL_SYS_JoystickAttached(SDL_Joystick * joystick)
void
SDL_SYS_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_SYS_JoystickClose(SDL_Joystick * joystick)
void
SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID
SDL_SYS_JoystickGetDeviceGUID(int device_index)
SDL_JoystickGUID
SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
