#define _SDL_directfb_modes_h
#define SDL_DFB_DISPLAYDATA(win)  DFB_DisplayData *dispdata = ((win) ? (DFB_DisplayData *) SDL_GetDisplayForWindow(window)->driverdata : NULL)
typedef struct _DFB_DisplayData DFB_DisplayData;
struct _DFB_DisplayData
;
extern void DirectFB_InitModes(_THIS);
extern void DirectFB_GetDisplayModes(_THIS, SDL_VideoDisplay * display);
extern int DirectFB_SetDisplayMode(_THIS, SDL_VideoDisplay * display, SDL_DisplayMode * mode);
extern void DirectFB_QuitModes(_THIS);
extern void DirectFB_SetContext(_THIS, SDL_Window *window);
