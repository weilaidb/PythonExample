#define SDL_BMODES_H
extern int32 BE_ColorSpaceToBitsPerPixel(uint32 colorspace);
extern int32 BE_BPPToSDLPxFormat(int32 bpp);
extern int BE_InitModes(_THIS);
extern int BE_QuitModes(_THIS);
extern int BE_GetDisplayBounds(_THIS, SDL_VideoDisplay *display,
SDL_Rect *rect);
extern void BE_GetDisplayModes(_THIS, SDL_VideoDisplay *display);
extern int BE_SetDisplayMode(_THIS, SDL_VideoDisplay *display,
SDL_DisplayMode *mode);
