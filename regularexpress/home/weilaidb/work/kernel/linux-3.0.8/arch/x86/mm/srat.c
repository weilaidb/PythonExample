int acpi_numa __initdata;
static __init int setup_node(int pxm)
static __init void bad_srat(void)
static __init inline int srat_disabled(void)
void __init acpi_numa_slit_init(struct acpi_table_slit *slit)
void __init
acpi_numa_x2apic_affinity_init(struct acpi_srat_x2apic_cpu_affinity *pa)
void __init
acpi_numa_processor_affinity_init(struct acpi_srat_cpu_affinity *pa)
static inline int save_add_info(void)
static inline int save_add_info(void)
void __init
acpi_numa_memory_affinity_init(struct acpi_srat_mem_affinity *ma)
void __init acpi_numa_arch_fixup(void)
int __init x86_acpi_numa_init(void)
