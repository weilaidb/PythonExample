#define PROM_GET_MEMCONF	58
#define PROM_GET_HWCONF         61
#define PROM_VEC		(u64 *)CKSEG1ADDR(0x1fc00000)
#define PROM_ENTRY(x)		(PROM_VEC + (x))
#define ___prom_putchar         ((int *(*)(int))PROM_ENTRY(PROM_PUTCHAR))
#define ___prom_getenv          ((char *(*)(char *))PROM_ENTRY(PROM_GETENV))
#define ___prom_get_memconf     ((void (*)(void *))PROM_ENTRY(PROM_GET_MEMCONF))
#define ___prom_get_hwconf      ((u32 (*)(void))PROM_ENTRY(PROM_GET_HWCONF))
static u8 o32_stk[16384];
#define O32_STK   &o32_stk[sizeof(o32_stk)]
#define __PROM_O32(fun, arg) fun arg __asm__(#fun); \
__asm__(#fun " = call_o32")
int   __PROM_O32(__prom_putchar, (int *(*)(int), void *, int));
char *__PROM_O32(__prom_getenv, (char *(*)(char *), void *, char *));
void  __PROM_O32(__prom_get_memconf, (void (*)(void *), void *, void *));
u32   __PROM_O32(__prom_get_hwconf, (u32 (*)(void), void *));
#define _prom_putchar(x)     __prom_putchar(___prom_putchar, O32_STK, x)
#define _prom_getenv(x)      __prom_getenv(___prom_getenv, O32_STK, x)
#define _prom_get_memconf(x) __prom_get_memconf(___prom_get_memconf, O32_STK, x)
#define _prom_get_hwconf()   __prom_get_hwconf(___prom_get_hwconf, O32_STK)
#define _prom_putchar(x)     ___prom_putchar(x)
#define _prom_getenv(x)      ___prom_getenv(x)
#define _prom_get_memconf(x) ___prom_get_memconf(x)
#define _prom_get_hwconf(x)  ___prom_get_hwconf(x)
void prom_putchar(char c)
char *prom_getenv(char *s)
void *prom_get_hwconf(void)
void __init prom_free_prom_memory(void)
char *system_type = "Unknown";
const char *get_system_type(void)
static void __init sni_mem_init(void)
void __init prom_init(void)
