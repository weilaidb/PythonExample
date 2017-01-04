static unsigned bigsmp_get_apic_id(unsigned long x)
static int bigsmp_apic_id_registered(void)
static const struct cpumask *bigsmp_target_cpus(void)
static unsigned long bigsmp_check_apicid_used(physid_mask_t *map, int apicid)
static unsigned long bigsmp_check_apicid_present(int bit)
static int bigsmp_early_logical_apicid(int cpu)
static inline unsigned long calculate_ldr(int cpu)
static void bigsmp_init_apic_ldr(void)
static void bigsmp_setup_apic_routing(void)
static int bigsmp_cpu_present_to_apicid(int mps_cpu)
static void bigsmp_ioapic_phys_id_map(physid_mask_t *phys_map, physid_mask_t *retmap)
static int bigsmp_check_phys_apicid_present(int phys_apicid)
static unsigned int bigsmp_cpu_mask_to_apicid(const struct cpumask *cpumask)
static unsigned int bigsmp_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
const struct cpumask *andmask)
static int bigsmp_phys_pkg_id(int cpuid_apic, int index_msb)
static inline void bigsmp_send_IPI_mask(const struct cpumask *mask, int vector)
static void bigsmp_send_IPI_allbutself(int vector)
static void bigsmp_send_IPI_all(int vector)
static int dmi_bigsmp;
static int hp_ht_bigsmp(const struct dmi_system_id *d)
static const struct dmi_system_id bigsmp_dmi_table[] = ;
static void bigsmp_vector_allocation_domain(int cpu, struct cpumask *retmask)
static int probe_bigsmp(void)
static struct apic apic_bigsmp = ;
struct apic * __init generic_bigsmp_probe(void)
apic_driver(apic_bigsmp);
