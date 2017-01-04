#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define DEBUG_CONFIG 0
#define DEBUG_DUMP_REGS 0
#define DEBUG_DUMP_CONFIG 1
#if DEBUG_CONFIG
# define DBG_CFG(args)	printk args
# define DBG_CFG(args)
#if DEBUG_DUMP_REGS
static void wildfire_dump_pci_regs(int qbbno, int hoseno);
static void wildfire_dump_pca_regs(int qbbno, int pcano);
static void wildfire_dump_qsa_regs(int qbbno);
static void wildfire_dump_qsd_regs(int qbbno);
static void wildfire_dump_iop_regs(int qbbno);
static void wildfire_dump_gp_regs(int qbbno);
#if DEBUG_DUMP_CONFIG
static void wildfire_dump_hardware_config(void);
unsigned char wildfire_hard_qbb_map[WILDFIRE_MAX_QBB];
unsigned char wildfire_soft_qbb_map[WILDFIRE_MAX_QBB];
#define QBB_MAP_EMPTY	0xff
unsigned long wildfire_hard_qbb_mask;
unsigned long wildfire_soft_qbb_mask;
unsigned long wildfire_gp_mask;
unsigned long wildfire_hs_mask;
unsigned long wildfire_iop_mask;
unsigned long wildfire_ior_mask;
unsigned long wildfire_pca_mask;
unsigned long wildfire_cpu_mask;
unsigned long wildfire_mem_mask;
void __init
wildfire_init_hose(int qbbno, int hoseno)
void __init
wildfire_init_pca(int qbbno, int pcano)
void __init
wildfire_init_qbb(int qbbno)
void __init
wildfire_hardware_probe(void)
void __init
wildfire_init_arch(void)
void
wildfire_machine_check(unsigned long vector, unsigned long la_ptr)
void
wildfire_kill_arch(int mode)
void
wildfire_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
static int
mk_conf_addr(struct pci_bus *pbus, unsigned int device_fn, int where,
unsigned long *pci_addr, unsigned char *type1)
static int
wildfire_read_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 *value)
static int
wildfire_write_config(struct pci_bus *bus, unsigned int devfn, int where,
int size, u32 value)
struct pci_ops wildfire_pci_ops =
;
int wildfire_pa_to_nid(unsigned long pa)
int wildfire_cpuid_to_nid(int cpuid)
unsigned long wildfire_node_mem_start(int nid)
unsigned long wildfire_node_mem_size(int nid)
#if DEBUG_DUMP_REGS
static void __init
wildfire_dump_pci_regs(int qbbno, int hoseno)
static void __init
wildfire_dump_pca_regs(int qbbno, int pcano)
static void __init
wildfire_dump_qsa_regs(int qbbno)
static void __init
wildfire_dump_qsd_regs(int qbbno)
static void __init
wildfire_dump_iop_regs(int qbbno)
static void __init
wildfire_dump_gp_regs(int qbbno)
#if DEBUG_DUMP_CONFIG
static void __init
wildfire_dump_hardware_config(void)
