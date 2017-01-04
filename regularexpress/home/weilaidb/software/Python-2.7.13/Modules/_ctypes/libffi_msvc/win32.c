__declspec(naked) int
ffi_call_x86(void (* prepfunc)(char *, extended_cif *),
extended_cif *ecif,
unsigned bytes,
unsigned flags,
unsigned *rvalue,
void (*fn)())
