#define CI(c, p)
#if defined(CONFIG_EARLY_PRINTK) && defined(CONFIG_SERIAL_UARTLITE_CONSOLE)
#define err_printk(x) \
early_printk("ERROR: Microblaze " x "-different for PVR and DTS\n");
#define err_printk(x) \
printk(KERN_INFO "ERROR: Microblaze " x "-different for PVR and DTS\n");
void set_cpuinfo_pvr_full(struct cpuinfo *ci, struct device_node *cpu)
