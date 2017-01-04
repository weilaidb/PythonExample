#define MASTER_SHOW_COMPLEX(name, format_string, args...)		\
static ssize_t name ## _show(struct device *dev,			\
struct device_attribute *attr, char *buf)	\
#define MASTER_SHOW(field, format_string)				\
MASTER_SHOW_COMPLEX(field, format_string, phy->field)
MASTER_SHOW(current_channel, "%d");
MASTER_SHOW(current_page, "%d");
MASTER_SHOW_COMPLEX(transmit_power, "%d +- %d dB",
((signed char) (phy->transmit_power << 2)) >> 2,
(phy->transmit_power >> 6) ? (phy->transmit_power >> 6) * 3 : 1 );
MASTER_SHOW(cca_mode, "%d");
static ssize_t channels_supported_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute pmib_attrs[] = ;
static void wpan_phy_release(struct device *d)
static struct class wpan_phy_class = ;
static DEFINE_MUTEX(wpan_phy_mutex);
static int wpan_phy_idx;
static int wpan_phy_match(struct device *dev, void *data)
struct wpan_phy *wpan_phy_find(const char *str)
EXPORT_SYMBOL(wpan_phy_find);
struct wpan_phy_iter_data ;
static int wpan_phy_iter(struct device *dev, void *_data)
int wpan_phy_for_each(int (*fn)(struct wpan_phy *phy, void *data),
void *data)
EXPORT_SYMBOL(wpan_phy_for_each);
static int wpan_phy_idx_valid(int idx)
struct wpan_phy *wpan_phy_alloc(size_t priv_size)
EXPORT_SYMBOL(wpan_phy_alloc);
int wpan_phy_register(struct wpan_phy *phy)
EXPORT_SYMBOL(wpan_phy_register);
void wpan_phy_unregister(struct wpan_phy *phy)
EXPORT_SYMBOL(wpan_phy_unregister);
void wpan_phy_free(struct wpan_phy *phy)
EXPORT_SYMBOL(wpan_phy_free);
static int __init wpan_phy_class_init(void)
subsys_initcall(wpan_phy_class_init);
static void __exit wpan_phy_class_exit(void)
module_exit(wpan_phy_class_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("IEEE 802.15.4 configuration interface");
MODULE_AUTHOR("Dmitry Eremin-Solenikov");
