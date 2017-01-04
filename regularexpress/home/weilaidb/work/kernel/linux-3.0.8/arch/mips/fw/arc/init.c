#undef DEBUG_PROM_INIT
struct linux_romvec *romvec;
int prom_argc;
LONG *_prom_argv, *_prom_envp;
void __init prom_init(void)
