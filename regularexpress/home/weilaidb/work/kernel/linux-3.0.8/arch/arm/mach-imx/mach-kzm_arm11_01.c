#define KZM_ARM11_IO_ADDRESS(x) (IOMEM(					\
IMX_IO_P2V_MODULE(x, MX31_CS4) ?:				\
IMX_IO_P2V_MODULE(x, MX31_CS5)) ?:				\
MX31_IO_ADDRESS(x))
#define KZM_ARM11_CTL1		(MX31_CS4_BASE_ADDR + 0x1000)
#define KZM_ARM11_CTL2		(MX31_CS4_BASE_ADDR + 0x1001)
#define KZM_ARM11_RSW1		(MX31_CS4_BASE_ADDR + 0x1002)
#define KZM_ARM11_BACK_LIGHT	(MX31_CS4_BASE_ADDR + 0x1004)
#define KZM_ARM11_FPGA_REV	(MX31_CS4_BASE_ADDR + 0x1008)
#define KZM_ARM11_7SEG_LED	(MX31_CS4_BASE_ADDR + 0x1010)
#define KZM_ARM11_LEDS		(MX31_CS4_BASE_ADDR + 0x1020)
#define KZM_ARM11_DIPSW2	(MX31_CS4_BASE_ADDR + 0x1003)
#define KZM_ARM11_16550		(MX31_CS4_BASE_ADDR + 0x1050)
#if defined(CONFIG_SERIAL_8250) || defined(CONFIG_SERIAL_8250_MODULE)
static struct plat_serial8250_port serial_platform_data[] = ;
static struct resource serial8250_resources[] = ;
static struct platform_device serial_device = ;
static int __init kzm_init_ext_uart(void)
static inline int kzm_init_ext_uart(void)
#if defined(CONFIG_SMSC911X) || defined(CONFIG_SMSC911X_MODULE)
static struct smsc911x_platform_config kzm_smsc9118_config = ;
static struct resource kzm_smsc9118_resources[] = ;
static struct platform_device kzm_smsc9118_device = ;
static int __init kzm_init_smsc9118(void)
static inline int kzm_init_smsc9118(void)
#if defined(CONFIG_SERIAL_IMX) || defined(CONFIG_SERIAL_IMX_MODULE)
static const struct imxuart_platform_data uart_pdata __initconst = ;
static void __init kzm_init_imx_uart(void)
static inline void kzm_init_imx_uart(void)
static int kzm_pins[] __initdata = ;
static void __init kzm_board_init(void)
static struct map_desc kzm_io_desc[] __initdata = ;
static void __init kzm_map_io(void)
static void __init kzm_timer_init(void)
static struct sys_timer kzm_timer = ;
MACHINE_START(KZM_ARM11_01, "Kyoto Microcomputer Co., Ltd. KZM-ARM11-01")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = kzm_map_io,
.init_early = imx31_init_early,
.init_irq = mx31_init_irq,
.timer = &kzm_timer,
.init_machine = kzm_board_init,
MACHINE_END
