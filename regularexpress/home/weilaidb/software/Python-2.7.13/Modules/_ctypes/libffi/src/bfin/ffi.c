#define MAX_GPRARGS 3
#define FFIBFIN_RET_VOID 0
#define FFIBFIN_RET_BYTE 1
#define FFIBFIN_RET_HALFWORD 2
#define FFIBFIN_RET_INT64 3
#define FFIBFIN_RET_INT32 4
void ffi_prep_args(unsigned char *, extended_cif *);
extern void ffi_call_SYSV(unsigned, extended_cif *, void(*)(unsigned char *, extended_cif *), unsigned, void *, void(*fn)(void));
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
void ffi_call(ffi_cif *cif, void(*fn)(void), void *rvalue, void **avalue)
void ffi_prep_args(unsigned char *stack, extended_cif *ecif)
