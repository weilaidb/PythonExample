#if HAVE_LONG_DOUBLE_VARIANT
void FFI_HIDDEN
ffi_prep_types (ffi_abi abi)
ffi_status FFI_HIDDEN
ffi_prep_cif_machdep (ffi_cif *cif)
ffi_status FFI_HIDDEN
ffi_prep_cif_machdep_var (ffi_cif *cif,
unsigned int nfixedargs MAYBE_UNUSED,
unsigned int ntotalargs MAYBE_UNUSED)
void
ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
ffi_cif *cif,
void (*fun) (ffi_cif *, void *, void **, void *),
void *user_data,
void *codeloc)
