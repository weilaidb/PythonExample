#define AB3100_EVENTA1		0x21
#define AB3100_EVENTA2		0x22
#define AB3100_EVENTA3		0x23
#define AB3100_DIS		0x00
#define AB3100_D0C		0x01
#define AB3100_D1C		0x02
#define AB3100_D2C		0x03
#define AB3100_D3C		0x04
#define AB3100_CID		0x20
#define AB3100_IMRA1		0x24
#define AB3100_IMRA2		0x25
#define AB3100_IMRA3		0x26
#define AB3100_IMRB1		0x2B
#define AB3100_IMRB2		0x2C
#define AB3100_IMRB3		0x2D
#define AB3100_MCA		0x2E
#define AB3100_MCB		0x2F
#define AB3100_SUP		0x50
static int ab3100_get_chip_id(struct device *dev)
static int ab3100_set_register_interruptible(struct ab3100 *ab3100,
u8 reg, u8 regval)
static int set_register_interruptible(struct device *dev,
u8 bank, u8 reg, u8 value)
static int ab3100_set_test_register_interruptible(struct ab3100 *ab3100,
u8 reg, u8 regval)
static int ab3100_get_register_interruptible(struct ab3100 *ab3100,
u8 reg, u8 *regval)
static int get_register_interruptible(struct device *dev, u8 bank, u8 reg,
u8 *value)
static int ab3100_get_register_page_interruptible(struct ab3100 *ab3100,
u8 first_reg, u8 *regvals, u8 numregs)
static int get_register_page_interruptible(struct device *dev, u8 bank,
u8 first_reg, u8 *regvals, u8 numregs)
static int ab3100_mask_and_set_register_interruptible(struct ab3100 *ab3100,
u8 reg, u8 andmask, u8 ormask)
static int mask_and_set_register_interruptible(struct device *dev, u8 bank,
u8 reg, u8 bitmask, u8 bitvalues)
int ab3100_event_register(struct ab3100 *ab3100,
struct notifier_block *nb)
EXPORT_SYMBOL(ab3100_event_register);
int ab3100_event_unregister(struct ab3100 *ab3100,
struct notifier_block *nb)
EXPORT_SYMBOL(ab3100_event_unregister);
static int ab3100_event_registers_startup_state_get(struct device *dev,
u8 *event)
static struct abx500_ops ab3100_ops = ;
static irqreturn_t ab3100_irq_handler(int irq, void *data)
static int ab3100_registers_print(struct seq_file *s, void *p)
static int ab3100_registers_open(struct inode *inode, struct file *file)
static const struct file_operations ab3100_registers_fops = ;
struct ab3100_get_set_reg_priv ;
static int ab3100_get_set_reg_open_file(struct inode *inode, struct file *file)
static ssize_t ab3100_get_set_reg(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations ab3100_get_set_reg_fops = ;
static struct dentry *ab3100_dir;
static struct dentry *ab3100_reg_file;
static struct ab3100_get_set_reg_priv ab3100_get_priv;
static struct dentry *ab3100_get_reg_file;
static struct ab3100_get_set_reg_priv ab3100_set_priv;
static struct dentry *ab3100_set_reg_file;
static void ab3100_setup_debugfs(struct ab3100 *ab3100)
static inline void ab3100_remove_debugfs(void)
static inline void ab3100_setup_debugfs(struct ab3100 *ab3100)
static inline void ab3100_remove_debugfs(void)
struct ab3100_init_setting ;
static const struct ab3100_init_setting __devinitconst
ab3100_init_settings[] = ;
static int __devinit ab3100_setup(struct ab3100 *ab3100)
static struct mfd_cell ab3100_devs[] = ;
struct ab_family_id ;
static const struct ab_family_id ids[] __devinitdata = ;
static int __devinit ab3100_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ab3100_remove(struct i2c_client *client)
static const struct i2c_device_id ab3100_id[] = ;
MODULE_DEVICE_TABLE(i2c, ab3100_id);
static struct i2c_driver ab3100_driver = ;
static int __init ab3100_i2c_init(void)
static void __exit ab3100_i2c_exit(void)
subsys_initcall(ab3100_i2c_init);
module_exit(ab3100_i2c_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("AB3100 core driver");
MODULE_LICENSE("GPL");
