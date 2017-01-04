#if SDL_VIDEO_DRIVER_X11
static const struct  KeySymToSDLScancode[] = ;
static const struct
scancode_set[] = ;
static SDL_Scancode
X11_KeyCodeToSDLScancode(_THIS, KeyCode keycode)
static Uint32
X11_KeyCodeToUcs4(_THIS, KeyCode keycode, unsigned char group)
KeySym
X11_KeyCodeToSym(_THIS, KeyCode keycode, unsigned char group)
int
X11_InitKeyboard(_THIS)
void
X11_UpdateKeymap(_THIS)
void
X11_QuitKeyboard(_THIS)
static void
X11_ResetXIM(_THIS)
void
X11_StartTextInput(_THIS)
void
X11_StopTextInput(_THIS)
void
X11_SetTextInputRect(_THIS, SDL_Rect *rect)
