#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct map_desc ts72xx_io_desc[] __initdata = ;
static void __init ts72xx_map_io(void)
#define TS72XX_NAND_CONTROL_ADDR_LINE	22
#define TS72XX_NAND_BUSY_ADDR_LINE	23
static void ts72xx_nand_hwcontrol(struct mtd_info *mtd,
int cmd, unsigned int ctrl)
static int ts72xx_nand_device_ready(struct mtd_info *mtd)
static const char *ts72xx_nand_part_probes[] = ;
#define TS72XX_BOOTROM_PART_SIZE	(SZ_16K)
#define TS72XX_REDBOOT_PART_SIZE	(SZ_2M + SZ_1M)
static struct mtd_partition ts72xx_nand_parts[] = ;
static void ts72xx_nand_set_parts(uint64_t size,
struct platform_nand_chip *chip)
static struct platform_nand_data ts72xx_nand_data = ;
static struct resource ts72xx_nand_resource[] = ;
static struct platform_device ts72xx_nand_flash = ;
static void __init ts72xx_register_flash(void)
static unsigned char ts72xx_rtc_readbyte(unsigned long addr)
static void ts72xx_rtc_writebyte(unsigned char value, unsigned long addr)
static struct m48t86_ops ts72xx_rtc_ops = ;
static struct platform_device ts72xx_rtc_device = ;
static struct resource ts72xx_wdt_resources[] = ;
static struct platform_device ts72xx_wdt_device = ;
static struct ep93xx_eth_data __initdata ts72xx_eth_data = ;
static void __init ts72xx_init_machine(void)
MACHINE_START(TS72XX, "Technologic Systems TS-72xx SBC")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ts72xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= ts72xx_init_machine,
MACHINE_END
