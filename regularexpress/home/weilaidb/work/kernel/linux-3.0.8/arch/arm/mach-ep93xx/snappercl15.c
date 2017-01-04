#define SNAPPERCL15_NAND_BASE	(EP93XX_CS7_PHYS_BASE + SZ_16M)
#define SNAPPERCL15_NAND_WPN	(1 << 8)
#define SNAPPERCL15_NAND_ALE	(1 << 9)
#define SNAPPERCL15_NAND_CLE	(1 << 10)
#define SNAPPERCL15_NAND_CEN	(1 << 11)
#define SNAPPERCL15_NAND_RDY	(1 << 14)
#define NAND_CTRL_ADDR(chip) 	(chip->IO_ADDR_W + 0x40)
static void snappercl15_nand_cmd_ctrl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int snappercl15_nand_dev_ready(struct mtd_info *mtd)
static const char *snappercl15_nand_part_probes[] = ;
static struct mtd_partition snappercl15_nand_parts[] = ;
static struct platform_nand_data snappercl15_nand_data = ;
static struct resource snappercl15_nand_resource[] = ;
static struct platform_device snappercl15_nand_device = ;
static struct ep93xx_eth_data __initdata snappercl15_eth_data = ;
static struct i2c_gpio_platform_data __initdata snappercl15_i2c_gpio_data = ;
static struct i2c_board_info __initdata snappercl15_i2c_data[] = ;
static struct ep93xxfb_mach_info __initdata snappercl15_fb_info = ;
static void __init snappercl15_init_machine(void)
MACHINE_START(SNAPPER_CL15, "Bluewater Systems Snapper CL15")
.boot_params	= EP93XX_SDCE0_PHYS_BASE + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer 		= &ep93xx_timer,
.init_machine	= snappercl15_init_machine,
MACHINE_END
