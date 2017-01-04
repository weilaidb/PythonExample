static void csiphy_lanes_config(struct isp_csiphy *phy)
static void csiphy_power_autoswitch_enable(struct isp_csiphy *phy, bool enable)
static int csiphy_set_power(struct isp_csiphy *phy, u32 power)
static void csiphy_dphy_config(struct isp_csiphy *phy)
static int csiphy_config(struct isp_csiphy *phy,
struct isp_csiphy_dphy_cfg *dphy,
struct isp_csiphy_lanes_cfg *lanes)
int omap3isp_csiphy_acquire(struct isp_csiphy *phy)
void omap3isp_csiphy_release(struct isp_csiphy *phy)
int omap3isp_csiphy_init(struct isp_device *isp)
