#define DRIVER_NAME	"envctrl"
#define PFX		DRIVER_NAME ": "
#define ENVCTRL_MINOR	162
#define PCF8584_ADDRESS	0x55
#define CONTROL_PIN	0x80
#define CONTROL_ES0	0x40
#define CONTROL_ES1	0x20
#define CONTROL_ES2	0x10
#define CONTROL_ENI	0x08
#define CONTROL_STA	0x04
#define CONTROL_STO	0x02
#define CONTROL_ACK	0x01
#define STATUS_PIN	0x80
#define STATUS_STS	0x20
#define STATUS_BER	0x10
#define STATUS_LRB	0x08
#define STATUS_AD0	0x08
#define STATUS_AAB	0x04
#define STATUS_LAB	0x02
#define STATUS_BB	0x01
#define BUS_CLK_90	0x00
#define BUS_CLK_45	0x01
#define BUS_CLK_11	0x02
#define BUS_CLK_1_5	0x03
#define CLK_3		0x00
#define CLK_4_43	0x10
#define CLK_6		0x14
#define CLK_8		0x18
#define CLK_12		0x1c
#define OBD_SEND_START	0xc5
#define OBD_SEND_STOP 	0xc3
#define PCF8584_MAX_CHANNELS            8
#define PCF8584_GLOBALADDR_TYPE			6
#define PCF8584_FANSTAT_TYPE            3
#define PCF8584_VOLTAGE_TYPE            2
#define PCF8584_TEMP_TYPE	        	1
#define ENVCTRL_NOMON				0
#define ENVCTRL_CPUTEMP_MON			1
#define ENVCTRL_CPUVOLTAGE_MON	  	2
#define ENVCTRL_FANSTAT_MON  		3
#define ENVCTRL_ETHERTEMP_MON		4
#define ENVCTRL_VOLTAGESTAT_MON	  	5
#define ENVCTRL_MTHRBDTEMP_MON		6
#define ENVCTRL_SCSITEMP_MON		7
#define ENVCTRL_GLOBALADDR_MON		8
#define I2C_ADC				0
#define I2C_GPIO			1
#define ENVCTRL_TRANSLATE_NO		0
#define ENVCTRL_TRANSLATE_PARTIAL	1
#define ENVCTRL_TRANSLATE_COMBINED	2
#define ENVCTRL_TRANSLATE_FULL		3
#define ENVCTRL_TRANSLATE_SCALE		4
#define ENVCTRL_MAX_CPU			4
#define CHANNEL_DESC_SZ			256
#define ENVCTRL_GLOBALADDR_ADDR_MASK 	0x1F
#define ENVCTRL_GLOBALADDR_PSTAT_MASK	0x60
#define ENVCTRL_CPCI_IGNORED_NODE		0x70
#define PCF8584_DATA	0x00
#define PCF8584_CSR	0x01
struct pcf8584_channel ;
struct pcf8584_tblprop ;
struct i2c_child_t ;
static void __iomem *i2c;
static struct i2c_child_t i2c_childlist[ENVCTRL_MAX_CPU*2];
static unsigned char chnls_mask[] = ;
static unsigned int warning_temperature = 0;
static unsigned int shutdown_temperature = 0;
static char read_cpu;
static struct i2c_child_t *envctrl_get_i2c_child(unsigned char);
static void envtrl_i2c_test_pin(void)
static void envctrl_i2c_test_bb(void)
static int envctrl_i2c_read_addr(unsigned char addr)
static void envctrl_i2c_write_addr(unsigned char addr)
static unsigned char envctrl_i2c_read_data(void)
static void envctrl_i2c_write_data(unsigned char port)
static void envctrl_i2c_stop(void)
static unsigned char envctrl_i2c_read_8591(unsigned char addr, unsigned char port)
static unsigned char envctrl_i2c_read_8574(unsigned char addr)
static int envctrl_i2c_data_translate(unsigned char data, int translate_type,
int scale, char *tbl, char *bufdata)
static int envctrl_read_cpu_info(int cpu, struct i2c_child_t *pchild,
char mon_type, unsigned char *bufdata)
static int envctrl_read_noncpu_info(struct i2c_child_t *pchild,
char mon_type, unsigned char *bufdata)
static int envctrl_i2c_fan_status(struct i2c_child_t *pchild,
unsigned char data,
char *bufdata)
static int envctrl_i2c_globaladdr(struct i2c_child_t *pchild,
unsigned char data,
char *bufdata)
static unsigned char envctrl_i2c_voltage_status(struct i2c_child_t *pchild,
unsigned char data,
char *bufdata)
static ssize_t
envctrl_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static long
envctrl_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
envctrl_open(struct inode *inode, struct file *file)
static int
envctrl_release(struct inode *inode, struct file *file)
static const struct file_operations envctrl_fops = ;
static struct miscdevice envctrl_dev = ;
static void envctrl_set_mon(struct i2c_child_t *pchild,
const char *chnl_desc,
int chnl_no)
static void envctrl_init_adc(struct i2c_child_t *pchild, struct device_node *dp)
static void envctrl_init_fanstat(struct i2c_child_t *pchild)
static void envctrl_init_globaladdr(struct i2c_child_t *pchild)
static void envctrl_init_voltage_status(struct i2c_child_t *pchild)
static void envctrl_init_i2c_child(struct device_node *dp,
struct i2c_child_t *pchild)
static struct i2c_child_t *envctrl_get_i2c_child(unsigned char mon_type)
static void envctrl_do_shutdown(void)
static struct task_struct *kenvctrld_task;
static int kenvctrld(void *__unused)
static int __devinit envctrl_probe(struct platform_device *op)
static int __devexit envctrl_remove(struct platform_device *op)
static const struct of_device_id envctrl_match[] = ;
MODULE_DEVICE_TABLE(of, envctrl_match);
static struct platform_driver envctrl_driver = ;
static int __init envctrl_init(void)
static void __exit envctrl_exit(void)
module_init(envctrl_init);
module_exit(envctrl_exit);
MODULE_LICENSE("GPL");
