#define KMSG_COMPONENT "SFI"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static unsigned long sfi_lapic_addr __initdata = APIC_DEFAULT_PHYS_BASE;
static void __cpuinit mp_sfi_register_lapic(u8 id)
static int __init sfi_parse_cpus(struct sfi_table_header *table)
static int __init sfi_parse_ioapic(struct sfi_table_header *table)
int __init sfi_platform_init(void)
