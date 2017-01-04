#define _SDL_x11keyboard_h
extern int X11_InitKeyboard(_THIS);
extern void X11_UpdateKeymap(_THIS);
extern void X11_QuitKeyboard(_THIS);
extern void X11_StartTextInput(_THIS);
extern void X11_StopTextInput(_THIS);
extern void X11_SetTextInputRect(_THIS, SDL_Rect *rect);
extern KeySym X11_KeyCodeToSym(_THIS, KeyCode, unsigned char group);
