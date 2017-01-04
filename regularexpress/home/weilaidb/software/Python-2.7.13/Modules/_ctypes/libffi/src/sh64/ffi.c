#define NGREGARG 8
#define NFREGARG 12
static int
return_type (ffi_type *arg)
void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, long long, unsigned *,
void (*fn)(void));
void ffi_call( ffi_cif *cif,
void (*fn)(void), void *rvalue, void **avalue)
extern void ffi_closure_SYSV (void);
extern void __ic_invalidate (void *line);
ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
ffi_cif *cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
int
ffi_closure_helper_SYSV (ffi_closure *closure, UINT64 *rvalue,
UINT64 *pgr, UINT64 *pfr, UINT64 *pst)
