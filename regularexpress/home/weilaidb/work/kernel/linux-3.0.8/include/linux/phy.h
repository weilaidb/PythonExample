#define __PHY_H
#define PHY_BASIC_FEATURES	(SUPPORTED_10baseT_Half | \
SUPPORTED_10baseT_Full | \
SUPPORTED_100baseT_Half | \
SUPPORTED_100baseT_Full | \
SUPPORTED_Autoneg | \
SUPPORTED_TP | \
SUPPORTED_MII)
#define PHY_GBIT_FEATURES	(PHY_BASIC_FEATURES | \
SUPPORTED_1000baseT_Half | \
SUPPORTED_1000baseT_Full)
#define PHY_POLL		-1
#define PHY_IGNORE_INTERRUPT	-2
#define PHY_HAS_INTERRUPT	0x00000001
#define PHY_HAS_MAGICANEG	0x00000002
typedef enum  phy_interface_t;
#define PHY_INIT_TIMEOUT	100000
#define PHY_STATE_TIME		1
#define PHY_FORCE_TIMEOUT	10
#define PHY_AN_TIMEOUT		10
#define PHY_MAX_ADDR	32
#define PHY_ID_FMT "%s:%02x"
#define MII_BUS_ID_SIZE	(20 - 3)
#define MII_ADDR_C45 (1<<30)
struct mii_bus ;
#define to_mii_bus(d) container_of(d, struct mii_bus, dev)
struct mii_bus *mdiobus_alloc(void);
int mdiobus_register(struct mii_bus *bus);
void mdiobus_unregister(struct mii_bus *bus);
void mdiobus_free(struct mii_bus *bus);
struct phy_device *mdiobus_scan(struct mii_bus *bus, int addr);
int mdiobus_read(struct mii_bus *bus, int addr, u32 regnum);
int mdiobus_write(struct mii_bus *bus, int addr, u32 regnum, u16 val);
#define PHY_INTERRUPT_DISABLED	0x0
#define PHY_INTERRUPT_ENABLED	0x80000000
enum phy_state ;
struct sk_buff;
struct phy_device ;
#define to_phy_device(d) container_of(d, struct phy_device, dev)
struct phy_driver ;
#define to_phy_driver(d) container_of(d, struct phy_driver, driver)
#define PHY_ANY_ID "MATCH ANY PHY"
#define PHY_ANY_UID 0xffffffff
struct phy_fixup ;
static inline int phy_read(struct phy_device *phydev, u32 regnum)
static inline int phy_write(struct phy_device *phydev, u32 regnum, u16 val)
int get_phy_id(struct mii_bus *bus, int addr, u32 *phy_id);
struct phy_device* get_phy_device(struct mii_bus *bus, int addr);
int phy_device_register(struct phy_device *phy);
int phy_init_hw(struct phy_device *phydev);
struct phy_device * phy_attach(struct net_device *dev,
const char *bus_id, u32 flags, phy_interface_t interface);
struct phy_device *phy_find_first(struct mii_bus *bus);
int phy_connect_direct(struct net_device *dev, struct phy_device *phydev,
void (*handler)(struct net_device *), u32 flags,
phy_interface_t interface);
struct phy_device * phy_connect(struct net_device *dev, const char *bus_id,
void (*handler)(struct net_device *), u32 flags,
phy_interface_t interface);
void phy_disconnect(struct phy_device *phydev);
void phy_detach(struct phy_device *phydev);
void phy_start(struct phy_device *phydev);
void phy_stop(struct phy_device *phydev);
int phy_start_aneg(struct phy_device *phydev);
int phy_stop_interrupts(struct phy_device *phydev);
static inline int phy_read_status(struct phy_device *phydev)
int genphy_restart_aneg(struct phy_device *phydev);
int genphy_config_aneg(struct phy_device *phydev);
int genphy_update_link(struct phy_device *phydev);
int genphy_read_status(struct phy_device *phydev);
int genphy_suspend(struct phy_device *phydev);
int genphy_resume(struct phy_device *phydev);
void phy_driver_unregister(struct phy_driver *drv);
int phy_driver_register(struct phy_driver *new_driver);
void phy_state_machine(struct work_struct *work);
void phy_start_machine(struct phy_device *phydev,
void (*handler)(struct net_device *));
void phy_stop_machine(struct phy_device *phydev);
int phy_ethtool_sset(struct phy_device *phydev, struct ethtool_cmd *cmd);
int phy_ethtool_gset(struct phy_device *phydev, struct ethtool_cmd *cmd);
int phy_mii_ioctl(struct phy_device *phydev,
struct ifreq *ifr, int cmd);
int phy_start_interrupts(struct phy_device *phydev);
void phy_print_status(struct phy_device *phydev);
void phy_device_free(struct phy_device *phydev);
int phy_register_fixup(const char *bus_id, u32 phy_uid, u32 phy_uid_mask,
int (*run)(struct phy_device *));
int phy_register_fixup_for_id(const char *bus_id,
int (*run)(struct phy_device *));
int phy_register_fixup_for_uid(u32 phy_uid, u32 phy_uid_mask,
int (*run)(struct phy_device *));
int phy_scan_fixups(struct phy_device *phydev);
int __init mdio_bus_init(void);
void mdio_bus_exit(void);
extern struct bus_type mdio_bus_type;
