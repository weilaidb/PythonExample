#define _SDL_cocoamodes_h
typedef struct
SDL_DisplayData;
typedef struct
SDL_DisplayModeData;
extern void Cocoa_InitModes(_THIS);
extern int Cocoa_GetDisplayBounds(_THIS, SDL_VideoDisplay * display, SDL_Rect * rect);
extern int Cocoa_GetDisplayUsableBounds(_THIS, SDL_VideoDisplay * display, SDL_Rect * rect);
extern void Cocoa_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
extern int Cocoa_GetDisplayDPI(_THIS, SDL_VideoDisplay * display, float * ddpi, float * hpdi, float * vdpi);
extern int Cocoa_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
extern void Cocoa_QuitModes(_THIS);
