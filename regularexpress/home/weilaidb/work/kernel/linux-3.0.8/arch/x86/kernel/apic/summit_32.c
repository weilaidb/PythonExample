static unsigned summit_get_apic_id(unsigned long x)
static inline void summit_send_IPI_mask(const struct cpumask *mask, int vector)
static void summit_send_IPI_allbutself(int vector)
static void summit_send_IPI_all(int vector)
extern int use_cyclone;
static void setup_summit(void);
static inline void setup_summit(void)
static int summit_mps_oem_check(struct mpc_table *mpc, char *oem,
char *productid)
static int summit_acpi_madt_oem_check(char *oem_id, char *oem_table_id)
struct rio_table_hdr  __attribute__((packed));
struct scal_detail  __attribute__((packed));
struct rio_detail  __attribute__((packed));
typedef enum  node_type;
static inline int is_WPEG(struct rio_detail *rio)
#define SUMMIT_APIC_DFR_VALUE	(APIC_DFR_CLUSTER)
static const struct cpumask *summit_target_cpus(void)
static unsigned long summit_check_apicid_used(physid_mask_t *map, int apicid)
static unsigned long summit_check_apicid_present(int bit)
static int summit_early_logical_apicid(int cpu)
static void summit_init_apic_ldr(void)
static int summit_apic_id_registered(void)
static void summit_setup_apic_routing(void)
static int summit_cpu_present_to_apicid(int mps_cpu)
static void summit_ioapic_phys_id_map(physid_mask_t *phys_id_map, physid_mask_t *retmap)
static void summit_apicid_to_cpu_present(int apicid, physid_mask_t *retmap)
static int summit_check_phys_apicid_present(int physical_apicid)
static unsigned int summit_cpu_mask_to_apicid(const struct cpumask *cpumask)
static unsigned int summit_cpu_mask_to_apicid_and(const struct cpumask *inmask,
const struct cpumask *andmask)
static int summit_phys_pkg_id(int cpuid_apic, int index_msb)
static int probe_summit(void)
static void summit_vector_allocation_domain(int cpu, struct cpumask *retmask)
static struct rio_table_hdr *rio_table_hdr;
static struct scal_detail   *scal_devs[MAX_NUMNODES];
static struct rio_detail    *rio_devs[MAX_NUMNODES*4];
static int mp_bus_id_to_node[MAX_MP_BUSSES];
static int setup_pci_node_map_for_wpeg(int wpeg_num, int last_bus)
static int build_detail_arrays(void)
void setup_summit(void)
static struct apic apic_summit = ;
apic_driver(apic_summit);
