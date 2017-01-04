int prom_argc;
char **prom_argv, **prom_envp;
int *prom_vec;
int init_debug = 1;
struct prom_pmemblock mdesc[PROM_MAX_PMEMBLOCKS];
static char msp_default_features[] =
#if defined(CONFIG_PMC_MSP4200_EVAL) \
|| defined(CONFIG_PMC_MSP4200_GW)
"ERER";
#elif defined(CONFIG_PMC_MSP7120_EVAL) \
|| defined(CONFIG_PMC_MSP7120_GW)
"EMEMSP";
#elif defined(CONFIG_PMC_MSP7120_FPGA)
"EMEM";
static inline unsigned char str2hexnum(unsigned char c)
static inline int str2eaddr(unsigned char *ea, unsigned char *str)
EXPORT_SYMBOL(str2eaddr);
static inline unsigned long str2hex(unsigned char *str)
const char *get_system_type(void)
int get_ethernet_addr(char *ethaddr_name, char *ethernet_addr)
EXPORT_SYMBOL(get_ethernet_addr);
static char *get_features(void)
static char test_feature(char c)
unsigned long get_deviceid(void)
char identify_pci(void)
EXPORT_SYMBOL(identify_pci);
char identify_pcimux(void)
char identify_sec(void)
EXPORT_SYMBOL(identify_sec);
char identify_spad(void)
EXPORT_SYMBOL(identify_spad);
char identify_tdm(void)
EXPORT_SYMBOL(identify_tdm);
char identify_zsp(void)
EXPORT_SYMBOL(identify_zsp);
static char identify_enetfeature(char key, unsigned long interface_num)
char identify_enet(unsigned long interface_num)
EXPORT_SYMBOL(identify_enet);
char identify_enetTxD(unsigned long interface_num)
EXPORT_SYMBOL(identify_enetTxD);
unsigned long identify_family(void)
EXPORT_SYMBOL(identify_family);
unsigned long identify_revision(void)
EXPORT_SYMBOL(identify_revision);
char *prom_getenv(char *env_name)
void  __init prom_init_cmdline(void)
static int __init prom_memtype_classify(unsigned int type)
void __init prom_meminit(void)
void __init prom_free_prom_memory(void)
struct prom_pmemblock *__init prom_getmdesc(void)
