enum ;
typedef union
ffi_dblfl;
void FFI_HIDDEN ffi_closure_SYSV (void);
void FFI_HIDDEN ffi_call_SYSV(extended_cif *, unsigned, unsigned, unsigned *,
void (*)(void));
void FFI_HIDDEN ffi_prep_types_sysv (ffi_abi);
ffi_status FFI_HIDDEN ffi_prep_cif_sysv (ffi_cif *);
int FFI_HIDDEN ffi_closure_helper_SYSV (ffi_closure *, void *, unsigned long *,
ffi_dblfl *, unsigned long *);
void FFI_HIDDEN ffi_call_LINUX64(extended_cif *, unsigned long, unsigned long,
unsigned long *, void (*)(void));
void FFI_HIDDEN ffi_closure_LINUX64 (void);
void FFI_HIDDEN ffi_prep_types_linux64 (ffi_abi);
ffi_status FFI_HIDDEN ffi_prep_cif_linux64 (ffi_cif *);
ffi_status FFI_HIDDEN ffi_prep_cif_linux64_var (ffi_cif *, unsigned int,
unsigned int);
void FFI_HIDDEN ffi_prep_args64 (extended_cif *, unsigned long *const);
int FFI_HIDDEN ffi_closure_helper_LINUX64 (ffi_closure *, void *,
unsigned long *, ffi_dblfl *);
