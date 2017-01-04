enum s3c24xx_i2c_state ;
enum s3c24xx_i2c_type ;
struct s3c24xx_i2c ;
static inline int s3c24xx_i2c_is2440(struct s3c24xx_i2c *i2c)
static inline void s3c24xx_i2c_master_complete(struct s3c24xx_i2c *i2c, int ret)
static inline void s3c24xx_i2c_disable_ack(struct s3c24xx_i2c *i2c)
static inline void s3c24xx_i2c_enable_ack(struct s3c24xx_i2c *i2c)
static inline void s3c24xx_i2c_disable_irq(struct s3c24xx_i2c *i2c)
static inline void s3c24xx_i2c_enable_irq(struct s3c24xx_i2c *i2c)
static void s3c24xx_i2c_message_start(struct s3c24xx_i2c *i2c,
struct i2c_msg *msg)
static inline void s3c24xx_i2c_stop(struct s3c24xx_i2c *i2c, int ret)
static inline int is_lastmsg(struct s3c24xx_i2c *i2c)
static inline int is_msglast(struct s3c24xx_i2c *i2c)
static inline int is_msgend(struct s3c24xx_i2c *i2c)
static int i2c_s3c_irq_nextbyte(struct s3c24xx_i2c *i2c, unsigned long iicstat)
static irqreturn_t s3c24xx_i2c_irq(int irqno, void *dev_id)
static int s3c24xx_i2c_set_master(struct s3c24xx_i2c *i2c)
static int s3c24xx_i2c_doxfer(struct s3c24xx_i2c *i2c,
struct i2c_msg *msgs, int num)
static int s3c24xx_i2c_xfer(struct i2c_adapter *adap,
struct i2c_msg *msgs, int num)
static u32 s3c24xx_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm s3c24xx_i2c_algorithm = ;
static int s3c24xx_i2c_calcdivisor(unsigned long clkin, unsigned int wanted,
unsigned int *div1, unsigned int *divs)
static int s3c24xx_i2c_clockrate(struct s3c24xx_i2c *i2c, unsigned int *got)
#define freq_to_i2c(_n) container_of(_n, struct s3c24xx_i2c, freq_transition)
static int s3c24xx_i2c_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int s3c24xx_i2c_register_cpufreq(struct s3c24xx_i2c *i2c)
static inline void s3c24xx_i2c_deregister_cpufreq(struct s3c24xx_i2c *i2c)
static inline int s3c24xx_i2c_register_cpufreq(struct s3c24xx_i2c *i2c)
static inline void s3c24xx_i2c_deregister_cpufreq(struct s3c24xx_i2c *i2c)
static int s3c24xx_i2c_init(struct s3c24xx_i2c *i2c)
static int s3c24xx_i2c_probe(struct platform_device *pdev)
static int s3c24xx_i2c_remove(struct platform_device *pdev)
static int s3c24xx_i2c_suspend_noirq(struct device *dev)
static int s3c24xx_i2c_resume(struct device *dev)
static const struct dev_pm_ops s3c24xx_i2c_dev_pm_ops = ;
#define S3C24XX_DEV_PM_OPS (&s3c24xx_i2c_dev_pm_ops)
#define S3C24XX_DEV_PM_OPS NULL
static struct platform_device_id s3c24xx_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3c24xx_driver_ids);
static struct platform_driver s3c24xx_i2c_driver = ;
static int __init i2c_adap_s3c_init(void)
subsys_initcall(i2c_adap_s3c_init);
static void __exit i2c_adap_s3c_exit(void)
module_exit(i2c_adap_s3c_exit);
MODULE_DESCRIPTION("S3C24XX I2C Bus driver");
MODULE_AUTHOR("Ben Dooks, <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
