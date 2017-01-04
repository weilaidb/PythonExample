#define _SDL_gesture_c_h
extern int SDL_GestureAddTouch(SDL_TouchID touchId);
extern void SDL_GestureProcessEvent(SDL_Event* event);
extern int SDL_RecordGesture(SDL_TouchID touchId);
