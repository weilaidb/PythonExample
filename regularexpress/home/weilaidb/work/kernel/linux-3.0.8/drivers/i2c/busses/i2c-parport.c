struct i2c_par ;
static LIST_HEAD(adapter_list);
static DEFINE_MUTEX(adapter_list_lock);
static void port_write_data(struct parport *p, unsigned char d)
static void port_write_control(struct parport *p, unsigned char d)
static unsigned char port_read_data(struct parport *p)
static unsigned char port_read_status(struct parport *p)
static unsigned char port_read_control(struct parport *p)
static void (* const port_write[])(struct parport *, unsigned char) = ;
static unsigned char (* const port_read[])(struct parport *) = ;
static inline void line_set(struct parport *data, int state,
const struct lineop *op)
static inline int line_get(struct parport *data,
const struct lineop *op)
static void parport_setscl(void *data, int state)
static void parport_setsda(void *data, int state)
static int parport_getscl(void *data)
static int parport_getsda(void *data)
static const struct i2c_algo_bit_data parport_algo_data = ;
void i2c_parport_irq(void *data)
static void i2c_parport_attach(struct parport *port)
static void i2c_parport_detach(struct parport *port)
static struct parport_driver i2c_parport_driver = ;
static int __init i2c_parport_init(void)
static void __exit i2c_parport_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("I2C bus over parallel port");
MODULE_LICENSE("GPL");
module_init(i2c_parport_init);
module_exit(i2c_parport_exit);
