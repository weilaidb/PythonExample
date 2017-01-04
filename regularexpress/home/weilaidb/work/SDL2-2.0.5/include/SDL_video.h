#define _SDL_video_h
typedef struct
SDL_DisplayMode;
typedef struct SDL_Window SDL_Window;
typedef enum
SDL_WindowFlags;
#define SDL_WINDOWPOS_UNDEFINED_MASK    0x1FFF0000u
#define SDL_WINDOWPOS_UNDEFINED_DISPLAY(X)  (SDL_WINDOWPOS_UNDEFINED_MASK|(X))
#define SDL_WINDOWPOS_UNDEFINED         SDL_WINDOWPOS_UNDEFINED_DISPLAY(0)
#define SDL_WINDOWPOS_ISUNDEFINED(X)    \
(((X)&0xFFFF0000) == SDL_WINDOWPOS_UNDEFINED_MASK)
#define SDL_WINDOWPOS_CENTERED_MASK    0x2FFF0000u
#define SDL_WINDOWPOS_CENTERED_DISPLAY(X)  (SDL_WINDOWPOS_CENTERED_MASK|(X))
#define SDL_WINDOWPOS_CENTERED         SDL_WINDOWPOS_CENTERED_DISPLAY(0)
#define SDL_WINDOWPOS_ISCENTERED(X)    \
(((X)&0xFFFF0000) == SDL_WINDOWPOS_CENTERED_MASK)
typedef enum
SDL_WindowEventID;
typedef void *SDL_GLContext;
typedef enum
SDL_GLattr;
typedef enum
SDL_GLprofile;
typedef enum
SDL_GLcontextFlag;
typedef enum
SDL_GLcontextReleaseFlag;
extern DECLSPEC int SDLCALL SDL_GetNumVideoDrivers(void);
extern DECLSPEC const char *SDLCALL SDL_GetVideoDriver(int index);
extern DECLSPEC int SDLCALL SDL_VideoInit(const char *driver_name);
extern DECLSPEC void SDLCALL SDL_VideoQuit(void);
extern DECLSPEC const char *SDLCALL SDL_GetCurrentVideoDriver(void);
extern DECLSPEC int SDLCALL SDL_GetNumVideoDisplays(void);
extern DECLSPEC const char * SDLCALL SDL_GetDisplayName(int displayIndex);
extern DECLSPEC int SDLCALL SDL_GetDisplayBounds(int displayIndex, SDL_Rect * rect);
extern DECLSPEC int SDLCALL SDL_GetDisplayDPI(int displayIndex, float * ddpi, float * hdpi, float * vdpi);
extern DECLSPEC int SDLCALL SDL_GetDisplayUsableBounds(int displayIndex, SDL_Rect * rect);
extern DECLSPEC int SDLCALL SDL_GetNumDisplayModes(int displayIndex);
extern DECLSPEC int SDLCALL SDL_GetDisplayMode(int displayIndex, int modeIndex,
SDL_DisplayMode * mode);
extern DECLSPEC int SDLCALL SDL_GetDesktopDisplayMode(int displayIndex, SDL_DisplayMode * mode);
extern DECLSPEC int SDLCALL SDL_GetCurrentDisplayMode(int displayIndex, SDL_DisplayMode * mode);
extern DECLSPEC SDL_DisplayMode * SDLCALL SDL_GetClosestDisplayMode(int displayIndex, const SDL_DisplayMode * mode, SDL_DisplayMode * closest);
extern DECLSPEC int SDLCALL SDL_GetWindowDisplayIndex(SDL_Window * window);
extern DECLSPEC int SDLCALL SDL_SetWindowDisplayMode(SDL_Window * window,
const SDL_DisplayMode
* mode);
extern DECLSPEC int SDLCALL SDL_GetWindowDisplayMode(SDL_Window * window,
SDL_DisplayMode * mode);
extern DECLSPEC Uint32 SDLCALL SDL_GetWindowPixelFormat(SDL_Window * window);
extern DECLSPEC SDL_Window * SDLCALL SDL_CreateWindow(const char *title,
int x, int y, int w,
int h, Uint32 flags);
extern DECLSPEC SDL_Window * SDLCALL SDL_CreateWindowFrom(const void *data);
extern DECLSPEC Uint32 SDLCALL SDL_GetWindowID(SDL_Window * window);
extern DECLSPEC SDL_Window * SDLCALL SDL_GetWindowFromID(Uint32 id);
extern DECLSPEC Uint32 SDLCALL SDL_GetWindowFlags(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_SetWindowTitle(SDL_Window * window,
const char *title);
extern DECLSPEC const char *SDLCALL SDL_GetWindowTitle(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_SetWindowIcon(SDL_Window * window,
SDL_Surface * icon);
extern DECLSPEC void* SDLCALL SDL_SetWindowData(SDL_Window * window,
const char *name,
void *userdata);
extern DECLSPEC void *SDLCALL SDL_GetWindowData(SDL_Window * window,
const char *name);
extern DECLSPEC void SDLCALL SDL_SetWindowPosition(SDL_Window * window,
int x, int y);
extern DECLSPEC void SDLCALL SDL_GetWindowPosition(SDL_Window * window,
int *x, int *y);
extern DECLSPEC void SDLCALL SDL_SetWindowSize(SDL_Window * window, int w,
int h);
extern DECLSPEC void SDLCALL SDL_GetWindowSize(SDL_Window * window, int *w,
int *h);
extern DECLSPEC int SDLCALL SDL_GetWindowBordersSize(SDL_Window * window,
int *top, int *left,
int *bottom, int *right);
extern DECLSPEC void SDLCALL SDL_SetWindowMinimumSize(SDL_Window * window,
int min_w, int min_h);
extern DECLSPEC void SDLCALL SDL_GetWindowMinimumSize(SDL_Window * window,
int *w, int *h);
extern DECLSPEC void SDLCALL SDL_SetWindowMaximumSize(SDL_Window * window,
int max_w, int max_h);
extern DECLSPEC void SDLCALL SDL_GetWindowMaximumSize(SDL_Window * window,
int *w, int *h);
extern DECLSPEC void SDLCALL SDL_SetWindowBordered(SDL_Window * window,
SDL_bool bordered);
extern DECLSPEC void SDLCALL SDL_SetWindowResizable(SDL_Window * window,
SDL_bool resizable);
extern DECLSPEC void SDLCALL SDL_ShowWindow(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_HideWindow(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_RaiseWindow(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_MaximizeWindow(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_MinimizeWindow(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_RestoreWindow(SDL_Window * window);
extern DECLSPEC int SDLCALL SDL_SetWindowFullscreen(SDL_Window * window,
Uint32 flags);
extern DECLSPEC SDL_Surface * SDLCALL SDL_GetWindowSurface(SDL_Window * window);
extern DECLSPEC int SDLCALL SDL_UpdateWindowSurface(SDL_Window * window);
extern DECLSPEC int SDLCALL SDL_UpdateWindowSurfaceRects(SDL_Window * window,
const SDL_Rect * rects,
int numrects);
extern DECLSPEC void SDLCALL SDL_SetWindowGrab(SDL_Window * window,
SDL_bool grabbed);
extern DECLSPEC SDL_bool SDLCALL SDL_GetWindowGrab(SDL_Window * window);
extern DECLSPEC SDL_Window * SDLCALL SDL_GetGrabbedWindow(void);
extern DECLSPEC int SDLCALL SDL_SetWindowBrightness(SDL_Window * window, float brightness);
extern DECLSPEC float SDLCALL SDL_GetWindowBrightness(SDL_Window * window);
extern DECLSPEC int SDLCALL SDL_SetWindowOpacity(SDL_Window * window, float opacity);
extern DECLSPEC int SDLCALL SDL_GetWindowOpacity(SDL_Window * window, float * out_opacity);
extern DECLSPEC int SDLCALL SDL_SetWindowModalFor(SDL_Window * modal_window, SDL_Window * parent_window);
extern DECLSPEC int SDLCALL SDL_SetWindowInputFocus(SDL_Window * window);
extern DECLSPEC int SDLCALL SDL_SetWindowGammaRamp(SDL_Window * window,
const Uint16 * red,
const Uint16 * green,
const Uint16 * blue);
extern DECLSPEC int SDLCALL SDL_GetWindowGammaRamp(SDL_Window * window,
Uint16 * red,
Uint16 * green,
Uint16 * blue);
typedef enum
SDL_HitTestResult;
typedef SDL_HitTestResult (SDLCALL *SDL_HitTest)(SDL_Window *win,
const SDL_Point *area,
void *data);
extern DECLSPEC int SDLCALL SDL_SetWindowHitTest(SDL_Window * window,
SDL_HitTest callback,
void *callback_data);
extern DECLSPEC void SDLCALL SDL_DestroyWindow(SDL_Window * window);
extern DECLSPEC SDL_bool SDLCALL SDL_IsScreenSaverEnabled(void);
extern DECLSPEC void SDLCALL SDL_EnableScreenSaver(void);
extern DECLSPEC void SDLCALL SDL_DisableScreenSaver(void);
extern DECLSPEC int SDLCALL SDL_GL_LoadLibrary(const char *path);
extern DECLSPEC void *SDLCALL SDL_GL_GetProcAddress(const char *proc);
extern DECLSPEC void SDLCALL SDL_GL_UnloadLibrary(void);
extern DECLSPEC SDL_bool SDLCALL SDL_GL_ExtensionSupported(const char
*extension);
extern DECLSPEC void SDLCALL SDL_GL_ResetAttributes(void);
extern DECLSPEC int SDLCALL SDL_GL_SetAttribute(SDL_GLattr attr, int value);
extern DECLSPEC int SDLCALL SDL_GL_GetAttribute(SDL_GLattr attr, int *value);
extern DECLSPEC SDL_GLContext SDLCALL SDL_GL_CreateContext(SDL_Window *
window);
extern DECLSPEC int SDLCALL SDL_GL_MakeCurrent(SDL_Window * window,
SDL_GLContext context);
extern DECLSPEC SDL_Window* SDLCALL SDL_GL_GetCurrentWindow(void);
extern DECLSPEC SDL_GLContext SDLCALL SDL_GL_GetCurrentContext(void);
extern DECLSPEC void SDLCALL SDL_GL_GetDrawableSize(SDL_Window * window, int *w,
int *h);
extern DECLSPEC int SDLCALL SDL_GL_SetSwapInterval(int interval);
extern DECLSPEC int SDLCALL SDL_GL_GetSwapInterval(void);
extern DECLSPEC void SDLCALL SDL_GL_SwapWindow(SDL_Window * window);
extern DECLSPEC void SDLCALL SDL_GL_DeleteContext(SDL_GLContext context);
