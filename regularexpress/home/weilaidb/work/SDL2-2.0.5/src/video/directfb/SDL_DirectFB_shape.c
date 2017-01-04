#if SDL_VIDEO_DRIVER_DIRECTFB
SDL_Window*
DirectFB_CreateShapedWindow(const char *title,unsigned int x,unsigned int y,unsigned int w,unsigned int h,Uint32 flags)
SDL_WindowShaper*
DirectFB_CreateShaper(SDL_Window* window)
int
DirectFB_ResizeWindowShape(SDL_Window* window)
int
DirectFB_SetWindowShape(SDL_WindowShaper *shaper,SDL_Surface *shape,SDL_WindowShapeMode *shape_mode)
