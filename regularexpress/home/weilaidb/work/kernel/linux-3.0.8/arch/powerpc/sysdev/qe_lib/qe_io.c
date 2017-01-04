#undef DEBUG
static struct qe_pio_regs __iomem *par_io;
static int num_par_io_ports = 0;
int par_io_init(struct device_node *np)
void __par_io_config_pin(struct qe_pio_regs __iomem *par_io, u8 pin, int dir,
int open_drain, int assignment, int has_irq)
EXPORT_SYMBOL(__par_io_config_pin);
int par_io_config_pin(u8 port, u8 pin, int dir, int open_drain,
int assignment, int has_irq)
EXPORT_SYMBOL(par_io_config_pin);
int par_io_data_set(u8 port, u8 pin, u8 val)
EXPORT_SYMBOL(par_io_data_set);
int par_io_of_config(struct device_node *np)
EXPORT_SYMBOL(par_io_of_config);
static void dump_par_io(void)
EXPORT_SYMBOL(dump_par_io);
