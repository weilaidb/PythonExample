#if SDL_VIDEO_DRIVER_X11
SDL_Window*
X11_CreateShapedWindow(const char *title,unsigned int x,unsigned int y,unsigned int w,unsigned int h,Uint32 flags)
SDL_WindowShaper*
X11_CreateShaper(SDL_Window* window)
int
X11_ResizeWindowShape(SDL_Window* window)
int
X11_SetWindowShape(SDL_WindowShaper *shaper,SDL_Surface *shape,SDL_WindowShapeMode *shape_mode)
