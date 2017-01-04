#define _I8042_X86IA64IO_H
#define I8042_KBD_PHYS_DESC "isa0060/serio0"
#define I8042_AUX_PHYS_DESC "isa0060/serio1"
#define I8042_MUX_PHYS_DESC "isa0060/serio%d"
#if defined(__ia64__)
# define I8042_MAP_IRQ(x)	isa_irq_to_vector((x))
# define I8042_MAP_IRQ(x)	(x)
#define I8042_KBD_IRQ	i8042_kbd_irq
#define I8042_AUX_IRQ	i8042_aux_irq
static int i8042_kbd_irq;
static int i8042_aux_irq;
#define I8042_COMMAND_REG	i8042_command_reg
#define I8042_STATUS_REG	i8042_command_reg
#define I8042_DATA_REG		i8042_data_reg
static int i8042_command_reg = 0x64;
static int i8042_data_reg = 0x60;
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
static const struct dmi_system_id __initconst i8042_dmi_noloop_table[] = ;
static const struct dmi_system_id __initconst i8042_dmi_nomux_table[] = ;
static const struct dmi_system_id __initconst i8042_dmi_reset_table[] = ;
static const struct dmi_system_id __initconst i8042_dmi_nopnp_table[] = ;
static const struct dmi_system_id __initconst i8042_dmi_laptop_table[] = ;
static const struct dmi_system_id __initconst i8042_dmi_notimeout_table[] = ;
static const struct dmi_system_id __initconst i8042_dmi_dritek_table[] = ;
static bool i8042_pnp_kbd_registered;
static unsigned int i8042_pnp_kbd_devices;
static bool i8042_pnp_aux_registered;
static unsigned int i8042_pnp_aux_devices;
static int i8042_pnp_command_reg;
static int i8042_pnp_data_reg;
static int i8042_pnp_kbd_irq;
static int i8042_pnp_aux_irq;
static char i8042_pnp_kbd_name[32];
static char i8042_pnp_aux_name[32];
static int i8042_pnp_kbd_probe(struct pnp_dev *dev, const struct pnp_device_id *did)
static int i8042_pnp_aux_probe(struct pnp_dev *dev, const struct pnp_device_id *did)
static struct pnp_device_id pnp_kbd_devids[] = ;
static struct pnp_driver i8042_pnp_kbd_driver = ;
static struct pnp_device_id pnp_aux_devids[] = ;
static struct pnp_driver i8042_pnp_aux_driver = ;
static void i8042_pnp_exit(void)
static int __init i8042_pnp_init(void)
static inline int i8042_pnp_init(void)
static inline void i8042_pnp_exit(void)
static int __init i8042_platform_init(void)
static inline void i8042_platform_exit(void)
