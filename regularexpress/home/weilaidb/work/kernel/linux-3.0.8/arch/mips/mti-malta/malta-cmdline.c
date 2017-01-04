extern int prom_argc;
extern int *_prom_argv;
#define prom_argv(index) ((char *)(long)_prom_argv[(index)])
char * __init prom_getcmdline(void)
void  __init prom_init_cmdline(void)
