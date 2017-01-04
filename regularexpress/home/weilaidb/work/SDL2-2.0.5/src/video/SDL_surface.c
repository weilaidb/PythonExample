SDL_Surface *
SDL_CreateRGBSurfaceWithFormat(Uint32 flags, int width, int height, int depth,
Uint32 format)
SDL_Surface *
SDL_CreateRGBSurface(Uint32 flags,
int width, int height, int depth,
Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask)
SDL_Surface *
SDL_CreateRGBSurfaceFrom(void *pixels,
int width, int height, int depth, int pitch,
Uint32 Rmask, Uint32 Gmask, Uint32 Bmask,
Uint32 Amask)
SDL_Surface *
SDL_CreateRGBSurfaceWithFormatFrom(void *pixels,
int width, int height, int depth, int pitch,
Uint32 format)
int
SDL_SetSurfacePalette(SDL_Surface * surface, SDL_Palette * palette)
int
SDL_SetSurfaceRLE(SDL_Surface * surface, int flag)
int
SDL_SetColorKey(SDL_Surface * surface, int flag, Uint32 key)
int
SDL_GetColorKey(SDL_Surface * surface, Uint32 * key)
static void
SDL_ConvertColorkeyToAlpha(SDL_Surface * surface)
int
SDL_SetSurfaceColorMod(SDL_Surface * surface, Uint8 r, Uint8 g, Uint8 b)
int
SDL_GetSurfaceColorMod(SDL_Surface * surface, Uint8 * r, Uint8 * g, Uint8 * b)
int
SDL_SetSurfaceAlphaMod(SDL_Surface * surface, Uint8 alpha)
int
SDL_GetSurfaceAlphaMod(SDL_Surface * surface, Uint8 * alpha)
int
SDL_SetSurfaceBlendMode(SDL_Surface * surface, SDL_BlendMode blendMode)
int
SDL_GetSurfaceBlendMode(SDL_Surface * surface, SDL_BlendMode *blendMode)
SDL_bool
SDL_SetClipRect(SDL_Surface * surface, const SDL_Rect * rect)
void
SDL_GetClipRect(SDL_Surface * surface, SDL_Rect * rect)
int
SDL_LowerBlit(SDL_Surface * src, SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect)
int
SDL_UpperBlit(SDL_Surface * src, const SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect)
int
SDL_UpperBlitScaled(SDL_Surface * src, const SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect)
int
SDL_LowerBlitScaled(SDL_Surface * src, SDL_Rect * srcrect,
SDL_Surface * dst, SDL_Rect * dstrect)
int
SDL_LockSurface(SDL_Surface * surface)
void
SDL_UnlockSurface(SDL_Surface * surface)
SDL_Surface *
SDL_ConvertSurface(SDL_Surface * surface, const SDL_PixelFormat * format,
Uint32 flags)
SDL_Surface *
SDL_ConvertSurfaceFormat(SDL_Surface * surface, Uint32 pixel_format,
Uint32 flags)
static SDL_INLINE SDL_bool
SDL_CreateSurfaceOnStack(int width, int height, Uint32 pixel_format,
void * pixels, int pitch, SDL_Surface * surface,
SDL_PixelFormat * format, SDL_BlitMap * blitmap)
int SDL_ConvertPixels(int width, int height,
Uint32 src_format, const void * src, int src_pitch,
Uint32 dst_format, void * dst, int dst_pitch)
void
SDL_FreeSurface(SDL_Surface * surface)
