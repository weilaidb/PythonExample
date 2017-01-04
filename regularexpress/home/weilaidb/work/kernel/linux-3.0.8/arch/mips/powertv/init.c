static int *_prom_envp;
unsigned long _prom_memsize;
#define prom_envp(index) ((char *)(long)_prom_envp[(index)])
char *prom_getenv(char *envname)
static void __init mips_nmi_setup(void)
static void __init mips_ejtag_setup(void)
void __init prom_init(void)
