#if !defined(__x86_64__) || defined(_WIN64)
void ffi_prep_args(char *stack, extended_cif *ecif);
void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern int
ffi_call_win64(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *, void (*fn)(void));
#elif defined(X86_WIN32)
extern void
ffi_call_win32(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned, unsigned *, void (*fn)(void));
extern void ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *, void (*fn)(void));
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
static void ffi_prep_incoming_args_SYSV (char *stack, void **ret,
void** args, ffi_cif* cif);
void FFI_HIDDEN ffi_closure_SYSV (ffi_closure *)
__attribute__ ((regparm(1)));
unsigned int FFI_HIDDEN ffi_closure_SYSV_inner (ffi_closure *, void **, void *)
__attribute__ ((regparm(1)));
void FFI_HIDDEN ffi_closure_raw_SYSV (ffi_raw_closure *)
__attribute__ ((regparm(1)));
void FFI_HIDDEN ffi_closure_raw_THISCALL (ffi_raw_closure *)
__attribute__ ((regparm(1)));
void FFI_HIDDEN ffi_closure_STDCALL (ffi_closure *)
__attribute__ ((regparm(1)));
void FFI_HIDDEN ffi_closure_THISCALL (ffi_closure *)
__attribute__ ((regparm(1)));
void FFI_HIDDEN ffi_closure_FASTCALL (ffi_closure *)
__attribute__ ((regparm(1)));
void FFI_HIDDEN ffi_closure_win64 (ffi_closure *);
void * FFI_HIDDEN
ffi_closure_win64_inner (ffi_closure *closure, void *args)
unsigned int FFI_HIDDEN __attribute__ ((regparm(1)))
ffi_closure_SYSV_inner (ffi_closure *closure, void **respp, void *args)
static void
ffi_prep_incoming_args_SYSV(char *stack, void **rvalue, void **avalue,
ffi_cif *cif)
#define FFI_INIT_TRAMPOLINE_WIN64(TRAMP,FUN,CTX,MASK) \
#define FFI_INIT_TRAMPOLINE(TRAMP,FUN,CTX) \
#define FFI_INIT_TRAMPOLINE_RAW_THISCALL(TRAMP,FUN,CTX,SIZE) \
#define FFI_INIT_TRAMPOLINE_STDCALL(TRAMP,FUN,CTX)  \
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
#if !FFI_NO_RAW_API
ffi_status
ffi_prep_raw_closure_loc (ffi_raw_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
void *user_data,
void *codeloc)
static void
ffi_prep_args_raw(char *stack, extended_cif *ecif)
void
ffi_raw_call(ffi_cif *cif, void (*fn)(void), void *rvalue, ffi_raw *fake_avalue)
