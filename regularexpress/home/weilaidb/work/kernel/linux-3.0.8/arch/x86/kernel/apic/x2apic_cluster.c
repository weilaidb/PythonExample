static DEFINE_PER_CPU(u32, x86_cpu_to_logical_apicid);
static DEFINE_PER_CPU(cpumask_var_t, cpus_in_cluster);
static DEFINE_PER_CPU(cpumask_var_t, ipi_mask);
static int x2apic_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
static inline u32 x2apic_cluster(int cpu)
static void
__x2apic_send_IPI_mask(const struct cpumask *mask, int vector, int apic_dest)
static void x2apic_send_IPI_mask(const struct cpumask *mask, int vector)
static void
x2apic_send_IPI_mask_allbutself(const struct cpumask *mask, int vector)
static void x2apic_send_IPI_allbutself(int vector)
static void x2apic_send_IPI_all(int vector)
static unsigned int x2apic_cpu_mask_to_apicid(const struct cpumask *cpumask)
static unsigned int
x2apic_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
const struct cpumask *andmask)
static void init_x2apic_ldr(void)
static int __cpuinit
update_clusterinfo(struct notifier_block *nfb, unsigned long action, void *hcpu)
static struct notifier_block __refdata x2apic_cpu_notifier = ;
static int x2apic_init_cpu_notifier(void)
static int x2apic_cluster_probe(void)
static struct apic apic_x2apic_cluster = ;
apic_driver(apic_x2apic_cluster);
