#define NGREGARG 4
#if defined(__SH4__)
#define NFREGARG 8
#if defined(__HITACHI__)
#define STRUCT_VALUE_ADDRESS_WITH_ARG 1
#define STRUCT_VALUE_ADDRESS_WITH_ARG 0
static int
simple_type (ffi_type *arg)
static int
return_type (ffi_type *arg)
void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *, void (*fn)(void));
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
extern void ffi_closure_SYSV (void);
#if defined(__SH4__)
extern void __ic_invalidate (void *line);
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
#define OFS_INT8	0
#define OFS_INT16	0
#define OFS_INT8	3
#define OFS_INT16	2
int
ffi_closure_helper_SYSV (ffi_closure *closure, void *rvalue,
unsigned long *pgr, unsigned long *pfr,
unsigned long *pst)
