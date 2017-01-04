int prom_argc;
int *_prom_argv, *_prom_envp;
#define prom_envp(index) ((char *)(long)_prom_envp[(index)])
int init_debug;
static int mips_revision_corid;
int mips_revision_sconid;
unsigned long _pcictrl_bonito;
unsigned long _pcictrl_bonito_pcicfg;
unsigned long _pcictrl_gt64120;
unsigned long _pcictrl_msc;
char *prom_getenv(char *envname)
static inline unsigned char str2hexnum(unsigned char c)
static inline void str2eaddr(unsigned char *ea, unsigned char *str)
int get_ethernet_addr(char *ethernet_addr)
static void __init console_config(void)
static void __init mips_nmi_setup(void)
static void __init mips_ejtag_setup(void)
extern struct plat_smp_ops msmtc_smp_ops;
void __init prom_init(void)
