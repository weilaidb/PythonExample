#define SMBHSTSTS(p)	(0 + (p)->smba)
#define SMBHSTCNT(p)	(2 + (p)->smba)
#define SMBHSTCMD(p)	(3 + (p)->smba)
#define SMBHSTADD(p)	(4 + (p)->smba)
#define SMBHSTDAT0(p)	(5 + (p)->smba)
#define SMBHSTDAT1(p)	(6 + (p)->smba)
#define SMBBLKDAT(p)	(7 + (p)->smba)
#define SMBPEC(p)	(8 + (p)->smba)
#define SMBAUXSTS(p)	(12 + (p)->smba)
#define SMBAUXCTL(p)	(13 + (p)->smba)
#define SMBBAR		4
#define SMBHSTCFG	0x040
#define SMBHSTCFG_HST_EN	1
#define SMBHSTCFG_SMB_SMI_EN	2
#define SMBHSTCFG_I2C_EN	4
#define SMBAUXCTL_CRC		1
#define SMBAUXCTL_E32B		2
#define SMBHSTCNT_KILL		2
#define MAX_TIMEOUT		100
#define ENABLE_INT9		0
#define I801_QUICK		0x00
#define I801_BYTE		0x04
#define I801_BYTE_DATA		0x08
#define I801_WORD_DATA		0x0C
#define I801_PROC_CALL		0x10
#define I801_BLOCK_DATA		0x14
#define I801_I2C_BLOCK_DATA	0x18
#define I801_BLOCK_LAST		0x34
#define I801_I2C_BLOCK_LAST	0x38
#define I801_START		0x40
#define I801_PEC_EN		0x80
#define SMBHSTSTS_BYTE_DONE	0x80
#define SMBHSTSTS_INUSE_STS	0x40
#define SMBHSTSTS_SMBALERT_STS	0x20
#define SMBHSTSTS_FAILED	0x10
#define SMBHSTSTS_BUS_ERR	0x08
#define SMBHSTSTS_DEV_ERR	0x04
#define SMBHSTSTS_INTR		0x02
#define SMBHSTSTS_HOST_BUSY	0x01
#define STATUS_FLAGS		(SMBHSTSTS_BYTE_DONE | SMBHSTSTS_FAILED | \
SMBHSTSTS_BUS_ERR | SMBHSTSTS_DEV_ERR | \
SMBHSTSTS_INTR)
#define PCI_DEVICE_ID_INTEL_COUGARPOINT_SMBUS	0x1c22
#define PCI_DEVICE_ID_INTEL_PATSBURG_SMBUS	0x1d22
#define PCI_DEVICE_ID_INTEL_PATSBURG_SMBUS_IDF0	0x1d70
#define PCI_DEVICE_ID_INTEL_PATSBURG_SMBUS_IDF1	0x1d71
#define PCI_DEVICE_ID_INTEL_PATSBURG_SMBUS_IDF2	0x1d72
#define PCI_DEVICE_ID_INTEL_PANTHERPOINT_SMBUS	0x1e22
#define PCI_DEVICE_ID_INTEL_DH89XXCC_SMBUS	0x2330
#define PCI_DEVICE_ID_INTEL_5_3400_SERIES_SMBUS	0x3b30
struct i801_priv ;
static struct pci_driver i801_driver;
#define FEATURE_SMBUS_PEC	(1 << 0)
#define FEATURE_BLOCK_BUFFER	(1 << 1)
#define FEATURE_BLOCK_PROC	(1 << 2)
#define FEATURE_I2C_BLOCK_READ	(1 << 3)
#define FEATURE_IDF		(1 << 15)
static const char *i801_feature_names[] = ;
static unsigned int disable_features;
module_param(disable_features, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(disable_features, "Disable selected driver features");
static int i801_check_pre(struct i801_priv *priv)
static int i801_check_post(struct i801_priv *priv, int status, int timeout)
static int i801_transaction(struct i801_priv *priv, int xact)
static void i801_wait_hwpec(struct i801_priv *priv)
static int i801_block_transaction_by_block(struct i801_priv *priv,
union i2c_smbus_data *data,
char read_write, int hwpec)
static int i801_block_transaction_byte_by_byte(struct i801_priv *priv,
union i2c_smbus_data *data,
char read_write, int command,
int hwpec)
static int i801_set_block_buffer_mode(struct i801_priv *priv)
static int i801_block_transaction(struct i801_priv *priv,
union i2c_smbus_data *data, char read_write,
int command, int hwpec)
static s32 i801_access(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write, u8 command,
int size, union i2c_smbus_data *data)
static u32 i801_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static const struct pci_device_id i801_ids[] = ;
MODULE_DEVICE_TABLE(pci, i801_ids);
#if defined CONFIG_X86 && defined CONFIG_DMI
static unsigned char apanel_addr;
static __init const void __iomem *bios_signature(const void __iomem *bios)
static void __init input_apanel_init(void)
struct dmi_onboard_device_info ;
static struct dmi_onboard_device_info __devinitdata dmi_devices[] = ;
static void __devinit dmi_check_onboard_device(u8 type, const char *name,
struct i2c_adapter *adap)
static void __devinit dmi_check_onboard_devices(const struct dmi_header *dm,
void *adap)
static void __devinit i801_probe_optional_slaves(struct i801_priv *priv)
static void __init input_apanel_init(void)
static void __devinit i801_probe_optional_slaves(struct i801_priv *priv)
static int __devinit i801_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit i801_remove(struct pci_dev *dev)
static int i801_suspend(struct pci_dev *dev, pm_message_t mesg)
static int i801_resume(struct pci_dev *dev)
#define i801_suspend NULL
#define i801_resume NULL
static struct pci_driver i801_driver = ;
static int __init i2c_i801_init(void)
static void __exit i2c_i801_exit(void)
MODULE_AUTHOR("Mark D. Studebaker <mdsxyz123@yahoo.com>, "
"Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("I801 SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_i801_init);
module_exit(i2c_i801_exit);
