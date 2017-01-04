#undef DEBUG
static char celleb_machine_type[128] = "Celleb";
static void celleb_show_cpuinfo(struct seq_file *m)
static int __init celleb_machine_type_hack(char *ptr)
__setup("celleb_machine_type_hack=", celleb_machine_type_hack);
static void celleb_progress(char *s, unsigned short hex)
static void __init celleb_setup_arch_common(void)
static struct of_device_id celleb_bus_ids[] __initdata = ;
static int __init celleb_publish_devices(void)
machine_device_initcall(celleb_beat, celleb_publish_devices);
machine_device_initcall(celleb_native, celleb_publish_devices);
static void __init celleb_setup_arch_beat(void)
static int __init celleb_probe_beat(void)
static void __init celleb_init_IRQ_native(void)
static void __init celleb_setup_arch_native(void)
static int __init celleb_probe_native(void)
define_machine(celleb_beat) ;
define_machine(celleb_native) ;
