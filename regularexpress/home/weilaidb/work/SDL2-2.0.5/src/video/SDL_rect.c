SDL_bool
SDL_HasIntersection(const SDL_Rect * A, const SDL_Rect * B)
SDL_bool
SDL_IntersectRect(const SDL_Rect * A, const SDL_Rect * B, SDL_Rect * result)
void
SDL_UnionRect(const SDL_Rect * A, const SDL_Rect * B, SDL_Rect * result)
SDL_bool
SDL_EnclosePoints(const SDL_Point * points, int count, const SDL_Rect * clip,
SDL_Rect * result)
#define CODE_BOTTOM 1
#define CODE_TOP    2
#define CODE_LEFT   4
#define CODE_RIGHT  8
static int
ComputeOutCode(const SDL_Rect * rect, int x, int y)
SDL_bool
SDL_IntersectRectAndLine(const SDL_Rect * rect, int *X1, int *Y1, int *X2,
int *Y2)
SDL_bool
SDL_GetSpanEnclosingRect(int width, int height,
int numrects, const SDL_Rect * rects, SDL_Rect *span)
