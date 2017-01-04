struct platform_device *imx_add_platform_device_dmamask(
const char *name, int id,
const struct resource *res, unsigned int num_resources,
const void *data, size_t size_data, u64 dmamask);
static inline struct platform_device *imx_add_platform_device(
const char *name, int id,
const struct resource *res, unsigned int num_resources,
const void *data, size_t size_data)
struct imx_fec_data ;
struct platform_device *__init imx_add_fec(
const struct imx_fec_data *data,
const struct fec_platform_data *pdata);
struct imx_flexcan_data ;
struct platform_device *__init imx_add_flexcan(
const struct imx_flexcan_data *data,
const struct flexcan_platform_data *pdata);
struct imx_fsl_usb2_udc_data ;
struct platform_device *__init imx_add_fsl_usb2_udc(
const struct imx_fsl_usb2_udc_data *data,
const struct fsl_usb2_platform_data *pdata);
struct platform_device *__init imx_add_gpio_keys(
const struct gpio_keys_platform_data *pdata);
struct imx_imx21_hcd_data ;
struct platform_device *__init imx_add_imx21_hcd(
const struct imx_imx21_hcd_data *data,
const struct mx21_usbh_platform_data *pdata);
struct imx_imx2_wdt_data ;
struct platform_device *__init imx_add_imx2_wdt(
const struct imx_imx2_wdt_data *data);
struct imx_imxdi_rtc_data ;
struct platform_device *__init imx_add_imxdi_rtc(
const struct imx_imxdi_rtc_data *data);
struct imx_imx_fb_data ;
struct platform_device *__init imx_add_imx_fb(
const struct imx_imx_fb_data *data,
const struct imx_fb_platform_data *pdata);
struct imx_imx_i2c_data ;
struct platform_device *__init imx_add_imx_i2c(
const struct imx_imx_i2c_data *data,
const struct imxi2c_platform_data *pdata);
struct imx_imx_keypad_data ;
struct platform_device *__init imx_add_imx_keypad(
const struct imx_imx_keypad_data *data,
const struct matrix_keymap_data *pdata);
struct imx_imx_ssi_data ;
struct platform_device *__init imx_add_imx_ssi(
const struct imx_imx_ssi_data *data,
const struct imx_ssi_platform_data *pdata);
struct imx_imx_uart_3irq_data ;
struct platform_device *__init imx_add_imx_uart_3irq(
const struct imx_imx_uart_3irq_data *data,
const struct imxuart_platform_data *pdata);
struct imx_imx_uart_1irq_data ;
struct platform_device *__init imx_add_imx_uart_1irq(
const struct imx_imx_uart_1irq_data *data,
const struct imxuart_platform_data *pdata);
struct imx_imx_udc_data ;
struct platform_device *__init imx_add_imx_udc(
const struct imx_imx_udc_data *data,
const struct imxusb_platform_data *pdata);
struct imx_ipu_core_data ;
struct platform_device *__init imx_add_ipu_core(
const struct imx_ipu_core_data *data,
const struct ipu_platform_data *pdata);
struct platform_device *__init imx_alloc_mx3_camera(
const struct imx_ipu_core_data *data,
const struct mx3_camera_pdata *pdata);
struct platform_device *__init imx_add_mx3_sdc_fb(
const struct imx_ipu_core_data *data,
struct mx3fb_platform_data *pdata);
struct imx_mx1_camera_data ;
struct platform_device *__init imx_add_mx1_camera(
const struct imx_mx1_camera_data *data,
const struct mx1_camera_pdata *pdata);
struct imx_mx2_camera_data ;
struct platform_device *__init imx_add_mx2_camera(
const struct imx_mx2_camera_data *data,
const struct mx2_camera_platform_data *pdata);
struct imx_mxc_ehci_data ;
struct platform_device *__init imx_add_mxc_ehci(
const struct imx_mxc_ehci_data *data,
const struct mxc_usbh_platform_data *pdata);
struct imx_mxc_mmc_data ;
struct platform_device *__init imx_add_mxc_mmc(
const struct imx_mxc_mmc_data *data,
const struct imxmmc_platform_data *pdata);
struct imx_mxc_nand_data ;
struct platform_device *__init imx_add_mxc_nand(
const struct imx_mxc_nand_data *data,
const struct mxc_nand_platform_data *pdata);
struct imx_mxc_pwm_data ;
struct platform_device *__init imx_add_mxc_pwm(
const struct imx_mxc_pwm_data *data);
struct imx_mxc_rtc_data ;
struct platform_device *__init imx_add_mxc_rtc(
const struct imx_mxc_rtc_data *data);
struct imx_mxc_w1_data ;
struct platform_device *__init imx_add_mxc_w1(
const struct imx_mxc_w1_data *data);
struct imx_sdhci_esdhc_imx_data ;
struct platform_device *__init imx_add_sdhci_esdhc_imx(
const struct imx_sdhci_esdhc_imx_data *data,
const struct esdhc_platform_data *pdata);
struct imx_spi_imx_data ;
struct platform_device *__init imx_add_spi_imx(
const struct imx_spi_imx_data *data,
const struct spi_imx_master *pdata);
