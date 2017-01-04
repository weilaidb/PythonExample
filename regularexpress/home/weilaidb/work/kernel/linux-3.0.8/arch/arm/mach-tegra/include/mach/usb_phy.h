#define __MACH_USB_PHY_H
struct tegra_utmip_config ;
struct tegra_ulpi_config ;
enum tegra_usb_phy_port_speed ;
enum tegra_usb_phy_mode ;
struct tegra_xtal_freq;
struct tegra_usb_phy ;
struct tegra_usb_phy *tegra_usb_phy_open(int instance, void __iomem *regs,
void *config, enum tegra_usb_phy_mode phy_mode);
int tegra_usb_phy_power_on(struct tegra_usb_phy *phy);
void tegra_usb_phy_clk_disable(struct tegra_usb_phy *phy);
void tegra_usb_phy_clk_enable(struct tegra_usb_phy *phy);
void tegra_usb_phy_power_off(struct tegra_usb_phy *phy);
void tegra_usb_phy_preresume(struct tegra_usb_phy *phy);
void tegra_usb_phy_postresume(struct tegra_usb_phy *phy);
void tegra_ehci_phy_restore_start(struct tegra_usb_phy *phy,
enum tegra_usb_phy_port_speed port_speed);
void tegra_ehci_phy_restore_end(struct tegra_usb_phy *phy);
void tegra_usb_phy_close(struct tegra_usb_phy *phy);
