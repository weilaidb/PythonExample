extern SDL_bool SDL_XINPUT_Enabled(void);
extern int SDL_XINPUT_JoystickInit(void);
extern void SDL_XINPUT_JoystickDetect(JoyStick_DeviceData **pContext);
extern int SDL_XINPUT_JoystickOpen(SDL_Joystick * joystick, JoyStick_DeviceData *joystickdevice);
extern void SDL_XINPUT_JoystickUpdate(SDL_Joystick * joystick);
extern void SDL_XINPUT_JoystickClose(SDL_Joystick * joystick);
extern void SDL_XINPUT_JoystickQuit(void);
