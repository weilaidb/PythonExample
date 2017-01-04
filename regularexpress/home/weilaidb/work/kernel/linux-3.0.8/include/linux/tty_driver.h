#define _LINUX_TTY_DRIVER_H
struct tty_struct;
struct tty_driver;
struct serial_icounter_struct;
struct tty_operations ;
struct tty_driver ;
extern struct list_head tty_drivers;
extern struct tty_driver *alloc_tty_driver(int lines);
extern void put_tty_driver(struct tty_driver *driver);
extern void tty_set_operations(struct tty_driver *driver,
const struct tty_operations *op);
extern struct tty_driver *tty_find_polling_driver(char *name, int *line);
extern void tty_driver_kref_put(struct tty_driver *driver);
static inline struct tty_driver *tty_driver_kref_get(struct tty_driver *d)
#define TTY_DRIVER_MAGIC		0x5402
#define TTY_DRIVER_INSTALLED		0x0001
#define TTY_DRIVER_RESET_TERMIOS	0x0002
#define TTY_DRIVER_REAL_RAW		0x0004
#define TTY_DRIVER_DYNAMIC_DEV		0x0008
#define TTY_DRIVER_DEVPTS_MEM		0x0010
#define TTY_DRIVER_HARDWARE_BREAK	0x0020
#define TTY_DRIVER_TYPE_SYSTEM		0x0001
#define TTY_DRIVER_TYPE_CONSOLE		0x0002
#define TTY_DRIVER_TYPE_SERIAL		0x0003
#define TTY_DRIVER_TYPE_PTY		0x0004
#define TTY_DRIVER_TYPE_SCC		0x0005
#define TTY_DRIVER_TYPE_SYSCONS		0x0006
#define SYSTEM_TYPE_TTY			0x0001
#define SYSTEM_TYPE_CONSOLE		0x0002
#define SYSTEM_TYPE_SYSCONS		0x0003
#define SYSTEM_TYPE_SYSPTMX		0x0004
#define PTY_TYPE_MASTER			0x0001
#define PTY_TYPE_SLAVE			0x0002
#define SERIAL_TYPE_NORMAL	1
