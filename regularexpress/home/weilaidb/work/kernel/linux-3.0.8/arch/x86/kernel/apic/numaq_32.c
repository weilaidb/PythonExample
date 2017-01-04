int found_numaq;
struct mpc_trans ;
static int				mpc_record;
static struct mpc_trans			*translation_table[MAX_MPC_ENTRY];
int					mp_bus_id_to_node[MAX_MP_BUSSES];
int					mp_bus_id_to_local[MAX_MP_BUSSES];
int					quad_local_to_mp_bus_id[NR_CPUS/4][4];
static inline void numaq_register_node(int node, struct sys_cfg_data *scd)
static void __init smp_dump_qct(void)
void __cpuinit numaq_tsc_disable(void)
static void __init numaq_tsc_init(void)
static inline int generate_logical_apicid(int quad, int phys_apicid)
static int mpc_apic_id(struct mpc_cpu *m)
static void mpc_oem_bus_info(struct mpc_bus *m, char *name)
static void mpc_oem_pci_bus(struct mpc_bus *m)
static void numaq_mpc_record(unsigned int mode)
static void __init MP_translation_info(struct mpc_trans *m)
static int __init mpf_checksum(unsigned char *mp, int len)
static void __init smp_read_mpc_oem(struct mpc_table *mpc)
static __init void early_check_numaq(void)
int __init numaq_numa_init(void)
#define NUMAQ_APIC_DFR_VALUE	(APIC_DFR_CLUSTER)
static inline unsigned int numaq_get_apic_id(unsigned long x)
static inline void numaq_send_IPI_mask(const struct cpumask *mask, int vector)
static inline void numaq_send_IPI_allbutself(int vector)
static inline void numaq_send_IPI_all(int vector)
#define NUMAQ_TRAMPOLINE_PHYS_LOW	(0x8)
#define NUMAQ_TRAMPOLINE_PHYS_HIGH	(0xa)
static inline void numaq_smp_callin_clear_local_apic(void)
static inline const struct cpumask *numaq_target_cpus(void)
static unsigned long numaq_check_apicid_used(physid_mask_t *map, int apicid)
static inline unsigned long numaq_check_apicid_present(int bit)
static inline int numaq_apic_id_registered(void)
static inline void numaq_init_apic_ldr(void)
static inline void numaq_setup_apic_routing(void)
static inline int numaq_multi_timer_check(int apic, int irq)
static inline void numaq_ioapic_phys_id_map(physid_mask_t *phys_map, physid_mask_t *retmap)
static inline int numaq_cpu_present_to_apicid(int mps_cpu)
static inline int numaq_apicid_to_node(int logical_apicid)
static int numaq_numa_cpu_node(int cpu)
static void numaq_apicid_to_cpu_present(int logical_apicid, physid_mask_t *retmap)
void *xquad_portio;
static inline int numaq_check_phys_apicid_present(int phys_apicid)
static unsigned int numaq_cpu_mask_to_apicid(const struct cpumask *cpumask)
static inline unsigned int
numaq_cpu_mask_to_apicid_and(const struct cpumask *cpumask,
const struct cpumask *andmask)
static inline int numaq_phys_pkg_id(int cpuid_apic, int index_msb)
static int
numaq_mps_oem_check(struct mpc_table *mpc, char *oem, char *productid)
static int probe_numaq(void)
static void numaq_vector_allocation_domain(int cpu, struct cpumask *retmask)
static void numaq_setup_portio_remap(void)
static struct apic __refdata apic_numaq = ;
apic_driver(apic_numaq);
