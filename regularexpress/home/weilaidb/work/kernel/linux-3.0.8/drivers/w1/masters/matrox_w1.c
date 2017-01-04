MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <johnpol@2ka.mipt.ru>");
MODULE_DESCRIPTION("Driver for transport(Dallas 1-wire prtocol) over VGA DDC(matrox gpio).");
static struct pci_device_id matrox_w1_tbl[] = ;
MODULE_DEVICE_TABLE(pci, matrox_w1_tbl);
static int __devinit matrox_w1_probe(struct pci_dev *, const struct pci_device_id *);
static void __devexit matrox_w1_remove(struct pci_dev *);
static struct pci_driver matrox_w1_pci_driver = ;
#define MATROX_G400_DDC_CLK		(1<<4)
#define MATROX_G400_DDC_DATA		(1<<1)
#define MATROX_BASE			0x3C00
#define MATROX_STATUS			0x1e14
#define MATROX_PORT_INDEX_OFFSET	0x00
#define MATROX_PORT_DATA_OFFSET		0x0A
#define MATROX_GET_CONTROL		0x2A
#define MATROX_GET_DATA			0x2B
#define MATROX_CURSOR_CTL		0x06
struct matrox_device
;
static u8 matrox_w1_read_ddc_bit(void *);
static void matrox_w1_write_ddc_bit(void *, u8);
static __inline__ u8 matrox_w1_read_reg(struct matrox_device *dev, u8 reg)
static __inline__ void matrox_w1_write_reg(struct matrox_device *dev, u8 reg, u8 val)
static void matrox_w1_write_ddc_bit(void *data, u8 bit)
static u8 matrox_w1_read_ddc_bit(void *data)
static void matrox_w1_hw_init(struct matrox_device *dev)
static int __devinit matrox_w1_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit matrox_w1_remove(struct pci_dev *pdev)
static int __init matrox_w1_init(void)
static void __exit matrox_w1_fini(void)
module_init(matrox_w1_init);
module_exit(matrox_w1_fini);
