struct uart_port;
struct uart_info;
struct sa1100_port_fns ;
void sa1100_register_uart_fns(struct sa1100_port_fns *fns);
void sa1100_register_uart(int idx, int port);
#define sa1100_register_uart_fns(fns) do  while (0)
#define sa1100_register_uart(idx,port) do  while (0)
