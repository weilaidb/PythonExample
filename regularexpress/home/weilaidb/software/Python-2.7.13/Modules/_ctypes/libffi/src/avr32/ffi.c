extern void ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *,
unsigned int, unsigned int, unsigned int*, unsigned int,
void (*fn)(void));
extern void ffi_closure_SYSV (ffi_closure *);
unsigned int pass_struct_on_stack(ffi_type *type)
void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
static void ffi_prep_incoming_args_SYSV(char *stack, void **rvalue,
void **avalue, ffi_cif *cif)
unsigned int ffi_closure_SYSV_inner(ffi_closure *closure, void **respp,
void *args)
ffi_status ffi_prep_closure_loc(ffi_closure* closure, ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*), void *user_data,
void *codeloc)
