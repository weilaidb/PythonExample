#if SDL_VIDEO_DRIVER_DIRECTFB
#define COLOR_EXPAND(col) col.r, col.g, col.b, col.a
static DFB_Theme theme_std = ;
static DFB_Theme theme_none = ;
static void
DrawTriangle(IDirectFBSurface * s, int down, int x, int y, int w)
static void
LoadFont(_THIS, SDL_Window * window)
static void
DrawCraption(_THIS, IDirectFBSurface * s, int x, int y, char *text)
void
DirectFB_WM_RedrawLayout(_THIS, SDL_Window * window)
DFBResult
DirectFB_WM_GetClientSize(_THIS, SDL_Window * window, int *cw, int *ch)
void
DirectFB_WM_AdjustWindowLayout(SDL_Window * window, int flags, int w, int h)
enum
;
static int
WMIsClient(DFB_WindowData * p, int x, int y)
static int
WMPos(DFB_WindowData * p, int x, int y)
int
DirectFB_WM_ProcessEvent(_THIS, SDL_Window * window, DFBWindowEvent * evt)
