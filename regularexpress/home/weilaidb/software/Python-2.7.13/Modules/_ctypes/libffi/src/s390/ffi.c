#define MAX_GPRARGS 5
#define MAX_FPRARGS 4
#define MAX_FPRARGS 2
#define ROUND_SIZE(size) (((size) + 15) & ~15)
#define FFI390_RET_VOID		0
#define FFI390_RET_STRUCT	1
#define FFI390_RET_FLOAT	2
#define FFI390_RET_DOUBLE	3
#define FFI390_RET_INT32	4
#define FFI390_RET_INT64	5
static void ffi_prep_args (unsigned char *, extended_cif *);
void
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ > 2)
__attribute__ ((visibility ()))
ffi_closure_helper_SYSV (ffi_closure *, unsigned long *,
unsigned long long *, unsigned long *);
extern void ffi_call_SYSV(unsigned,
extended_cif *,
void (*)(unsigned char *, extended_cif *),
unsigned,
void *,
void (*fn)(void));
extern void ffi_closure_SYSV(void);
static int
ffi_check_struct_type (ffi_type *arg)
static void
ffi_prep_args (unsigned char *stack, extended_cif *ecif)
ffi_status
ffi_prep_cif_machdep(ffi_cif *cif)
void
ffi_call(ffi_cif *cif,
void (*fn)(void),
void *rvalue,
void **avalue)
void
ffi_closure_helper_SYSV (ffi_closure *closure,
unsigned long *p_gpr,
unsigned long long *p_fpr,
unsigned long *p_ov)
ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
ffi_cif *cif,
void (*fun) (ffi_cif *, void *, void **, void *),
void *user_data,
void *codeloc)
