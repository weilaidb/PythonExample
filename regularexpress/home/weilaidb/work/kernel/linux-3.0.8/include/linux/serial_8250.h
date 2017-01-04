#define _LINUX_SERIAL_8250_H
struct plat_serial8250_port ;
enum ;
struct uart_port;
int serial8250_register_port(struct uart_port *);
void serial8250_unregister_port(int line);
void serial8250_suspend_port(int line);
void serial8250_resume_port(int line);
extern int early_serial_setup(struct uart_port *port);
extern int serial8250_find_port(struct uart_port *p);
extern int serial8250_find_port_for_earlycon(void);
extern int setup_early_serial8250_console(char *cmdline);
extern void serial8250_do_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old);
extern void serial8250_do_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate);
extern void serial8250_set_isa_configurator(void (*v)
(int port, struct uart_port *up,
unsigned short *capabilities));
