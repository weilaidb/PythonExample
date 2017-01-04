#define SDL_BKEYBOARD_H
extern void BE_InitOSKeymap();
extern SDL_Scancode BE_GetScancodeFromBeKey(int32 bkey);
extern int8 BE_GetKeyState(int32 bkey);
extern void BE_SetKeyState(int32 bkey, int8 state);
