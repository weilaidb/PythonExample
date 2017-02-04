#define AVS_CAPI_H
#  define AVSC_CC __cdecl
#  define AVSC_CC __stdcall
#define AVSC_INLINE static __inline
#  define AVSC_EXPORT EXTERN_C
__declspec ret AVSC_CC name
__declspec
#  ifndef AVSC_NO_DECLSPEC
__declspec ret AVSC_CC name
#  else
AVSC_API typedef ret (AVSC_CC *name##_func)
#  endif
