#define DRIVER_NAME "timberdale"
struct timberdale_device ;
static struct tsc2007_platform_data timberdale_tsc2007_platform_data = ;
static struct i2c_board_info timberdale_i2c_board_info[] = ;
static __devinitdata struct xiic_i2c_platform_data
timberdale_xiic_platform_data = ;
static __devinitdata struct ocores_i2c_platform_data
timberdale_ocores_platform_data = ;
static const __devinitconst struct resource timberdale_xiic_resources[] = ;
static const __devinitconst struct resource timberdale_ocores_resources[] = ;
const struct max7301_platform_data timberdale_max7301_platform_data = ;
const struct mc33880_platform_data timberdale_mc33880_platform_data = ;
static struct spi_board_info timberdale_spi_16bit_board_info[] = ;
static struct spi_board_info timberdale_spi_8bit_board_info[] = ;
static __devinitdata struct xspi_platform_data timberdale_xspi_platform_data = ;
static const __devinitconst struct resource timberdale_spi_resources[] = ;
static __devinitdata struct ks8842_platform_data
timberdale_ks8842_platform_data = ;
static const __devinitconst struct resource timberdale_eth_resources[] = ;
static __devinitdata struct timbgpio_platform_data
timberdale_gpio_platform_data = ;
static const __devinitconst struct resource timberdale_gpio_resources[] = ;
static const __devinitconst struct resource timberdale_mlogicore_resources[] = ;
static const __devinitconst struct resource timberdale_uart_resources[] = ;
static const __devinitconst struct resource timberdale_uartlite_resources[] = ;
static __devinitdata struct i2c_board_info timberdale_adv7180_i2c_board_info = ;
static __devinitdata struct timb_video_platform_data
timberdale_video_platform_data = ;
static const __devinitconst struct resource
timberdale_radio_resources[] = ;
static __devinitdata struct i2c_board_info timberdale_tef6868_i2c_board_info = ;
static __devinitdata struct i2c_board_info timberdale_saa7706_i2c_board_info = ;
static __devinitdata struct timb_radio_platform_data
timberdale_radio_platform_data = ;
static const __devinitconst struct resource timberdale_video_resources[] = ;
static __devinitdata struct timb_dma_platform_data timb_dma_platform_data = ;
static const __devinitconst struct resource timberdale_dma_resources[] = ;
static __devinitdata struct mfd_cell timberdale_cells_bar0_cfg0[] = ;
static __devinitdata struct mfd_cell timberdale_cells_bar0_cfg1[] = ;
static __devinitdata struct mfd_cell timberdale_cells_bar0_cfg2[] = ;
static __devinitdata struct mfd_cell timberdale_cells_bar0_cfg3[] = ;
static const __devinitconst struct resource timberdale_sdhc_resources[] = ;
static __devinitdata struct mfd_cell timberdale_cells_bar1[] = ;
static __devinitdata struct mfd_cell timberdale_cells_bar2[] = ;
static ssize_t show_fw_ver(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(fw_ver, S_IRUGO, show_fw_ver, NULL);
static int __devinit timb_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit timb_remove(struct pci_dev *dev)
static struct pci_device_id timberdale_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, timberdale_pci_tbl);
static struct pci_driver timberdale_pci_driver = ;
static int __init timberdale_init(void)
static void __exit timberdale_exit(void)
module_init(timberdale_init);
module_exit(timberdale_exit);
MODULE_AUTHOR("Mocean Laboratories <info@mocean-labs.com>");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL v2");
