static void riva_gpio_setscl(void* data, int state)
static void riva_gpio_setsda(void* data, int state)
static int riva_gpio_getscl(void* data)
static int riva_gpio_getsda(void* data)
static int __devinit riva_setup_i2c_bus(struct riva_i2c_chan *chan,
const char *name,
unsigned int i2c_class)
void __devinit riva_create_i2c_busses(struct riva_par *par)
void riva_delete_i2c_busses(struct riva_par *par)
int __devinit riva_probe_i2c_connector(struct riva_par *par, int conn, u8 **out_edid)
