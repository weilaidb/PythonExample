static SDL_joylist_item * JoystickByIndex(int index);
static SDL_joylist_item *SDL_joylist = NULL;
static SDL_joylist_item *SDL_joylist_tail = NULL;
static int numjoysticks = 0;
static int instance_counter = 0;
EM_BOOL
Emscripten_JoyStickConnected(int eventType, const EmscriptenGamepadEvent *gamepadEvent, void *userData)
EM_BOOL
Emscripten_JoyStickDisconnected(int eventType, const EmscriptenGamepadEvent *gamepadEvent, void *userData)
int
SDL_SYS_JoystickInit(void)
static SDL_joylist_item *
JoystickByDeviceIndex(int device_index)
static SDL_joylist_item *
JoystickByIndex(int index)
int SDL_SYS_NumJoysticks()
void SDL_SYS_JoystickDetect()
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
SDL_JoystickGUID
SDL_SYS_JoystickGetDeviceGUID(int device_index)
SDL_JoystickGUID
SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
