static const char family_string[] = CONFIG_XILINX_MICROBLAZE0_FAMILY;
static const char cpu_ver_string[] = CONFIG_XILINX_MICROBLAZE0_HW_VER;
#define err_printk(x) \
early_printk("ERROR: Microblaze " x "-different for kernel and DTS\n");
void __init set_cpuinfo_static(struct cpuinfo *ci, struct device_node *cpu)
