#define ROUND_UP(v, a)  (((size_t)(v) + (a) - 1) & ~((a) - 1))
#define MIN_STACK_SIZE  64
#define FIRST_ARG_SLOT  9
#define DEBUG_LEVEL   0
#define fldw(addr, fpreg) \
__asm__ volatile ((addr) : #fpreg)
#define fstw(fpreg, addr) \
__asm__ volatile ((addr))
#define fldd(addr, fpreg) \
__asm__ volatile ((addr) : #fpreg)
#define fstd(fpreg, addr) \
__asm__ volatile ((addr))
#define debug(lvl, x...) do  while (0)
static inline int ffi_struct_type(ffi_type *t)
void ffi_prep_args_pa32(UINT32 *stack, extended_cif *ecif, unsigned bytes)
static void ffi_size_stack_pa32(ffi_cif *cif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_pa32(void (*)(UINT32 *, extended_cif *, unsigned),
extended_cif *, unsigned, unsigned, unsigned *,
void (*fn)(void));
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
#if FFI_CLOSURES
ffi_status ffi_closure_inner_pa32(ffi_closure *closure, UINT32 *stack)
extern void ffi_closure_pa32(void);
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
