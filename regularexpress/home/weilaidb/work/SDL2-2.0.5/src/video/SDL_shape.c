SDL_Window*
SDL_CreateShapedWindow(const char *title,unsigned int x,unsigned int y,unsigned int w,unsigned int h,Uint32 flags)
SDL_bool
SDL_IsShapedWindow(const SDL_Window *window)
void
SDL_CalculateShapeBitmap(SDL_WindowShapeMode mode,SDL_Surface *shape,Uint8* bitmap,Uint8 ppb)
static SDL_ShapeTree*
RecursivelyCalculateShapeTree(SDL_WindowShapeMode mode,SDL_Surface* mask,SDL_Rect dimensions)
SDL_ShapeTree*
SDL_CalculateShapeTree(SDL_WindowShapeMode mode,SDL_Surface* shape)
void
SDL_TraverseShapeTree(SDL_ShapeTree *tree,SDL_TraversalFunction function,void* closure)
void
SDL_FreeShapeTree(SDL_ShapeTree** shape_tree)
int
SDL_SetWindowShape(SDL_Window *window,SDL_Surface *shape,SDL_WindowShapeMode *shape_mode)
static SDL_bool
SDL_WindowHasAShape(SDL_Window *window)
int
SDL_GetShapedWindowMode(SDL_Window *window,SDL_WindowShapeMode *shape_mode)
