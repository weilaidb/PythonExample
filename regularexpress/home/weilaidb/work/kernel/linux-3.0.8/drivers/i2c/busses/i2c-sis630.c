#define SMB_STS			0x80
#define SMB_EN			0x81
#define SMB_CNT			0x82
#define SMBHOST_CNT		0x83
#define SMB_ADDR		0x84
#define SMB_CMD			0x85
#define SMB_PCOUNT		0x86
#define SMB_COUNT		0x87
#define SMB_BYTE		0x88
#define SMBDEV_ADDR		0x90
#define SMB_DB0			0x91
#define SMB_DB1			0x92
#define SMB_SAA			0x93
#define SIS630_SMB_IOREGION	20
#define SIS630_ACPI_BASE_REG	0x74
#define SIS630_BIOS_CTL_REG	0x40
#define MAX_TIMEOUT		500
#define SIS630_QUICK		0x00
#define SIS630_BYTE		0x01
#define SIS630_BYTE_DATA	0x02
#define SIS630_WORD_DATA	0x03
#define SIS630_PCALL		0x04
#define SIS630_BLOCK_DATA	0x05
static struct pci_driver sis630_driver;
static int high_clock;
static int force;
module_param(high_clock, bool, 0);
MODULE_PARM_DESC(high_clock, "Set Host Master Clock to 56KHz (default 14KHz).");
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Forcibly enable the SIS630. DANGEROUS!");
static unsigned short acpi_base;
static int supported[] = ;
static inline u8 sis630_read(u8 reg)
static inline void sis630_write(u8 reg, u8 data)
static int sis630_transaction_start(struct i2c_adapter *adap, int size, u8 *oldclock)
static int sis630_transaction_wait(struct i2c_adapter *adap, int size)
static void sis630_transaction_end(struct i2c_adapter *adap, u8 oldclock)
static int sis630_transaction(struct i2c_adapter *adap, int size)
static int sis630_block_data(struct i2c_adapter *adap, union i2c_smbus_data *data, int read_write)
static s32 sis630_access(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data *data)
static u32 sis630_func(struct i2c_adapter *adapter)
static int __devinit sis630_setup(struct pci_dev *sis630_dev)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter sis630_adapter = ;
static const struct pci_device_id sis630_ids[] __devinitconst = ;
MODULE_DEVICE_TABLE (pci, sis630_ids);
static int __devinit sis630_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit sis630_remove(struct pci_dev *dev)
static struct pci_driver sis630_driver = ;
static int __init i2c_sis630_init(void)
static void __exit i2c_sis630_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexander Malysh <amalysh@web.de>");
MODULE_DESCRIPTION("SIS630 SMBus driver");
module_init(i2c_sis630_init);
module_exit(i2c_sis630_exit);
