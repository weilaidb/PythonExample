static const struct ssb_device_id ssb_gige_tbl[] = ;
static inline u8 gige_read8(struct ssb_gige *dev, u16 offset)
static inline u16 gige_read16(struct ssb_gige *dev, u16 offset)
static inline u32 gige_read32(struct ssb_gige *dev, u16 offset)
static inline void gige_write8(struct ssb_gige *dev,
u16 offset, u8 value)
static inline void gige_write16(struct ssb_gige *dev,
u16 offset, u16 value)
static inline void gige_write32(struct ssb_gige *dev,
u16 offset, u32 value)
static inline
u8 gige_pcicfg_read8(struct ssb_gige *dev, unsigned int offset)
static inline
u16 gige_pcicfg_read16(struct ssb_gige *dev, unsigned int offset)
static inline
u32 gige_pcicfg_read32(struct ssb_gige *dev, unsigned int offset)
static inline
void gige_pcicfg_write8(struct ssb_gige *dev,
unsigned int offset, u8 value)
static inline
void gige_pcicfg_write16(struct ssb_gige *dev,
unsigned int offset, u16 value)
static inline
void gige_pcicfg_write32(struct ssb_gige *dev,
unsigned int offset, u32 value)
static int ssb_gige_pci_read_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 *val)
static int ssb_gige_pci_write_config(struct pci_bus *bus, unsigned int devfn,
int reg, int size, u32 val)
static int ssb_gige_probe(struct ssb_device *sdev, const struct ssb_device_id *id)
bool pdev_is_ssb_gige_core(struct pci_dev *pdev)
EXPORT_SYMBOL(pdev_is_ssb_gige_core);
int ssb_gige_pcibios_plat_dev_init(struct ssb_device *sdev,
struct pci_dev *pdev)
int ssb_gige_map_irq(struct ssb_device *sdev,
const struct pci_dev *pdev)
static struct ssb_driver ssb_gige_driver = ;
int ssb_gige_init(void)
