#define _SDL_x11modes_h
typedef struct
SDL_DisplayData;
typedef struct
SDL_DisplayModeData;
extern int X11_InitModes(_THIS);
extern void X11_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
extern int X11_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
extern void X11_QuitModes(_THIS);
extern int X11_GetVisualInfoFromVisual(Display * display, Visual * visual,
XVisualInfo * vinfo);
extern Uint32 X11_GetPixelFormatFromVisualInfo(Display * display,
XVisualInfo * vinfo);
extern int X11_GetDisplayBounds(_THIS, SDL_VideoDisplay * sdl_display, SDL_Rect * rect);
extern int X11_GetDisplayUsableBounds(_THIS, SDL_VideoDisplay * sdl_display, SDL_Rect * rect);
extern int X11_GetDisplayDPI(_THIS, SDL_VideoDisplay * sdl_display, float * ddpi, float * hdpi, float * vdpi);
