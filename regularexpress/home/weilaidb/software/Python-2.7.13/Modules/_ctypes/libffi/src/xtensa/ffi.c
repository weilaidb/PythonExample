#define FFI_TYPE_STRUCT_REGS FFI_TYPE_LAST
extern void ffi_call_SYSV(void *rvalue, unsigned rsize, unsigned flags,
void(*fn)(void), unsigned nbytes, extended_cif*);
extern void ffi_closure_SYSV(void) FFI_HIDDEN;
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
void ffi_prep_args(extended_cif *ecif, unsigned char* stack)
void ffi_call(ffi_cif* cif, void(*fn)(void), void *rvalue, void **avalue)
extern void ffi_trampoline();
extern void ffi_cacheflush(void* start, void* end);
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
long FFI_HIDDEN
ffi_closure_SYSV_inner(ffi_closure *closure, void **values, void *rvalue)
