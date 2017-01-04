#define ALI1563_MAX_TIMEOUT	500
#define	ALI1563_SMBBA		0x80
#define ALI1563_SMB_IOEN	1
#define ALI1563_SMB_HOSTEN	2
#define ALI1563_SMB_IOSIZE	16
#define SMB_HST_STS	(ali1563_smba + 0)
#define SMB_HST_CNTL1	(ali1563_smba + 1)
#define SMB_HST_CNTL2	(ali1563_smba + 2)
#define SMB_HST_CMD	(ali1563_smba + 3)
#define SMB_HST_ADD	(ali1563_smba + 4)
#define SMB_HST_DAT0	(ali1563_smba + 5)
#define SMB_HST_DAT1	(ali1563_smba + 6)
#define SMB_BLK_DAT	(ali1563_smba + 7)
#define HST_STS_BUSY	0x01
#define HST_STS_INTR	0x02
#define HST_STS_DEVERR	0x04
#define HST_STS_BUSERR	0x08
#define HST_STS_FAIL	0x10
#define HST_STS_DONE	0x80
#define HST_STS_BAD	0x1c
#define HST_CNTL1_TIMEOUT	0x80
#define HST_CNTL1_LAST		0x40
#define HST_CNTL2_KILL		0x04
#define HST_CNTL2_START		0x40
#define HST_CNTL2_QUICK		0x00
#define HST_CNTL2_BYTE		0x01
#define HST_CNTL2_BYTE_DATA	0x02
#define HST_CNTL2_WORD_DATA	0x03
#define HST_CNTL2_BLOCK		0x05
#define HST_CNTL2_SIZEMASK	0x38
static struct pci_driver ali1563_pci_driver;
static unsigned short ali1563_smba;
static int ali1563_transaction(struct i2c_adapter * a, int size)
static int ali1563_block_start(struct i2c_adapter * a)
static int ali1563_block(struct i2c_adapter * a, union i2c_smbus_data * data, u8 rw)
static s32 ali1563_access(struct i2c_adapter * a, u16 addr,
unsigned short flags, char rw, u8 cmd,
int size, union i2c_smbus_data * data)
static u32 ali1563_func(struct i2c_adapter * a)
static int __devinit ali1563_setup(struct pci_dev * dev)
static void ali1563_shutdown(struct pci_dev *dev)
static const struct i2c_algorithm ali1563_algorithm = ;
static struct i2c_adapter ali1563_adapter = ;
static int __devinit ali1563_probe(struct pci_dev * dev,
const struct pci_device_id * id_table)
static void __devexit ali1563_remove(struct pci_dev * dev)
static const struct pci_device_id ali1563_id_table[] __devinitconst = ;
MODULE_DEVICE_TABLE (pci, ali1563_id_table);
static struct pci_driver ali1563_pci_driver = ;
static int __init ali1563_init(void)
module_init(ali1563_init);
static void __exit ali1563_exit(void)
module_exit(ali1563_exit);
MODULE_LICENSE("GPL");
