#define _SDL_x11dyn_h
#if SDL_VIDEO_DRIVER_X11_HAS_XKBKEYCODETOKEYSYM
#define SDL_INCLUDED_XLIBINT_H 1
#if SDL_VIDEO_DRIVER_X11_XCURSOR
#if SDL_VIDEO_DRIVER_X11_XDBE
#if SDL_VIDEO_DRIVER_X11_XINERAMA
#if SDL_VIDEO_DRIVER_X11_XINPUT2
#if SDL_VIDEO_DRIVER_X11_XRANDR
#if SDL_VIDEO_DRIVER_X11_XSCRNSAVER
#if SDL_VIDEO_DRIVER_X11_XSHAPE
#if SDL_VIDEO_DRIVER_X11_XVIDMODE
typedef Bool(*SDL_X11_XESetWireToEventRetType) (Display *, XEvent *, xEvent *);
typedef int (*SDL_X11_XSynchronizeRetType) (Display *);
typedef Status(*SDL_X11_XESetEventToWireRetType) (Display *, XEvent *, xEvent *);
int SDL_X11_LoadSymbols(void);
void SDL_X11_UnloadSymbols(void);
#define SDL_X11_SYM(rc,fn,params,args,ret) \
typedef rc (*SDL_DYNX11FN_##fn) params; \
extern SDL_DYNX11FN_##fn X11_##fn;
typedef XIC(*SDL_DYNX11FN_XCreateIC) (XIM,...);
typedef char *(*SDL_DYNX11FN_XGetICValues) (XIC, ...);
extern SDL_DYNX11FN_XCreateIC X11_XCreateIC;
extern SDL_DYNX11FN_XGetICValues X11_XGetICValues;
#define SDL_X11_MODULE(modname) extern int SDL_X11_HAVE_##modname;
