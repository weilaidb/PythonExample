#define _SDL_endian_h
#define SDL_LIL_ENDIAN  1234
#define SDL_BIG_ENDIAN  4321
#define SDL_BYTEORDER  __BYTE_ORDER
#if defined(__hppa__) || \
defined(__m68k__) || defined(mc68000) || defined(_M_M68K) || \
(defined(__MIPS__) && defined(__MISPEB__)) || \
defined(__ppc__) || defined(__POWERPC__) || defined(_M_PPC) || \
defined(__sparc__)
#define SDL_BYTEORDER   SDL_BIG_ENDIAN
#define SDL_BYTEORDER   SDL_LIL_ENDIAN
#if defined(__GNUC__) && defined(__i386__) && \
!(__GNUC__ == 2 && __GNUC_MINOR__ == 95)
SDL_FORCE_INLINE Uint16
SDL_Swap16(Uint16 x)
#elif defined(__GNUC__) && defined(__x86_64__)
SDL_FORCE_INLINE Uint16
SDL_Swap16(Uint16 x)
#elif defined(__GNUC__) && (defined(__powerpc__) || defined(__ppc__))
SDL_FORCE_INLINE Uint16
SDL_Swap16(Uint16 x)
#elif defined(__GNUC__) && (defined(__M68000__) || defined(__M68020__)) && !defined(__mcoldfire__)
SDL_FORCE_INLINE Uint16
SDL_Swap16(Uint16 x)
SDL_FORCE_INLINE Uint16
SDL_Swap16(Uint16 x)
#if defined(__GNUC__) && defined(__i386__)
SDL_FORCE_INLINE Uint32
SDL_Swap32(Uint32 x)
#elif defined(__GNUC__) && defined(__x86_64__)
SDL_FORCE_INLINE Uint32
SDL_Swap32(Uint32 x)
#elif defined(__GNUC__) && (defined(__powerpc__) || defined(__ppc__))
SDL_FORCE_INLINE Uint32
SDL_Swap32(Uint32 x)
#elif defined(__GNUC__) && (defined(__M68000__) || defined(__M68020__)) && !defined(__mcoldfire__)
SDL_FORCE_INLINE Uint32
SDL_Swap32(Uint32 x)
SDL_FORCE_INLINE Uint32
SDL_Swap32(Uint32 x)
#if defined(__GNUC__) && defined(__i386__)
SDL_FORCE_INLINE Uint64
SDL_Swap64(Uint64 x)
#elif defined(__GNUC__) && defined(__x86_64__)
SDL_FORCE_INLINE Uint64
SDL_Swap64(Uint64 x)
SDL_FORCE_INLINE Uint64
SDL_Swap64(Uint64 x)
SDL_FORCE_INLINE float
SDL_SwapFloat(float x)
#if SDL_BYTEORDER == SDL_LIL_ENDIAN
#define SDL_SwapLE16(X) (X)
#define SDL_SwapLE32(X) (X)
#define SDL_SwapLE64(X) (X)
#define SDL_SwapFloatLE(X)  (X)
#define SDL_SwapBE16(X) SDL_Swap16(X)
#define SDL_SwapBE32(X) SDL_Swap32(X)
#define SDL_SwapBE64(X) SDL_Swap64(X)
#define SDL_SwapFloatBE(X)  SDL_SwapFloat(X)
#define SDL_SwapLE16(X) SDL_Swap16(X)
#define SDL_SwapLE32(X) SDL_Swap32(X)
#define SDL_SwapLE64(X) SDL_Swap64(X)
#define SDL_SwapFloatLE(X)  SDL_SwapFloat(X)
#define SDL_SwapBE16(X) (X)
#define SDL_SwapBE32(X) (X)
#define SDL_SwapBE64(X) (X)
#define SDL_SwapFloatBE(X)  (X)
