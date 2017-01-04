#define _NWPSERIAL_H
int nwpserial_register_port(struct uart_port *port);
void nwpserial_unregister_port(int line);
