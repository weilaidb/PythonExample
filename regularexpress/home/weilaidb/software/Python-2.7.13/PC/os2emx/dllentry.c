#define NULL 0
#define REF(s)  extern void s(); void *____ref_##s = &s;
REF(Py_Main);
extern int _CRT_init(void);
extern void _CRT_term(void);
extern void __ctordtorInit(void);
extern void __ctordtorTerm(void);
unsigned long _DLL_InitTerm(unsigned long mod_handle, unsigned long flag)
