#define DRV_MODULE_NAME		"chmc"
#define PFX DRV_MODULE_NAME	": "
#define DRV_MODULE_VERSION	"0.2"
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("UltraSPARC-III memory controller driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
static int mc_type;
#define MC_TYPE_SAFARI		1
#define MC_TYPE_JBUS		2
static dimm_printer_t us3mc_dimm_printer;
#define CHMCTRL_NDGRPS	2
#define CHMCTRL_NDIMMS	4
#define CHMC_DIMMS_PER_MC	(CHMCTRL_NDGRPS * CHMCTRL_NDIMMS)
struct chmc_obp_map ;
#define DIMM_LABEL_SZ	8
struct chmc_obp_mem_layout ;
#define CHMCTRL_NBANKS	4
struct chmc_bank_info ;
struct chmc ;
#define JBUSMC_REGS_SIZE		8
#define JB_MC_REG1_DIMM2_BANK3		0x8000000000000000UL
#define JB_MC_REG1_DIMM1_BANK1		0x4000000000000000UL
#define JB_MC_REG1_DIMM2_BANK2		0x2000000000000000UL
#define JB_MC_REG1_DIMM1_BANK0		0x1000000000000000UL
#define JB_MC_REG1_XOR			0x0000010000000000UL
#define JB_MC_REG1_ADDR_GEN_2		0x000000e000000000UL
#define JB_MC_REG1_ADDR_GEN_2_SHIFT	37
#define JB_MC_REG1_ADDR_GEN_1		0x0000001c00000000UL
#define JB_MC_REG1_ADDR_GEN_1_SHIFT	34
#define JB_MC_REG1_INTERLEAVE		0x0000000001800000UL
#define JB_MC_REG1_INTERLEAVE_SHIFT	23
#define JB_MC_REG1_DIMM2_PTYPE		0x0000000000200000UL
#define JB_MC_REG1_DIMM2_PTYPE_SHIFT	21
#define JB_MC_REG1_DIMM1_PTYPE		0x0000000000100000UL
#define JB_MC_REG1_DIMM1_PTYPE_SHIFT	20
#define PART_TYPE_X8		0
#define PART_TYPE_X4		1
#define INTERLEAVE_NONE		0
#define INTERLEAVE_SAME		1
#define INTERLEAVE_INTERNAL	2
#define INTERLEAVE_BOTH		3
#define ADDR_GEN_128MB		0
#define ADDR_GEN_256MB		1
#define ADDR_GEN_512MB		2
#define ADDR_GEN_1GB		3
#define JB_NUM_DIMM_GROUPS	2
#define JB_NUM_DIMMS_PER_GROUP	2
#define JB_NUM_DIMMS		(JB_NUM_DIMM_GROUPS * JB_NUM_DIMMS_PER_GROUP)
struct jbusmc_obp_map ;
struct jbusmc_obp_mem_layout ;
struct jbusmc_dimm_group ;
struct jbusmc ;
static DEFINE_SPINLOCK(mctrl_list_lock);
static LIST_HEAD(mctrl_list);
static void mc_list_add(struct list_head *list)
static void mc_list_del(struct list_head *list)
#define SYNDROME_MIN	-1
#define SYNDROME_MAX	144
static int syndrome_to_qword_code(int syndrome_code)
#define L2_LINE_SIZE		64
#define L2_LINE_ADDR_MSK	(L2_LINE_SIZE - 1)
#define QW_PER_LINE		4
#define QW_BYTES		(L2_LINE_SIZE / QW_PER_LINE)
#define QW_BITS			144
#define SAFARI_LAST_BIT		(576 - 1)
#define JBUS_LAST_BIT		(144 - 1)
static void get_pin_and_dimm_str(int syndrome_code, unsigned long paddr,
int *pin_p, char **dimm_str_p, void *_prop,
int base_dimm_offset)
static struct jbusmc_dimm_group *jbusmc_find_dimm_group(unsigned long phys_addr)
static int jbusmc_print_dimm(int syndrome_code,
unsigned long phys_addr,
char *buf, int buflen)
static u64 __devinit jbusmc_dimm_group_size(u64 base,
const struct linux_prom64_registers *mem_regs,
int num_mem_regs)
static void __devinit jbusmc_construct_one_dimm_group(struct jbusmc *p,
unsigned long index,
const struct linux_prom64_registers *mem_regs,
int num_mem_regs)
static void __devinit jbusmc_construct_dimm_groups(struct jbusmc *p,
const struct linux_prom64_registers *mem_regs,
int num_mem_regs)
static int __devinit jbusmc_probe(struct platform_device *op)
static int chmc_bank_match(struct chmc_bank_info *bp, unsigned long phys_addr)
static struct chmc_bank_info *chmc_find_bank(unsigned long phys_addr)
static int chmc_print_dimm(int syndrome_code,
unsigned long phys_addr,
char *buf, int buflen)
static u64 chmc_read_mcreg(struct chmc *p, unsigned long offset)
static void chmc_interpret_one_decode_reg(struct chmc *p, int which_bank, u64 val)
static void chmc_fetch_decode_regs(struct chmc *p)
static int __devinit chmc_probe(struct platform_device *op)
static int __devinit us3mc_probe(struct platform_device *op)
static void __devexit chmc_destroy(struct platform_device *op, struct chmc *p)
static void __devexit jbusmc_destroy(struct platform_device *op, struct jbusmc *p)
static int __devexit us3mc_remove(struct platform_device *op)
static const struct of_device_id us3mc_match[] = ;
MODULE_DEVICE_TABLE(of, us3mc_match);
static struct platform_driver us3mc_driver = ;
static inline bool us3mc_platform(void)
static int __init us3mc_init(void)
static void __exit us3mc_cleanup(void)
module_init(us3mc_init);
module_exit(us3mc_cleanup);
