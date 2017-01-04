static void nvidia_gpio_setscl(void *data, int state)
static void nvidia_gpio_setsda(void *data, int state)
static int nvidia_gpio_getscl(void *data)
static int nvidia_gpio_getsda(void *data)
static int nvidia_setup_i2c_bus(struct nvidia_i2c_chan *chan, const char *name,
unsigned int i2c_class)
void nvidia_create_i2c_busses(struct nvidia_par *par)
void nvidia_delete_i2c_busses(struct nvidia_par *par)
int nvidia_probe_i2c_connector(struct fb_info *info, int conn, u8 **out_edid)
