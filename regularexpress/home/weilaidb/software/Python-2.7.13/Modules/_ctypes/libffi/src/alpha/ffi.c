#if defined(__LONG_DOUBLE_128__)
# if FFI_TYPE_LONGDOUBLE != 4
#  error FFI_TYPE_LONGDOUBLE out of date
# endif
# undef FFI_TYPE_LONGDOUBLE
# define FFI_TYPE_LONGDOUBLE 4
extern void ffi_call_osf(void *, unsigned long, unsigned, void *, void (*)(void))
FFI_HIDDEN;
extern void ffi_closure_osf(void) FFI_HIDDEN;
ffi_status
ffi_prep_cif_machdep(ffi_cif *cif)
void
ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
long FFI_HIDDEN
ffi_closure_osf_inner(ffi_closure *closure, void *rvalue, unsigned long *argp)
