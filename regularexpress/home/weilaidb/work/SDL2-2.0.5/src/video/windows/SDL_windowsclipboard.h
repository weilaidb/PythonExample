#define _SDL_windowsclipboard_h
struct SDL_VideoData;
extern int WIN_SetClipboardText(_THIS, const char *text);
extern char *WIN_GetClipboardText(_THIS);
extern SDL_bool WIN_HasClipboardText(_THIS);
extern void WIN_CheckClipboardUpdate(struct SDL_VideoData * data);
