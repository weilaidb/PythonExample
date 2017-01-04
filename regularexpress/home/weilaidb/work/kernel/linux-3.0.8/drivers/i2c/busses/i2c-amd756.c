#define SMB_ADDR_OFFSET		0xE0
#define SMB_IOSIZE		16
#define SMB_GLOBAL_STATUS	(0x0 + amd756_ioport)
#define SMB_GLOBAL_ENABLE	(0x2 + amd756_ioport)
#define SMB_HOST_ADDRESS	(0x4 + amd756_ioport)
#define SMB_HOST_DATA		(0x6 + amd756_ioport)
#define SMB_HOST_COMMAND	(0x8 + amd756_ioport)
#define SMB_HOST_BLOCK_DATA	(0x9 + amd756_ioport)
#define SMB_HAS_DATA		(0xA + amd756_ioport)
#define SMB_HAS_DEVICE_ADDRESS	(0xC + amd756_ioport)
#define SMB_HAS_HOST_ADDRESS	(0xE + amd756_ioport)
#define SMB_SNOOP_ADDRESS	(0xF + amd756_ioport)
#define SMBBA		0x058
#define SMBBANFORCE	0x014
#define SMBGCFG		0x041
#define SMBREV		0x008
#define MAX_TIMEOUT	500
#define AMD756_QUICK		0x00
#define AMD756_BYTE		0x01
#define AMD756_BYTE_DATA	0x02
#define AMD756_WORD_DATA	0x03
#define AMD756_PROCESS_CALL	0x04
#define AMD756_BLOCK_DATA	0x05
static struct pci_driver amd756_driver;
static unsigned short amd756_ioport;
#define GS_ABRT_STS	(1 << 0)
#define GS_COL_STS	(1 << 1)
#define GS_PRERR_STS	(1 << 2)
#define GS_HST_STS	(1 << 3)
#define GS_HCYC_STS	(1 << 4)
#define GS_TO_STS	(1 << 5)
#define GS_SMB_STS	(1 << 11)
#define GS_CLEAR_STS	(GS_ABRT_STS | GS_COL_STS | GS_PRERR_STS | \
GS_HCYC_STS | GS_TO_STS )
#define GE_CYC_TYPE_MASK	(7)
#define GE_HOST_STC		(1 << 3)
#define GE_ABORT		(1 << 5)
static int amd756_transaction(struct i2c_adapter *adap)
static s32 amd756_access(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data * data)
static u32 amd756_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
struct i2c_adapter amd756_smbus = ;
enum chiptype ;
static const char* chipname[] = ;
static const struct pci_device_id amd756_ids[] = ;
MODULE_DEVICE_TABLE (pci, amd756_ids);
static int __devinit amd756_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit amd756_remove(struct pci_dev *dev)
static struct pci_driver amd756_driver = ;
static int __init amd756_init(void)
static void __exit amd756_exit(void)
MODULE_AUTHOR("Merlin Hughes <merlin@merlin.org>");
MODULE_DESCRIPTION("AMD756/766/768/8111 and nVidia nForce SMBus driver");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(amd756_smbus);
module_init(amd756_init)
module_exit(amd756_exit)
