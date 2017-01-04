#if SDL_VIDEO_DRIVER_HAIKU
#define KEYMAP_SIZE 128
static SDL_Scancode keymap[KEYMAP_SIZE];
static int8 keystate[KEYMAP_SIZE];
void BE_InitOSKeymap()
SDL_Scancode BE_GetScancodeFromBeKey(int32 bkey)
int8 BE_GetKeyState(int32 bkey)
void BE_SetKeyState(int32 bkey, int8 state)
