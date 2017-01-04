#define AB3550_NAME_STRING "ab3550"
#define AB3550_ID_FORMAT_STRING "AB3550 %s"
#define AB3550_NUM_BANKS 2
#define AB3550_NUM_EVENT_REG 5
#define AB3550_CID_REG           0x20
#define AB3550_EVENT_BANK        0
#define AB3550_EVENT_REG         0x22
#define AB3550_PERM_RD (0x01)
#define AB3550_PERM_WR (0x02)
#define AB3550_PERM_RO (AB3550_PERM_RD)
#define AB3550_PERM_RW (AB3550_PERM_RD | AB3550_PERM_WR)
struct ab3550 ;
struct ab3550_reg_range ;
struct ab3550_reg_ranges ;
#define NO_RANGE
static struct
ab3550_reg_ranges ab3550_reg_ranges[AB3550_NUM_DEVICES][AB3550_NUM_BANKS] = ;
static struct mfd_cell ab3550_devs[AB3550_NUM_DEVICES] = ;
static int ab3550_i2c_master_send(struct ab3550 *ab, u8 bank, u8 *data,
u8 count)
static int ab3550_i2c_master_recv(struct ab3550 *ab, u8 bank, u8 *data,
u8 count)
static int get_register_interruptible(struct ab3550 *ab, u8 bank, u8 reg,
u8 *value)
static int get_register_page_interruptible(struct ab3550 *ab, u8 bank,
u8 first_reg, u8 *regvals, u8 numregs)
static int mask_and_set_register_interruptible(struct ab3550 *ab, u8 bank,
u8 reg, u8 bitmask, u8 bitvalues)
static bool page_write_allowed(const struct ab3550_reg_ranges *ranges,
u8 first_reg, u8 last_reg)
static bool reg_write_allowed(const struct ab3550_reg_ranges *ranges, u8 reg)
static bool page_read_allowed(const struct ab3550_reg_ranges *ranges,
u8 first_reg, u8 last_reg)
static bool reg_read_allowed(const struct ab3550_reg_ranges *ranges, u8 reg)
static int ab3550_get_chip_id(struct device *dev)
static int ab3550_mask_and_set_register_interruptible(struct device *dev,
u8 bank, u8 reg, u8 bitmask, u8 bitvalues)
static int ab3550_set_register_interruptible(struct device *dev, u8 bank,
u8 reg, u8 value)
static int ab3550_get_register_interruptible(struct device *dev, u8 bank,
u8 reg, u8 *value)
static int ab3550_get_register_page_interruptible(struct device *dev, u8 bank,
u8 first_reg, u8 *regvals, u8 numregs)
static int ab3550_event_registers_startup_state_get(struct device *dev,
u8 *event)
static int ab3550_startup_irq_enabled(struct device *dev, unsigned int irq)
static struct abx500_ops ab3550_ops = ;
static irqreturn_t ab3550_irq_handler(int irq, void *data)
static struct ab3550_reg_ranges debug_ranges[AB3550_NUM_BANKS] = ;
static int ab3550_registers_print(struct seq_file *s, void *p)
static int ab3550_registers_open(struct inode *inode, struct file *file)
static const struct file_operations ab3550_registers_fops = ;
static int ab3550_bank_print(struct seq_file *s, void *p)
static int ab3550_bank_open(struct inode *inode, struct file *file)
static ssize_t ab3550_bank_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static int ab3550_address_print(struct seq_file *s, void *p)
static int ab3550_address_open(struct inode *inode, struct file *file)
static ssize_t ab3550_address_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static int ab3550_val_print(struct seq_file *s, void *p)
static int ab3550_val_open(struct inode *inode, struct file *file)
static ssize_t ab3550_val_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations ab3550_bank_fops = ;
static const struct file_operations ab3550_address_fops = ;
static const struct file_operations ab3550_val_fops = ;
static struct dentry *ab3550_dir;
static struct dentry *ab3550_reg_file;
static struct dentry *ab3550_bank_file;
static struct dentry *ab3550_address_file;
static struct dentry *ab3550_val_file;
static inline void ab3550_setup_debugfs(struct ab3550 *ab)
static inline void ab3550_remove_debugfs(void)
static inline void ab3550_setup_debugfs(struct ab3550 *ab)
static inline void ab3550_remove_debugfs(void)
static int __init ab3550_setup(struct ab3550 *ab)
static void ab3550_mask_work(struct work_struct *work)
static void ab3550_mask(struct irq_data *data)
static void ab3550_unmask(struct irq_data *data)
static void noop(struct irq_data *data)
static struct irq_chip ab3550_irq_chip = ;
struct ab_family_id ;
static const struct ab_family_id ids[] __initdata = ;
static int __init ab3550_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __exit ab3550_remove(struct i2c_client *client)
static const struct i2c_device_id ab3550_id[] = ;
MODULE_DEVICE_TABLE(i2c, ab3550_id);
static struct i2c_driver ab3550_driver = ;
static int __init ab3550_i2c_init(void)
static void __exit ab3550_i2c_exit(void)
subsys_initcall(ab3550_i2c_init);
module_exit(ab3550_i2c_exit);
MODULE_AUTHOR("Mattias Wallin <mattias.wallin@stericsson.com>");
MODULE_DESCRIPTION("AB3550 core driver");
MODULE_LICENSE("GPL");
