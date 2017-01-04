#define __PLAT_S5P_USB_PHY_H
enum s5p_usb_phy_type ;
extern int s5p_usb_phy_init(struct platform_device *pdev, int type);
extern int s5p_usb_phy_exit(struct platform_device *pdev, int type);
