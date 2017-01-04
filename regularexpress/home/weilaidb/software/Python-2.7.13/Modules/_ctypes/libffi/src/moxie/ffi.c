void *ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_EABI(void *(*)(char *, extended_cif *),
extended_cif *,
unsigned, unsigned,
unsigned *,
void (*fn)(void));
void ffi_call(ffi_cif *cif,
void (*fn)(void),
void *rvalue,
void **avalue)
void ffi_closure_eabi (unsigned arg1, unsigned arg2, unsigned arg3,
unsigned arg4, unsigned arg5, unsigned arg6)
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
