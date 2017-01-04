#define _SDL_rect_h
typedef struct SDL_Point
SDL_Point;
typedef struct SDL_Rect
SDL_Rect;
SDL_FORCE_INLINE SDL_bool SDL_PointInRect(const SDL_Point *p, const SDL_Rect *r)
SDL_FORCE_INLINE SDL_bool SDL_RectEmpty(const SDL_Rect *r)
SDL_FORCE_INLINE SDL_bool SDL_RectEquals(const SDL_Rect *a, const SDL_Rect *b)
extern DECLSPEC SDL_bool SDLCALL SDL_HasIntersection(const SDL_Rect * A,
const SDL_Rect * B);
extern DECLSPEC SDL_bool SDLCALL SDL_IntersectRect(const SDL_Rect * A,
const SDL_Rect * B,
SDL_Rect * result);
extern DECLSPEC void SDLCALL SDL_UnionRect(const SDL_Rect * A,
const SDL_Rect * B,
SDL_Rect * result);
extern DECLSPEC SDL_bool SDLCALL SDL_EnclosePoints(const SDL_Point * points,
int count,
const SDL_Rect * clip,
SDL_Rect * result);
extern DECLSPEC SDL_bool SDLCALL SDL_IntersectRectAndLine(const SDL_Rect *
rect, int *X1,
int *Y1, int *X2,
int *Y2);
