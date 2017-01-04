#if SDL_VIDEO_OPENGL
#if SDL_VIDEO_OPENGL_ES
#if SDL_VIDEO_OPENGL_ES2 && !SDL_VIDEO_OPENGL
#define GL_CONTEXT_RELEASE_BEHAVIOR_KHR 0x82FB
#undef CreateWindow
static VideoBootStrap *bootstrap[] = ;
static SDL_VideoDevice *_this = NULL;
#define CHECK_WINDOW_MAGIC(window, retval) \
if (!_this)  \
if (!window || window->magic != &_this->window_magic)
#define CHECK_DISPLAY_INDEX(displayIndex, retval) \
if (!_this)  \
SDL_assert(_this->displays != NULL); \
if (displayIndex < 0 || displayIndex >= _this->num_displays)
#define FULLSCREEN_MASK (SDL_WINDOW_FULLSCREEN_DESKTOP | SDL_WINDOW_FULLSCREEN)
extern SDL_bool Cocoa_IsWindowInFullscreenSpace(SDL_Window * window);
extern SDL_bool Cocoa_SetWindowFullscreenSpace(SDL_Window * window, SDL_bool state);
#define SDL_WINDOWTEXTUREDATA   "_SDL_WindowTextureData"
typedef struct  SDL_WindowTextureData;
static SDL_bool
ShouldUseTextureFramebuffer()
static int
SDL_CreateWindowTexture(SDL_VideoDevice *unused, SDL_Window * window, Uint32 * format, void ** pixels, int *pitch)
static int
SDL_UpdateWindowTexture(SDL_VideoDevice *unused, SDL_Window * window, const SDL_Rect * rects, int numrects)
static void
SDL_DestroyWindowTexture(SDL_VideoDevice *unused, SDL_Window * window)
static int
cmpmodes(const void *A, const void *B)
static int
SDL_UninitializedVideo()
int
SDL_GetNumVideoDrivers(void)
const char *
SDL_GetVideoDriver(int index)
int
SDL_VideoInit(const char *driver_name)
const char *
SDL_GetCurrentVideoDriver()
SDL_VideoDevice *
SDL_GetVideoDevice(void)
int
SDL_AddBasicVideoDisplay(const SDL_DisplayMode * desktop_mode)
int
SDL_AddVideoDisplay(const SDL_VideoDisplay * display)
int
SDL_GetNumVideoDisplays(void)
static int
SDL_GetIndexOfDisplay(SDL_VideoDisplay *display)
void *
SDL_GetDisplayDriverData(int displayIndex)
const char *
SDL_GetDisplayName(int displayIndex)
int
SDL_GetDisplayBounds(int displayIndex, SDL_Rect * rect)
int SDL_GetDisplayUsableBounds(int displayIndex, SDL_Rect * rect)
int
SDL_GetDisplayDPI(int displayIndex, float * ddpi, float * hdpi, float * vdpi)
SDL_bool
SDL_AddDisplayMode(SDL_VideoDisplay * display,  const SDL_DisplayMode * mode)
static int
SDL_GetNumDisplayModesForDisplay(SDL_VideoDisplay * display)
int
SDL_GetNumDisplayModes(int displayIndex)
int
SDL_GetDisplayMode(int displayIndex, int index, SDL_DisplayMode * mode)
int
SDL_GetDesktopDisplayMode(int displayIndex, SDL_DisplayMode * mode)
int
SDL_GetCurrentDisplayMode(int displayIndex, SDL_DisplayMode * mode)
static SDL_DisplayMode *
SDL_GetClosestDisplayModeForDisplay(SDL_VideoDisplay * display,
const SDL_DisplayMode * mode,
SDL_DisplayMode * closest)
SDL_DisplayMode *
SDL_GetClosestDisplayMode(int displayIndex,
const SDL_DisplayMode * mode,
SDL_DisplayMode * closest)
static int
SDL_SetDisplayModeForDisplay(SDL_VideoDisplay * display, const SDL_DisplayMode * mode)
int
SDL_GetWindowDisplayIndex(SDL_Window * window)
SDL_VideoDisplay *
SDL_GetDisplayForWindow(SDL_Window *window)
int
SDL_SetWindowDisplayMode(SDL_Window * window, const SDL_DisplayMode * mode)
int
SDL_GetWindowDisplayMode(SDL_Window * window, SDL_DisplayMode * mode)
Uint32
SDL_GetWindowPixelFormat(SDL_Window * window)
static void
SDL_RestoreMousePosition(SDL_Window *window)
#if __WINRT__
extern Uint32 WINRT_DetectWindowFlags(SDL_Window * window);
static int
SDL_UpdateFullscreenMode(SDL_Window * window, SDL_bool fullscreen)
#define CREATE_FLAGS \
(SDL_WINDOW_OPENGL | SDL_WINDOW_BORDERLESS | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_ALWAYS_ON_TOP | SDL_WINDOW_SKIP_TASKBAR | SDL_WINDOW_POPUP_MENU | SDL_WINDOW_UTILITY | SDL_WINDOW_TOOLTIP)
static void
SDL_FinishWindowCreation(SDL_Window *window, Uint32 flags)
SDL_Window *
SDL_CreateWindow(const char *title, int x, int y, int w, int h, Uint32 flags)
SDL_Window *
SDL_CreateWindowFrom(const void *data)
int
SDL_RecreateWindow(SDL_Window * window, Uint32 flags)
Uint32
SDL_GetWindowID(SDL_Window * window)
SDL_Window *
SDL_GetWindowFromID(Uint32 id)
Uint32
SDL_GetWindowFlags(SDL_Window * window)
void
SDL_SetWindowTitle(SDL_Window * window, const char *title)
const char *
SDL_GetWindowTitle(SDL_Window * window)
void
SDL_SetWindowIcon(SDL_Window * window, SDL_Surface * icon)
void*
SDL_SetWindowData(SDL_Window * window, const char *name, void *userdata)
void *
SDL_GetWindowData(SDL_Window * window, const char *name)
void
SDL_SetWindowPosition(SDL_Window * window, int x, int y)
void
SDL_GetWindowPosition(SDL_Window * window, int *x, int *y)
void
SDL_SetWindowBordered(SDL_Window * window, SDL_bool bordered)
void
SDL_SetWindowResizable(SDL_Window * window, SDL_bool resizable)
void
SDL_SetWindowSize(SDL_Window * window, int w, int h)
void
SDL_GetWindowSize(SDL_Window * window, int *w, int *h)
void
SDL_SetWindowMinimumSize(SDL_Window * window, int min_w, int min_h)
int
SDL_GetWindowBordersSize(SDL_Window * window, int *top, int *left, int *bottom, int *right)
void
SDL_GetWindowMinimumSize(SDL_Window * window, int *min_w, int *min_h)
void
SDL_SetWindowMaximumSize(SDL_Window * window, int max_w, int max_h)
void
SDL_GetWindowMaximumSize(SDL_Window * window, int *max_w, int *max_h)
void
SDL_ShowWindow(SDL_Window * window)
void
SDL_HideWindow(SDL_Window * window)
void
SDL_RaiseWindow(SDL_Window * window)
void
SDL_MaximizeWindow(SDL_Window * window)
void
SDL_MinimizeWindow(SDL_Window * window)
void
SDL_RestoreWindow(SDL_Window * window)
int
SDL_SetWindowFullscreen(SDL_Window * window, Uint32 flags)
static SDL_Surface *
SDL_CreateWindowFramebuffer(SDL_Window * window)
SDL_Surface *
SDL_GetWindowSurface(SDL_Window * window)
int
SDL_UpdateWindowSurface(SDL_Window * window)
int
SDL_UpdateWindowSurfaceRects(SDL_Window * window, const SDL_Rect * rects,
int numrects)
int
SDL_SetWindowBrightness(SDL_Window * window, float brightness)
float
SDL_GetWindowBrightness(SDL_Window * window)
int
SDL_SetWindowOpacity(SDL_Window * window, float opacity)
int
SDL_GetWindowOpacity(SDL_Window * window, float * out_opacity)
int
SDL_SetWindowModalFor(SDL_Window * modal_window, SDL_Window * parent_window)
int
SDL_SetWindowInputFocus(SDL_Window * window)
int
SDL_SetWindowGammaRamp(SDL_Window * window, const Uint16 * red,
const Uint16 * green,
const Uint16 * blue)
int
SDL_GetWindowGammaRamp(SDL_Window * window, Uint16 * red,
Uint16 * green,
Uint16 * blue)
void
SDL_UpdateWindowGrab(SDL_Window * window)
void
SDL_SetWindowGrab(SDL_Window * window, SDL_bool grabbed)
SDL_bool
SDL_GetWindowGrab(SDL_Window * window)
SDL_Window *
SDL_GetGrabbedWindow(void)
void
SDL_OnWindowShown(SDL_Window * window)
void
SDL_OnWindowHidden(SDL_Window * window)
void
SDL_OnWindowResized(SDL_Window * window)
void
SDL_OnWindowMinimized(SDL_Window * window)
void
SDL_OnWindowRestored(SDL_Window * window)
void
SDL_OnWindowEnter(SDL_Window * window)
void
SDL_OnWindowLeave(SDL_Window * window)
void
SDL_OnWindowFocusGained(SDL_Window * window)
static SDL_bool
ShouldMinimizeOnFocusLoss(SDL_Window * window)
void
SDL_OnWindowFocusLost(SDL_Window * window)
SDL_Window *
SDL_GetFocusWindow(void)
void
SDL_DestroyWindow(SDL_Window * window)
SDL_bool
SDL_IsScreenSaverEnabled()
void
SDL_EnableScreenSaver()
void
SDL_DisableScreenSaver()
void
SDL_VideoQuit(void)
int
SDL_GL_LoadLibrary(const char *path)
void *
SDL_GL_GetProcAddress(const char *proc)
void
SDL_GL_UnloadLibrary(void)
static SDL_INLINE SDL_bool
isAtLeastGL3(const char *verstr)
SDL_bool
SDL_GL_ExtensionSupported(const char *extension)
void
SDL_GL_ResetAttributes()
int
SDL_GL_SetAttribute(SDL_GLattr attr, int value)
int
SDL_GL_GetAttribute(SDL_GLattr attr, int *value)
SDL_GLContext
SDL_GL_CreateContext(SDL_Window * window)
int
SDL_GL_MakeCurrent(SDL_Window * window, SDL_GLContext ctx)
SDL_Window *
SDL_GL_GetCurrentWindow(void)
SDL_GLContext
SDL_GL_GetCurrentContext(void)
void SDL_GL_GetDrawableSize(SDL_Window * window, int *w, int *h)
int
SDL_GL_SetSwapInterval(int interval)
int
SDL_GL_GetSwapInterval(void)
void
SDL_GL_SwapWindow(SDL_Window * window)
void
SDL_GL_DeleteContext(SDL_GLContext context)
SDL_bool
SDL_GetWindowWMInfo(SDL_Window * window, struct SDL_SysWMinfo *info)
void
SDL_StartTextInput(void)
SDL_bool
SDL_IsTextInputActive(void)
void
SDL_StopTextInput(void)
void
SDL_SetTextInputRect(SDL_Rect *rect)
SDL_bool
SDL_HasScreenKeyboardSupport(void)
SDL_bool
SDL_IsScreenKeyboardShown(SDL_Window *window)
#if SDL_VIDEO_DRIVER_ANDROID
#if SDL_VIDEO_DRIVER_WINDOWS
#if SDL_VIDEO_DRIVER_WINRT
#if SDL_VIDEO_DRIVER_COCOA
#if SDL_VIDEO_DRIVER_UIKIT
#if SDL_VIDEO_DRIVER_X11
SDL_UNUSED static SDL_bool SDL_MessageboxValidForDriver(const SDL_MessageBoxData *messageboxdata, SDL_SYSWM_TYPE drivertype)
int
SDL_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid)
int
SDL_ShowSimpleMessageBox(Uint32 flags, const char *title, const char *message, SDL_Window *window)
SDL_bool
SDL_ShouldAllowTopmost(void)
int
SDL_SetWindowHitTest(SDL_Window * window, SDL_HitTest callback, void *userdata)
float SDL_ComputeDiagonalDPI(int hpix, int vpix, float hinches, float vinches)
