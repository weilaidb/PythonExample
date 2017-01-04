static void jz4740_halt(void)
#define JZ_REG_WDT_DATA 0x00
#define JZ_REG_WDT_COUNTER_ENABLE 0x04
#define JZ_REG_WDT_COUNTER 0x08
#define JZ_REG_WDT_CTRL 0x0c
static void jz4740_restart(char *command)
#define JZ_REG_RTC_CTRL		0x00
#define JZ_REG_RTC_HIBERNATE	0x20
#define JZ_RTC_CTRL_WRDY	BIT(7)
static void jz4740_power_off(void)
void jz4740_reset_init(void)
