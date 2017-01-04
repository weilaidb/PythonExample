#define SMBHSTCNT	(0 + sch_smba)
#define SMBHSTSTS	(1 + sch_smba)
#define SMBHSTADD	(4 + sch_smba)
#define SMBHSTCMD	(5 + sch_smba)
#define SMBHSTDAT0	(6 + sch_smba)
#define SMBHSTDAT1	(7 + sch_smba)
#define SMBBLKDAT	(0x20 + sch_smba)
#define MAX_TIMEOUT	500
#define SCH_QUICK		0x00
#define SCH_BYTE		0x01
#define SCH_BYTE_DATA		0x02
#define SCH_WORD_DATA		0x03
#define SCH_BLOCK_DATA		0x05
static unsigned short sch_smba;
static struct i2c_adapter sch_adapter;
static int sch_transaction(void)
static s32 sch_access(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data *data)
static u32 sch_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter sch_adapter = ;
static int __devinit smbus_sch_probe(struct platform_device *dev)
static int __devexit smbus_sch_remove(struct platform_device *pdev)
static struct platform_driver smbus_sch_driver = ;
static int __init i2c_sch_init(void)
static void __exit i2c_sch_exit(void)
MODULE_AUTHOR("Jacob Pan <jacob.jun.pan@intel.com>");
MODULE_DESCRIPTION("Intel SCH SMBus driver");
MODULE_LICENSE("GPL");
module_init(i2c_sch_init);
module_exit(i2c_sch_exit);
MODULE_ALIAS("platform:isch_smbus");
