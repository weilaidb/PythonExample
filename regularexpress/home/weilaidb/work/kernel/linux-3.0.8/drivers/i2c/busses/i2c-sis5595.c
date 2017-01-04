static int blacklist[] = ;
#define SIS5595_EXTENT		8
#define SMB_STS_LO		0x00
#define SMB_STS_HI		0x01
#define SMB_CTL_LO		0x02
#define SMB_CTL_HI		0x03
#define SMB_ADDR		0x04
#define SMB_CMD			0x05
#define SMB_PCNT		0x06
#define SMB_CNT			0x07
#define SMB_BYTE		0x08
#define SMB_DEV			0x10
#define SMB_DB0			0x11
#define SMB_DB1			0x12
#define SMB_HAA			0x13
#define SMB_INDEX		0x38
#define SMB_DAT			0x39
#define SIS5595_ENABLE_REG	0x40
#define ACPI_BASE		0x90
#define MAX_TIMEOUT		500
#define SIS5595_QUICK		0x00
#define SIS5595_BYTE		0x02
#define SIS5595_BYTE_DATA	0x04
#define SIS5595_WORD_DATA	0x06
#define SIS5595_PROC_CALL	0x08
#define SIS5595_BLOCK_DATA	0x0A
static u16 force_addr;
module_param(force_addr, ushort, 0);
MODULE_PARM_DESC(force_addr, "Initialize the base address of the i2c controller");
static struct pci_driver sis5595_driver;
static unsigned short sis5595_base;
static struct pci_dev *sis5595_pdev;
static u8 sis5595_read(u8 reg)
static void sis5595_write(u8 reg, u8 data)
static int __devinit sis5595_setup(struct pci_dev *SIS5595_dev)
static int sis5595_transaction(struct i2c_adapter *adap)
static s32 sis5595_access(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data *data)
static u32 sis5595_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter sis5595_adapter = ;
static const struct pci_device_id sis5595_ids[] __devinitconst = ;
MODULE_DEVICE_TABLE (pci, sis5595_ids);
static int __devinit sis5595_probe(struct pci_dev *dev, const struct pci_device_id *id)
static struct pci_driver sis5595_driver = ;
static int __init i2c_sis5595_init(void)
static void __exit i2c_sis5595_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>");
MODULE_DESCRIPTION("SIS5595 SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_sis5595_init);
module_exit(i2c_sis5595_exit);
