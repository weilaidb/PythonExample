#error Nested inclusion of begin_code.h
#define _begin_code_h
#  if (__GNUC__ >= 4)
#    define SDL_DEPRECATED __attribute__((deprecated))
#  else
#    define SDL_DEPRECATED
#  endif
#  ifdef __GNUC__
#    define SDL_UNUSED __attribute__((unused))
#  else
#    define SDL_UNUSED
#  endif
# if defined(__WIN32__) || defined(__WINRT__)
#  ifdef __BORLANDC__
#   ifdef BUILD_SDL
#    define DECLSPEC
#   else
#    define DECLSPEC    __declspec(dllimport)
#   endif
#  else
#   define DECLSPEC __declspec(dllexport)
#  endif
# else
#  if defined(__GNUC__) && __GNUC__ >= 4
#   define DECLSPEC __attribute__ ((visibility("default")))
#  else
#   define DECLSPEC
#  endif
# endif
#if (defined(__WIN32__) || defined(__WINRT__)) && !defined(__GNUC__)
#define SDLCALL __cdecl
#define SDLCALL
#undef DECLSPEC
#define DECLSPEC
#if defined(_MSC_VER) || defined(__MWERKS__) || defined(__BORLANDC__)
#if defined(__GNUC__)
#define SDL_INLINE __inline__
#elif defined(_MSC_VER) || defined(__BORLANDC__) || \
defined(__DMC__) || defined(__SC__) || \
defined(__WATCOMC__) || defined(__LCC__) || \
defined(__DECC)
#define SDL_INLINE __inline
#define __inline__ __inline
#define SDL_INLINE inline
#define __inline__ inline
#if defined(_MSC_VER)
#define SDL_FORCE_INLINE __forceinline
#elif ( (defined(__GNUC__) && (__GNUC__ >= 4)) || defined(__clang__) )
#define SDL_FORCE_INLINE __attribute__((always_inline)) static __inline__
#define SDL_FORCE_INLINE static SDL_INLINE
#if !defined(__MACH__)
