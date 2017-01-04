#define imx_mxc_ehci_data_entry_single(soc, _id, hs)			\
const struct imx_mxc_ehci_data imx25_mxc_ehci_otg_data __initconst =
imx_mxc_ehci_data_entry_single(MX25, 0, OTG);
const struct imx_mxc_ehci_data imx25_mxc_ehci_hs_data __initconst =
imx_mxc_ehci_data_entry_single(MX25, 1, HS);
const struct imx_mxc_ehci_data imx27_mxc_ehci_otg_data __initconst =
imx_mxc_ehci_data_entry_single(MX27, 0, OTG);
const struct imx_mxc_ehci_data imx27_mxc_ehci_hs_data[] __initconst = ;
const struct imx_mxc_ehci_data imx31_mxc_ehci_otg_data __initconst =
imx_mxc_ehci_data_entry_single(MX31, 0, OTG);
const struct imx_mxc_ehci_data imx31_mxc_ehci_hs_data[] __initconst = ;
const struct imx_mxc_ehci_data imx35_mxc_ehci_otg_data __initconst =
imx_mxc_ehci_data_entry_single(MX35, 0, OTG);
const struct imx_mxc_ehci_data imx35_mxc_ehci_hs_data __initconst =
imx_mxc_ehci_data_entry_single(MX35, 1, HS);
struct platform_device *__init imx_add_mxc_ehci(
const struct imx_mxc_ehci_data *data,
const struct mxc_usbh_platform_data *pdata)
