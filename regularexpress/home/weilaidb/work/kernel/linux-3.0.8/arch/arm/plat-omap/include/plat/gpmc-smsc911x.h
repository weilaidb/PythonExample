struct omap_smsc911x_platform_data ;
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
extern void gpmc_smsc911x_init(struct omap_smsc911x_platform_data *d);
static inline void gpmc_smsc911x_init(struct omap_smsc911x_platform_data *d)
