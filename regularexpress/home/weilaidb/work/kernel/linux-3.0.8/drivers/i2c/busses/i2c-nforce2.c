MODULE_LICENSE("GPL");
MODULE_AUTHOR ("Hans-Frieder Vogt <hfvogt@gmx.net>");
MODULE_DESCRIPTION("nForce2/3/4/5xx SMBus driver");
struct nforce2_smbus ;
#define NFORCE_PCI_SMB1	0x50
#define NFORCE_PCI_SMB2	0x54
#define NVIDIA_SMB_PRTCL	(smbus->base + 0x00)
#define NVIDIA_SMB_STS		(smbus->base + 0x01)
#define NVIDIA_SMB_ADDR		(smbus->base + 0x02)
#define NVIDIA_SMB_CMD		(smbus->base + 0x03)
#define NVIDIA_SMB_DATA		(smbus->base + 0x04)
#define NVIDIA_SMB_BCNT		(smbus->base + 0x24)
#define NVIDIA_SMB_STATUS_ABRT	(smbus->base + 0x3c)
#define NVIDIA_SMB_CTRL		(smbus->base + 0x3e)
#define NVIDIA_SMB_STATUS_ABRT_STS	0x01
#define NVIDIA_SMB_CTRL_ABORT	0x20
#define NVIDIA_SMB_STS_DONE	0x80
#define NVIDIA_SMB_STS_ALRM	0x40
#define NVIDIA_SMB_STS_RES	0x20
#define NVIDIA_SMB_STS_STATUS	0x1f
#define NVIDIA_SMB_PRTCL_WRITE			0x00
#define NVIDIA_SMB_PRTCL_READ			0x01
#define NVIDIA_SMB_PRTCL_QUICK			0x02
#define NVIDIA_SMB_PRTCL_BYTE			0x04
#define NVIDIA_SMB_PRTCL_BYTE_DATA		0x06
#define NVIDIA_SMB_PRTCL_WORD_DATA		0x08
#define NVIDIA_SMB_PRTCL_BLOCK_DATA		0x0a
#define NVIDIA_SMB_PRTCL_PEC			0x80
#define MAX_TIMEOUT	100
static struct dmi_system_id __devinitdata nforce2_dmi_blacklist2[] = ;
static struct pci_driver nforce2_driver;
#if defined CONFIG_I2C_NFORCE2_S4985 || defined CONFIG_I2C_NFORCE2_S4985_MODULE
struct i2c_adapter *nforce2_smbus;
EXPORT_SYMBOL_GPL(nforce2_smbus);
static void nforce2_set_reference(struct i2c_adapter *adap)
static inline void nforce2_set_reference(struct i2c_adapter *adap)
static void nforce2_abort(struct i2c_adapter *adap)
static int nforce2_check_status(struct i2c_adapter *adap)
static s32 nforce2_access(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data * data)
static u32 nforce2_func(struct i2c_adapter *adapter)
static struct i2c_algorithm smbus_algorithm = ;
static const struct pci_device_id nforce2_ids[] = ;
MODULE_DEVICE_TABLE (pci, nforce2_ids);
static int __devinit nforce2_probe_smb (struct pci_dev *dev, int bar,
int alt_reg, struct nforce2_smbus *smbus, const char *name)
static int __devinit nforce2_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit nforce2_remove(struct pci_dev *dev)
static struct pci_driver nforce2_driver = ;
static int __init nforce2_init(void)
static void __exit nforce2_exit(void)
module_init(nforce2_init);
module_exit(nforce2_exit);
