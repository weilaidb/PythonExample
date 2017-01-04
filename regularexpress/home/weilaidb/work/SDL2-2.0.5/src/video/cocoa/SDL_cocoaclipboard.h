#define _SDL_cocoaclipboard_h
struct SDL_VideoData;
extern int Cocoa_SetClipboardText(_THIS, const char *text);
extern char *Cocoa_GetClipboardText(_THIS);
extern SDL_bool Cocoa_HasClipboardText(_THIS);
extern void Cocoa_CheckClipboardUpdate(struct SDL_VideoData * data);
