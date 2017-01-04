MODULE_LICENSE("GPL");
MODULE_AUTHOR ("Vojtech Pavlik <vojtech@suse.cz>");
MODULE_DESCRIPTION("AMD8111 SMBus 2.0 driver");
struct amd_smbus ;
static struct pci_driver amd8111_driver;
#define AMD_PCI_MISC	0x48
#define AMD_PCI_MISC_SCI	0x04
#define AMD_PCI_MISC_INT	0x02
#define AMD_PCI_MISC_SPEEDUP	0x01
#define AMD_EC_DATA	0x00
#define AMD_EC_SC	0x04
#define AMD_EC_CMD	0x04
#define AMD_EC_ICR	0x08
#define AMD_EC_SC_SMI	0x04
#define AMD_EC_SC_SCI	0x02
#define AMD_EC_SC_BURST	0x01
#define AMD_EC_SC_CMD	0x08
#define AMD_EC_SC_IBF	0x02
#define AMD_EC_SC_OBF	0x01
#define AMD_EC_CMD_RD	0x80
#define AMD_EC_CMD_WR	0x81
#define AMD_EC_CMD_BE	0x82
#define AMD_EC_CMD_BD	0x83
#define AMD_EC_CMD_QR	0x84
static int amd_ec_wait_write(struct amd_smbus *smbus)
static int amd_ec_wait_read(struct amd_smbus *smbus)
static int amd_ec_read(struct amd_smbus *smbus, unsigned char address,
unsigned char *data)
static int amd_ec_write(struct amd_smbus *smbus, unsigned char address,
unsigned char data)
#define AMD_SMB_PRTCL	0x00
#define AMD_SMB_STS	0x01
#define AMD_SMB_ADDR	0x02
#define AMD_SMB_CMD	0x03
#define AMD_SMB_DATA	0x04
#define AMD_SMB_BCNT	0x24
#define AMD_SMB_ALRM_A	0x25
#define AMD_SMB_ALRM_D	0x26
#define AMD_SMB_STS_DONE	0x80
#define AMD_SMB_STS_ALRM	0x40
#define AMD_SMB_STS_RES		0x20
#define AMD_SMB_STS_STATUS	0x1f
#define AMD_SMB_STATUS_OK	0x00
#define AMD_SMB_STATUS_FAIL	0x07
#define AMD_SMB_STATUS_DNAK	0x10
#define AMD_SMB_STATUS_DERR	0x11
#define AMD_SMB_STATUS_CMD_DENY	0x12
#define AMD_SMB_STATUS_UNKNOWN	0x13
#define AMD_SMB_STATUS_ACC_DENY	0x17
#define AMD_SMB_STATUS_TIMEOUT	0x18
#define AMD_SMB_STATUS_NOTSUP	0x19
#define AMD_SMB_STATUS_BUSY	0x1A
#define AMD_SMB_STATUS_PEC	0x1F
#define AMD_SMB_PRTCL_WRITE		0x00
#define AMD_SMB_PRTCL_READ		0x01
#define AMD_SMB_PRTCL_QUICK		0x02
#define AMD_SMB_PRTCL_BYTE		0x04
#define AMD_SMB_PRTCL_BYTE_DATA		0x06
#define AMD_SMB_PRTCL_WORD_DATA		0x08
#define AMD_SMB_PRTCL_BLOCK_DATA	0x0a
#define AMD_SMB_PRTCL_PROC_CALL		0x0c
#define AMD_SMB_PRTCL_BLOCK_PROC_CALL	0x0d
#define AMD_SMB_PRTCL_I2C_BLOCK_DATA	0x4a
#define AMD_SMB_PRTCL_PEC		0x80
static s32 amd8111_access(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write, u8 command, int size,
union i2c_smbus_data * data)
static u32 amd8111_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static const struct pci_device_id amd8111_ids[] = ;
MODULE_DEVICE_TABLE (pci, amd8111_ids);
static int __devinit amd8111_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit amd8111_remove(struct pci_dev *dev)
static struct pci_driver amd8111_driver = ;
static int __init i2c_amd8111_init(void)
static void __exit i2c_amd8111_exit(void)
module_init(i2c_amd8111_init);
module_exit(i2c_amd8111_exit);
