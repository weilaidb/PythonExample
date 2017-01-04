static LIST_HEAD(i7core_edac_list);
static DEFINE_MUTEX(i7core_edac_lock);
static int probed;
static int use_pci_fixup;
module_param(use_pci_fixup, int, 0444);
MODULE_PARM_DESC(use_pci_fixup, "Enable PCI fixup to seek for hidden devices");
#define MAX_SOCKET_BUSES	2
#define I7CORE_REVISION    " Ver: 1.0.0"
#define EDAC_MOD_STR      "i7core_edac"
#define i7core_printk(level, fmt, arg...)			\
edac_printk(level, "i7core", fmt, ##arg)
#define i7core_mc_printk(mci, level, fmt, arg...)		\
edac_mc_chipset_printk(mci, level, "i7core", fmt, ##arg)
#define MC_CFG_CONTROL	0x90
#define MC_CONTROL	0x48
#define MC_STATUS	0x4c
#define MC_MAX_DOD	0x64
#define MC_TEST_ERR_RCV1	0x60
#define DIMM2_COR_ERR(r)			((r) & 0x7fff)
#define MC_TEST_ERR_RCV0	0x64
#define DIMM1_COR_ERR(r)			(((r) >> 16) & 0x7fff)
#define DIMM0_COR_ERR(r)			((r) & 0x7fff)
#define MC_COR_ECC_CNT_0	0x80
#define MC_COR_ECC_CNT_1	0x84
#define MC_COR_ECC_CNT_2	0x88
#define MC_COR_ECC_CNT_3	0x8c
#define MC_COR_ECC_CNT_4	0x90
#define MC_COR_ECC_CNT_5	0x94
#define DIMM_TOP_COR_ERR(r)			(((r) >> 16) & 0x7fff)
#define DIMM_BOT_COR_ERR(r)			((r) & 0x7fff)
#define MC_CHANNEL_DIMM_INIT_PARAMS 0x58
#define THREE_DIMMS_PRESENT		(1 << 24)
#define SINGLE_QUAD_RANK_PRESENT	(1 << 23)
#define QUAD_RANK_PRESENT		(1 << 22)
#define REGISTERED_DIMM		(1 << 15)
#define MC_CHANNEL_MAPPER	0x60
#define RDLCH(r, ch)		((((r) >> (3 + (ch * 6))) & 0x07) - 1)
#define WRLCH(r, ch)		((((r) >> (ch * 6)) & 0x07) - 1)
#define MC_CHANNEL_RANK_PRESENT 0x7c
#define RANK_PRESENT_MASK		0xffff
#define MC_CHANNEL_ADDR_MATCH	0xf0
#define MC_CHANNEL_ERROR_MASK	0xf8
#define MC_CHANNEL_ERROR_INJECT	0xfc
#define INJECT_ADDR_PARITY	0x10
#define INJECT_ECC		0x08
#define MASK_CACHELINE	0x06
#define MASK_FULL_CACHELINE	0x06
#define MASK_MSB32_CACHELINE	0x04
#define MASK_LSB32_CACHELINE	0x02
#define NO_MASK_CACHELINE	0x00
#define REPEAT_EN		0x01
#define MC_DOD_CH_DIMM0		0x48
#define MC_DOD_CH_DIMM1		0x4c
#define MC_DOD_CH_DIMM2		0x50
#define RANKOFFSET_MASK	((1 << 12) | (1 << 11) | (1 << 10))
#define RANKOFFSET(x)		((x & RANKOFFSET_MASK) >> 10)
#define DIMM_PRESENT_MASK	(1 << 9)
#define DIMM_PRESENT(x)	(((x) & DIMM_PRESENT_MASK) >> 9)
#define MC_DOD_NUMBANK_MASK		((1 << 8) | (1 << 7))
#define MC_DOD_NUMBANK(x)		(((x) & MC_DOD_NUMBANK_MASK) >> 7)
#define MC_DOD_NUMRANK_MASK		((1 << 6) | (1 << 5))
#define MC_DOD_NUMRANK(x)		(((x) & MC_DOD_NUMRANK_MASK) >> 5)
#define MC_DOD_NUMROW_MASK		((1 << 4) | (1 << 3) | (1 << 2))
#define MC_DOD_NUMROW(x)		(((x) & MC_DOD_NUMROW_MASK) >> 2)
#define MC_DOD_NUMCOL_MASK		3
#define MC_DOD_NUMCOL(x)		((x) & MC_DOD_NUMCOL_MASK)
#define MC_RANK_PRESENT		0x7c
#define MC_SAG_CH_0	0x80
#define MC_SAG_CH_1	0x84
#define MC_SAG_CH_2	0x88
#define MC_SAG_CH_3	0x8c
#define MC_SAG_CH_4	0x90
#define MC_SAG_CH_5	0x94
#define MC_SAG_CH_6	0x98
#define MC_SAG_CH_7	0x9c
#define MC_RIR_LIMIT_CH_0	0x40
#define MC_RIR_LIMIT_CH_1	0x44
#define MC_RIR_LIMIT_CH_2	0x48
#define MC_RIR_LIMIT_CH_3	0x4C
#define MC_RIR_LIMIT_CH_4	0x50
#define MC_RIR_LIMIT_CH_5	0x54
#define MC_RIR_LIMIT_CH_6	0x58
#define MC_RIR_LIMIT_CH_7	0x5C
#define MC_RIR_LIMIT_MASK	((1 << 10) - 1)
#define MC_RIR_WAY_CH		0x80
#define MC_RIR_WAY_OFFSET_MASK	(((1 << 14) - 1) & ~0x7)
#define MC_RIR_WAY_RANK_MASK		0x7
#define NUM_CHANS 3
#define MAX_DIMMS 3
#define MAX_MCR_FUNC  4
#define MAX_CHAN_FUNC 3
struct i7core_info ;
struct i7core_inject ;
struct i7core_channel ;
struct pci_id_descr ;
struct pci_id_table ;
struct i7core_dev ;
struct i7core_pvt ;
#define PCI_DESCR(device, function, device_id)	\
.dev = (device),			\
.func = (function),			\
.dev_id = (device_id)
static const struct pci_id_descr pci_dev_descr_i7core_nehalem[] = ;
static const struct pci_id_descr pci_dev_descr_lynnfield[] = ;
static const struct pci_id_descr pci_dev_descr_i7core_westmere[] = ;
#define PCI_ID_TABLE_ENTRY(A)
static const struct pci_id_table pci_dev_table[] = ;
static const struct pci_device_id i7core_pci_tbl[] __devinitdata = ;
#define CH_ACTIVE(pvt, ch)	((pvt)->info.mc_control & (1 << (8 + ch)))
#define ECCx8(pvt)		((pvt)->info.mc_control & (1 << 1))
#define ECC_ENABLED(pvt)	((pvt)->info.mc_status & (1 << 4))
#define CH_DISABLED(pvt, ch)	((pvt)->info.mc_status & (1 << ch))
static inline int numdimms(u32 dimms)
static inline int numrank(u32 rank)
static inline int numbank(u32 bank)
static inline int numrow(u32 row)
static inline int numcol(u32 col)
static struct i7core_dev *get_i7core_dev(u8 socket)
static struct i7core_dev *alloc_i7core_dev(u8 socket,
const struct pci_id_table *table)
static void free_i7core_dev(struct i7core_dev *i7core_dev)
static struct pci_dev *get_pdev_slot_func(u8 socket, unsigned slot,
unsigned func)
static int i7core_get_active_channels(const u8 socket, unsigned *channels,
unsigned *csrows)
static int get_dimm_config(const struct mem_ctl_info *mci)
static int disable_inject(const struct mem_ctl_info *mci)
static ssize_t i7core_inject_section_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t i7core_inject_section_show(struct mem_ctl_info *mci,
char *data)
static ssize_t i7core_inject_type_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t i7core_inject_type_show(struct mem_ctl_info *mci,
char *data)
static ssize_t i7core_inject_eccmask_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t i7core_inject_eccmask_show(struct mem_ctl_info *mci,
char *data)
#define DECLARE_ADDR_MATCH(param, limit)			\
static ssize_t i7core_inject_store_##param(			\
struct mem_ctl_info *mci,			\
const char *data, size_t count)			\
\
\
static ssize_t i7core_inject_show_##param(			\
struct mem_ctl_info *mci,			\
char *data)					\
#define ATTR_ADDR_MATCH(param)					\
DECLARE_ADDR_MATCH(channel, 3);
DECLARE_ADDR_MATCH(dimm, 3);
DECLARE_ADDR_MATCH(rank, 4);
DECLARE_ADDR_MATCH(bank, 32);
DECLARE_ADDR_MATCH(page, 0x10000);
DECLARE_ADDR_MATCH(col, 0x4000);
static int write_and_test(struct pci_dev *dev, const int where, const u32 val)
static ssize_t i7core_inject_enable_store(struct mem_ctl_info *mci,
const char *data, size_t count)
static ssize_t i7core_inject_enable_show(struct mem_ctl_info *mci,
char *data)
#define DECLARE_COUNTER(param)					\
static ssize_t i7core_show_counter_##param(			\
struct mem_ctl_info *mci,			\
char *data)					\
#define ATTR_COUNTER(param)					\
DECLARE_COUNTER(0);
DECLARE_COUNTER(1);
DECLARE_COUNTER(2);
static const struct mcidev_sysfs_attribute i7core_addrmatch_attrs[] = ;
static const struct mcidev_sysfs_group i7core_inject_addrmatch = ;
static const struct mcidev_sysfs_attribute i7core_udimm_counters_attrs[] = ;
static const struct mcidev_sysfs_group i7core_udimm_counters = ;
static const struct mcidev_sysfs_attribute i7core_sysfs_rdimm_attrs[] = ;
static const struct mcidev_sysfs_attribute i7core_sysfs_udimm_attrs[] = ;
static void i7core_put_devices(struct i7core_dev *i7core_dev)
static void i7core_put_all_devices(void)
static void __init i7core_xeon_pci_fixup(const struct pci_id_table *table)
static unsigned i7core_pci_lastbus(void)
static int i7core_get_onedevice(struct pci_dev **prev,
const struct pci_id_table *table,
const unsigned devno,
const unsigned last_bus)
static int i7core_get_all_devices(void)
static int mci_bind_devs(struct mem_ctl_info *mci,
struct i7core_dev *i7core_dev)
static void i7core_rdimm_update_csrow(struct mem_ctl_info *mci,
const int chan,
const int dimm,
const int add)
static void i7core_rdimm_update_ce_count(struct mem_ctl_info *mci,
const int chan,
const int new0,
const int new1,
const int new2)
static void i7core_rdimm_check_mc_ecc_err(struct mem_ctl_info *mci)
static void i7core_udimm_check_mc_ecc_err(struct mem_ctl_info *mci)
static void i7core_mce_output_error(struct mem_ctl_info *mci,
const struct mce *m)
static void i7core_check_error(struct mem_ctl_info *mci)
static int i7core_mce_check_error(void *priv, struct mce *mce)
static void i7core_pci_ctl_create(struct i7core_pvt *pvt)
static void i7core_pci_ctl_release(struct i7core_pvt *pvt)
static void i7core_unregister_mci(struct i7core_dev *i7core_dev)
static int i7core_register_mci(struct i7core_dev *i7core_dev)
static int __devinit i7core_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit i7core_remove(struct pci_dev *pdev)
MODULE_DEVICE_TABLE(pci, i7core_pci_tbl);
static struct pci_driver i7core_driver = ;
static int __init i7core_init(void)
static void __exit i7core_exit(void)
module_init(i7core_init);
module_exit(i7core_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("MC Driver for Intel i7 Core memory controllers - "
I7CORE_REVISION);
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
