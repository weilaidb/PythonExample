#define _SDL_shape_internals_h
typedef struct  SDL_QuadTreeChildren;
typedef union  SDL_ShapeUnion;
typedef enum  SDL_ShapeKind;
typedef struct  SDL_ShapeTree;
typedef void(*SDL_TraversalFunction)(SDL_ShapeTree*,void*);
extern void SDL_CalculateShapeBitmap(SDL_WindowShapeMode mode,SDL_Surface *shape,Uint8* bitmap,Uint8 ppb);
extern SDL_ShapeTree* SDL_CalculateShapeTree(SDL_WindowShapeMode mode,SDL_Surface* shape);
extern void SDL_TraverseShapeTree(SDL_ShapeTree *tree,SDL_TraversalFunction function,void* closure);
extern void SDL_FreeShapeTree(SDL_ShapeTree** shape_tree);
