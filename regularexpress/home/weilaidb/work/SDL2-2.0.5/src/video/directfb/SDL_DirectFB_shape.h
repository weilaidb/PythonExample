#define _SDL_DirectFB_shape_h
typedef struct  SDL_ShapeData;
extern SDL_Window* DirectFB_CreateShapedWindow(const char *title,unsigned int x,unsigned int y,unsigned int w,unsigned int h,Uint32 flags);
extern SDL_WindowShaper* DirectFB_CreateShaper(SDL_Window* window);
extern int DirectFB_ResizeWindowShape(SDL_Window* window);
extern int DirectFB_SetWindowShape(SDL_WindowShaper *shaper,SDL_Surface *shape,SDL_WindowShapeMode *shapeMode);
