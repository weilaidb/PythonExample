static struct mcf_platform_uart m532x_uart_platform[] = ;
static struct platform_device m532x_uart = ;
static struct resource m532x_fec_resources[] = ;
static struct platform_device m532x_fec = ;
#if defined(CONFIG_SPI_COLDFIRE_QSPI) || defined(CONFIG_SPI_COLDFIRE_QSPI_MODULE)
static struct resource m532x_qspi_resources[] = ;
#define MCFQSPI_CS0    84
#define MCFQSPI_CS1    85
#define MCFQSPI_CS2    86
static int m532x_cs_setup(struct mcfqspi_cs_control *cs_control)
static void m532x_cs_teardown(struct mcfqspi_cs_control *cs_control)
static void m532x_cs_select(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static void m532x_cs_deselect(struct mcfqspi_cs_control *cs_control,
u8 chip_select, bool cs_high)
static struct mcfqspi_cs_control m532x_cs_control = ;
static struct mcfqspi_platform_data m532x_qspi_data = ;
static struct platform_device m532x_qspi = ;
static void __init m532x_qspi_init(void)
static struct platform_device *m532x_devices[] __initdata = ;
static void __init m532x_uart_init_line(int line, int irq)
static void __init m532x_uarts_init(void)
static void __init m532x_fec_init(void)
static void m532x_cpu_reset(void)
void __init config_BSP(char *commandp, int size)
static int __init init_BSP(void)
arch_initcall(init_BSP);
#define MAX_FVCO	500000
#define MAX_FSYS	80000
#define MIN_FSYS	58333
#define FREF		16000
#define MAX_MFD		135
#define MIN_MFD		88
#define BUSDIV		6
#define MIN_LPD		(1 << 0)
#define MAX_LPD		(1 << 15)
#define DEFAULT_LPD	(1 << 1)
#define SYS_CLK_KHZ	80000
#define SYSTEM_PERIOD	12.5
#define SDRAM_BL	8
#define SDRAM_TWR	2
#define SDRAM_CASL	2.5
#define SDRAM_TRCD	2
#define SDRAM_TRP	2
#define SDRAM_TRFC	7
#define SDRAM_TREFI	7800
#define EXT_SRAM_ADDRESS	(0xC0000000)
#define FLASH_ADDRESS		(0x00000000)
#define SDRAM_ADDRESS		(0x40000000)
#define NAND_FLASH_ADDRESS	(0xD0000000)
int sys_clk_khz = 0;
int sys_clk_mhz = 0;
void wtm_init(void);
void scm_init(void);
void gpio_init(void);
void fbcs_init(void);
void sdramc_init(void);
int  clock_pll (int fsys, int flags);
int  clock_limp (int);
int  clock_exit_limp (void);
int  get_sys_clock (void);
asmlinkage void __init sysinit(void)
void wtm_init(void)
#define MCF_SCM_BCR_GBW		(0x00000100)
#define MCF_SCM_BCR_GBR		(0x00000200)
void scm_init(void)
void fbcs_init(void)
void sdramc_init(void)
void gpio_init(void)
int clock_pll(int fsys, int flags)
int clock_limp(int div)
int clock_exit_limp(void)
int get_sys_clock(void)
