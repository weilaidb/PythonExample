#define OMAP3_ISP_CSI_PHY_H
struct isp_csi2_device;
struct regulator;
struct csiphy_lane ;
#define ISP_CSIPHY2_NUM_DATA_LANES	2
#define ISP_CSIPHY1_NUM_DATA_LANES	1
struct isp_csiphy_lanes_cfg ;
struct isp_csiphy_dphy_cfg ;
struct isp_csiphy ;
int omap3isp_csiphy_acquire(struct isp_csiphy *phy);
void omap3isp_csiphy_release(struct isp_csiphy *phy);
int omap3isp_csiphy_init(struct isp_device *isp);
