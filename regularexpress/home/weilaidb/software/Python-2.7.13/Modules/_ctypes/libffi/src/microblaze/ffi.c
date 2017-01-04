extern void ffi_call_SYSV(void (*)(void*, extended_cif*), extended_cif*,
unsigned int, unsigned int, unsigned int*, void (*fn)(void),
unsigned int, unsigned int);
extern void ffi_closure_SYSV(void);
#define WORD_SIZE			sizeof(unsigned int)
#define ARGS_REGISTER_SIZE	(WORD_SIZE * 6)
#define WORD_ALIGN(x)		ALIGN(x, WORD_SIZE)
void ffi_prep_args(void* stack, extended_cif* ecif)
ffi_status ffi_prep_cif_machdep(ffi_cif* cif)
void ffi_call(ffi_cif* cif, void (*fn)(void), void* rvalue, void** avalue)
void ffi_closure_call_SYSV(void* register_args, void* stack_args,
ffi_closure* closure, void* rvalue,
unsigned int* rtype, unsigned int* rsize)
ffi_status ffi_prep_closure_loc(
ffi_closure* closure, ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void* user_data, void* codeloc)
