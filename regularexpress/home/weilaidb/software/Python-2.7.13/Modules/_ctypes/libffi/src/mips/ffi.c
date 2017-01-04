#  if (__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 3))
#    define USE__BUILTIN___CLEAR_CACHE 1
#  endif
#  if defined(__OpenBSD__)
#    include <mips64/sysarch.h>
#  else
#    include <sys/cachectl.h>
#  endif
# define FFI_MIPS_STOP_HERE() ffi_stop_here()
# define FFI_MIPS_STOP_HERE() do  while(0)
#define FIX_ARGP \
FFI_ASSERT(argp <= &stack[bytes]); \
if (argp == &stack[bytes]) \
#define FIX_ARGP
static void ffi_prep_args(char *stack,
extended_cif *ecif,
int bytes,
int flags)
static unsigned
calc_n32_struct_flags(int soft_float, ffi_type *arg,
unsigned *loc, unsigned *arg_reg)
static unsigned
calc_n32_return_struct_flags(int soft_float, ffi_type *arg)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern int ffi_call_O32(void (*)(char *, extended_cif *, int, int),
extended_cif *, unsigned,
unsigned, unsigned *, void (*)(void));
extern int ffi_call_N32(void (*)(char *, extended_cif *, int, int),
extended_cif *, unsigned,
unsigned, void *, void (*)(void));
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
#if FFI_CLOSURES
#if defined(FFI_MIPS_O32)
extern void ffi_closure_O32(void);
extern void ffi_closure_N32(void);
ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
ffi_cif *cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
int
ffi_closure_mips_inner_O32 (ffi_closure *closure,
void *rvalue, ffi_arg *ar,
double *fpr)
#if defined(FFI_MIPS_N32)
static void
copy_struct_N32(char *target, unsigned offset, ffi_abi abi, ffi_type *type,
int argn, unsigned arg_offset, ffi_arg *ar,
ffi_arg *fpr, int soft_float)
int
ffi_closure_mips_inner_N32 (ffi_closure *closure,
void *rvalue, ffi_arg *ar,
ffi_arg *fpr)
