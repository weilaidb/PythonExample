#define _SDL_sysjoystick_h
struct _SDL_Joystick
;
extern int SDL_SYS_JoystickInit(void);
extern int SDL_SYS_NumJoysticks();
extern void SDL_SYS_JoystickDetect();
extern const char *SDL_SYS_JoystickNameForDeviceIndex(int device_index);
extern SDL_JoystickID SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index);
extern int SDL_SYS_JoystickOpen(SDL_Joystick * joystick, int device_index);
extern SDL_bool SDL_SYS_JoystickAttached(SDL_Joystick * joystick);
extern void SDL_SYS_JoystickUpdate(SDL_Joystick * joystick);
extern void SDL_SYS_JoystickClose(SDL_Joystick * joystick);
extern void SDL_SYS_JoystickQuit(void);
extern SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID(int device_index);
extern SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick);
#if SDL_JOYSTICK_XINPUT
extern SDL_bool SDL_SYS_IsXInputGamepad_DeviceIndex(int device_index);
