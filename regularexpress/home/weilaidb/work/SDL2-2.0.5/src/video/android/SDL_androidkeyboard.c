#if SDL_VIDEO_DRIVER_ANDROID
void Android_InitKeyboard(void)
static SDL_Scancode Android_Keycodes[] = ;
static SDL_Scancode
TranslateKeycode(int keycode)
int
Android_OnKeyDown(int keycode)
int
Android_OnKeyUp(int keycode)
SDL_bool
Android_HasScreenKeyboardSupport(_THIS)
SDL_bool
Android_IsScreenKeyboardShown(_THIS, SDL_Window * window)
void
Android_StartTextInput(_THIS)
void
Android_StopTextInput(_THIS)
void
Android_SetTextInputRect(_THIS, SDL_Rect *rect)
