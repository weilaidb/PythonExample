void ffi_prep_args(char *stack, extended_cif *ecif);
void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *, void (*fn)());
extern void ffi_call_STDCALL(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *, void (*fn)());
void ffi_call(ffi_cif *cif, void (*fn)(), void *rvalue, void **avalue)
static void ffi_prep_incoming_args_SYSV (char *stack, void **ret,
void** args, ffi_cif* cif);
void FFI_HIDDEN ffi_closure_SYSV (ffi_closure *)
__attribute__ ((regparm(1)));
unsigned int FFI_HIDDEN ffi_closure_SYSV_inner (ffi_closure *, void **, void *)
__attribute__ ((regparm(1)));
void FFI_HIDDEN ffi_closure_raw_SYSV (ffi_raw_closure *)
__attribute__ ((regparm(1)));
unsigned int FFI_HIDDEN
ffi_closure_SYSV_inner (closure, respp, args)
ffi_closure *closure;
void **respp;
void *args;
static void
ffi_prep_incoming_args_SYSV(char *stack, void **rvalue, void **avalue,
ffi_cif *cif)
#define FFI_INIT_TRAMPOLINE(TRAMP,FUN,CTX) \
()
ffi_status
ffi_prep_closure (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data)
#if !FFI_NO_RAW_API
ffi_status
ffi_prep_raw_closure_loc (ffi_raw_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
void *user_data,
void *codeloc)
static void
ffi_prep_args_raw(char *stack, extended_cif *ecif)
extern void
ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *, unsigned,
unsigned, unsigned *, void (*fn)());
extern void
ffi_call_STDCALL(void (*)(char *, extended_cif *), extended_cif *, unsigned,
unsigned, unsigned *, void (*fn)());
void
ffi_raw_call(ffi_cif *cif, void (*fn)(), void *rvalue, ffi_raw *fake_avalue)
