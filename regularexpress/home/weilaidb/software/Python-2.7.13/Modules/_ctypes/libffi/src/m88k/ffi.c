void ffi_call_OBSD (unsigned int, extended_cif *, unsigned int, void *,
void (*fn) ());
void *ffi_prep_args (void *, extended_cif *);
void ffi_closure_OBSD (ffi_closure *);
void ffi_closure_struct_OBSD (ffi_closure *);
unsigned int ffi_closure_OBSD_inner (ffi_closure *, void *, unsigned int *,
char *);
void ffi_cacheflush_OBSD (unsigned int, unsigned int);
#define CIF_FLAGS_INT		(1 << 0)
#define CIF_FLAGS_DINT		(1 << 1)
void *
ffi_prep_args (void *stack, extended_cif *ecif)
ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
void
ffi_call (ffi_cif *cif, void (*fn) (), void *rvalue, void **avalue)
static void
ffi_prep_closure_args_OBSD (ffi_cif *cif, void **avalue, unsigned int *regp,
char *stackp)
unsigned int
ffi_closure_OBSD_inner (ffi_closure *closure, void *resp, unsigned int *regp,
char *stackp)
ffi_status
ffi_prep_closure_loc (ffi_closure* closure, ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data, void *codeloc)
