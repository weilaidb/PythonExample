#define ETH0_RX_DMA_ADDR  (DMA0_BASE_ADDR + 0 * DMA_CHAN_OFFSET)
#define ETH0_TX_DMA_ADDR  (DMA0_BASE_ADDR + 1 * DMA_CHAN_OFFSET)
extern unsigned int idt_cpu_freq;
static struct mpmc_device dev3;
void set_latch_u5(unsigned char or_mask, unsigned char nand_mask)
EXPORT_SYMBOL(set_latch_u5);
unsigned char get_latch_u5(void)
EXPORT_SYMBOL(get_latch_u5);
static struct resource korina_dev0_res[] = ;
static struct korina_device korina_dev0_data = ;
static struct platform_device korina_dev0 = ;
static struct resource cf_slot0_res[] = ;
static struct cf_device cf_slot0_data = ;
static struct platform_device cf_slot0 = ;
static int rb532_dev_ready(struct mtd_info *mtd)
static void rb532_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static struct resource nand_slot0_res[] = ;
static struct platform_nand_data rb532_nand_data = ;
static struct platform_device nand_slot0 = ;
static struct mtd_partition rb532_partition_info[] = ;
static struct platform_device rb532_led = ;
static struct platform_device rb532_button = ;
static struct resource rb532_wdt_res[] = ;
static struct platform_device rb532_wdt = ;
static struct plat_serial8250_port rb532_uart_res[] = ;
static struct platform_device rb532_uart = ;
static struct platform_device *rb532_devs[] = ;
static void __init parse_mac_addr(char *macstr)
#define NAND_CHIP_DELAY	25
static void __init rb532_nand_setup(void)
static int __init plat_setup_devices(void)
static int __init setup_kmac(char *s)
__setup("kmac=", setup_kmac);
arch_initcall(plat_setup_devices);
