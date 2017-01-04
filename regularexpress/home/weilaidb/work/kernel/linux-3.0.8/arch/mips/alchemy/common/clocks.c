#define AU1000_SRC_CLK	12000000
static unsigned int au1x00_clock;
static unsigned long uart_baud_base;
void set_au1x00_speed(unsigned int new_freq)
unsigned int get_au1x00_speed(void)
EXPORT_SYMBOL(get_au1x00_speed);
unsigned long get_au1x00_uart_baud_base(void)
void set_au1x00_uart_baud_base(unsigned long new_baud_base)
unsigned long au1xxx_calc_clock(void)
