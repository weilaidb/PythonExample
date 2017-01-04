#define STACK_ARG_SIZE(x) ALIGN(x, FFI_SIZEOF_ARG)
static ffi_status
initialize_aggregate_packed_struct (ffi_type * arg)
int
ffi_prep_args (char *stack, extended_cif * ecif)
ffi_status FFI_HIDDEN
ffi_prep_cif_core (ffi_cif * cif,
ffi_abi abi, unsigned int isvariadic,
unsigned int nfixedargs, unsigned int ntotalargs,
ffi_type * rtype, ffi_type ** atypes)
ffi_status
ffi_prep_cif_machdep (ffi_cif * cif)
extern void ffi_call_SYSV (int (*)(char *, extended_cif *),
extended_cif *,
unsigned, unsigned, unsigned *, void (*fn) ())
__attribute__ ((__visibility__ ("hidden")));
void
ffi_call (ffi_cif * cif, void (*fn) (), void *rvalue, void **avalue)
extern const char ffi_cris_trampoline_template[]
__attribute__ ((__visibility__ ("hidden")));
extern const int ffi_cris_trampoline_fn_offset
__attribute__ ((__visibility__ ("hidden")));
extern const int ffi_cris_trampoline_closure_offset
__attribute__ ((__visibility__ ("hidden")));
static unsigned long long
ffi_prep_closure_inner (void **params, ffi_closure* closure)
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif *, void *, void **, void*),
void *user_data,
void *codeloc)
