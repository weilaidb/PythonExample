static struct apic apic_physflat;
static struct apic apic_flat;
struct apic __read_mostly *apic = &apic_flat;
EXPORT_SYMBOL_GPL(apic);
static int flat_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
static const struct cpumask *flat_target_cpus(void)
static void flat_vector_allocation_domain(int cpu, struct cpumask *retmask)
static void flat_init_apic_ldr(void)
static inline void _flat_send_IPI_mask(unsigned long mask, int vector)
static void flat_send_IPI_mask(const struct cpumask *cpumask, int vector)
static void
flat_send_IPI_mask_allbutself(const struct cpumask *cpumask, int vector)
static void flat_send_IPI_allbutself(int vector)
static void flat_send_IPI_all(int vector)
static unsigned int flat_get_apic_id(unsigned long x)
static unsigned long set_apic_id(unsigned int id)
static unsigned int read_xapic_id(void)
static int flat_apic_id_registered(void)
static int flat_phys_pkg_id(int initial_apic_id, int index_msb)
static struct apic apic_flat =  ;
static int physflat_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
static const struct cpumask *physflat_target_cpus(void)
static void physflat_vector_allocation_domain(int cpu, struct cpumask *retmask)
static void physflat_send_IPI_mask(const struct cpumask *cpumask, int vector)
static void physflat_send_IPI_mask_allbutself(const struct cpumask *cpumask,
int vector)
static void physflat_send_IPI_allbutself(int vector)
static void physflat_send_IPI_all(int vector)
static unsigned int physflat_cpu_mask_to_apicid(const struct cpumask *cpumask)
static unsigned int
physflat_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
const struct cpumask *andmask)
static int physflat_probe(void)
static struct apic apic_physflat =  ;
apic_drivers(apic_physflat, apic_flat);
