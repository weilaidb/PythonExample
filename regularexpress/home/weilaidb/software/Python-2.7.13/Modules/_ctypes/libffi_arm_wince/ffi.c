void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *,
void (*fn)());
int ffi_call( ffi_cif *cif,
void (*fn)(), void *rvalue, void **avalue)
static void ffi_prep_incoming_args_SYSV (char *stack, void **ret,
void** args, ffi_cif* cif);
unsigned int
ffi_closure_SYSV_inner (ffi_closure *closure, char *in_args, void *rvalue)
static void
ffi_prep_incoming_args_SYSV(char *stack, void **rvalue,
void **avalue, ffi_cif *cif)
#define FFI_INIT_TRAMPOLINE(TRAMP,FUN) \
void ffi_closure_SYSV(void);
ffi_status
ffi_prep_closure (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data)
