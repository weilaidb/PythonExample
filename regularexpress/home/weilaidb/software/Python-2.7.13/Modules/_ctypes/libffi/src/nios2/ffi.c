extern UINT64 ffi_call_sysv (void (*) (char *, extended_cif *),
extended_cif *,
unsigned,
void (*fn) (void));
extern void ffi_closure_sysv (void);
ffi_status ffi_prep_cif_machdep (ffi_cif *cif)
void ffi_prep_args (char *stack, extended_cif *ecif)
void ffi_call (ffi_cif *cif, void (*fn) (void), void *rvalue, void **avalue)
static UINT64
ffi_closure_helper (unsigned char *args,
ffi_closure *closure)
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun) (ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
