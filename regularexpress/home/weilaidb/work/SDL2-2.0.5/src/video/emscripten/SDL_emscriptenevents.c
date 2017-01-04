#if SDL_VIDEO_DRIVER_EMSCRIPTEN
#define FULLSCREEN_MASK ( SDL_WINDOW_FULLSCREEN_DESKTOP | SDL_WINDOW_FULLSCREEN )
static const SDL_Scancode emscripten_scancode_table[] = ;
int
Emscripten_ConvertUTF32toUTF8(Uint32 codepoint, char * text)
EM_BOOL
Emscripten_HandleMouseMove(int eventType, const EmscriptenMouseEvent *mouseEvent, void *userData)
EM_BOOL
Emscripten_HandleMouseButton(int eventType, const EmscriptenMouseEvent *mouseEvent, void *userData)
EM_BOOL
Emscripten_HandleMouseFocus(int eventType, const EmscriptenMouseEvent *mouseEvent, void *userData)
EM_BOOL
Emscripten_HandleWheel(int eventType, const EmscriptenWheelEvent *wheelEvent, void *userData)
EM_BOOL
Emscripten_HandleFocus(int eventType, const EmscriptenFocusEvent *wheelEvent, void *userData)
EM_BOOL
Emscripten_HandleTouch(int eventType, const EmscriptenTouchEvent *touchEvent, void *userData)
EM_BOOL
Emscripten_HandleKey(int eventType, const EmscriptenKeyboardEvent *keyEvent, void *userData)
EM_BOOL
Emscripten_HandleKeyPress(int eventType, const EmscriptenKeyboardEvent *keyEvent, void *userData)
EM_BOOL
Emscripten_HandleFullscreenChange(int eventType, const EmscriptenFullscreenChangeEvent *fullscreenChangeEvent, void *userData)
EM_BOOL
Emscripten_HandleResize(int eventType, const EmscriptenUiEvent *uiEvent, void *userData)
EM_BOOL
Emscripten_HandleCanvasResize(int eventType, const void *reserved, void *userData)
EM_BOOL
Emscripten_HandleVisibilityChange(int eventType, const EmscriptenVisibilityChangeEvent *visEvent, void *userData)
void
Emscripten_RegisterEventHandlers(SDL_WindowData *data)
void
Emscripten_UnregisterEventHandlers(SDL_WindowData *data)
