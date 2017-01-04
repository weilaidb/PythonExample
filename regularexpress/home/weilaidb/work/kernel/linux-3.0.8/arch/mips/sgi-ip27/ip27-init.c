#define CPU_NONE		(cpuid_t)-1
static DECLARE_BITMAP(hub_init_mask, MAX_COMPACT_NODES);
nasid_t master_nasid = INVALID_NASID;
cnodeid_t	nasid_to_compact_node[MAX_NASIDS];
nasid_t		compact_to_nasid_node[MAX_COMPACT_NODES];
cnodeid_t	cpuid_to_compact_node[MAXCPUS];
EXPORT_SYMBOL(nasid_to_compact_node);
struct cpuinfo_ip27 sn_cpu_info[NR_CPUS];
EXPORT_SYMBOL_GPL(sn_cpu_info);
extern void pcibr_setup(cnodeid_t);
extern void xtalk_probe_node(cnodeid_t nid);
static void __cpuinit per_hub_init(cnodeid_t cnode)
void __cpuinit per_cpu_init(void)
nasid_t
get_nasid(void)
cnodeid_t get_compact_nodeid(void)
static inline void ioc3_eth_init(void)
extern void ip27_reboot_setup(void);
void __init plat_mem_setup(void)
