#define STACK_ARG_SIZE(x) ALIGN(x, FFI_SIZEOF_ARG)
static ffi_status initialize_aggregate(ffi_type *arg)
ffi_status FFI_HIDDEN ffi_prep_cif_core(ffi_cif *cif, ffi_abi abi,
unsigned int isvariadic,
unsigned int nfixedargs,
unsigned int ntotalargs,
ffi_type *rtype, ffi_type **atypes)
ffi_status ffi_prep_cif(ffi_cif *cif, ffi_abi abi, unsigned int nargs,
ffi_type *rtype, ffi_type **atypes)
ffi_status ffi_prep_cif_var(ffi_cif *cif,
ffi_abi abi,
unsigned int nfixedargs,
unsigned int ntotalargs,
ffi_type *rtype,
ffi_type **atypes)
#if FFI_CLOSURES
ffi_status
ffi_prep_closure (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data)
