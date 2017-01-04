#if !SDL_EVENTS_DISABLED
static SDL_bool SDL_joystick_allows_background_events = SDL_FALSE;
static SDL_Joystick *SDL_joysticks = NULL;
static SDL_Joystick *SDL_updating_joystick = NULL;
static void
SDL_JoystickAllowBackgroundEventsChanged(void *userdata, const char *name, const char *oldValue, const char *hint)
int
SDL_JoystickInit(void)
int
SDL_NumJoysticks(void)
const char *
SDL_JoystickNameForIndex(int device_index)
SDL_Joystick *
SDL_JoystickOpen(int device_index)
int
SDL_PrivateJoystickValid(SDL_Joystick * joystick)
int
SDL_JoystickNumAxes(SDL_Joystick * joystick)
int
SDL_JoystickNumHats(SDL_Joystick * joystick)
int
SDL_JoystickNumBalls(SDL_Joystick * joystick)
int
SDL_JoystickNumButtons(SDL_Joystick * joystick)
Sint16
SDL_JoystickGetAxis(SDL_Joystick * joystick, int axis)
Uint8
SDL_JoystickGetHat(SDL_Joystick * joystick, int hat)
int
SDL_JoystickGetBall(SDL_Joystick * joystick, int ball, int *dx, int *dy)
Uint8
SDL_JoystickGetButton(SDL_Joystick * joystick, int button)
SDL_bool
SDL_JoystickGetAttached(SDL_Joystick * joystick)
SDL_JoystickID
SDL_JoystickInstanceID(SDL_Joystick * joystick)
SDL_Joystick *
SDL_JoystickFromInstanceID(SDL_JoystickID joyid)
const char *
SDL_JoystickName(SDL_Joystick * joystick)
void
SDL_JoystickClose(SDL_Joystick * joystick)
void
SDL_JoystickQuit(void)
static SDL_bool
SDL_PrivateJoystickShouldIgnoreEvent()
void SDL_PrivateJoystickAdded(int device_index)
static void UpdateEventsForDeviceRemoval()
void SDL_PrivateJoystickRemoved(SDL_JoystickID device_instance)
int
SDL_PrivateJoystickAxis(SDL_Joystick * joystick, Uint8 axis, Sint16 value)
int
SDL_PrivateJoystickHat(SDL_Joystick * joystick, Uint8 hat, Uint8 value)
int
SDL_PrivateJoystickBall(SDL_Joystick * joystick, Uint8 ball,
Sint16 xrel, Sint16 yrel)
int
SDL_PrivateJoystickButton(SDL_Joystick * joystick, Uint8 button, Uint8 state)
void
SDL_JoystickUpdate(void)
int
SDL_JoystickEventState(int state)
SDL_JoystickGUID SDL_JoystickGetDeviceGUID(int device_index)
SDL_JoystickGUID SDL_JoystickGetGUID(SDL_Joystick * joystick)
void SDL_JoystickGetGUIDString(SDL_JoystickGUID guid, char *pszGUID, int cbGUID)
static unsigned char nibble(char c)
SDL_JoystickGUID SDL_JoystickGetGUIDFromString(const char *pchGUID)
void SDL_PrivateJoystickBatteryLevel(SDL_Joystick * joystick, SDL_JoystickPowerLevel ePowerLevel)
SDL_JoystickPowerLevel SDL_JoystickCurrentPowerLevel(SDL_Joystick * joystick)
