#define pr_fmt(fmt) "%s: " fmt, __func__
static struct omap_smsc911x_platform_data *gpmc_cfg;
static struct resource gpmc_smsc911x_resources[] = ;
static struct smsc911x_platform_config gpmc_smsc911x_config = ;
void __init gpmc_smsc911x_init(struct omap_smsc911x_platform_data *board_data)
