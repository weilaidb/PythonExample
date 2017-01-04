#define _I8042_SNIRM_H
#define I8042_KBD_PHYS_DESC "onboard/serio0"
#define I8042_AUX_PHYS_DESC "onboard/serio1"
#define I8042_MUX_PHYS_DESC "onboard/serio%d"
static int i8042_kbd_irq;
static int i8042_aux_irq;
#define I8042_KBD_IRQ i8042_kbd_irq
#define I8042_AUX_IRQ i8042_aux_irq
static void __iomem *kbd_iobase;
#define I8042_COMMAND_REG	(kbd_iobase + 0x64UL)
#define I8042_DATA_REG		(kbd_iobase + 0x60UL)
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
static inline int i8042_platform_init(void)
static inline void i8042_platform_exit(void)
