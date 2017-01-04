void rtems_cache_flush_multiple_data_lines( const void *, size_t );
void ffi_call_SYSV (extended_cif *,
unsigned, unsigned,
void *, void (*fn) ());
void *ffi_prep_args (void *stack, extended_cif *ecif);
void ffi_closure_SYSV (ffi_closure *);
void ffi_closure_struct_SYSV (ffi_closure *);
unsigned int ffi_closure_SYSV_inner (ffi_closure *closure,
void *resp, void *args);
void *
ffi_prep_args (void *stack, extended_cif *ecif)
#define CIF_FLAGS_INT		1
#define CIF_FLAGS_DINT		2
#define CIF_FLAGS_FLOAT		4
#define CIF_FLAGS_DOUBLE	8
#define CIF_FLAGS_LDOUBLE	16
#define CIF_FLAGS_POINTER	32
#define CIF_FLAGS_STRUCT1	64
#define CIF_FLAGS_STRUCT2	128
#define CIF_FLAGS_SINT8		256
#define CIF_FLAGS_SINT16	512
ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
void
ffi_call (ffi_cif *cif, void (*fn) (), void *rvalue, void **avalue)
static void
ffi_prep_incoming_args_SYSV (char *stack, void **avalue, ffi_cif *cif)
unsigned int
ffi_closure_SYSV_inner (ffi_closure *closure, void *resp, void *args)
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
