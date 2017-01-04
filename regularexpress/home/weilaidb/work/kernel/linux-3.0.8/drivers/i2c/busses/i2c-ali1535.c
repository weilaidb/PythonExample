#define SMBHSTSTS	(0 + ali1535_smba)
#define SMBHSTTYP	(1 + ali1535_smba)
#define SMBHSTPORT	(2 + ali1535_smba)
#define SMBHSTCMD	(7 + ali1535_smba)
#define SMBHSTADD	(3 + ali1535_smba)
#define SMBHSTDAT0	(4 + ali1535_smba)
#define SMBHSTDAT1	(5 + ali1535_smba)
#define SMBBLKDAT	(6 + ali1535_smba)
#define SMBCOM		0x004
#define SMBREV		0x008
#define SMBCFG		0x0D1
#define SMBBA		0x0E2
#define SMBHSTCFG	0x0F0
#define SMBCLK		0x0F2
#define MAX_TIMEOUT		500
#define ALI1535_SMB_IOSIZE	32
#define ALI1535_SMB_DEFAULTBASE	0x8040
#define ALI1535_LOCK		0x06
#define ALI1535_QUICK		0x00
#define ALI1535_BYTE		0x10
#define ALI1535_BYTE_DATA	0x20
#define ALI1535_WORD_DATA	0x30
#define ALI1535_BLOCK_DATA	0x40
#define ALI1535_I2C_READ	0x60
#define	ALI1535_DEV10B_EN	0x80
#define	ALI1535_T_OUT		0x08
#define	ALI1535_A_HIGH_BIT9	0x08
#define	ALI1535_KILL		0x04
#define	ALI1535_A_HIGH_BIT8	0x04
#define	ALI1535_D_HI_MASK	0x03
#define ALI1535_STS_IDLE	0x04
#define ALI1535_STS_BUSY	0x08
#define ALI1535_STS_DONE	0x10
#define ALI1535_STS_DEV		0x20
#define ALI1535_STS_BUSERR	0x40
#define ALI1535_STS_FAIL	0x80
#define ALI1535_STS_ERR		0xE0
#define ALI1535_BLOCK_CLR	0x04
#define	ALI1535_RD_ADDR		0x01
#define	ALI1535_SMBIO_EN	0x04
static struct pci_driver ali1535_driver;
static unsigned short ali1535_smba;
static int __devinit ali1535_setup(struct pci_dev *dev)
static int ali1535_transaction(struct i2c_adapter *adap)
static s32 ali1535_access(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write, u8 command,
int size, union i2c_smbus_data *data)
static u32 ali1535_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter ali1535_adapter = ;
static const struct pci_device_id ali1535_ids[] = ;
MODULE_DEVICE_TABLE (pci, ali1535_ids);
static int __devinit ali1535_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit ali1535_remove(struct pci_dev *dev)
static struct pci_driver ali1535_driver = ;
static int __init i2c_ali1535_init(void)
static void __exit i2c_ali1535_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>, "
"Philip Edelbrock <phil@netroedge.com>, "
"Mark D. Studebaker <mdsxyz123@yahoo.com> "
"and Dan Eaton <dan.eaton@rocketlogix.com>");
MODULE_DESCRIPTION("ALI1535 SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_ali1535_init);
module_exit(i2c_ali1535_exit);
