#define __CL_PLATFORM_H
#if defined(_WIN32)
#define CL_API_ENTRY
#define CL_API_CALL     __stdcall
#define CL_CALLBACK     __stdcall
#define CL_API_ENTRY
#define CL_API_CALL
#define CL_CALLBACK
#define CL_EXTENSION_WEAK_LINK       __attribute__((weak_import))
#define UNAVAILABLE_ATTRIBUTE
#define CL_API_SUFFIX__VERSION_1_0              AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER
#define CL_EXT_SUFFIX__VERSION_1_0              CL_EXTENSION_WEAK_LINK AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER
#define CL_API_SUFFIX__VERSION_1_0              UNAVAILABLE_ATTRIBUTE
#define CL_EXT_SUFFIX__VERSION_1_0              CL_EXTENSION_WEAK_LINK UNAVAILABLE_ATTRIBUTE
#define CL_API_SUFFIX__VERSION_1_1              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER
#define GCL_API_SUFFIX__VERSION_1_1             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER
#define CL_EXT_SUFFIX__VERSION_1_1              CL_EXTENSION_WEAK_LINK AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER
#define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED   CL_EXTENSION_WEAK_LINK AVAILABLE_MAC_OS_X_VERSION_10_6_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_7
#define CL_API_SUFFIX__VERSION_1_1              UNAVAILABLE_ATTRIBUTE
#define GCL_API_SUFFIX__VERSION_1_1             UNAVAILABLE_ATTRIBUTE
#define CL_EXT_SUFFIX__VERSION_1_1              CL_EXTENSION_WEAK_LINK UNAVAILABLE_ATTRIBUTE
#define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATE    CL_EXT_SUFFIX__VERSION_1_0
#define CL_API_SUFFIX__VERSION_1_2              AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER
#define GCL_API_SUFFIX__VERSION_1_2             AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER
#define CL_EXT_SUFFIX__VERSION_1_2              CL_EXTENSION_WEAK_LINK AVAILABLE_MAC_OS_X_VERSION_10_8_AND_LATER
#define CL_EXT_PREFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED   CL_EXTENSION_WEAK_LINK AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_8
#define CL_API_SUFFIX__VERSION_1_2              UNAVAILABLE_ATTRIBUTE
#define GCL_API_SUFFIX__VERSION_1_2             UNAVAILABLE_ATTRIBUTE
#define CL_EXT_SUFFIX__VERSION_1_2              CL_EXTENSION_WEAK_LINK UNAVAILABLE_ATTRIBUTE
#define CL_EXT_PREFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED   CL_EXT_SUFFIX__VERSION_1_1
#define CL_EXTENSION_WEAK_LINK
#define CL_API_SUFFIX__VERSION_1_0
#define CL_EXT_SUFFIX__VERSION_1_0
#define CL_API_SUFFIX__VERSION_1_1
#define CL_EXT_SUFFIX__VERSION_1_1
#define CL_API_SUFFIX__VERSION_1_2
#define CL_EXT_SUFFIX__VERSION_1_2
#define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED __attribute__((deprecated))
#define CL_EXT_PREFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED __attribute__((deprecated))
#define CL_EXT_PREFIX__VERSION_1_1_DEPRECATED
#elif _WIN32
#define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_0_DEPRECATED __declspec(deprecated)
#define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_1_DEPRECATED __declspec(deprecated)
#define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_0_DEPRECATED
#define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED
#define CL_EXT_PREFIX__VERSION_1_1_DEPRECATED
#if (defined (_WIN32) && defined(_MSC_VER))
typedef signed   __int8         cl_char;
typedef unsigned __int8         cl_uchar;
typedef signed   __int16        cl_short;
typedef unsigned __int16        cl_ushort;
typedef signed   __int32        cl_int;
typedef unsigned __int32        cl_uint;
typedef signed   __int64        cl_long;
typedef unsigned __int64        cl_ulong;
typedef unsigned __int16        cl_half;
typedef float                   cl_float;
typedef double                  cl_double;
#define CL_CHAR_BIT         8
#define CL_SCHAR_MAX        127
#define CL_SCHAR_MIN        (-127-1)
#define CL_CHAR_MAX         CL_SCHAR_MAX
#define CL_CHAR_MIN         CL_SCHAR_MIN
#define CL_UCHAR_MAX        255
#define CL_SHRT_MAX         32767
#define CL_SHRT_MIN         (-32767-1)
#define CL_USHRT_MAX        65535
#define CL_INT_MAX          2147483647
#define CL_INT_MIN          (-2147483647-1)
#define CL_UINT_MAX         0xffffffffU
#define CL_LONG_MAX         ((cl_long) 0x7FFFFFFFFFFFFFFFLL)
#define CL_LONG_MIN         ((cl_long) -0x7FFFFFFFFFFFFFFFLL - 1LL)
#define CL_ULONG_MAX        ((cl_ulong) 0xFFFFFFFFFFFFFFFFULL)
#define CL_FLT_DIG          6
#define CL_FLT_MANT_DIG     24
#define CL_FLT_MAX_10_EXP   +38
#define CL_FLT_MAX_EXP      +128
#define CL_FLT_MIN_10_EXP   -37
#define CL_FLT_MIN_EXP      -125
#define CL_FLT_RADIX        2
#define CL_FLT_MAX          340282346638528859811704183484516925440.0f
#define CL_FLT_MIN          1.175494350822287507969e-38f
#define CL_FLT_EPSILON      0x1.0p-23f
#define CL_DBL_DIG          15
#define CL_DBL_MANT_DIG     53
#define CL_DBL_MAX_10_EXP   +308
#define CL_DBL_MAX_EXP      +1024
#define CL_DBL_MIN_10_EXP   -307
#define CL_DBL_MIN_EXP      -1021
#define CL_DBL_RADIX        2
#define CL_DBL_MAX          179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
#define CL_DBL_MIN          2.225073858507201383090e-308
#define CL_DBL_EPSILON      2.220446049250313080847e-16
#define  CL_M_E             2.718281828459045090796
#define  CL_M_LOG2E         1.442695040888963387005
#define  CL_M_LOG10E        0.434294481903251816668
#define  CL_M_LN2           0.693147180559945286227
#define  CL_M_LN10          2.302585092994045901094
#define  CL_M_PI            3.141592653589793115998
#define  CL_M_PI_2          1.570796326794896557999
#define  CL_M_PI_4          0.785398163397448278999
#define  CL_M_1_PI          0.318309886183790691216
#define  CL_M_2_PI          0.636619772367581382433
#define  CL_M_2_SQRTPI      1.128379167095512558561
#define  CL_M_SQRT2         1.414213562373095145475
#define  CL_M_SQRT1_2       0.707106781186547572737
#define  CL_M_E_F           2.71828174591064f
#define  CL_M_LOG2E_F       1.44269502162933f
#define  CL_M_LOG10E_F      0.43429449200630f
#define  CL_M_LN2_F         0.69314718246460f
#define  CL_M_LN10_F        2.30258512496948f
#define  CL_M_PI_F          3.14159274101257f
#define  CL_M_PI_2_F        1.57079637050629f
#define  CL_M_PI_4_F        0.78539818525314f
#define  CL_M_1_PI_F        0.31830987334251f
#define  CL_M_2_PI_F        0.63661974668503f
#define  CL_M_2_SQRTPI_F    1.12837922573090f
#define  CL_M_SQRT2_F       1.41421353816986f
#define  CL_M_SQRT1_2_F     0.70710676908493f
#define CL_NAN              (CL_INFINITY - CL_INFINITY)
#define CL_HUGE_VALF        ((cl_float) 1e50)
#define CL_HUGE_VAL         ((cl_double) 1e500)
#define CL_MAXFLOAT         CL_FLT_MAX
#define CL_INFINITY         CL_HUGE_VALF
typedef int8_t          cl_char;
typedef uint8_t         cl_uchar;
typedef int16_t         cl_short    __attribute__((aligned(2)));
typedef uint16_t        cl_ushort   __attribute__((aligned(2)));
typedef int32_t         cl_int      __attribute__((aligned(4)));
typedef uint32_t        cl_uint     __attribute__((aligned(4)));
typedef int64_t         cl_long     __attribute__((aligned(8)));
typedef uint64_t        cl_ulong    __attribute__((aligned(8)));
typedef uint16_t        cl_half     __attribute__((aligned(2)));
typedef float           cl_float    __attribute__((aligned(4)));
typedef double          cl_double   __attribute__((aligned(8)));
#define CL_CHAR_BIT         8
#define CL_SCHAR_MAX        127
#define CL_SCHAR_MIN        (-127-1)
#define CL_CHAR_MAX         CL_SCHAR_MAX
#define CL_CHAR_MIN         CL_SCHAR_MIN
#define CL_UCHAR_MAX        255
#define CL_SHRT_MAX         32767
#define CL_SHRT_MIN         (-32767-1)
#define CL_USHRT_MAX        65535
#define CL_INT_MAX          2147483647
#define CL_INT_MIN          (-2147483647-1)
#define CL_UINT_MAX         0xffffffffU
#define CL_LONG_MAX         ((cl_long) 0x7FFFFFFFFFFFFFFFLL)
#define CL_LONG_MIN         ((cl_long) -0x7FFFFFFFFFFFFFFFLL - 1LL)
#define CL_ULONG_MAX        ((cl_ulong) 0xFFFFFFFFFFFFFFFFULL)
#define CL_FLT_DIG          6
#define CL_FLT_MANT_DIG     24
#define CL_FLT_MAX_10_EXP   +38
#define CL_FLT_MAX_EXP      +128
#define CL_FLT_MIN_10_EXP   -37
#define CL_FLT_MIN_EXP      -125
#define CL_FLT_RADIX        2
#define CL_FLT_MAX          0x1.fffffep127f
#define CL_FLT_MIN          0x1.0p-126f
#define CL_FLT_EPSILON      0x1.0p-23f
#define CL_DBL_DIG          15
#define CL_DBL_MANT_DIG     53
#define CL_DBL_MAX_10_EXP   +308
#define CL_DBL_MAX_EXP      +1024
#define CL_DBL_MIN_10_EXP   -307
#define CL_DBL_MIN_EXP      -1021
#define CL_DBL_RADIX        2
#define CL_DBL_MAX          0x1.fffffffffffffp1023
#define CL_DBL_MIN          0x1.0p-1022
#define CL_DBL_EPSILON      0x1.0p-52
#define  CL_M_E             2.718281828459045090796
#define  CL_M_LOG2E         1.442695040888963387005
#define  CL_M_LOG10E        0.434294481903251816668
#define  CL_M_LN2           0.693147180559945286227
#define  CL_M_LN10          2.302585092994045901094
#define  CL_M_PI            3.141592653589793115998
#define  CL_M_PI_2          1.570796326794896557999
#define  CL_M_PI_4          0.785398163397448278999
#define  CL_M_1_PI          0.318309886183790691216
#define  CL_M_2_PI          0.636619772367581382433
#define  CL_M_2_SQRTPI      1.128379167095512558561
#define  CL_M_SQRT2         1.414213562373095145475
#define  CL_M_SQRT1_2       0.707106781186547572737
#define  CL_M_E_F           2.71828174591064f
#define  CL_M_LOG2E_F       1.44269502162933f
#define  CL_M_LOG10E_F      0.43429449200630f
#define  CL_M_LN2_F         0.69314718246460f
#define  CL_M_LN10_F        2.30258512496948f
#define  CL_M_PI_F          3.14159274101257f
#define  CL_M_PI_2_F        1.57079637050629f
#define  CL_M_PI_4_F        0.78539818525314f
#define  CL_M_1_PI_F        0.31830987334251f
#define  CL_M_2_PI_F        0.63661974668503f
#define  CL_M_2_SQRTPI_F    1.12837922573090f
#define  CL_M_SQRT2_F       1.41421353816986f
#define  CL_M_SQRT1_2_F     0.70710676908493f
#if defined( __GNUC__ )
#define CL_HUGE_VALF     __builtin_huge_valf()
#define CL_HUGE_VAL      __builtin_huge_val()
#define CL_NAN           __builtin_nanf( "" )
#define CL_HUGE_VALF     ((cl_float) 1e50)
#define CL_HUGE_VAL      ((cl_double) 1e500)
float nanf( const char * );
#define CL_NAN           nanf( "" )
#define CL_MAXFLOAT         CL_FLT_MAX
#define CL_INFINITY         CL_HUGE_VALF
typedef unsigned int cl_GLuint;
typedef int          cl_GLint;
typedef unsigned int cl_GLenum;
#if defined( __VEC__ )
typedef vector unsigned char     __cl_uchar16;
typedef vector signed char       __cl_char16;
typedef vector unsigned short    __cl_ushort8;
typedef vector signed short      __cl_short8;
typedef vector unsigned int      __cl_uint4;
typedef vector signed int        __cl_int4;
typedef vector float             __cl_float4;
#define  __CL_UCHAR16__  1
#define  __CL_CHAR16__   1
#define  __CL_USHORT8__  1
#define  __CL_SHORT8__   1
#define  __CL_UINT4__    1
#define  __CL_INT4__     1
#define  __CL_FLOAT4__   1
#if defined( __SSE__ )
#if defined( __MINGW64__ )
#if defined( __GNUC__ )
typedef float __cl_float4   __attribute__((vector_size(16)));
typedef __m128 __cl_float4;
#define __CL_FLOAT4__   1
#if defined( __SSE2__ )
#if defined( __MINGW64__ )
#if defined( __GNUC__ )
typedef cl_uchar    __cl_uchar16    __attribute__((vector_size(16)));
typedef cl_char     __cl_char16     __attribute__((vector_size(16)));
typedef cl_ushort   __cl_ushort8    __attribute__((vector_size(16)));
typedef cl_short    __cl_short8     __attribute__((vector_size(16)));
typedef cl_uint     __cl_uint4      __attribute__((vector_size(16)));
typedef cl_int      __cl_int4       __attribute__((vector_size(16)));
typedef cl_ulong    __cl_ulong2     __attribute__((vector_size(16)));
typedef cl_long     __cl_long2      __attribute__((vector_size(16)));
typedef cl_double   __cl_double2    __attribute__((vector_size(16)));
typedef __m128i __cl_uchar16;
typedef __m128i __cl_char16;
typedef __m128i __cl_ushort8;
typedef __m128i __cl_short8;
typedef __m128i __cl_uint4;
typedef __m128i __cl_int4;
typedef __m128i __cl_ulong2;
typedef __m128i __cl_long2;
typedef __m128d __cl_double2;
#define __CL_UCHAR16__  1
#define __CL_CHAR16__   1
#define __CL_USHORT8__  1
#define __CL_SHORT8__   1
#define __CL_INT4__     1
#define __CL_UINT4__    1
#define __CL_ULONG2__   1
#define __CL_LONG2__    1
#define __CL_DOUBLE2__  1
#if defined( __MMX__ )
#if defined( __GNUC__ )
typedef cl_uchar    __cl_uchar8     __attribute__((vector_size(8)));
typedef cl_char     __cl_char8      __attribute__((vector_size(8)));
typedef cl_ushort   __cl_ushort4    __attribute__((vector_size(8)));
typedef cl_short    __cl_short4     __attribute__((vector_size(8)));
typedef cl_uint     __cl_uint2      __attribute__((vector_size(8)));
typedef cl_int      __cl_int2       __attribute__((vector_size(8)));
typedef cl_ulong    __cl_ulong1     __attribute__((vector_size(8)));
typedef cl_long     __cl_long1      __attribute__((vector_size(8)));
typedef cl_float    __cl_float2     __attribute__((vector_size(8)));
typedef __m64       __cl_uchar8;
typedef __m64       __cl_char8;
typedef __m64       __cl_ushort4;
typedef __m64       __cl_short4;
typedef __m64       __cl_uint2;
typedef __m64       __cl_int2;
typedef __m64       __cl_ulong1;
typedef __m64       __cl_long1;
typedef __m64       __cl_float2;
#define __CL_UCHAR8__   1
#define __CL_CHAR8__    1
#define __CL_USHORT4__  1
#define __CL_SHORT4__   1
#define __CL_INT2__     1
#define __CL_UINT2__    1
#define __CL_ULONG1__   1
#define __CL_LONG1__    1
#define __CL_FLOAT2__   1
#if defined( __AVX__ )
#if defined( __MINGW64__ )
#if defined( __GNUC__ )
typedef cl_float    __cl_float8     __attribute__((vector_size(32)));
typedef cl_double   __cl_double4    __attribute__((vector_size(32)));
typedef __m256      __cl_float8;
typedef __m256d     __cl_double4;
#define __CL_FLOAT8__   1
#define __CL_DOUBLE4__  1
#if defined( __GNUC__ )
#define CL_ALIGNED(_x)          __attribute__ ((aligned(_x)))
#elif defined( _WIN32) && (_MSC_VER)
#define CL_ALIGNED(_x)
#warning  Need to implement some method to align data here
#define  CL_ALIGNED(_x)
#if defined( __GNUC__) && ! defined( __STRICT_ANSI__ )
#define CL_HAS_NAMED_VECTOR_FIELDS 1
#define CL_HAS_HI_LO_VECTOR_FIELDS 1
typedef union
cl_char2;
typedef union
cl_char4;
typedef  cl_char4  cl_char3;
typedef union
cl_char8;
typedef union
cl_char16;
typedef union
cl_uchar2;
typedef union
cl_uchar4;
typedef  cl_uchar4  cl_uchar3;
typedef union
cl_uchar8;
typedef union
cl_uchar16;
typedef union
cl_short2;
typedef union
cl_short4;
typedef  cl_short4  cl_short3;
typedef union
cl_short8;
typedef union
cl_short16;
typedef union
cl_ushort2;
typedef union
cl_ushort4;
typedef  cl_ushort4  cl_ushort3;
typedef union
cl_ushort8;
typedef union
cl_ushort16;
typedef union
cl_int2;
typedef union
cl_int4;
typedef  cl_int4  cl_int3;
typedef union
cl_int8;
typedef union
cl_int16;
typedef union
cl_uint2;
typedef union
cl_uint4;
typedef  cl_uint4  cl_uint3;
typedef union
cl_uint8;
typedef union
cl_uint16;
typedef union
cl_long2;
typedef union
cl_long4;
typedef  cl_long4  cl_long3;
typedef union
cl_long8;
typedef union
cl_long16;
typedef union
cl_ulong2;
typedef union
cl_ulong4;
typedef  cl_ulong4  cl_ulong3;
typedef union
cl_ulong8;
typedef union
cl_ulong16;
typedef union
cl_float2;
typedef union
cl_float4;
typedef  cl_float4  cl_float3;
typedef union
cl_float8;
typedef union
cl_float16;
typedef union
cl_double2;
typedef union
cl_double4;
typedef  cl_double4  cl_double3;
typedef union
cl_double8;
typedef union
cl_double16;
#define  __CL_STRINGIFY( _x )               # _x
#define  _CL_STRINGIFY( _x )                __CL_STRINGIFY( _x )
#define  CL_PROGRAM_STRING_DEBUG_INFO       "#line "  _CL_STRINGIFY(__LINE__) " \"" __FILE__ "\" \n\n"
