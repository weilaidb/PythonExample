int io_delay_type __read_mostly = CONFIG_DEFAULT_IO_DELAY_TYPE;
static int __initdata io_delay_override;
void native_io_delay(void)
EXPORT_SYMBOL(native_io_delay);
static int __init dmi_io_delay_0xed_port(const struct dmi_system_id *id)
static struct dmi_system_id __initdata io_delay_0xed_port_dmi_table[] = ;
void __init io_delay_init(void)
static int __init io_delay_param(char *s)
early_param("io_delay", io_delay_param);
