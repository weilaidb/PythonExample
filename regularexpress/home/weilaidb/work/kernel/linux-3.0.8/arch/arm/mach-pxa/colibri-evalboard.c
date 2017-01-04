#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
static struct pxamci_platform_data colibri_mci_platform_data = ;
static void __init colibri_mmc_init(void)
static inline void colibri_mmc_init(void)
#if defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static int colibri_ohci_init(struct device *dev)
static struct pxaohci_platform_data colibri_ohci_info = ;
static void __init colibri_uhc_init(void)
static inline void colibri_uhc_init(void)
#if defined(CONFIG_RTC_DRV_DS1307) || defined(CONFIG_RTC_DRV_DS1307_MODULE)
static struct i2c_board_info __initdata colibri_i2c_devs[] = ;
static void __init colibri_rtc_init(void)
static inline void colibri_rtc_init(void)
void __init colibri_evalboard_init(void)
