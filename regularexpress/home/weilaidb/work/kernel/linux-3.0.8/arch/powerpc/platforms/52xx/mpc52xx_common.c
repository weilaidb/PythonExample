#undef DEBUG
static struct of_device_id mpc52xx_xlb_ids[] __initdata = ;
static struct of_device_id mpc52xx_bus_ids[] __initdata = ;
static DEFINE_SPINLOCK(mpc52xx_lock);
static struct mpc52xx_gpt __iomem *mpc52xx_wdt;
static struct mpc52xx_cdm __iomem *mpc52xx_cdm;
void __init
mpc5200_setup_xlb_arbiter(void)
static DEFINE_SPINLOCK(gpio_lock);
struct mpc52xx_gpio __iomem *simple_gpio;
struct mpc52xx_gpio_wkup __iomem *wkup_gpio;
void __init
mpc52xx_declare_of_platform_devices(void)
static struct of_device_id mpc52xx_gpt_ids[] __initdata = ;
static struct of_device_id mpc52xx_cdm_ids[] __initdata = ;
static const struct of_device_id mpc52xx_gpio_simple[] = ;
static const struct of_device_id mpc52xx_gpio_wkup[] = ;
void __init
mpc52xx_map_common_devices(void)
int mpc52xx_set_psc_clkdiv(int psc_id, int clkdiv)
EXPORT_SYMBOL(mpc52xx_set_psc_clkdiv);
unsigned int mpc52xx_get_xtal_freq(struct device_node *node)
EXPORT_SYMBOL(mpc52xx_get_xtal_freq);
void
mpc52xx_restart(char *cmd)
#define PSC1_RESET     0x1
#define PSC1_SYNC      0x4
#define PSC1_SDATA_OUT 0x1
#define PSC2_RESET     0x2
#define PSC2_SYNC      (0x4<<4)
#define PSC2_SDATA_OUT (0x1<<4)
#define MPC52xx_GPIO_PSC1_MASK 0x7
#define MPC52xx_GPIO_PSC2_MASK (0x7<<4)
int mpc5200_psc_ac97_gpio_reset(int psc_number)
EXPORT_SYMBOL(mpc5200_psc_ac97_gpio_reset);
