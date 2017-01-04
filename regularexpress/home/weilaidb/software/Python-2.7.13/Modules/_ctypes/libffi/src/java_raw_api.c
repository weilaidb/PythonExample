#if !defined(NO_JAVA_RAW_API) && !defined(FFI_NO_RAW_API)
size_t
ffi_java_raw_size (ffi_cif *cif)
void
ffi_java_raw_to_ptrarray (ffi_cif *cif, ffi_java_raw *raw, void **args)
void
ffi_java_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_java_raw *raw)
#if !FFI_NATIVE_RAW_API
static void
ffi_java_rvalue_to_raw (ffi_cif *cif, void *rvalue)
static void
ffi_java_raw_to_rvalue (ffi_cif *cif, void *rvalue)
void ffi_java_raw_call (ffi_cif *cif, void (*fn)(void), void *rvalue,
ffi_java_raw *raw)
#if FFI_CLOSURES
static void
ffi_java_translate_args (ffi_cif *cif, void *rvalue,
void **avalue, void *user_data)
ffi_status
ffi_prep_java_raw_closure_loc (ffi_java_raw_closure* cl,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
void *user_data,
void *codeloc)
ffi_status
ffi_prep_java_raw_closure (ffi_java_raw_closure* cl,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
void *user_data)
