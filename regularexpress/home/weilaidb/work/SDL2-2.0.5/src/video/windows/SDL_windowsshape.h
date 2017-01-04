#define _SDL_windowsshape_h
typedef struct  SDL_ShapeData;
extern SDL_WindowShaper* Win32_CreateShaper(SDL_Window * window);
extern int Win32_SetWindowShape(SDL_WindowShaper *shaper,SDL_Surface *shape,SDL_WindowShapeMode *shape_mode);
extern int Win32_ResizeWindowShape(SDL_Window *window);
