extern int SDL_JoystickInit(void);
extern void SDL_JoystickQuit(void);
extern int SDL_GameControllerInit(void);
extern void SDL_GameControllerQuit(void);
extern void SDL_PrivateJoystickAdded(int device_index);
extern void SDL_PrivateJoystickRemoved(SDL_JoystickID device_instance);
extern int SDL_PrivateJoystickAxis(SDL_Joystick * joystick,
Uint8 axis, Sint16 value);
extern int SDL_PrivateJoystickBall(SDL_Joystick * joystick,
Uint8 ball, Sint16 xrel, Sint16 yrel);
extern int SDL_PrivateJoystickHat(SDL_Joystick * joystick,
Uint8 hat, Uint8 value);
extern int SDL_PrivateJoystickButton(SDL_Joystick * joystick,
Uint8 button, Uint8 state);
extern void SDL_PrivateJoystickBatteryLevel(SDL_Joystick * joystick,
SDL_JoystickPowerLevel ePowerLevel);
extern int SDL_PrivateJoystickValid(SDL_Joystick * joystick);
