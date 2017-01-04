#if SDL_JOYSTICK_XINPUT
static SDL_bool s_bXInputEnabled = SDL_TRUE;
static SDL_bool
SDL_XInputUseOldJoystickMapping()
SDL_bool SDL_XINPUT_Enabled(void)
int
SDL_XINPUT_JoystickInit(void)
static char *
GetXInputName(const Uint8 userid, BYTE SubType)
static void
AddXInputDevice(const Uint8 userid, BYTE SubType, JoyStick_DeviceData **pContext)
void
SDL_XINPUT_JoystickDetect(JoyStick_DeviceData **pContext)
int
SDL_XINPUT_JoystickOpen(SDL_Joystick * joystick, JoyStick_DeviceData *joystickdevice)
static void
UpdateXInputJoystickBatteryInformation(SDL_Joystick * joystick, XINPUT_BATTERY_INFORMATION_EX *pBatteryInformation)
static void
UpdateXInputJoystickState_OLD(SDL_Joystick * joystick, XINPUT_STATE_EX *pXInputState, XINPUT_BATTERY_INFORMATION_EX *pBatteryInformation)
static void
UpdateXInputJoystickState(SDL_Joystick * joystick, XINPUT_STATE_EX *pXInputState, XINPUT_BATTERY_INFORMATION_EX *pBatteryInformation)
void
SDL_XINPUT_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_XINPUT_JoystickClose(SDL_Joystick * joystick)
void
SDL_XINPUT_JoystickQuit(void)
SDL_bool
SDL_SYS_IsXInputGamepad_DeviceIndex(int device_index)
typedef struct JoyStick_DeviceData JoyStick_DeviceData;
SDL_bool SDL_XINPUT_Enabled(void)
int
SDL_XINPUT_JoystickInit(void)
void
SDL_XINPUT_JoystickDetect(JoyStick_DeviceData **pContext)
int
SDL_XINPUT_JoystickOpen(SDL_Joystick * joystick, JoyStick_DeviceData *joystickdevice)
void
SDL_XINPUT_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_XINPUT_JoystickClose(SDL_Joystick * joystick)
void
SDL_XINPUT_JoystickQuit(void)
