#define MIN(a,b) (((a) < (b)) ? (a) : (b))
unsigned int ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_SYSV(void (*fn)(void), extended_cif *, unsigned, unsigned, double *);
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
static void ffi_prep_incoming_args_SYSV (char *, void **, void **,
ffi_cif*, float *);
void ffi_closure_SYSV (ffi_closure *);
extern unsigned int ffi_metag_trampoline[10];
void ffi_init_trampoline(unsigned char *__tramp, unsigned int __fun, unsigned int __ctx)
ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
unsigned int ffi_closure_SYSV_inner (closure, respp, args, vfp_args)
ffi_closure *closure;
void **respp;
void *args;
void *vfp_args;
static void ffi_prep_incoming_args_SYSV(char *stack, void **rvalue,
void **avalue, ffi_cif *cif,
float *vfp_stack)
