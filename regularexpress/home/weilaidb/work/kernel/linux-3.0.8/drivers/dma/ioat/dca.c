#undef cpu_physical_id
#define cpu_physical_id(cpu) (cpuid_ebx(1) >> 24)
#define DCA_TAG_MAP_VALID 0x80
#define DCA3_TAG_MAP_BIT_TO_INV 0x80
#define DCA3_TAG_MAP_BIT_TO_SEL 0x40
#define DCA3_TAG_MAP_LITERAL_VAL 0x1
#define DCA_TAG_MAP_MASK 0xDF
#define DCA2_TAG_MAP_BYTE0 0x80
#define DCA2_TAG_MAP_BYTE1 0x0
#define DCA2_TAG_MAP_BYTE2 0x81
#define DCA2_TAG_MAP_BYTE3 0x82
#define DCA2_TAG_MAP_BYTE4 0x82
static inline int dca2_tag_map_valid(u8 *tag_map)
#define APICID_BIT(x)		(DCA_TAG_MAP_VALID | (x))
#define IOAT_TAG_MAP_LEN	8
static u8 ioat_tag_map_BNB[IOAT_TAG_MAP_LEN] = ;
static u8 ioat_tag_map_SCNB[IOAT_TAG_MAP_LEN] = ;
static u8 ioat_tag_map_CNB[IOAT_TAG_MAP_LEN] = ;
static u8 ioat_tag_map_UNISYS[IOAT_TAG_MAP_LEN] = ;
static inline u16 dcaid_from_pcidev(struct pci_dev *pci)
static int dca_enabled_in_bios(struct pci_dev *pdev)
int system_has_dca_enabled(struct pci_dev *pdev)
struct ioat_dca_slot ;
#define IOAT_DCA_MAX_REQ 6
#define IOAT3_DCA_MAX_REQ 2
struct ioat_dca_priv ;
static int ioat_dca_add_requester(struct dca_provider *dca, struct device *dev)
static int ioat_dca_remove_requester(struct dca_provider *dca,
struct device *dev)
static u8 ioat_dca_get_tag(struct dca_provider *dca,
struct device *dev,
int cpu)
static int ioat_dca_dev_managed(struct dca_provider *dca,
struct device *dev)
static struct dca_ops ioat_dca_ops = ;
struct dca_provider * __devinit
ioat_dca_init(struct pci_dev *pdev, void __iomem *iobase)
static int ioat2_dca_add_requester(struct dca_provider *dca, struct device *dev)
static int ioat2_dca_remove_requester(struct dca_provider *dca,
struct device *dev)
static u8 ioat2_dca_get_tag(struct dca_provider *dca,
struct device *dev,
int cpu)
static struct dca_ops ioat2_dca_ops = ;
static int ioat2_dca_count_dca_slots(void __iomem *iobase, u16 dca_offset)
struct dca_provider * __devinit
ioat2_dca_init(struct pci_dev *pdev, void __iomem *iobase)
static int ioat3_dca_add_requester(struct dca_provider *dca, struct device *dev)
static int ioat3_dca_remove_requester(struct dca_provider *dca,
struct device *dev)
static u8 ioat3_dca_get_tag(struct dca_provider *dca,
struct device *dev,
int cpu)
static struct dca_ops ioat3_dca_ops = ;
static int ioat3_dca_count_dca_slots(void *iobase, u16 dca_offset)
struct dca_provider * __devinit
ioat3_dca_init(struct pci_dev *pdev, void __iomem *iobase)
