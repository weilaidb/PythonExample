static struct pci_dev *vt596_pdev;
#define SMBBA1		0x90
#define SMBBA2		0x80
#define SMBBA3		0xD0
static unsigned short vt596_smba;
#define SMBHSTSTS	(vt596_smba + 0)
#define SMBHSTCNT	(vt596_smba + 2)
#define SMBHSTCMD	(vt596_smba + 3)
#define SMBHSTADD	(vt596_smba + 4)
#define SMBHSTDAT0	(vt596_smba + 5)
#define SMBHSTDAT1	(vt596_smba + 6)
#define SMBBLKDAT	(vt596_smba + 7)
static unsigned short SMBHSTCFG = 0xD2;
#define MAX_TIMEOUT	500
#define VT596_QUICK		0x00
#define VT596_BYTE		0x04
#define VT596_BYTE_DATA		0x08
#define VT596_WORD_DATA		0x0C
#define VT596_PROC_CALL		0x10
#define VT596_BLOCK_DATA	0x14
#define VT596_I2C_BLOCK_DATA	0x34
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Forcibly enable the SMBus. DANGEROUS!");
static u16 force_addr;
module_param(force_addr, ushort, 0);
MODULE_PARM_DESC(force_addr,
"Forcibly enable the SMBus at the given address. "
"EXTREMELY DANGEROUS!");
static struct pci_driver vt596_driver;
static struct i2c_adapter vt596_adapter;
#define FEATURE_I2CBLOCK	(1<<0)
static unsigned int vt596_features;
static void vt596_dump_regs(const char *msg, u8 size)
static inline void vt596_dump_regs(const char *msg, u8 size)
static int vt596_transaction(u8 size)
static s32 vt596_access(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write, u8 command,
int size, union i2c_smbus_data *data)
static u32 vt596_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter vt596_adapter = ;
static int __devinit vt596_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static const struct pci_device_id vt596_ids[] = ;
MODULE_DEVICE_TABLE(pci, vt596_ids);
static struct pci_driver vt596_driver = ;
static int __init i2c_vt596_init(void)
static void __exit i2c_vt596_exit(void)
MODULE_AUTHOR("Kyosti Malkki <kmalkki@cc.hut.fi>, "
"Mark D. Studebaker <mdsxyz123@yahoo.com> and "
"Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("vt82c596 SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_vt596_init);
module_exit(i2c_vt596_exit);
