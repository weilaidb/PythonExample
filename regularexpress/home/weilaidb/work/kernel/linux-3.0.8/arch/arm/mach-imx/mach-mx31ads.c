#define PBC_INTSTATUS           0x000016
#define PBC_INTCURR_STATUS      0x000018
#define PBC_INTMASK_SET         0x00001A
#define PBC_INTMASK_CLEAR       0x00001C
#define PBC_SC16C652_UARTA      0x010000
#define PBC_SC16C652_UARTB      0x010010
#define PBC_INTSTATUS_REG	(PBC_INTSTATUS + PBC_BASE_ADDRESS)
#define PBC_INTMASK_SET_REG	(PBC_INTMASK_SET + PBC_BASE_ADDRESS)
#define PBC_INTMASK_CLEAR_REG	(PBC_INTMASK_CLEAR + PBC_BASE_ADDRESS)
#define EXPIO_PARENT_INT	IOMUX_TO_IRQ(MX31_PIN_GPIO1_4)
#define MXC_IRQ_TO_EXPIO(irq)	((irq) - MXC_EXP_IO_BASE)
#define EXPIO_INT_XUART_INTA	(MXC_EXP_IO_BASE + 10)
#define EXPIO_INT_XUART_INTB	(MXC_EXP_IO_BASE + 11)
#define MXC_MAX_EXP_IO_LINES	16
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static int __init mxc_init_extuart(void)
static const struct imxuart_platform_data uart_pdata __initconst = ;
static unsigned int uart_pins[] = ;
static inline void mxc_init_imx_uart(void)
static void mx31ads_expio_irq_handler(u32 irq, struct irq_desc *desc)
static void expio_mask_irq(struct irq_data *d)
static void expio_ack_irq(struct irq_data *d)
static void expio_unmask_irq(struct irq_data *d)
static struct irq_chip expio_irq_chip = ;
static void __init mx31ads_init_expio(void)
static struct regulator_consumer_supply sw1a_consumers[] = ;
static struct regulator_init_data sw1a_data = ;
static struct regulator_init_data viohi_data = ;
static struct regulator_init_data violo_data = ;
static struct regulator_init_data sw2a_data = ;
static struct regulator_init_data ldo1_data = ;
static struct regulator_consumer_supply ldo2_consumers[] = ;
static struct regulator_init_data ldo2_data = ;
static struct regulator_init_data vdig_data = ;
static struct regulator_init_data ldo4_data = ;
static struct wm8350_led_platform_data wm8350_led_data = ;
static struct wm8350_audio_platform_data imx32ads_wm8350_setup = ;
static int mx31_wm8350_init(struct wm8350 *wm8350)
static struct wm8350_platform_data __initdata mx31_wm8350_pdata = ;
static struct i2c_board_info __initdata mx31ads_i2c1_devices[] = ;
static void mxc_init_i2c(void)
static unsigned int ssi_pins[] = ;
static void mxc_init_audio(void)
static struct map_desc mx31ads_io_desc[] __initdata = ;
static void __init mx31ads_map_io(void)
static void __init mx31ads_init_irq(void)
static void __init mx31ads_init(void)
static void __init mx31ads_timer_init(void)
static struct sys_timer mx31ads_timer = ;
MACHINE_START(MX31ADS, "Freescale MX31ADS")
.boot_params = MX3x_PHYS_OFFSET + 0x100,
.map_io = mx31ads_map_io,
.init_early = imx31_init_early,
.init_irq = mx31ads_init_irq,
.timer = &mx31ads_timer,
.init_machine = mx31ads_init,
MACHINE_END
