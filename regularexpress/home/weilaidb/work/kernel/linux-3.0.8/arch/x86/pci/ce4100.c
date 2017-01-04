struct sim_reg ;
struct sim_dev_reg ;
struct sim_reg_op ;
#define MB (1024 * 1024)
#define KB (1024)
#define SIZE_TO_MASK(size) (~(size - 1))
#define DEFINE_REG(device, func, offset, size, init_op, read_op, write_op)\
,
static void reg_init(struct sim_dev_reg *reg)
static void reg_read(struct sim_dev_reg *reg, u32 *value)
static void reg_write(struct sim_dev_reg *reg, u32 value)
static void sata_reg_init(struct sim_dev_reg *reg)
static void ehci_reg_read(struct sim_dev_reg *reg, u32 *value)
void sata_revid_init(struct sim_dev_reg *reg)
static void sata_revid_read(struct sim_dev_reg *reg, u32 *value)
static struct sim_dev_reg bus1_fixups[] = ;
static void __init init_sim_regs(void)
static inline void extract_bytes(u32 *value, int reg, int len)
int bridge_read(unsigned int devfn, int reg, int len, u32 *value)
static int ce4100_conf_read(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 *value)
static int ce4100_conf_write(unsigned int seg, unsigned int bus,
unsigned int devfn, int reg, int len, u32 value)
struct pci_raw_ops ce4100_pci_conf = ;
int __init ce4100_pci_init(void)
