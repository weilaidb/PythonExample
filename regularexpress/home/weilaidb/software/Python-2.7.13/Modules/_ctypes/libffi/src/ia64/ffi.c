typedef void *PTR64 __attribute__((mode(DI)));
typedef struct
fpreg;
struct ia64_args
;
static inline void *
endian_adjust (void *addr, size_t len)
#define stf_spill(addr, value)	\
asm ((value));
#define ldf_fill(result, addr)	\
asm ((*addr));
static size_t
hfa_type_size (int type)
static void
hfa_type_load (fpreg *fpaddr, int type, void *addr)
static void
hfa_type_store (int type, void *addr, fpreg *fpaddr)
static int
hfa_element_type (ffi_type *type, int nested)
ffi_status
ffi_prep_cif_machdep(ffi_cif *cif)
extern int ffi_call_unix (struct ia64_args *, PTR64, void (*)(void), UINT64);
void
ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
extern void ffi_closure_unix ();
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
UINT64
ffi_closure_unix_inner (ffi_closure *closure, struct ia64_args *stack,
void *rvalue, void *r8)
