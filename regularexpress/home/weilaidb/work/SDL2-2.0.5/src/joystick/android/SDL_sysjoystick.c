#define AKEYCODE_BUTTON_1 188
#define AKEYCODE_BUTTON_2 189
#define AKEYCODE_BUTTON_3 190
#define AKEYCODE_BUTTON_4 191
#define AKEYCODE_BUTTON_5 192
#define AKEYCODE_BUTTON_6 193
#define AKEYCODE_BUTTON_7 194
#define AKEYCODE_BUTTON_8 195
#define AKEYCODE_BUTTON_9 196
#define AKEYCODE_BUTTON_10 197
#define AKEYCODE_BUTTON_11 198
#define AKEYCODE_BUTTON_12 199
#define AKEYCODE_BUTTON_13 200
#define AKEYCODE_BUTTON_14 201
#define AKEYCODE_BUTTON_15 202
#define AKEYCODE_BUTTON_16 203
#define ANDROID_ACCELEROMETER_NAME "Android Accelerometer"
#define ANDROID_ACCELEROMETER_DEVICE_ID INT_MIN
#define ANDROID_MAX_NBUTTONS 36
static SDL_joylist_item * JoystickByDeviceId(int device_id);
static SDL_joylist_item *SDL_joylist = NULL;
static SDL_joylist_item *SDL_joylist_tail = NULL;
static int numjoysticks = 0;
static int instance_counter = 0;
static int
keycode_to_SDL(int keycode)
int
Android_OnPadDown(int device_id, int keycode)
int
Android_OnPadUp(int device_id, int keycode)
int
Android_OnJoy(int device_id, int axis, float value)
int
Android_OnHat(int device_id, int hat_id, int x, int y)
int
Android_AddJoystick(int device_id, const char *name, SDL_bool is_accelerometer, int nbuttons, int naxes, int nhats, int nballs)
int
Android_RemoveJoystick(int device_id)
int
SDL_SYS_JoystickInit(void)
int SDL_SYS_NumJoysticks()
void SDL_SYS_JoystickDetect()
static SDL_joylist_item *
JoystickByDevIndex(int device_index)
static SDL_joylist_item *
JoystickByDeviceId(int device_id)
const char *
SDL_SYS_JoystickNameForDeviceIndex(int device_index)
SDL_JoystickID SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index)
int
SDL_SYS_JoystickOpen(SDL_Joystick * joystick, int device_index)
SDL_bool SDL_SYS_JoystickAttached(SDL_Joystick *joystick)
void
SDL_SYS_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_SYS_JoystickClose(SDL_Joystick * joystick)
void
SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID( int device_index )
SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
