#define PREFIX "ACPI: "
#define ACPI_NUMA	0x80000000
#define _COMPONENT	ACPI_NUMA
ACPI_MODULE_NAME("numa");
static nodemask_t nodes_found_map = NODE_MASK_NONE;
static int pxm_to_node_map[MAX_PXM_DOMAINS]
= ;
static int node_to_pxm_map[MAX_NUMNODES]
= ;
int pxm_to_node(int pxm)
int node_to_pxm(int node)
void __acpi_map_pxm_to_node(int pxm, int node)
int acpi_map_pxm_to_node(int pxm)
static void __init
acpi_table_print_srat_entry(struct acpi_subtable_header *header)
static __init int slit_valid(struct acpi_table_slit *slit)
static int __init acpi_parse_slit(struct acpi_table_header *table)
void __init __attribute__ ((weak))
acpi_numa_x2apic_affinity_init(struct acpi_srat_x2apic_cpu_affinity *pa)
static int __init
acpi_parse_x2apic_affinity(struct acpi_subtable_header *header,
const unsigned long end)
static int __init
acpi_parse_processor_affinity(struct acpi_subtable_header *header,
const unsigned long end)
static int __init
acpi_parse_memory_affinity(struct acpi_subtable_header * header,
const unsigned long end)
static int __init acpi_parse_srat(struct acpi_table_header *table)
static int __init
acpi_table_parse_srat(enum acpi_srat_type id,
acpi_table_entry_handler handler, unsigned int max_entries)
int __init acpi_numa_init(void)
int acpi_get_pxm(acpi_handle h)
int acpi_get_node(acpi_handle *handle)
EXPORT_SYMBOL(acpi_get_node);
