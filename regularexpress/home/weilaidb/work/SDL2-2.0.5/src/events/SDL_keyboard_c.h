#define _SDL_keyboard_c_h
extern int SDL_KeyboardInit(void);
extern void SDL_ResetKeyboard(void);
extern void SDL_GetDefaultKeymap(SDL_Keycode * keymap);
extern void SDL_SetKeymap(int start, SDL_Keycode * keys, int length);
extern void SDL_SetScancodeName(SDL_Scancode scancode, const char *name);
extern void SDL_SetKeyboardFocus(SDL_Window * window);
extern int SDL_SendKeyboardKey(Uint8 state, SDL_Scancode scancode);
extern int SDL_SendKeyboardText(const char *text);
extern int SDL_SendEditingText(const char *text, int start, int end);
extern void SDL_KeyboardQuit(void);
extern char *SDL_UCS4ToUTF8(Uint32 ch, char *dst);
extern void SDL_ToggleModState(const SDL_Keymod modstate, const SDL_bool toggle);
