void ffi_prep_args(char *stack, extended_cif *ecif)
ffi_status
ffi_prep_cif_machdep(ffi_cif *cif)
extern void ffi_call_SYSV(void (*)(char *, extended_cif *), extended_cif *,
unsigned, unsigned, unsigned *, void (*fn)(void));
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
