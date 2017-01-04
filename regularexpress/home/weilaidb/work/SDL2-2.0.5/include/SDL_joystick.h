#define _SDL_joystick_h
struct _SDL_Joystick;
typedef struct _SDL_Joystick SDL_Joystick;
typedef struct  SDL_JoystickGUID;
typedef Sint32 SDL_JoystickID;
typedef enum
SDL_JoystickPowerLevel;
extern DECLSPEC int SDLCALL SDL_NumJoysticks(void);
extern DECLSPEC const char *SDLCALL SDL_JoystickNameForIndex(int device_index);
extern DECLSPEC SDL_Joystick *SDLCALL SDL_JoystickOpen(int device_index);
extern DECLSPEC SDL_Joystick *SDLCALL SDL_JoystickFromInstanceID(SDL_JoystickID joyid);
extern DECLSPEC const char *SDLCALL SDL_JoystickName(SDL_Joystick * joystick);
extern DECLSPEC SDL_JoystickGUID SDLCALL SDL_JoystickGetDeviceGUID(int device_index);
extern DECLSPEC SDL_JoystickGUID SDLCALL SDL_JoystickGetGUID(SDL_Joystick * joystick);
extern DECLSPEC void SDLCALL SDL_JoystickGetGUIDString(SDL_JoystickGUID guid, char *pszGUID, int cbGUID);
extern DECLSPEC SDL_JoystickGUID SDLCALL SDL_JoystickGetGUIDFromString(const char *pchGUID);
extern DECLSPEC SDL_bool SDLCALL SDL_JoystickGetAttached(SDL_Joystick * joystick);
extern DECLSPEC SDL_JoystickID SDLCALL SDL_JoystickInstanceID(SDL_Joystick * joystick);
extern DECLSPEC int SDLCALL SDL_JoystickNumAxes(SDL_Joystick * joystick);
extern DECLSPEC int SDLCALL SDL_JoystickNumBalls(SDL_Joystick * joystick);
extern DECLSPEC int SDLCALL SDL_JoystickNumHats(SDL_Joystick * joystick);
extern DECLSPEC int SDLCALL SDL_JoystickNumButtons(SDL_Joystick * joystick);
extern DECLSPEC void SDLCALL SDL_JoystickUpdate(void);
extern DECLSPEC int SDLCALL SDL_JoystickEventState(int state);
extern DECLSPEC Sint16 SDLCALL SDL_JoystickGetAxis(SDL_Joystick * joystick,
int axis);
#define SDL_HAT_CENTERED    0x00
#define SDL_HAT_UP          0x01
#define SDL_HAT_RIGHT       0x02
#define SDL_HAT_DOWN        0x04
#define SDL_HAT_LEFT        0x08
#define SDL_HAT_RIGHTUP     (SDL_HAT_RIGHT|SDL_HAT_UP)
#define SDL_HAT_RIGHTDOWN   (SDL_HAT_RIGHT|SDL_HAT_DOWN)
#define SDL_HAT_LEFTUP      (SDL_HAT_LEFT|SDL_HAT_UP)
#define SDL_HAT_LEFTDOWN    (SDL_HAT_LEFT|SDL_HAT_DOWN)
extern DECLSPEC Uint8 SDLCALL SDL_JoystickGetHat(SDL_Joystick * joystick,
int hat);
extern DECLSPEC int SDLCALL SDL_JoystickGetBall(SDL_Joystick * joystick,
int ball, int *dx, int *dy);
extern DECLSPEC Uint8 SDLCALL SDL_JoystickGetButton(SDL_Joystick * joystick,
int button);
extern DECLSPEC void SDLCALL SDL_JoystickClose(SDL_Joystick * joystick);
extern DECLSPEC SDL_JoystickPowerLevel SDLCALL SDL_JoystickCurrentPowerLevel(SDL_Joystick * joystick);
