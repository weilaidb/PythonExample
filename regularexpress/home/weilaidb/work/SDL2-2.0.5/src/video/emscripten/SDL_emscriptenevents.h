#define _SDL_emscriptenevents_h
extern void
Emscripten_RegisterEventHandlers(SDL_WindowData *data);
extern void
Emscripten_UnregisterEventHandlers(SDL_WindowData *data);
extern int
Emscripten_HandleCanvasResize(int eventType, const void *reserved, void *userData);
