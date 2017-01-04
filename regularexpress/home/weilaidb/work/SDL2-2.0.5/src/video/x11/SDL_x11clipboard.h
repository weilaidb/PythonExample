#define _SDL_x11clipboard_h
extern int X11_SetClipboardText(_THIS, const char *text);
extern char *X11_GetClipboardText(_THIS);
extern SDL_bool X11_HasClipboardText(_THIS);
extern Atom X11_GetSDLCutBufferClipboardType(Display *display);
