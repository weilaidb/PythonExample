#define __AR7_H__
#define AR7_SDRAM_BASE	0x14000000
#define AR7_REGS_BASE	0x08610000
#define AR7_REGS_MAC0	(AR7_REGS_BASE + 0x0000)
#define AR7_REGS_GPIO	(AR7_REGS_BASE + 0x0900)
#define AR7_REGS_POWER	(AR7_REGS_BASE + 0x0a00)
#define AR7_REGS_CLOCKS (AR7_REGS_POWER + 0x80)
#define UR8_REGS_CLOCKS (AR7_REGS_POWER + 0x20)
#define AR7_REGS_UART0	(AR7_REGS_BASE + 0x0e00)
#define AR7_REGS_USB	(AR7_REGS_BASE + 0x1200)
#define AR7_REGS_RESET	(AR7_REGS_BASE + 0x1600)
#define AR7_REGS_PINSEL (AR7_REGS_BASE + 0x160C)
#define AR7_REGS_VLYNQ0	(AR7_REGS_BASE + 0x1800)
#define AR7_REGS_DCL	(AR7_REGS_BASE + 0x1a00)
#define AR7_REGS_VLYNQ1	(AR7_REGS_BASE + 0x1c00)
#define AR7_REGS_MDIO	(AR7_REGS_BASE + 0x1e00)
#define AR7_REGS_IRQ	(AR7_REGS_BASE + 0x2400)
#define AR7_REGS_MAC1	(AR7_REGS_BASE + 0x2800)
#define AR7_REGS_WDT	(AR7_REGS_BASE + 0x1f00)
#define UR8_REGS_WDT	(AR7_REGS_BASE + 0x0b00)
#define UR8_REGS_UART1	(AR7_REGS_BASE + 0x0f00)
#define TITAN_REGS_ESWITCH_BASE	(0x08640000)
#define TITAN_REGS_MAC0		(TITAN_REGS_ESWITCH_BASE)
#define TITAN_REGS_MAC1		(TITAN_REGS_ESWITCH_BASE + 0x0800)
#define TITAN_REGS_MDIO		(TITAN_REGS_ESWITCH_BASE + 0x02000)
#define TITAN_REGS_VLYNQ0	(AR7_REGS_BASE + 0x1c00)
#define TITAN_REGS_VLYNQ1	(AR7_REGS_BASE + 0x1300)
#define AR7_RESET_PERIPHERAL	0x0
#define AR7_RESET_SOFTWARE	0x4
#define AR7_RESET_STATUS	0x8
#define AR7_RESET_BIT_CPMAC_LO	17
#define AR7_RESET_BIT_CPMAC_HI	21
#define AR7_RESET_BIT_MDIO	22
#define AR7_RESET_BIT_EPHY	26
#define TITAN_RESET_BIT_EPHY1	28
#define AR7_GPIO_INPUT	0x0
#define AR7_GPIO_OUTPUT	0x4
#define AR7_GPIO_DIR	0x8
#define AR7_GPIO_ENABLE	0xc
#define TITAN_GPIO_INPUT_0	0x0
#define TITAN_GPIO_INPUT_1	0x4
#define TITAN_GPIO_OUTPUT_0	0x8
#define TITAN_GPIO_OUTPUT_1	0xc
#define TITAN_GPIO_DIR_0	0x10
#define TITAN_GPIO_DIR_1	0x14
#define TITAN_GPIO_ENBL_0	0x18
#define TITAN_GPIO_ENBL_1	0x1c
#define AR7_CHIP_7100	0x18
#define AR7_CHIP_7200	0x2b
#define AR7_CHIP_7300	0x05
#define AR7_CHIP_TITAN	0x07
#define TITAN_CHIP_1050	0x0f
#define TITAN_CHIP_1055	0x0e
#define TITAN_CHIP_1056	0x0d
#define TITAN_CHIP_1060	0x07
#define AR7_IRQ_UART0	15
#define AR7_IRQ_UART1	16
#define AR7_AFE_CLOCK	35328000
#define AR7_REF_CLOCK	25000000
#define AR7_XTAL_CLOCK	24000000
#define AR7_WDT_HW_ENA	0x10
struct plat_cpmac_data ;
struct plat_dsl_data ;
extern int ar7_cpu_clock, ar7_bus_clock, ar7_dsp_clock;
static inline int ar7_is_titan(void)
static inline u16 ar7_chip_id(void)
static inline u16 titan_chip_id(void)
static inline u8 ar7_chip_rev(void)
struct clk ;
static inline int ar7_has_high_cpmac(void)
#define ar7_has_high_vlynq ar7_has_high_cpmac
#define ar7_has_second_uart ar7_has_high_cpmac
static inline void ar7_device_enable(u32 bit)
static inline void ar7_device_disable(u32 bit)
static inline void ar7_device_reset(u32 bit)
static inline void ar7_device_on(u32 bit)
static inline void ar7_device_off(u32 bit)
int __init ar7_gpio_init(void);
void __init ar7_init_clocks(void);
