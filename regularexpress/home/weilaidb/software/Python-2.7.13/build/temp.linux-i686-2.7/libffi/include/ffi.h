#define LIBFFI_H
#define X86
#define __attribute__(X)
#define FFI_64_BIT_MAX 9223372036854775807
# define FFI_LONG_LONG_MAX LONG_LONG_MAX
# ifdef LLONG_MAX
#  define FFI_LONG_LONG_MAX LLONG_MAX
#  ifdef _AIX52
#   undef FFI_64_BIT_MAX
#   define FFI_64_BIT_MAX 9223372036854775807LL
#  endif
# else
#  ifdef __GNUC__
#   define FFI_LONG_LONG_MAX __LONG_LONG_MAX__
#  endif
#  ifdef _AIX
#   ifndef __PPC64__
#    if defined (__IBMC__) || defined (__IBMCPP__)
#     define FFI_LONG_LONG_MAX LONGLONG_MAX
#    endif
#   endif
#   undef  FFI_64_BIT_MAX
#   define FFI_64_BIT_MAX 9223372036854775807LL
#  endif
# endif
typedef struct _ffi_type
ffi_type;
#if SCHAR_MAX == 127
# define ffi_type_uchar                ffi_type_uint8
# define ffi_type_schar                ffi_type_sint8
#error "char size not supported"
#if SHRT_MAX == 32767
# define ffi_type_ushort       ffi_type_uint16
# define ffi_type_sshort       ffi_type_sint16
#elif SHRT_MAX == 2147483647
# define ffi_type_ushort       ffi_type_uint32
# define ffi_type_sshort       ffi_type_sint32
#error "short size not supported"
#if INT_MAX == 32767
# define ffi_type_uint         ffi_type_uint16
# define ffi_type_sint         ffi_type_sint16
#elif INT_MAX == 2147483647
# define ffi_type_uint         ffi_type_uint32
# define ffi_type_sint         ffi_type_sint32
#elif INT_MAX == 9223372036854775807
# define ffi_type_uint         ffi_type_uint64
# define ffi_type_sint         ffi_type_sint64
#error "int size not supported"
#if LONG_MAX == 2147483647
# if FFI_LONG_LONG_MAX != FFI_64_BIT_MAX
#error "no 64-bit data type supported"
# endif
#elif LONG_MAX != FFI_64_BIT_MAX
#error "long size not supported"
#if LONG_MAX == 2147483647
# define ffi_type_ulong        ffi_type_uint32
# define ffi_type_slong        ffi_type_sint32
#elif LONG_MAX == FFI_64_BIT_MAX
# define ffi_type_ulong        ffi_type_uint64
# define ffi_type_slong        ffi_type_sint64
#error "long size not supported"
#if defined _MSC_VER && !defined FFI_BUILDING
#define FFI_EXTERN extern __declspec(dllimport)
#define FFI_EXTERN extern
FFI_EXTERN ffi_type ffi_type_void;
FFI_EXTERN ffi_type ffi_type_uint8;
FFI_EXTERN ffi_type ffi_type_sint8;
FFI_EXTERN ffi_type ffi_type_uint16;
FFI_EXTERN ffi_type ffi_type_sint16;
FFI_EXTERN ffi_type ffi_type_uint32;
FFI_EXTERN ffi_type ffi_type_sint32;
FFI_EXTERN ffi_type ffi_type_uint64;
FFI_EXTERN ffi_type ffi_type_sint64;
FFI_EXTERN ffi_type ffi_type_float;
FFI_EXTERN ffi_type ffi_type_double;
FFI_EXTERN ffi_type ffi_type_pointer;
#if 1
FFI_EXTERN ffi_type ffi_type_longdouble;
#define ffi_type_longdouble ffi_type_double
typedef enum  ffi_status;
typedef unsigned FFI_TYPE;
typedef struct  ffi_cif;
#if HAVE_LONG_DOUBLE_VARIANT
void ffi_prep_types (ffi_abi abi);
# endif
ffi_status ffi_prep_cif_core(ffi_cif *cif,
ffi_abi abi,
unsigned int isvariadic,
unsigned int nfixedargs,
unsigned int ntotalargs,
ffi_type *rtype,
ffi_type **atypes);
# if LONG_MAX == 2147483647
#  define FFI_SIZEOF_ARG        4
# elif LONG_MAX == FFI_64_BIT_MAX
#  define FFI_SIZEOF_ARG        8
# endif
#  define FFI_SIZEOF_JAVA_RAW FFI_SIZEOF_ARG
typedef union  ffi_raw;
#if FFI_SIZEOF_JAVA_RAW == 4 && FFI_SIZEOF_ARG == 8
typedef union  ffi_java_raw;
typedef ffi_raw ffi_java_raw;
void ffi_raw_call (ffi_cif *cif,
void (*fn)(void),
void *rvalue,
ffi_raw *avalue);
void ffi_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_raw *raw);
void ffi_raw_to_ptrarray (ffi_cif *cif, ffi_raw *raw, void **args);
size_t ffi_raw_size (ffi_cif *cif);
void ffi_java_raw_call (ffi_cif *cif,
void (*fn)(void),
void *rvalue,
ffi_java_raw *avalue);
void ffi_java_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_java_raw *raw);
void ffi_java_raw_to_ptrarray (ffi_cif *cif, ffi_java_raw *raw, void **args);
size_t ffi_java_raw_size (ffi_cif *cif);
#if FFI_CLOSURES
__declspec(align(8))
typedef struct  ffi_closure __attribute__((aligned (8)));
} ffi_closure;
# ifdef __sgi
#  pragma pack 0
# endif
void *ffi_closure_alloc (size_t size, void **code);
void ffi_closure_free (void *);
ffi_status
ffi_prep_closure (ffi_closure*,
ffi_cif *,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data);
ffi_status
ffi_prep_closure_loc (ffi_closure*,
ffi_cif *,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void*codeloc);
# pragma pack 8
typedef struct  ffi_raw_closure;
typedef struct  ffi_java_raw_closure;
ffi_status
ffi_prep_raw_closure (ffi_raw_closure*,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
void *user_data);
ffi_status
ffi_prep_raw_closure_loc (ffi_raw_closure*,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
void *user_data,
void *codeloc);
ffi_status
ffi_prep_java_raw_closure (ffi_java_raw_closure*,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
void *user_data);
ffi_status
ffi_prep_java_raw_closure_loc (ffi_java_raw_closure*,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
void *user_data,
void *codeloc);
ffi_status ffi_prep_cif(ffi_cif *cif,
ffi_abi abi,
unsigned int nargs,
ffi_type *rtype,
ffi_type **atypes);
ffi_status ffi_prep_cif_var(ffi_cif *cif,
ffi_abi abi,
unsigned int nfixedargs,
unsigned int ntotalargs,
ffi_type *rtype,
ffi_type **atypes);
void ffi_call(ffi_cif *cif,
void (*fn)(void),
void *rvalue,
void **avalue);
#define FFI_FN(f) ((void (*)(void))f)
#define FFI_TYPE_VOID       0
#define FFI_TYPE_INT        1
#define FFI_TYPE_FLOAT      2
#define FFI_TYPE_DOUBLE     3
#if 1
#define FFI_TYPE_LONGDOUBLE 4
#define FFI_TYPE_LONGDOUBLE FFI_TYPE_DOUBLE
#define FFI_TYPE_UINT8      5
#define FFI_TYPE_SINT8      6
#define FFI_TYPE_UINT16     7
#define FFI_TYPE_SINT16     8
#define FFI_TYPE_UINT32     9
#define FFI_TYPE_SINT32     10
#define FFI_TYPE_UINT64     11
#define FFI_TYPE_SINT64     12
#define FFI_TYPE_STRUCT     13
#define FFI_TYPE_POINTER    14
#define FFI_TYPE_LAST       FFI_TYPE_POINTER
