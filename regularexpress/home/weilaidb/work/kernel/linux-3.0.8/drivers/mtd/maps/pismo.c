#define PISMO_NUM_CS	5
struct pismo_cs_block  __packed;
struct pismo_eeprom  __packed;
struct pismo_mem ;
struct pismo_data ;
static void pismo_set_vpp(struct platform_device *pdev, int on)
static unsigned int __devinit pismo_width_to_bytes(unsigned int width)
static int __devinit pismo_eeprom_read(struct i2c_client *client, void *buf,
u8 addr, size_t size)
static int __devinit pismo_add_device(struct pismo_data *pismo, int i,
struct pismo_mem *region, const char *name, void *pdata, size_t psize)
static int __devinit pismo_add_nor(struct pismo_data *pismo, int i,
struct pismo_mem *region)
static int __devinit pismo_add_sram(struct pismo_data *pismo, int i,
struct pismo_mem *region)
static void __devinit pismo_add_one(struct pismo_data *pismo, int i,
const struct pismo_cs_block *cs, phys_addr_t base)
static int __devexit pismo_remove(struct i2c_client *client)
static int __devinit pismo_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static const struct i2c_device_id pismo_id[] = ;
MODULE_DEVICE_TABLE(i2c, pismo_id);
static struct i2c_driver pismo_driver = ;
static int __init pismo_init(void)
module_init(pismo_init);
static void __exit pismo_exit(void)
module_exit(pismo_exit);
MODULE_AUTHOR("Russell King <linux@arm.linux.org.uk>");
MODULE_DESCRIPTION("PISMO memory driver");
MODULE_LICENSE("GPL");
