static inline unsigned int serial_read_reg(struct plat_serial8250_port *up,
int offset)
static inline void serial_write_reg(struct plat_serial8250_port *p, int offset,
int value)
static void __init davinci_serial_reset(struct plat_serial8250_port *p)
int __init davinci_serial_init(struct davinci_uart_config *info)
