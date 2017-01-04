void phy_print_status(struct phy_device *phydev)
EXPORT_SYMBOL(phy_print_status);
static int phy_clear_interrupt(struct phy_device *phydev)
static int phy_config_interrupt(struct phy_device *phydev, u32 interrupts)
static inline int phy_aneg_done(struct phy_device *phydev)
struct phy_setting ;
static const struct phy_setting settings[] = ;
#define MAX_NUM_SETTINGS ARRAY_SIZE(settings)
static inline int phy_find_setting(int speed, int duplex)
static inline int phy_find_valid(int idx, u32 features)
static void phy_sanitize_settings(struct phy_device *phydev)
int phy_ethtool_sset(struct phy_device *phydev, struct ethtool_cmd *cmd)
EXPORT_SYMBOL(phy_ethtool_sset);
int phy_ethtool_gset(struct phy_device *phydev, struct ethtool_cmd *cmd)
EXPORT_SYMBOL(phy_ethtool_gset);
int phy_mii_ioctl(struct phy_device *phydev,
struct ifreq *ifr, int cmd)
EXPORT_SYMBOL(phy_mii_ioctl);
int phy_start_aneg(struct phy_device *phydev)
EXPORT_SYMBOL(phy_start_aneg);
static void phy_change(struct work_struct *work);
void phy_start_machine(struct phy_device *phydev,
void (*handler)(struct net_device *))
void phy_stop_machine(struct phy_device *phydev)
static void phy_force_reduction(struct phy_device *phydev)
static void phy_error(struct phy_device *phydev)
static irqreturn_t phy_interrupt(int irq, void *phy_dat)
static int phy_enable_interrupts(struct phy_device *phydev)
static int phy_disable_interrupts(struct phy_device *phydev)
int phy_start_interrupts(struct phy_device *phydev)
EXPORT_SYMBOL(phy_start_interrupts);
int phy_stop_interrupts(struct phy_device *phydev)
EXPORT_SYMBOL(phy_stop_interrupts);
static void phy_change(struct work_struct *work)
void phy_stop(struct phy_device *phydev)
void phy_start(struct phy_device *phydev)
EXPORT_SYMBOL(phy_stop);
EXPORT_SYMBOL(phy_start);
void phy_state_machine(struct work_struct *work)
