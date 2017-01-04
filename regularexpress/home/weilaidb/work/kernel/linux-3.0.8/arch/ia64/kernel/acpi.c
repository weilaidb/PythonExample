#define BAD_MADT_ENTRY(entry, end) (                                        \
(!entry) || (unsigned long)entry + sizeof(*entry) > end ||  \
((struct acpi_subtable_header *)entry)->length < sizeof(*entry))
#define PREFIX			"ACPI: "
u32 acpi_rsdt_forced;
unsigned int acpi_cpei_override;
unsigned int acpi_cpei_phys_cpuid;
unsigned long acpi_wakeup_address = 0;
static unsigned long __init acpi_find_rsdp(void)
const char __init *
acpi_get_sysname(void)
#define ACPI_MAX_PLATFORM_INTERRUPTS	256
int platform_intr_list[ACPI_MAX_PLATFORM_INTERRUPTS] = ;
enum acpi_irq_model_id acpi_irq_model = ACPI_IRQ_MODEL_IOSAPIC;
int acpi_request_vector(u32 int_type)
char *__init __acpi_map_table(unsigned long phys_addr, unsigned long size)
void __init __acpi_unmap_table(char *map, unsigned long size)
static int available_cpus __initdata;
struct acpi_table_madt *acpi_madt __initdata;
static u8 has_8259;
static int __init
acpi_parse_lapic_addr_ovr(struct acpi_subtable_header * header,
const unsigned long end)
static int __init
acpi_parse_lsapic(struct acpi_subtable_header * header, const unsigned long end)
static int __init
acpi_parse_lapic_nmi(struct acpi_subtable_header * header, const unsigned long end)
static int __init
acpi_parse_iosapic(struct acpi_subtable_header * header, const unsigned long end)
static unsigned int __initdata acpi_madt_rev;
static int __init
acpi_parse_plat_int_src(struct acpi_subtable_header * header,
const unsigned long end)
unsigned int can_cpei_retarget(void)
unsigned int is_cpu_cpei_target(unsigned int cpu)
void set_cpei_target_cpu(unsigned int cpu)
unsigned int get_cpei_target_cpu(void)
static int __init
acpi_parse_int_src_ovr(struct acpi_subtable_header * header,
const unsigned long end)
static int __init
acpi_parse_nmi_src(struct acpi_subtable_header * header, const unsigned long end)
static void __init acpi_madt_oem_check(char *oem_id, char *oem_table_id)
static int __init acpi_parse_madt(struct acpi_table_header *table)
#undef SLIT_DEBUG
#define PXM_FLAG_LEN ((MAX_PXM_DOMAINS + 1)/32)
static int __initdata srat_num_cpus;
static u32 __devinitdata pxm_flag[PXM_FLAG_LEN];
#define pxm_bit_set(bit)	(set_bit(bit,(void *)pxm_flag))
#define pxm_bit_test(bit)	(test_bit(bit,(void *)pxm_flag))
static struct acpi_table_slit __initdata *slit_table;
cpumask_t early_cpu_possible_map = CPU_MASK_NONE;
static int get_processor_proximity_domain(struct acpi_srat_cpu_affinity *pa)
static int get_memory_proximity_domain(struct acpi_srat_mem_affinity *ma)
void __init acpi_numa_slit_init(struct acpi_table_slit *slit)
void __init
acpi_numa_processor_affinity_init(struct acpi_srat_cpu_affinity *pa)
void __init
acpi_numa_memory_affinity_init(struct acpi_srat_mem_affinity *ma)
void __init acpi_numa_arch_fixup(void)
int acpi_register_gsi(struct device *dev, u32 gsi, int triggering, int polarity)
void acpi_unregister_gsi(u32 gsi)
static int __init acpi_parse_fadt(struct acpi_table_header *table)
int __init early_acpi_boot_init(void)
int __init acpi_boot_init(void)
int acpi_gsi_to_irq(u32 gsi, unsigned int *irq)
int acpi_isa_irq_to_gsi(unsigned isa_irq, u32 *gsi)
static __cpuinit
int acpi_map_cpu2node(acpi_handle handle, int cpu, int physid)
int additional_cpus __initdata = -1;
static __init int setup_additional_cpus(char *s)
early_param("additional_cpus", setup_additional_cpus);
__init void prefill_possible_map(void)
static int __cpuinit _acpi_map_lsapic(acpi_handle handle, int *pcpu)
int __ref acpi_map_lsapic(acpi_handle handle, int *pcpu)
EXPORT_SYMBOL(acpi_map_lsapic);
int acpi_unmap_lsapic(int cpu)
EXPORT_SYMBOL(acpi_unmap_lsapic);
static acpi_status __devinit
acpi_map_iosapic(acpi_handle handle, u32 depth, void *context, void **ret)
static int __init
acpi_map_iosapics (void)
fs_initcall(acpi_map_iosapics);
int __ref acpi_register_ioapic(acpi_handle handle, u64 phys_addr, u32 gsi_base)
EXPORT_SYMBOL(acpi_register_ioapic);
int acpi_unregister_ioapic(acpi_handle handle, u32 gsi_base)
EXPORT_SYMBOL(acpi_unregister_ioapic);
int acpi_suspend_lowlevel(void)
