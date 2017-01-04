#define _SDL_surface_h
#define SDL_SWSURFACE       0
#define SDL_PREALLOC        0x00000001
#define SDL_RLEACCEL        0x00000002
#define SDL_DONTFREE        0x00000004
#define SDL_MUSTLOCK(S) (((S)->flags & SDL_RLEACCEL) != 0)
typedef struct SDL_Surface
SDL_Surface;
typedef int (*SDL_blit) (struct SDL_Surface * src, SDL_Rect * srcrect,
struct SDL_Surface * dst, SDL_Rect * dstrect);
extern DECLSPEC SDL_Surface *SDLCALL SDL_CreateRGBSurface
(Uint32 flags, int width, int height, int depth,
Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern DECLSPEC SDL_Surface *SDLCALL SDL_CreateRGBSurfaceWithFormat
(Uint32 flags, int width, int height, int depth, Uint32 format);
extern DECLSPEC SDL_Surface *SDLCALL SDL_CreateRGBSurfaceFrom(void *pixels,
int width,
int height,
int depth,
int pitch,
Uint32 Rmask,
Uint32 Gmask,
Uint32 Bmask,
Uint32 Amask);
extern DECLSPEC SDL_Surface *SDLCALL SDL_CreateRGBSurfaceWithFormatFrom
(void *pixels, int width, int height, int depth, int pitch, Uint32 format);
extern DECLSPEC void SDLCALL SDL_FreeSurface(SDL_Surface * surface);
extern DECLSPEC int SDLCALL SDL_SetSurfacePalette(SDL_Surface * surface,
SDL_Palette * palette);
extern DECLSPEC int SDLCALL SDL_LockSurface(SDL_Surface * surface);
extern DECLSPEC void SDLCALL SDL_UnlockSurface(SDL_Surface * surface);
extern DECLSPEC SDL_Surface *SDLCALL SDL_LoadBMP_RW(SDL_RWops * src,
int freesrc);
#define SDL_LoadBMP(file)   SDL_LoadBMP_RW(SDL_RWFromFile(file, "rb"), 1)
extern DECLSPEC int SDLCALL SDL_SaveBMP_RW
(SDL_Surface * surface, SDL_RWops * dst, int freedst);
#define SDL_SaveBMP(surface, file) \
SDL_SaveBMP_RW(surface, SDL_RWFromFile(file, "wb"), 1)
extern DECLSPEC int SDLCALL SDL_SetSurfaceRLE(SDL_Surface * surface,
int flag);
extern DECLSPEC int SDLCALL SDL_SetColorKey(SDL_Surface * surface,
int flag, Uint32 key);
extern DECLSPEC int SDLCALL SDL_GetColorKey(SDL_Surface * surface,
Uint32 * key);
extern DECLSPEC int SDLCALL SDL_SetSurfaceColorMod(SDL_Surface * surface,
Uint8 r, Uint8 g, Uint8 b);
extern DECLSPEC int SDLCALL SDL_GetSurfaceColorMod(SDL_Surface * surface,
Uint8 * r, Uint8 * g,
Uint8 * b);
extern DECLSPEC int SDLCALL SDL_SetSurfaceAlphaMod(SDL_Surface * surface,
Uint8 alpha);
extern DECLSPEC int SDLCALL SDL_GetSurfaceAlphaMod(SDL_Surface * surface,
Uint8 * alpha);
extern DECLSPEC int SDLCALL SDL_SetSurfaceBlendMode(SDL_Surface * surface,
SDL_BlendMode blendMode);
extern DECLSPEC int SDLCALL SDL_GetSurfaceBlendMode(SDL_Surface * surface,
SDL_BlendMode *blendMode);
extern DECLSPEC SDL_bool SDLCALL SDL_SetClipRect(SDL_Surface * surface,
const SDL_Rect * rect);
extern DECLSPEC void SDLCALL SDL_GetClipRect(SDL_Surface * surface,
SDL_Rect * rect);
extern DECLSPEC SDL_Surface *SDLCALL SDL_ConvertSurface
(SDL_Surface * src, const SDL_PixelFormat * fmt, Uint32 flags);
extern DECLSPEC SDL_Surface *SDLCALL SDL_ConvertSurfaceFormat
(SDL_Surface * src, Uint32 pixel_format, Uint32 flags);
extern DECLSPEC int SDLCALL SDL_ConvertPixels(int width, int height,
Uint32 src_format,
const void * src, int src_pitch,
Uint32 dst_format,
void * dst, int dst_pitch);
extern DECLSPEC int SDLCALL SDL_FillRect
(SDL_Surface * dst, const SDL_Rect * rect, Uint32 color);
extern DECLSPEC int SDLCALL SDL_FillRects
(SDL_Surface * dst, const SDL_Rect * rects, int count, Uint32 color);
#define SDL_BlitSurface SDL_UpperBlit
extern DECLSPEC int SDLCALL SDL_UpperBlit
(SDL_Surface * src, const SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect);
extern DECLSPEC int SDLCALL SDL_LowerBlit
(SDL_Surface * src, SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect);
extern DECLSPEC int SDLCALL SDL_SoftStretch(SDL_Surface * src,
const SDL_Rect * srcrect,
SDL_Surface * dst,
const SDL_Rect * dstrect);
#define SDL_BlitScaled SDL_UpperBlitScaled
extern DECLSPEC int SDLCALL SDL_UpperBlitScaled
(SDL_Surface * src, const SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect);
extern DECLSPEC int SDLCALL SDL_LowerBlitScaled
(SDL_Surface * src, SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect);
