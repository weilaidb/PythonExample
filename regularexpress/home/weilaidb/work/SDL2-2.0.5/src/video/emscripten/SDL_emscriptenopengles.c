#if SDL_VIDEO_DRIVER_EMSCRIPTEN && SDL_VIDEO_OPENGL_EGL
#define LOAD_FUNC(NAME) _this->egl_data->NAME = NAME;
int
Emscripten_GLES_LoadLibrary(_THIS, const char *path)
void
Emscripten_GLES_DeleteContext(_THIS, SDL_GLContext context)
SDL_EGL_CreateContext_impl(Emscripten)
SDL_EGL_SwapWindow_impl(Emscripten)
SDL_EGL_MakeCurrent_impl(Emscripten)
void
Emscripten_GLES_GetDrawableSize(_THIS, SDL_Window * window, int * w, int * h)
