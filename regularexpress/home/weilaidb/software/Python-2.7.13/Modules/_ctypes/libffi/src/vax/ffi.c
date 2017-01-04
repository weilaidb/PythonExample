#define CIF_FLAGS_CHAR		1
#define CIF_FLAGS_SHORT		2
#define CIF_FLAGS_INT		4
#define CIF_FLAGS_DINT		8
void ffi_call_elfbsd (extended_cif *, unsigned, unsigned, void *,
void (*) ());
void *ffi_prep_args (extended_cif *ecif, void *stack);
void *
ffi_prep_args (extended_cif *ecif, void *stack)
ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
void
ffi_call (ffi_cif *cif, void (*fn) (), void *rvalue, void **avalue)
void ffi_closure_elfbsd (void);
void ffi_closure_struct_elfbsd (void);
unsigned int ffi_closure_elfbsd_inner (ffi_closure *, void *, char *);
static void
ffi_prep_closure_elfbsd (ffi_cif *cif, void **avalue, char *stackp)
unsigned int
ffi_closure_elfbsd_inner (ffi_closure *closure, void *resp, char *stack)
ffi_status
ffi_prep_closure_loc (ffi_closure *closure, ffi_cif *cif,
void (*fun)(ffi_cif *, void *, void **, void *),
void *user_data, void *codeloc)
