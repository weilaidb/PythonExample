MODULE_DESCRIPTION("PHY library");
MODULE_AUTHOR("Andy Fleming");
MODULE_LICENSE("GPL");
void phy_device_free(struct phy_device *phydev)
EXPORT_SYMBOL(phy_device_free);
static void phy_device_release(struct device *dev)
static struct phy_driver genphy_driver;
extern int mdio_bus_init(void);
extern void mdio_bus_exit(void);
static LIST_HEAD(phy_fixup_list);
static DEFINE_MUTEX(phy_fixup_lock);
static int phy_attach_direct(struct net_device *dev, struct phy_device *phydev,
u32 flags, phy_interface_t interface);
int phy_register_fixup(const char *bus_id, u32 phy_uid, u32 phy_uid_mask,
int (*run)(struct phy_device *))
EXPORT_SYMBOL(phy_register_fixup);
int phy_register_fixup_for_uid(u32 phy_uid, u32 phy_uid_mask,
int (*run)(struct phy_device *))
EXPORT_SYMBOL(phy_register_fixup_for_uid);
int phy_register_fixup_for_id(const char *bus_id,
int (*run)(struct phy_device *))
EXPORT_SYMBOL(phy_register_fixup_for_id);
static int phy_needs_fixup(struct phy_device *phydev, struct phy_fixup *fixup)
int phy_scan_fixups(struct phy_device *phydev)
EXPORT_SYMBOL(phy_scan_fixups);
static struct phy_device* phy_device_create(struct mii_bus *bus,
int addr, int phy_id)
int get_phy_id(struct mii_bus *bus, int addr, u32 *phy_id)
EXPORT_SYMBOL(get_phy_id);
struct phy_device * get_phy_device(struct mii_bus *bus, int addr)
EXPORT_SYMBOL(get_phy_device);
int phy_device_register(struct phy_device *phydev)
EXPORT_SYMBOL(phy_device_register);
struct phy_device *phy_find_first(struct mii_bus *bus)
EXPORT_SYMBOL(phy_find_first);
static void phy_prepare_link(struct phy_device *phydev,
void (*handler)(struct net_device *))
int phy_connect_direct(struct net_device *dev, struct phy_device *phydev,
void (*handler)(struct net_device *), u32 flags,
phy_interface_t interface)
EXPORT_SYMBOL(phy_connect_direct);
struct phy_device * phy_connect(struct net_device *dev, const char *bus_id,
void (*handler)(struct net_device *), u32 flags,
phy_interface_t interface)
EXPORT_SYMBOL(phy_connect);
void phy_disconnect(struct phy_device *phydev)
EXPORT_SYMBOL(phy_disconnect);
int phy_init_hw(struct phy_device *phydev)
static int phy_attach_direct(struct net_device *dev, struct phy_device *phydev,
u32 flags, phy_interface_t interface)
struct phy_device *phy_attach(struct net_device *dev,
const char *bus_id, u32 flags, phy_interface_t interface)
EXPORT_SYMBOL(phy_attach);
void phy_detach(struct phy_device *phydev)
EXPORT_SYMBOL(phy_detach);
static int genphy_config_advert(struct phy_device *phydev)
static int genphy_setup_forced(struct phy_device *phydev)
int genphy_restart_aneg(struct phy_device *phydev)
EXPORT_SYMBOL(genphy_restart_aneg);
int genphy_config_aneg(struct phy_device *phydev)
EXPORT_SYMBOL(genphy_config_aneg);
int genphy_update_link(struct phy_device *phydev)
EXPORT_SYMBOL(genphy_update_link);
int genphy_read_status(struct phy_device *phydev)
EXPORT_SYMBOL(genphy_read_status);
static int genphy_config_init(struct phy_device *phydev)
int genphy_suspend(struct phy_device *phydev)
EXPORT_SYMBOL(genphy_suspend);
int genphy_resume(struct phy_device *phydev)
EXPORT_SYMBOL(genphy_resume);
static int phy_probe(struct device *dev)
static int phy_remove(struct device *dev)
int phy_driver_register(struct phy_driver *new_driver)
EXPORT_SYMBOL(phy_driver_register);
void phy_driver_unregister(struct phy_driver *drv)
EXPORT_SYMBOL(phy_driver_unregister);
static struct phy_driver genphy_driver = ;
static int __init phy_init(void)
static void __exit phy_exit(void)
subsys_initcall(phy_init);
module_exit(phy_exit);
