#define _I8042_UNICORE32_H
#define I8042_KBD_PHYS_DESC "isa0060/serio0"
#define I8042_AUX_PHYS_DESC "isa0060/serio1"
#define I8042_MUX_PHYS_DESC "isa0060/serio%d"
#define I8042_KBD_IRQ           IRQ_PS2_KBD
#define I8042_AUX_IRQ           IRQ_PS2_AUX
#define I8042_COMMAND_REG	PS2_COMMAND
#define I8042_STATUS_REG	PS2_STATUS
#define I8042_DATA_REG		PS2_DATA
#define I8042_REGION_START	(resource_size_t)(PS2_DATA)
#define I8042_REGION_SIZE	(resource_size_t)(16)
static inline int i8042_read_data(void)
static inline int i8042_read_status(void)
static inline void i8042_write_data(int val)
static inline void i8042_write_command(int val)
static inline int i8042_platform_init(void)
static inline void i8042_platform_exit(void)
