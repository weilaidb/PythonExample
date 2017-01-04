extern void Android_InitKeyboard(void);
extern int Android_OnKeyDown(int keycode);
extern int Android_OnKeyUp(int keycode);
extern SDL_bool Android_HasScreenKeyboardSupport(_THIS);
extern SDL_bool Android_IsScreenKeyboardShown(_THIS, SDL_Window * window);
extern void Android_StartTextInput(_THIS);
extern void Android_StopTextInput(_THIS);
extern void Android_SetTextInputRect(_THIS, SDL_Rect *rect);
