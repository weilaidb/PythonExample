#if SDL_VIDEO_DRIVER_X11
#define TEXT_FORMAT X11_XInternAtom(display, "UTF8_STRING", False)
#define TEXT_FORMAT XA_STRING
static Window
GetWindow(_THIS)
Atom
X11_GetSDLCutBufferClipboardType(Display *display)
int
X11_SetClipboardText(_THIS, const char *text)
char *
X11_GetClipboardText(_THIS)
SDL_bool
X11_HasClipboardText(_THIS)
