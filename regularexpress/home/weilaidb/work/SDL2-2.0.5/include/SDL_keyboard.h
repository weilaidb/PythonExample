#define _SDL_keyboard_h
typedef struct SDL_Keysym
SDL_Keysym;
extern DECLSPEC SDL_Window * SDLCALL SDL_GetKeyboardFocus(void);
extern DECLSPEC const Uint8 *SDLCALL SDL_GetKeyboardState(int *numkeys);
extern DECLSPEC SDL_Keymod SDLCALL SDL_GetModState(void);
extern DECLSPEC void SDLCALL SDL_SetModState(SDL_Keymod modstate);
extern DECLSPEC SDL_Keycode SDLCALL SDL_GetKeyFromScancode(SDL_Scancode scancode);
extern DECLSPEC SDL_Scancode SDLCALL SDL_GetScancodeFromKey(SDL_Keycode key);
extern DECLSPEC const char *SDLCALL SDL_GetScancodeName(SDL_Scancode scancode);
extern DECLSPEC SDL_Scancode SDLCALL SDL_GetScancodeFromName(const char *name);
extern DECLSPEC const char *SDLCALL SDL_GetKeyName(SDL_Keycode key);
extern DECLSPEC SDL_Keycode SDLCALL SDL_GetKeyFromName(const char *name);
extern DECLSPEC void SDLCALL SDL_StartTextInput(void);
extern DECLSPEC SDL_bool SDLCALL SDL_IsTextInputActive(void);
extern DECLSPEC void SDLCALL SDL_StopTextInput(void);
extern DECLSPEC void SDLCALL SDL_SetTextInputRect(SDL_Rect *rect);
extern DECLSPEC SDL_bool SDLCALL SDL_HasScreenKeyboardSupport(void);
extern DECLSPEC SDL_bool SDLCALL SDL_IsScreenKeyboardShown(SDL_Window *window);
