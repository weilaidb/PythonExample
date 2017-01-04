#define _MMC_CORE_BUS_H
#define MMC_DEV_ATTR(name, fmt, args...)					\
static ssize_t mmc_##name##_show (struct device *dev, struct device_attribute *attr, char *buf)	\
\
static DEVICE_ATTR(name, S_IRUGO, mmc_##name##_show, NULL)
struct mmc_card *mmc_alloc_card(struct mmc_host *host,
struct device_type *type);
int mmc_add_card(struct mmc_card *card);
void mmc_remove_card(struct mmc_card *card);
int mmc_register_bus(void);
void mmc_unregister_bus(void);
