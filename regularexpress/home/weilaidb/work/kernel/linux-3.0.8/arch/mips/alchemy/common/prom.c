int prom_argc;
char **prom_argv;
char **prom_envp;
void __init prom_init_cmdline(void)
char *prom_getenv(char *envname)
static inline unsigned char str2hexnum(unsigned char c)
static inline void str2eaddr(unsigned char *ea, unsigned char *str)
int __init prom_get_ethernet_addr(char *ethernet_addr)
void __init prom_free_prom_memory(void)
