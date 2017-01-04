#undef DEBUG
#define PCI_RETRY_MAX	3
static int limit_pci_retries = 1;
#define IOMM_TABLE_MAX_ENTRIES	1024
#define IOMM_TABLE_ENTRY_SIZE	0x0000000000400000UL
#define BASE_IO_MEMORY		0xE000000000000000UL
#define END_IO_MEMORY		0xEFFFFFFFFFFFFFFFUL
static unsigned long max_io_memory = BASE_IO_MEMORY;
static long current_iomm_table_entry;
static struct device_node *iomm_table[IOMM_TABLE_MAX_ENTRIES];
static u64 ds_addr_table[IOMM_TABLE_MAX_ENTRIES];
static DEFINE_SPINLOCK(iomm_table_lock);
static inline u64 iseries_ds_addr(struct device_node *node)
#define BUS_VPDSIZE      1024
#define VPD_END_OF_AREA		0x79
#define VPD_ID_STRING		0x82
#define VPD_VENDOR_AREA		0x84
#define VPD_FRU_FRAME_ID	0x4649
#define VPD_SLOT_MAP_FORMAT	0x4D46
#define VPD_SLOT_MAP		0x534D
struct mfg_vpd_area ;
#define MFG_ENTRY_SIZE   3
struct slot_map ;
#define SLOT_ENTRY_SIZE   16
static void __init iseries_parse_slot_area(struct slot_map *map, int len,
HvAgentId agent, u8 *phb, char card[4])
static void __init iseries_parse_mfg_area(struct mfg_vpd_area *area, int len,
HvAgentId agent, u8 *phb, u8 *frame, char card[4])
static u8 __init iseries_parse_phbid(u8 *area, int len)
static void __init iseries_parse_vpd(u8 *data, int data_len,
HvAgentId agent, u8 *frame, char card[4])
static int __init iseries_get_location_code(u16 bus, HvAgentId agent,
u8 *frame, char card[4])
static void __init iseries_device_information(struct pci_dev *pdev,
u16 bus, HvSubBusNumber subbus)
static void __init iomm_table_allocate_entry(struct pci_dev *dev, int bar_num)
static void __init allocate_device_bars(struct pci_dev *dev)
static void pci_log_error(char *error, int bus, int subbus,
int agent, int hv_res)
static struct device_node *find_device_node(int bus, int devfn)
void __init iSeries_pcibios_fixup_resources(struct pci_dev *pdev)
void __init iSeries_pci_final_fixup(void)
static u64 hv_cfg_read_func[4]  = ;
static u64 hv_cfg_write_func[4] = ;
static int iSeries_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int offset, int size, u32 *val)
static int iSeries_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int size, u32 val)
static struct pci_ops iSeries_pci_ops = ;
static int check_return_code(char *type, struct device_node *dn,
int *retry, u64 ret)
static inline struct device_node *xlate_iomm_address(
const volatile void __iomem *addr,
u64 *dsaptr, u64 *bar_offset, const char *func)
static u8 iseries_readb(const volatile void __iomem *addr)
static u16 iseries_readw_be(const volatile void __iomem *addr)
static u32 iseries_readl_be(const volatile void __iomem *addr)
static void iseries_writeb(u8 data, volatile void __iomem *addr)
static void iseries_writew_be(u16 data, volatile void __iomem *addr)
static void iseries_writel_be(u32 data, volatile void __iomem *addr)
static u16 iseries_readw(const volatile void __iomem *addr)
static u32 iseries_readl(const volatile void __iomem *addr)
static void iseries_writew(u16 data, volatile void __iomem *addr)
static void iseries_writel(u32 data, volatile void __iomem *addr)
static void iseries_readsb(const volatile void __iomem *addr, void *buf,
unsigned long count)
static void iseries_readsw(const volatile void __iomem *addr, void *buf,
unsigned long count)
static void iseries_readsl(const volatile void __iomem *addr, void *buf,
unsigned long count)
static void iseries_writesb(volatile void __iomem *addr, const void *buf,
unsigned long count)
static void iseries_writesw(volatile void __iomem *addr, const void *buf,
unsigned long count)
static void iseries_writesl(volatile void __iomem *addr, const void *buf,
unsigned long count)
static void iseries_memset_io(volatile void __iomem *addr, int c,
unsigned long n)
static void iseries_memcpy_fromio(void *dest, const volatile void __iomem *src,
unsigned long n)
static void iseries_memcpy_toio(volatile void __iomem *dest, const void *src,
unsigned long n)
static struct ppc_pci_io __initdata iseries_pci_io = ;
void __init iSeries_pcibios_init(void)
