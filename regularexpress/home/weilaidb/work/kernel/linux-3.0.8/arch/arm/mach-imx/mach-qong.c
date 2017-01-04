#define QONG_FPGA_VERSION(major, minor, rev)	\
(((major & 0xF) << 12) | ((minor & 0xF) << 8) | (rev & 0xFF))
#define QONG_FPGA_BASEADDR		MX31_CS1_BASE_ADDR
#define QONG_FPGA_PERIPH_SIZE		(1 << 24)
#define QONG_FPGA_CTRL_BASEADDR		QONG_FPGA_BASEADDR
#define QONG_FPGA_CTRL_SIZE		0x10
#define QONG_FPGA_CTRL_VERSION		0x00
#define QONG_DNET_ID		1
#define QONG_DNET_BASEADDR	\
(QONG_FPGA_BASEADDR + QONG_DNET_ID * QONG_FPGA_PERIPH_SIZE)
#define QONG_DNET_SIZE		0x00001000
#define QONG_FPGA_IRQ		IOMUX_TO_IRQ(MX31_PIN_DTR_DCE1)
static const struct imxuart_platform_data uart_pdata __initconst = ;
static int uart_pins[] = ;
static inline void __init mxc_init_imx_uart(void)
static struct resource dnet_resources[] = ;
static struct platform_device dnet_device = ;
static int __init qong_init_dnet(void)
static struct physmap_flash_data qong_flash_data = ;
static struct resource qong_flash_resource = ;
static struct platform_device qong_nor_mtd_device = ;
static void qong_init_nor_mtd(void)
static void qong_nand_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static int qong_nand_device_ready(struct mtd_info *mtd)
static void qong_nand_select_chip(struct mtd_info *mtd, int chip)
static struct platform_nand_data qong_nand_data = ;
static struct resource qong_nand_resource = ;
static struct platform_device qong_nand_device = ;
static void __init qong_init_nand_mtd(void)
static void __init qong_init_fpga(void)
static void __init qong_init(void)
static void __init qong_timer_init(void)
static struct sys_timer qong_timer = ;
MACHINE_START(QONG, "Dave/DENX QongEVB-LITE")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx31_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &qong_timer,
.init_machine = qong_init,
MACHINE_END
