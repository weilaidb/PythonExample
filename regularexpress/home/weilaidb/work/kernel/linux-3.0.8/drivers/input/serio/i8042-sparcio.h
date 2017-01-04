#define _I8042_SPARCIO_H
static int i8042_kbd_irq = -1;
static int i8042_aux_irq = -1;
#define I8042_KBD_IRQ i8042_kbd_irq
#define I8042_AUX_IRQ i8042_aux_irq
#define I8042_KBD_PHYS_DESC "sparcps2/serio0"
#define I8042_AUX_PHYS_DESC "sparcps2/serio1"
#define I8042_MUX_PHYS_DESC "sparcps2/serio%d"
static void __iomem *kbd_iobase;
static struct resource *kbd_res;
#define I8042_COMMAND_REG	(kbd_iobase + 0x64UL)
#define I8042_DATA_REG		(kbd_iobase + 0x60UL)
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
#define OBP_PS2KBD_NAME1	"kb_ps2"
#define OBP_PS2KBD_NAME2	"keyboard"
#define OBP_PS2MS_NAME1		"kdmouse"
#define OBP_PS2MS_NAME2		"mouse"
static int __devinit sparc_i8042_probe(struct platform_device *op)
static int __devexit sparc_i8042_remove(struct platform_device *op)
static const struct of_device_id sparc_i8042_match[] = ;
MODULE_DEVICE_TABLE(of, sparc_i8042_match);
static struct platform_driver sparc_i8042_driver = ;
static int __init i8042_platform_init(void)
static inline void i8042_platform_exit(void)
static int __init i8042_platform_init(void)
static inline void i8042_platform_exit(void)
