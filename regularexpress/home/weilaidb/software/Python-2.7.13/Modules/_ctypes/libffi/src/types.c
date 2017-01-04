#define LIBFFI_HIDE_BASIC_TYPES
#define FFI_TYPEDEF(name, type, id)		\
struct struct_align_##name ;						\
const ffi_type ffi_type_##name =
#define FFI_NONCONST_TYPEDEF(name, type, id)	\
struct struct_align_##name ;						\
ffi_type ffi_type_##name =
const ffi_type ffi_type_void = ;
FFI_TYPEDEF(uint8, UINT8, FFI_TYPE_UINT8);
FFI_TYPEDEF(sint8, SINT8, FFI_TYPE_SINT8);
FFI_TYPEDEF(uint16, UINT16, FFI_TYPE_UINT16);
FFI_TYPEDEF(sint16, SINT16, FFI_TYPE_SINT16);
FFI_TYPEDEF(uint32, UINT32, FFI_TYPE_UINT32);
FFI_TYPEDEF(sint32, SINT32, FFI_TYPE_SINT32);
FFI_TYPEDEF(uint64, UINT64, FFI_TYPE_UINT64);
FFI_TYPEDEF(sint64, SINT64, FFI_TYPE_SINT64);
FFI_TYPEDEF(pointer, void*, FFI_TYPE_POINTER);
FFI_TYPEDEF(float, float, FFI_TYPE_FLOAT);
FFI_TYPEDEF(double, double, FFI_TYPE_DOUBLE);
# if defined(__LONG_DOUBLE_128__) && FFI_TYPE_LONGDOUBLE != 4
#  error FFI_TYPE_LONGDOUBLE out of date
# endif
const ffi_type ffi_type_longdouble = ;
#elif FFI_TYPE_LONGDOUBLE != FFI_TYPE_DOUBLE
# if HAVE_LONG_DOUBLE_VARIANT
FFI_NONCONST_TYPEDEF(longdouble, long double, FFI_TYPE_LONGDOUBLE);
# else
FFI_TYPEDEF(longdouble, long double, FFI_TYPE_LONGDOUBLE);
# endif
