#define DEBUG_SDSLOT_VDD 1
static void config_gpio_table(uint32_t *table, int len)
static uint32_t sdcard_on_gpio_table[] = ;
static uint32_t sdcard_off_gpio_table[] = ;
static uint opt_disable_sdcard;
static int __init trout_disablesdcard_setup(char *str)
__setup("board_trout.disable_sdcard=", trout_disablesdcard_setup);
static struct vreg *vreg_sdslot;
struct mmc_vdd_xlat ;
static struct mmc_vdd_xlat mmc_vdd_table[] = ;
static unsigned int sdslot_vdd = 0xffffffff;
static unsigned int sdslot_vreg_enabled;
static uint32_t trout_sdslot_switchvdd(struct device *dev, unsigned int vdd)
static unsigned int trout_sdslot_status(struct device *dev)
#define TROUT_MMC_VDD	MMC_VDD_165_195 | MMC_VDD_20_21 | MMC_VDD_21_22 \
| MMC_VDD_22_23 | MMC_VDD_23_24 | MMC_VDD_24_25 \
| MMC_VDD_25_26 | MMC_VDD_26_27 | MMC_VDD_27_28 \
| MMC_VDD_28_29 | MMC_VDD_29_30
static struct msm_mmc_platform_data trout_sdslot_data = ;
int __init trout_init_mmc(unsigned int sys_rev)
