#define _SDL_touch_h
typedef Sint64 SDL_TouchID;
typedef Sint64 SDL_FingerID;
typedef struct SDL_Finger
SDL_Finger;
#define SDL_TOUCH_MOUSEID ((Uint32)-1)
extern DECLSPEC int SDLCALL SDL_GetNumTouchDevices(void);
extern DECLSPEC SDL_TouchID SDLCALL SDL_GetTouchDevice(int index);
extern DECLSPEC int SDLCALL SDL_GetNumTouchFingers(SDL_TouchID touchID);
extern DECLSPEC SDL_Finger * SDLCALL SDL_GetTouchFinger(SDL_TouchID touchID, int index);
