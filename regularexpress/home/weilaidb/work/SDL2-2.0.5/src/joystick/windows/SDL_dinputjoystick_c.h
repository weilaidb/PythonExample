extern int SDL_DINPUT_JoystickInit(void);
extern void SDL_DINPUT_JoystickDetect(JoyStick_DeviceData **pContext);
extern int SDL_DINPUT_JoystickOpen(SDL_Joystick * joystick, JoyStick_DeviceData *joystickdevice);
extern void SDL_DINPUT_JoystickUpdate(SDL_Joystick * joystick);
extern void SDL_DINPUT_JoystickClose(SDL_Joystick * joystick);
extern void SDL_DINPUT_JoystickQuit(void);
