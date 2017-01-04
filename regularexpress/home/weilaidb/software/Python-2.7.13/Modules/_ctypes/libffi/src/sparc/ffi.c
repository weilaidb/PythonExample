void ffi_prep_args_v8(char *stack, extended_cif *ecif)
int ffi_prep_args_v9(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
int ffi_v9_layout_struct(ffi_type *arg, int off, char *ret, char *intg, char *flt)
extern int ffi_call_v9(void *, extended_cif *, unsigned,
unsigned, unsigned *, void (*fn)(void));
extern int ffi_call_v8(void *, extended_cif *, unsigned,
unsigned, unsigned *, void (*fn)(void));
void ffi_flush_icache (void *, size_t);
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
extern void ffi_closure_v9(void);
extern void ffi_closure_v8(void);
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
int
ffi_closure_sparc_inner_v8(ffi_closure *closure,
void *rvalue, unsigned long *gpr, unsigned long *scratch)
int
ffi_closure_sparc_inner_v9(ffi_closure *closure,
void *rvalue, unsigned long *gpr, double *fpr)
