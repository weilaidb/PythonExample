static struct pci_driver pasemi_smb_driver;
struct pasemi_smbus ;
#define REG_MTXFIFO	0x00
#define REG_MRXFIFO	0x04
#define REG_SMSTA	0x14
#define REG_CTL		0x1c
#define MTXFIFO_READ	0x00000400
#define MTXFIFO_STOP	0x00000200
#define MTXFIFO_START	0x00000100
#define MTXFIFO_DATA_M	0x000000ff
#define MRXFIFO_EMPTY	0x00000100
#define MRXFIFO_DATA_M	0x000000ff
#define SMSTA_XEN	0x08000000
#define SMSTA_MTN	0x00200000
#define CTL_MRR		0x00000400
#define CTL_MTR		0x00000200
#define CTL_CLK_M	0x000000ff
#define CLK_100K_DIV	84
#define CLK_400K_DIV	21
static inline void reg_write(struct pasemi_smbus *smbus, int reg, int val)
static inline int reg_read(struct pasemi_smbus *smbus, int reg)
#define TXFIFO_WR(smbus, reg)	reg_write((smbus), REG_MTXFIFO, (reg))
#define RXFIFO_RD(smbus)	reg_read((smbus), REG_MRXFIFO)
static void pasemi_smb_clear(struct pasemi_smbus *smbus)
static int pasemi_smb_waitready(struct pasemi_smbus *smbus)
static int pasemi_i2c_xfer_msg(struct i2c_adapter *adapter,
struct i2c_msg *msg, int stop)
static int pasemi_i2c_xfer(struct i2c_adapter *adapter,
struct i2c_msg *msgs, int num)
static int pasemi_smb_xfer(struct i2c_adapter *adapter,
u16 addr, unsigned short flags, char read_write, u8 command,
int size, union i2c_smbus_data *data)
static u32 pasemi_smb_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static int __devinit pasemi_smb_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit pasemi_smb_remove(struct pci_dev *dev)
static const struct pci_device_id pasemi_smb_ids[] = ;
MODULE_DEVICE_TABLE(pci, pasemi_smb_ids);
static struct pci_driver pasemi_smb_driver = ;
static int __init pasemi_smb_init(void)
static void __exit pasemi_smb_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR ("Olof Johansson <olof@lixom.net>");
MODULE_DESCRIPTION("PA Semi PWRficient SMBus driver");
module_init(pasemi_smb_init);
module_exit(pasemi_smb_exit);
