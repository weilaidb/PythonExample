#define _I8042_IP22_H
#define I8042_KBD_PHYS_DESC "hpc3ps2/serio0"
#define I8042_AUX_PHYS_DESC "hpc3ps2/serio1"
#define I8042_MUX_PHYS_DESC "hpc3ps2/serio%d"
#define I8042_KBD_IRQ SGI_KEYBD_IRQ
#define I8042_AUX_IRQ SGI_KEYBD_IRQ
#define I8042_COMMAND_REG	((unsigned long)&sgioc->kbdmouse.command)
#define I8042_STATUS_REG	((unsigned long)&sgioc->kbdmouse.command)
#define I8042_DATA_REG		((unsigned long)&sgioc->kbdmouse.data)
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
static inline int i8042_platform_init(void)
static inline void i8042_platform_exit(void)
