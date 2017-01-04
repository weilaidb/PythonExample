extern void mpc52xx_deep_sleep(void __iomem *sram, void __iomem *sdram_regs,
struct mpc52xx_cdm __iomem *, struct mpc52xx_intr __iomem*);
extern void mpc52xx_ds_sram(void);
extern const long mpc52xx_ds_sram_size;
extern void mpc52xx_ds_cached(void);
extern const long mpc52xx_ds_cached_size;
static void __iomem *mbar;
static void __iomem *sdram;
static struct mpc52xx_cdm __iomem *cdm;
static struct mpc52xx_intr __iomem *intr;
static struct mpc52xx_gpio_wkup __iomem *gpiow;
static void __iomem *sram;
static int sram_size;
struct mpc52xx_suspend mpc52xx_suspend;
static int mpc52xx_pm_valid(suspend_state_t state)
int mpc52xx_set_wakeup_gpio(u8 pin, u8 level)
int mpc52xx_pm_prepare(void)
char saved_sram[0x4000];
int mpc52xx_pm_enter(suspend_state_t state)
void mpc52xx_pm_finish(void)
static const struct platform_suspend_ops mpc52xx_pm_ops = ;
int __init mpc52xx_pm_init(void)
