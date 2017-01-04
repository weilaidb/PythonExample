#define AVS_CAPI_H
#  define AVSC_CC __cdecl
#  define AVSC_CC __stdcall
#define AVSC_INLINE static __inline
#  define AVSC_EXPORT EXTERN_C
#  define AVSC_API(ret, name) EXTERN_C __declspec(dllexport) ret AVSC_CC name
#  define AVSC_EXPORT EXTERN_C __declspec(dllexport)
#  ifndef AVSC_NO_DECLSPEC
#    define AVSC_API(ret, name) EXTERN_C __declspec(dllimport) ret AVSC_CC name
#  else
#    define AVSC_API(ret, name) typedef ret (AVSC_CC *name##_func)
#  endif
