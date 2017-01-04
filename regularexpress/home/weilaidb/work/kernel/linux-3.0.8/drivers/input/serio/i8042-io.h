#define _I8042_IO_H
#define I8042_KBD_PHYS_DESC "isa0060/serio0"
#define I8042_AUX_PHYS_DESC "isa0060/serio1"
#define I8042_MUX_PHYS_DESC "isa0060/serio%d"
# define I8042_KBD_IRQ	1
# define I8042_AUX_IRQ	(RTC_PORT(0) == 0x170 ? 9 : 12)
#elif defined(__arm__)
#elif defined(CONFIG_SH_CAYMAN)
#elif defined(CONFIG_PPC)
extern int of_i8042_kbd_irq;
extern int of_i8042_aux_irq;
# define I8042_KBD_IRQ  of_i8042_kbd_irq
# define I8042_AUX_IRQ  of_i8042_aux_irq
# define I8042_KBD_IRQ	1
# define I8042_AUX_IRQ	12
#define I8042_COMMAND_REG	0x64
#define I8042_STATUS_REG	0x64
#define I8042_DATA_REG		0x60
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
static inline int i8042_platform_init(void)
static inline void i8042_platform_exit(void)
