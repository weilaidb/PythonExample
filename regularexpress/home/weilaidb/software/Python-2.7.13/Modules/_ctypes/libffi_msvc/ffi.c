extern void Py_FatalError(const char *msg);
void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern int
ffi_call_x86(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *,
void (*fn)());
extern int
ffi_call_AMD64(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *,
void (*fn)());
int
ffi_call( ffi_cif *cif,
void (*fn)(), void *rvalue, void **avalue)
static void ffi_prep_incoming_args_SYSV (char *stack, void **ret,
void** args, ffi_cif* cif);
void *
static void __fastcall
ffi_closure_SYSV (ffi_closure *closure, char *argp)
static void
ffi_prep_incoming_args_SYSV(char *stack, void **rvalue,
void **avalue, ffi_cif *cif)
extern void ffi_closure_OUTER();
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
