#define _SDL_directfb_wm_h
typedef struct _DFB_Theme DFB_Theme;
struct _DFB_Theme
;
extern void DirectFB_WM_AdjustWindowLayout(SDL_Window * window, int flags, int w, int h);
extern void DirectFB_WM_RedrawLayout(_THIS, SDL_Window * window);
extern int DirectFB_WM_ProcessEvent(_THIS, SDL_Window * window,
DFBWindowEvent * evt);
extern DFBResult DirectFB_WM_GetClientSize(_THIS, SDL_Window * window,
int *cw, int *ch);
