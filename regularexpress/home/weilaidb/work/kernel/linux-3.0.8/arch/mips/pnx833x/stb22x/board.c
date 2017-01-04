#define PNX8335_DEBUG0 0x4400
#define PNX8335_DEBUG1 0x4404
#define PNX8335_DEBUG2 0x4408
#define PNX8335_DEBUG3 0x440c
#define PNX8335_DEBUG4 0x4410
#define PNX8335_DEBUG5 0x4414
#define PNX8335_DEBUG6 0x4418
#define PNX8335_DEBUG7 0x441c
int prom_argc;
char **prom_argv, **prom_envp;
extern void prom_init_cmdline(void);
extern char *prom_getenv(char *envname);
const char *get_system_type(void)
static inline unsigned long env_or_default(char *env, unsigned long dfl)
void __init prom_init(void)
void __init pnx833x_board_setup(void)
