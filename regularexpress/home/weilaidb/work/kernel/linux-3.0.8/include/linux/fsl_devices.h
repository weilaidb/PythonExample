#define _FSL_DEVICE_H_
enum fsl_usb2_operating_modes ;
enum fsl_usb2_phy_modes ;
struct clk;
struct platform_device;
struct fsl_usb2_platform_data ;
#define FSL_USB2_PORT0_ENABLED	0x00000001
#define FSL_USB2_PORT1_ENABLED	0x00000002
#define FLS_USB2_WORKAROUND_ENGCM09152	(1 << 0)
struct spi_device;
struct fsl_spi_platform_data ;
struct mpc8xx_pcmcia_ops ;
#if defined(CONFIG_PPC_83xx) && defined(CONFIG_SUSPEND)
int fsl_deep_sleep(void);
static inline int fsl_deep_sleep(void)
