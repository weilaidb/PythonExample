struct mantis_uart_params ;
static struct  rates[5] = ;
static struct  parity[3] = ;
#define UART_MAX_BUF			16
int mantis_uart_read(struct mantis_pci *mantis, u8 *data)
static void mantis_uart_work(struct work_struct *work)
static int mantis_uart_setup(struct mantis_pci *mantis,
struct mantis_uart_params *params)
int mantis_uart_init(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_uart_init);
void mantis_uart_exit(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_uart_exit);
