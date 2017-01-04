#define _SDL_x11xinput2_h
struct XGenericEventCookie;
typedef struct XGenericEventCookie XGenericEventCookie;
extern void X11_InitXinput2(_THIS);
extern void X11_InitXinput2Multitouch(_THIS);
extern int X11_HandleXinput2Event(SDL_VideoData *videodata,XGenericEventCookie *cookie);
extern int X11_Xinput2IsInitialized(void);
extern int X11_Xinput2IsMultitouchSupported(void);
extern void X11_Xinput2SelectTouch(_THIS, SDL_Window *window);
