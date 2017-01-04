#define PM_CFG_REVID	0x08
#define PM_CFG_IOBASE0	0x20
#define PM_CFG_IOBASE1	0x48
#define I2C_DIR		(pm_io_base+0x40)
#define I2C_OUT		(pm_io_base+0x42)
#define I2C_IN		(pm_io_base+0x44)
#define I2C_SCL		0x02
#define I2C_SDA		0x04
#define IOSPACE		0x06
static struct pci_driver vt586b_driver;
static u16 pm_io_base;
static void bit_via_setscl(void *data, int state)
static void bit_via_setsda(void *data, int state)
static int bit_via_getscl(void *data)
static int bit_via_getsda(void *data)
static struct i2c_algo_bit_data bit_data = ;
static struct i2c_adapter vt586b_adapter = ;
static const struct pci_device_id vt586b_ids[] __devinitconst = ;
MODULE_DEVICE_TABLE (pci, vt586b_ids);
static int __devinit vt586b_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void __devexit vt586b_remove(struct pci_dev *dev)
static struct pci_driver vt586b_driver = ;
static int __init i2c_vt586b_init(void)
static void __exit i2c_vt586b_exit(void)
MODULE_AUTHOR("Kyösti Mälkki <kmalkki@cc.hut.fi>");
MODULE_DESCRIPTION("i2c for Via vt82c586b southbridge");
MODULE_LICENSE("GPL");
module_init(i2c_vt586b_init);
module_exit(i2c_vt586b_exit);
