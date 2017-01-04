extern void lite5200_low_power(void __iomem *sram, void __iomem *mbar);
static struct mpc52xx_cdm __iomem *cdm;
static struct mpc52xx_intr __iomem *pic;
static struct mpc52xx_sdma __iomem *bes;
static struct mpc52xx_xlb __iomem *xlb;
static struct mpc52xx_gpio __iomem *gps;
static struct mpc52xx_gpio_wkup __iomem *gpw;
static void __iomem *pci;
static void __iomem *sram;
static const int sram_size = 0x4000;
static void __iomem *mbar;
static suspend_state_t lite5200_pm_target_state;
static int lite5200_pm_valid(suspend_state_t state)
static int lite5200_pm_begin(suspend_state_t state)
static int lite5200_pm_prepare(void)
static struct mpc52xx_cdm scdm;
static struct mpc52xx_intr spic;
static struct mpc52xx_sdma sbes;
static struct mpc52xx_xlb sxlb;
static struct mpc52xx_gpio sgps;
static struct mpc52xx_gpio_wkup sgpw;
static char spci[0x200];
static void lite5200_save_regs(void)
static void lite5200_restore_regs(void)
static int lite5200_pm_enter(suspend_state_t state)
static void lite5200_pm_finish(void)
static void lite5200_pm_end(void)
static const struct platform_suspend_ops lite5200_pm_ops = ;
int __init lite5200_pm_init(void)
