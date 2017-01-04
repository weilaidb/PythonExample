#if !FFI_NO_RAW_API
size_t
ffi_raw_size (ffi_cif *cif)
void
ffi_raw_to_ptrarray (ffi_cif *cif, ffi_raw *raw, void **args)
void
ffi_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_raw *raw)
#if !FFI_NATIVE_RAW_API
void ffi_raw_call (ffi_cif *cif, void (*fn)(void), void *rvalue, ffi_raw *raw)
#if FFI_CLOSURES
static void
ffi_translate_args (ffi_cif *cif, void *rvalue,
void **avalue, void *user_data)
ffi_status
ffi_prep_raw_closure_loc (ffi_raw_closure* cl,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
void *user_data,
void *codeloc)
#if FFI_CLOSURES
ffi_status
ffi_prep_raw_closure (ffi_raw_closure* cl,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
void *user_data)
