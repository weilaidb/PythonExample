#define SDL_BCLIPBOARD_H
extern int BE_SetClipboardText(_THIS, const char *text);
extern char *BE_GetClipboardText(_THIS);
extern SDL_bool BE_HasClipboardText(_THIS);
