#if defined(__GNUC__) && defined(__i386__) && !defined(__MINGW32__)
#define FASTCALL __attribute__((regparm(3)))
#define PTRFASTCALL __attribute__((regparm(3)))
#define FASTCALL
#define PTRCALL
#define PTRFASTCALL
#if !defined(__cplusplus) && !defined(inline)
#define inline __inline
