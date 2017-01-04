#if defined(SDL_JOYSTICK_DUMMY) || defined(SDL_JOYSTICK_DISABLED)
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
void
SDL_SYS_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_SYS_JoystickClose(SDL_Joystick * joystick)
void
SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID( int device_index )
SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
