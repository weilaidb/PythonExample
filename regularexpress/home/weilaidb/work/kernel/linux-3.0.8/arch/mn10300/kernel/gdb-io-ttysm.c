#if defined(CONFIG_GDBSTUB_ON_TTYSM0)
struct mn10300_serial_port *const gdbstub_port = &mn10300_serial_port_sif0;
#elif defined(CONFIG_GDBSTUB_ON_TTYSM1)
struct mn10300_serial_port *const gdbstub_port = &mn10300_serial_port_sif1;
struct mn10300_serial_port *const gdbstub_port = &mn10300_serial_port_sif2;
void __init gdbstub_io_init(void)
void gdbstub_io_set_baud(unsigned baud)
int gdbstub_io_rx_char(unsigned char *_ch, int nonblock)
void gdbstub_io_tx_char(unsigned char ch)
void gdbstub_io_tx_flush(void)
