static struct clk *mxc_ahb_clk;
static struct clk *mxc_usb_clk;
#define USBPHYCTRL_OTGBASE_OFFSET	0x608
#define USBPHYCTRL_EVDO			(1 << 23)
int fsl_udc_clk_init(struct platform_device *pdev)
void fsl_udc_clk_finalize(struct platform_device *pdev)
void fsl_udc_clk_release(void)
