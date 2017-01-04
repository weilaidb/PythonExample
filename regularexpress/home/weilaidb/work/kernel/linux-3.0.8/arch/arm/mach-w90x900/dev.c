#define NUC900_FLASH_BASE	0xA0000000
#define NUC900_FLASH_SIZE	0x400000
#define SPIOFFSET		0x200
#define SPIOREG_SIZE		0x100
static struct mtd_partition nuc900_flash_partitions[] = ;
static struct physmap_flash_data nuc900_flash_data = ;
static struct resource nuc900_flash_resources[] = ;
static struct platform_device nuc900_flash_device = ;
static struct resource nuc900_usb_ehci_resource[] = ;
static u64 nuc900_device_usb_ehci_dmamask = 0xffffffffUL;
static struct platform_device nuc900_device_usb_ehci = ;
static struct resource nuc900_usb_ohci_resource[] = ;
static u64 nuc900_device_usb_ohci_dmamask = 0xffffffffUL;
static struct platform_device nuc900_device_usb_ohci = ;
static struct resource nuc900_usbgadget_resource[] = ;
static struct platform_device nuc900_device_usbgadget = ;
static struct resource nuc900_emc_resource[] = ;
static u64 nuc900_device_emc_dmamask = 0xffffffffUL;
static struct platform_device nuc900_device_emc = ;
static struct nuc900_spi_info nuc900_spiflash_data = ;
static struct resource nuc900_spi_resource[] = ;
static struct platform_device nuc900_device_spi = ;
static struct mtd_partition nuc900_spi_flash_partitions[] = ;
static struct flash_platform_data nuc900_spi_flash_data = ;
static struct spi_board_info nuc900_spi_board_info[] __initdata = ;
static struct resource nuc900_wdt_resource[] = ;
static struct platform_device nuc900_device_wdt = ;
static struct resource nuc900_rtc_resource[] = ;
struct platform_device nuc900_device_rtc = ;
static struct resource nuc900_ts_resource[] = ;
struct platform_device nuc900_device_ts = ;
static struct resource nuc900_fmi_resource[] = ;
struct platform_device nuc900_device_fmi = ;
static int nuc900_keymap[] = ;
static struct matrix_keymap_data nuc900_map_data = ;
struct w90p910_keypad_platform_data nuc900_keypad_info = ;
static struct resource nuc900_kpi_resource[] = ;
struct platform_device nuc900_device_kpi = ;
static struct nuc900fb_display __initdata nuc900_lcd_info[] = ;
static struct nuc900fb_mach_info nuc900_fb_info __initdata = ;
static struct resource nuc900_lcd_resource[] = ;
static u64 nuc900_device_lcd_dmamask = -1;
struct platform_device nuc900_device_lcd = ;
static u64 nuc900_device_audio_dmamask = -1;
static struct resource nuc900_ac97_resource[] = ;
struct platform_device nuc900_device_audio = ;
static struct platform_device *nuc900_public_dev[] __initdata = ;
void __init nuc900_board_init(struct platform_device **device, int size)
