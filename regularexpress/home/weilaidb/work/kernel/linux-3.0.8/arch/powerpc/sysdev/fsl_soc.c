extern void init_fcc_ioports(struct fs_platform_info*);
extern void init_fec_ioports(struct fs_platform_info*);
extern void init_smc_ioports(struct fs_uart_platform_info*);
static phys_addr_t immrbase = -1;
phys_addr_t get_immrbase(void)
EXPORT_SYMBOL(get_immrbase);
static u32 sysfreq = -1;
u32 fsl_get_sys_freq(void)
EXPORT_SYMBOL(fsl_get_sys_freq);
#if defined(CONFIG_CPM2) || defined(CONFIG_QUICC_ENGINE) || defined(CONFIG_8xx)
static u32 brgfreq = -1;
u32 get_brgfreq(void)
EXPORT_SYMBOL(get_brgfreq);
static u32 fs_baudrate = -1;
u32 get_baudrate(void)
EXPORT_SYMBOL(get_baudrate);
static int __init of_add_fixed_phys(void)
arch_initcall(of_add_fixed_phys);
#if defined(CONFIG_FSL_SOC_BOOKE) || defined(CONFIG_PPC_86xx)
static __be32 __iomem *rstcr;
static int __init setup_rstcr(void)
arch_initcall(setup_rstcr);
void fsl_rstcr_restart(char *cmd)
#if defined(CONFIG_FB_FSL_DIU) || defined(CONFIG_FB_FSL_DIU_MODULE)
struct platform_diu_data_ops diu_ops;
EXPORT_SYMBOL(diu_ops);
