#define PLAT_S5P_MIPI_CSIS_H_ __FILE__
struct platform_device;
struct s5p_platform_mipi_csis ;
int s5p_csis_phy_enable(struct platform_device *pdev, bool on);
