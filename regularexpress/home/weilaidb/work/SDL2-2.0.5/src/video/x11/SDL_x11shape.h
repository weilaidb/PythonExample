#define _SDL_x11shape_h
typedef struct  SDL_ShapeData;
extern SDL_Window* X11_CreateShapedWindow(const char *title,unsigned int x,unsigned int y,unsigned int w,unsigned int h,Uint32 flags);
extern SDL_WindowShaper* X11_CreateShaper(SDL_Window* window);
extern int X11_ResizeWindowShape(SDL_Window* window);
extern int X11_SetWindowShape(SDL_WindowShaper *shaper,SDL_Surface *shape,SDL_WindowShapeMode *shapeMode);
