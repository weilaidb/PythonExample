#define TX28_FEC_PHY_POWER	MXS_GPIO_NR(3, 29)
#define TX28_FEC_PHY_RESET	MXS_GPIO_NR(4, 13)
static const iomux_cfg_t tx28_fec_gpio_pads[] __initconst = ;
#define FEC_MODE (MXS_PAD_8MA | MXS_PAD_PULLUP | MXS_PAD_3V3)
static const iomux_cfg_t tx28_fec0_pads[] __initconst = ;
static const iomux_cfg_t tx28_fec1_pads[] __initconst = ;
static struct fec_platform_data tx28_fec0_data = ;
static struct fec_platform_data tx28_fec1_data = ;
int __init tx28_add_fec0(void)
int __init tx28_add_fec1(void)
