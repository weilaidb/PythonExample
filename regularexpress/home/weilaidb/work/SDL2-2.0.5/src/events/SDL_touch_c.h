#define _SDL_touch_c_h
typedef struct SDL_Touch
SDL_Touch;
extern int SDL_TouchInit(void);
extern int SDL_AddTouch(SDL_TouchID id, const char *name);
extern SDL_Touch *SDL_GetTouch(SDL_TouchID id);
extern int SDL_SendTouch(SDL_TouchID id, SDL_FingerID fingerid,
SDL_bool down, float x, float y, float pressure);
extern int SDL_SendTouchMotion(SDL_TouchID id, SDL_FingerID fingerid,
float x, float y, float pressure);
extern void SDL_DelTouch(SDL_TouchID id);
extern void SDL_TouchQuit(void);
