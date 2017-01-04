extern int prom_argc;
extern char **prom_argv, **prom_envp;
typedef struct
t_env_var;
char * prom_getcmdline(void)
void __init prom_init_cmdline(void)
char *prom_getenv(char *envname)
inline unsigned char str2hexnum(unsigned char c)
inline void str2eaddr(unsigned char *ea, unsigned char *str)
int get_ethernet_addr(char *ethernet_addr)
void __init prom_free_prom_memory(void)
extern int pnx8550_console_port;
void prom_putchar(char c)
EXPORT_SYMBOL(get_ethernet_addr);
EXPORT_SYMBOL(str2eaddr);
