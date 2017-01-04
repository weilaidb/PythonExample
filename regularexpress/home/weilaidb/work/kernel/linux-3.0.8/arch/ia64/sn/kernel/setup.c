DEFINE_PER_CPU(struct pda_s, pda_percpu);
#define MAX_PHYS_MEMORY		(1UL << IA64_MAX_PHYS_BITS)
extern void bte_init_node(nodepda_t *, cnodeid_t);
extern void sn_timer_init(void);
extern unsigned long last_time_offset;
extern void (*ia64_mark_idle) (int);
extern void snidle(int);
unsigned long sn_rtc_cycles_per_second;
EXPORT_SYMBOL(sn_rtc_cycles_per_second);
DEFINE_PER_CPU(struct sn_hub_info_s, __sn_hub_info);
EXPORT_PER_CPU_SYMBOL(__sn_hub_info);
DEFINE_PER_CPU(short, __sn_cnodeid_to_nasid[MAX_COMPACT_NODES]);
EXPORT_PER_CPU_SYMBOL(__sn_cnodeid_to_nasid);
DEFINE_PER_CPU(struct nodepda_s *, __sn_nodepda);
EXPORT_PER_CPU_SYMBOL(__sn_nodepda);
char sn_system_serial_number_string[128];
EXPORT_SYMBOL(sn_system_serial_number_string);
u64 sn_partition_serial_number;
EXPORT_SYMBOL(sn_partition_serial_number);
u8 sn_partition_id;
EXPORT_SYMBOL(sn_partition_id);
u8 sn_system_size;
EXPORT_SYMBOL(sn_system_size);
u8 sn_sharing_domain_size;
EXPORT_SYMBOL(sn_sharing_domain_size);
u8 sn_coherency_id;
EXPORT_SYMBOL(sn_coherency_id);
u8 sn_region_size;
EXPORT_SYMBOL(sn_region_size);
int sn_prom_type;
short physical_node_map[MAX_NUMALINK_NODES];
static unsigned long sn_prom_features[MAX_PROM_FEATURE_SETS];
EXPORT_SYMBOL(physical_node_map);
int num_cnodes;
static void sn_init_pdas(char **);
static void build_cnode_tables(void);
static nodepda_t *nodepdaindr[MAX_COMPACT_NODES];
struct screen_info sn_screen_info = ;
static int __init pxm_to_nasid(int pxm)
void __init early_sn_setup(void)
extern int platform_intr_list[];
static int __cpuinitdata shub_1_1_found;
static inline int __cpuinit is_shub_1_1(int nasid)
static void __cpuinit sn_check_for_wars(void)
struct hcdp_uart_desc ;
struct pcdp   __attribute__((packed));
struct pcdp_device_desc   __attribute__((packed));
struct pcdp_interface_pci   __attribute__((packed));
struct pcdp_vga_device   __attribute__((packed));
#define PCDP_PRIMARY_CONSOLE	0x01
#define PCDP_CONSOLE_INOUT	0x0
#define PCDP_CONSOLE_DEBUG	0x1
#define PCDP_CONSOLE_OUT	0x2
#define PCDP_CONSOLE_IN		0x3
#define PCDP_CONSOLE_TYPE_VGA	0x8
#define PCDP_CONSOLE_VGA	(PCDP_CONSOLE_TYPE_VGA | PCDP_CONSOLE_OUT)
#define PCDP_IF_PCI		1
#define PCDP_PCI_TRANS_IOPORT	0x02
#define PCDP_PCI_TRANS_MMIO	0x01
#if defined(CONFIG_VT) && defined(CONFIG_VGA_CONSOLE)
static void
sn_scan_pcdp(void)
static unsigned long sn2_rtc_initial;
void __init sn_setup(char **cmdline_p)
static void __init sn_init_pdas(char **cmdline_p)
void __cpuinit sn_cpu_init(void)
static inline int __init board_needs_cnode(int type)
void __init build_cnode_tables(void)
int
nasid_slice_to_cpuid(int nasid, int slice)
int sn_prom_feature_available(int id)
void
sn_kernel_launch_event(void)
EXPORT_SYMBOL(sn_prom_feature_available);
