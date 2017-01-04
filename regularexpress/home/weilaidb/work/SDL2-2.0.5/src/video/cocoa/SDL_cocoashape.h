#define _SDL_cocoashape_h
typedef struct  SDL_ShapeData;
extern SDL_WindowShaper* Cocoa_CreateShaper(SDL_Window* window);
extern int Cocoa_SetWindowShape(SDL_WindowShaper *shaper,SDL_Surface *shape,SDL_WindowShapeMode *shape_mode);
extern int Cocoa_ResizeWindowShape(SDL_Window *window);
