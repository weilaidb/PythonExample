#define _SDL_gesture_h
typedef Sint64 SDL_GestureID;
extern DECLSPEC int SDLCALL SDL_RecordGesture(SDL_TouchID touchId);
extern DECLSPEC int SDLCALL SDL_SaveAllDollarTemplates(SDL_RWops *dst);
extern DECLSPEC int SDLCALL SDL_SaveDollarTemplate(SDL_GestureID gestureId,SDL_RWops *dst);
extern DECLSPEC int SDLCALL SDL_LoadDollarTemplates(SDL_TouchID touchId, SDL_RWops *src);
