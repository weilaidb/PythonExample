#define ASM_NEEDS_REGISTERS 4
#define NUM_GPR_ARG_REGISTERS 8
#define NUM_FPR_ARG_REGISTERS 8
#if HAVE_LONG_DOUBLE_VARIANT && FFI_TYPE_LONGDOUBLE != FFI_TYPE_DOUBLE
void FFI_HIDDEN
ffi_prep_types_sysv (ffi_abi abi)
static int
translate_float (int abi, int type)
static ffi_status
ffi_prep_cif_sysv_core (ffi_cif *cif)
ffi_status FFI_HIDDEN
ffi_prep_cif_sysv (ffi_cif *cif)
void FFI_HIDDEN
ffi_prep_args_SYSV (extended_cif *ecif, unsigned *const stack)
#define MIN_CACHE_LINE_SIZE 8
static void
flush_icache (char *wraddr, char *xaddr, int size)
ffi_status FFI_HIDDEN
ffi_prep_closure_loc_sysv (ffi_closure *closure,
ffi_cif *cif,
void (*fun) (ffi_cif *, void *, void **, void *),
void *user_data,
void *codeloc)
int
ffi_closure_helper_SYSV (ffi_closure *closure, void *rvalue,
unsigned long *pgr, ffi_dblfl *pfr,
unsigned long *pst)
