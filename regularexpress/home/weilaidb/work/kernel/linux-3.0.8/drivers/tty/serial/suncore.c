static int sunserial_current_minor = 64;
int sunserial_register_minors(struct uart_driver *drv, int count)
EXPORT_SYMBOL(sunserial_register_minors);
void sunserial_unregister_minors(struct uart_driver *drv, int count)
EXPORT_SYMBOL(sunserial_unregister_minors);
int sunserial_console_match(struct console *con, struct device_node *dp,
struct uart_driver *drv, int line, bool ignore_line)
EXPORT_SYMBOL(sunserial_console_match);
void sunserial_console_termios(struct console *con, struct device_node *uart_dp)
static struct mouse_baud_cflag  mouse_baud_table[] = ;
unsigned int suncore_mouse_baud_cflag_next(unsigned int cflag, int *new_baud)
EXPORT_SYMBOL(suncore_mouse_baud_cflag_next);
int suncore_mouse_baud_detection(unsigned char ch, int is_break)
EXPORT_SYMBOL(suncore_mouse_baud_detection);
static int __init suncore_init(void)
static void __exit suncore_exit(void)
module_init(suncore_init);
module_exit(suncore_exit);
MODULE_AUTHOR("Eddie C. Dost, David S. Miller");
MODULE_DESCRIPTION("Sun serial common layer");
MODULE_LICENSE("GPL");
