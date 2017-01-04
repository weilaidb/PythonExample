static __initdata struct of_device_id of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(linkstation, declare_of_platform_devices);
static int __init linkstation_add_bridge(struct device_node *dev)
static void __init linkstation_setup_arch(void)
static void __init linkstation_init_IRQ(void)
extern void avr_uart_configure(void);
extern void avr_uart_send(const char);
static void linkstation_restart(char *cmd)
static void linkstation_power_off(void)
static void linkstation_halt(void)
static void linkstation_show_cpuinfo(struct seq_file *m)
static int __init linkstation_probe(void)
define_machine(linkstation);
