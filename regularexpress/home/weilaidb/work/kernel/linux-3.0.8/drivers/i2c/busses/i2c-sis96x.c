#define SIS96x_BAR 0x04
#define SMB_STS      0x00
#define SMB_EN       0x01
#define SMB_CNT      0x02
#define SMB_HOST_CNT 0x03
#define SMB_ADDR     0x04
#define SMB_CMD      0x05
#define SMB_PCOUNT   0x06
#define SMB_COUNT    0x07
#define SMB_BYTE     0x08
#define SMB_DEV_ADDR 0x10
#define SMB_DB0      0x11
#define SMB_DB1      0x12
#define SMB_SAA      0x13
#define SMB_IOSIZE 0x20
#define MAX_TIMEOUT 500
#define SIS96x_QUICK      0x00
#define SIS96x_BYTE       0x01
#define SIS96x_BYTE_DATA  0x02
#define SIS96x_WORD_DATA  0x03
#define SIS96x_PROC_CALL  0x04
#define SIS96x_BLOCK_DATA 0x05
static struct pci_driver sis96x_driver;
static struct i2c_adapter sis96x_adapter;
static u16 sis96x_smbus_base;
static inline u8 sis96x_read(u8 reg)
static inline void sis96x_write(u8 reg, u8 data)
static int sis96x_transaction(int size)
static s32 sis96x_access(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data * data)
static u32 sis96x_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter sis96x_adapter = ;
static const struct pci_device_id sis96x_ids[] = ;
MODULE_DEVICE_TABLE (pci, sis96x_ids);
static int __devinit sis96x_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit sis96x_remove(struct pci_dev *dev)
static struct pci_driver sis96x_driver = ;
static int __init i2c_sis96x_init(void)
static void __exit i2c_sis96x_exit(void)
MODULE_AUTHOR("Mark M. Hoffman <mhoffman@lightlink.com>");
MODULE_DESCRIPTION("SiS96x SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_sis96x_init);
module_exit(i2c_sis96x_exit);
