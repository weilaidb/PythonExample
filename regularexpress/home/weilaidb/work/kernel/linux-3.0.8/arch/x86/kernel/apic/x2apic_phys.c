int x2apic_phys;
static struct apic apic_x2apic_phys;
static int set_x2apic_phys_mode(char *arg)
early_param("x2apic_phys", set_x2apic_phys_mode);
static int x2apic_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
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
static int x2apic_phys_probe(void)
static struct apic apic_x2apic_phys = ;
apic_driver(apic_x2apic_phys);
