#define PYMACCONFIG_H
#if defined(__APPLE__)
# undef SIZEOF_LONG
# undef SIZEOF_PTHREAD_T
# undef SIZEOF_SIZE_T
# undef SIZEOF_TIME_T
# undef SIZEOF_VOID_P
# undef SIZEOF__BOOL
# undef SIZEOF_UINTPTR_T
# undef SIZEOF_PTHREAD_T
# undef WORDS_BIGENDIAN
# undef DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754
# undef DOUBLE_IS_BIG_ENDIAN_IEEE754
# undef DOUBLE_IS_LITTLE_ENDIAN_IEEE754
# undef HAVE_GCC_ASM_FOR_X87
#    undef VA_LIST_IS_ARRAY
#    if defined(__LP64__) && defined(__x86_64__)
#        define VA_LIST_IS_ARRAY 1
#    endif
#    undef HAVE_LARGEFILE_SUPPORT
#    ifndef __LP64__
#         define HAVE_LARGEFILE_SUPPORT 1
#    endif
#    undef SIZEOF_LONG
#    ifdef __LP64__
#        define SIZEOF__BOOL            1
#        define SIZEOF__BOOL            1
#        define SIZEOF_LONG             8
#        define SIZEOF_PTHREAD_T        8
#        define SIZEOF_SIZE_T           8
#        define SIZEOF_TIME_T           8
#        define SIZEOF_VOID_P           8
#        define SIZEOF_UINTPTR_T        8
#        define SIZEOF_PTHREAD_T        8
#    else
#        ifdef __ppc__
#           define SIZEOF__BOOL         4
#        else
#           define SIZEOF__BOOL         1
#        endif
#        define SIZEOF_LONG             4
#        define SIZEOF_PTHREAD_T        4
#        define SIZEOF_SIZE_T           4
#        define SIZEOF_TIME_T           4
#        define SIZEOF_VOID_P           4
#        define SIZEOF_UINTPTR_T        4
#        define SIZEOF_PTHREAD_T        4
#    endif
#    if defined(__LP64__)
#       undef SETPGRP_HAVE_ARG
#    endif
#define WORDS_BIGENDIAN 1
#define DOUBLE_IS_BIG_ENDIAN_IEEE754
#define DOUBLE_IS_LITTLE_ENDIAN_IEEE754
# define HAVE_GCC_ASM_FOR_X87
#undef  PY_FORMAT_SIZE_T
