#define DEFAULT_SEND_IPI	(1)
#define DEFAULT_SEND_IPI	(0)
int no_broadcast = DEFAULT_SEND_IPI;
static __init int no_ipi_broadcast(char *str)
__setup("no_ipi_broadcast=", no_ipi_broadcast);
static int __init print_ipi_mode(void)
late_initcall(print_ipi_mode);
static int default_x86_32_early_logical_apicid(int cpu)
static void setup_apic_flat_routing(void)
static void default_vector_allocation_domain(int cpu, struct cpumask *retmask)
static int probe_default(void)
static struct apic apic_default = ;
apic_driver(apic_default);
struct apic *apic = &apic_default;
EXPORT_SYMBOL_GPL(apic);
static int cmdline_apic __initdata;
static int __init parse_apic(char *arg)
early_param("apic", parse_apic);
void __init default_setup_apic_routing(void)
void __init generic_apic_probe(void)
int __init
generic_mps_oem_check(struct mpc_table *mpc, char *oem, char *productid)
int __init default_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
