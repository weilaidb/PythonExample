#define _SDL_clipboard_h
extern DECLSPEC int SDLCALL SDL_SetClipboardText(const char *text);
extern DECLSPEC char * SDLCALL SDL_GetClipboardText(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasClipboardText(void);
