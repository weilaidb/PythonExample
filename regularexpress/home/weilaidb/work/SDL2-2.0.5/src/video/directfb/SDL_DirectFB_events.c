#if SDL_VIDEO_DRIVER_DIRECTFB
#if USE_MULTI_API
#define SDL_SendMouseMotion_ex(w, id, relative, x, y, p) SDL_SendMouseMotion(w, id, relative, x, y, p)
#define SDL_SendMouseButton_ex(w, id, state, button) SDL_SendMouseButton(w, id, state, button)
#define SDL_SendKeyboardKey_ex(id, state, scancode) SDL_SendKeyboardKey(id, state, scancode)
#define SDL_SendKeyboardText_ex(id, text) SDL_SendKeyboardText(id, text)
#define SDL_SendMouseMotion_ex(w, id, relative, x, y, p) SDL_SendMouseMotion(w, id, relative, x, y)
#define SDL_SendMouseButton_ex(w, id, state, button) SDL_SendMouseButton(w, id, state, button)
#define SDL_SendKeyboardKey_ex(id, state, scancode) SDL_SendKeyboardKey(state, scancode)
#define SDL_SendKeyboardText_ex(id, text) SDL_SendKeyboardText(text)
typedef struct _cb_data cb_data;
struct _cb_data
;
static SDL_Scancode oskeymap[256];
static SDL_Keysym *DirectFB_TranslateKey(_THIS, DFBWindowEvent * evt,
SDL_Keysym * keysym, Uint32 *unicode);
static SDL_Keysym *DirectFB_TranslateKeyInputEvent(_THIS, DFBInputEvent * evt,
SDL_Keysym * keysym, Uint32 *unicode);
static void DirectFB_InitOSKeymap(_THIS, SDL_Scancode * keypmap, int numkeys);
static int DirectFB_TranslateButton(DFBInputDeviceButtonIdentifier button);
static void UnicodeToUtf8( Uint16 w , char *utf8buf)
static void
FocusAllMice(_THIS, SDL_Window *window)
static void
FocusAllKeyboards(_THIS, SDL_Window *window)
static void
MotionAllMice(_THIS, int x, int y)
static int
KbdIndex(_THIS, int id)
static int
ClientXY(DFB_WindowData * p, int *x, int *y)
static void
ProcessWindowEvent(_THIS, SDL_Window *sdlwin, DFBWindowEvent * evt)
static void
ProcessInputEvent(_THIS, DFBInputEvent * ievt)
void
DirectFB_PumpEventsWindow(_THIS)
void
DirectFB_InitOSKeymap(_THIS, SDL_Scancode * keymap, int numkeys)
static SDL_Keysym *
DirectFB_TranslateKey(_THIS, DFBWindowEvent * evt, SDL_Keysym * keysym, Uint32 *unicode)
static SDL_Keysym *
DirectFB_TranslateKeyInputEvent(_THIS, DFBInputEvent * evt,
SDL_Keysym * keysym, Uint32 *unicode)
static int
DirectFB_TranslateButton(DFBInputDeviceButtonIdentifier button)
static DFBEnumerationResult
EnumKeyboards(DFBInputDeviceID device_id,
DFBInputDeviceDescription desc, void *callbackdata)
void
DirectFB_InitKeyboard(_THIS)
void
DirectFB_QuitKeyboard(_THIS)
