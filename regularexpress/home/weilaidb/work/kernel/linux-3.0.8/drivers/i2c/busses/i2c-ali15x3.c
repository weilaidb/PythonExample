#define SMBHSTSTS	(0 + ali15x3_smba)
#define SMBHSTCNT	(1 + ali15x3_smba)
#define SMBHSTSTART	(2 + ali15x3_smba)
#define SMBHSTCMD	(7 + ali15x3_smba)
#define SMBHSTADD	(3 + ali15x3_smba)
#define SMBHSTDAT0	(4 + ali15x3_smba)
#define SMBHSTDAT1	(5 + ali15x3_smba)
#define SMBBLKDAT	(6 + ali15x3_smba)
#define SMBCOM		0x004
#define SMBBA		0x014
#define SMBATPC		0x05B
#define SMBHSTCFG	0x0E0
#define SMBSLVC		0x0E1
#define SMBCLK		0x0E2
#define SMBREV		0x008
#define MAX_TIMEOUT		200
#define ALI15X3_SMB_IOSIZE	32
#define ALI15X3_SMB_DEFAULTBASE	0xE800
#define ALI15X3_LOCK		0x06
#define ALI15X3_ABORT		0x02
#define ALI15X3_T_OUT		0x04
#define ALI15X3_QUICK		0x00
#define ALI15X3_BYTE		0x10
#define ALI15X3_BYTE_DATA	0x20
#define ALI15X3_WORD_DATA	0x30
#define ALI15X3_BLOCK_DATA	0x40
#define ALI15X3_BLOCK_CLR	0x80
#define ALI15X3_STS_IDLE	0x04
#define ALI15X3_STS_BUSY	0x08
#define ALI15X3_STS_DONE	0x10
#define ALI15X3_STS_DEV		0x20
#define ALI15X3_STS_COLL	0x40
#define ALI15X3_STS_TERM	0x80
#define ALI15X3_STS_ERR		0xE0
static u16 force_addr;
module_param(force_addr, ushort, 0);
MODULE_PARM_DESC(force_addr,
"Initialize the base address of the i2c controller");
static struct pci_driver ali15x3_driver;
static unsigned short ali15x3_smba;
static int __devinit ali15x3_setup(struct pci_dev *ALI15X3_dev)
static int ali15x3_transaction(struct i2c_adapter *adap)
static s32 ali15x3_access(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write, u8 command,
int size, union i2c_smbus_data * data)
static u32 ali15x3_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter ali15x3_adapter = ;
static const struct pci_device_id ali15x3_ids[] = ;
MODULE_DEVICE_TABLE (pci, ali15x3_ids);
static int __devinit ali15x3_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit ali15x3_remove(struct pci_dev *dev)
static struct pci_driver ali15x3_driver = ;
static int __init i2c_ali15x3_init(void)
static void __exit i2c_ali15x3_exit(void)
MODULE_AUTHOR ("Frodo Looijaard <frodol@dds.nl>, "
"Philip Edelbrock <phil@netroedge.com>, "
"and Mark D. Studebaker <mdsxyz123@yahoo.com>");
MODULE_DESCRIPTION("ALI15X3 SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_ali15x3_init);
module_exit(i2c_ali15x3_exit);
