struct uart_port;
struct atmel_port_fns ;
#if defined(CONFIG_SERIAL_ATMEL)
void atmel_register_uart_fns(struct atmel_port_fns *fns);
#define atmel_register_uart_fns(fns) do  while (0)
