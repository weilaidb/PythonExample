enum ;
enum ;
#if HAVE_LONG_DOUBLE_VARIANT && FFI_TYPE_LONGDOUBLE != FFI_TYPE_DOUBLE
void FFI_HIDDEN
ffi_prep_types_linux64 (ffi_abi abi)
#if _CALL_ELF == 2
static unsigned int
discover_homogeneous_aggregate (const ffi_type *t, unsigned int *elnum)
static ffi_status
ffi_prep_cif_linux64_core (ffi_cif *cif)
ffi_status FFI_HIDDEN
ffi_prep_cif_linux64 (ffi_cif *cif)
ffi_status FFI_HIDDEN
ffi_prep_cif_linux64_var (ffi_cif *cif,
unsigned int nfixedargs,
unsigned int ntotalargs MAYBE_UNUSED)
void FFI_HIDDEN
ffi_prep_args64 (extended_cif *ecif, unsigned long *const stack)
#if _CALL_ELF == 2
#define MIN_CACHE_LINE_SIZE 8
static void
flush_icache (char *wraddr, char *xaddr, int size)
ffi_status
ffi_prep_closure_loc_linux64 (ffi_closure *closure,
ffi_cif *cif,
void (*fun) (ffi_cif *, void *, void **, void *),
void *user_data,
void *codeloc)
int FFI_HIDDEN
ffi_closure_helper_LINUX64 (ffi_closure *closure, void *rvalue,
unsigned long *pst, ffi_dblfl *pfr)
