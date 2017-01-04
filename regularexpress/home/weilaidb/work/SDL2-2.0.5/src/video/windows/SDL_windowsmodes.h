#define _SDL_windowsmodes_h
typedef struct
SDL_DisplayData;
typedef struct
SDL_DisplayModeData;
extern int WIN_InitModes(_THIS);
extern int WIN_GetDisplayBounds(_THIS, SDL_VideoDisplay * display, SDL_Rect * rect);
extern int WIN_GetDisplayUsableBounds(_THIS, SDL_VideoDisplay * display, SDL_Rect * rect);
extern int WIN_GetDisplayDPI(_THIS, SDL_VideoDisplay * display, float * ddpi, float * hdpi, float * vdpi);
extern void WIN_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
extern int WIN_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
extern void WIN_QuitModes(_THIS);
