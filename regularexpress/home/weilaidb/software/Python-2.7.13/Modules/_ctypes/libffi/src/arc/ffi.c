#if __BIG_ENDIAN__
#define CODE_ENDIAN(x) (x)
#define CODE_ENDIAN(x) ( (((uint32_t) (x)) << 16) | (((uint32_t) (x)) >> 16))
void
ffi_prep_args (char *stack, extended_cif * ecif)
ffi_status
ffi_prep_cif_machdep (ffi_cif * cif)
extern void ffi_call_ARCompact (void (*)(char *, extended_cif *),
extended_cif *, unsigned, unsigned,
unsigned *, void (*fn) (void));
void
ffi_call (ffi_cif * cif, void (*fn) (void), void *rvalue, void **avalue)
int
ffi_closure_inner_ARCompact (ffi_closure * closure, void *rvalue,
ffi_arg * args)
extern void ffi_closure_ARCompact (void);
ffi_status
ffi_prep_closure_loc (ffi_closure * closure, ffi_cif * cif,
void (*fun) (ffi_cif *, void *, void **, void *),
void *user_data, void *codeloc)
