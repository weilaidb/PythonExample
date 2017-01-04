static int bttv_sub_bus_match(struct device *dev, struct device_driver *drv)
static int bttv_sub_probe(struct device *dev)
static int bttv_sub_remove(struct device *dev)
struct bus_type bttv_sub_bus_type = ;
static void release_sub_device(struct device *dev)
int bttv_sub_add_device(struct bttv_core *core, char *name)
int bttv_sub_del_devices(struct bttv_core *core)
int bttv_sub_register(struct bttv_sub_driver *sub, char *wanted)
EXPORT_SYMBOL(bttv_sub_register);
int bttv_sub_unregister(struct bttv_sub_driver *sub)
EXPORT_SYMBOL(bttv_sub_unregister);
void bttv_gpio_inout(struct bttv_core *core, u32 mask, u32 outbits)
u32 bttv_gpio_read(struct bttv_core *core)
void bttv_gpio_write(struct bttv_core *core, u32 value)
void bttv_gpio_bits(struct bttv_core *core, u32 mask, u32 bits)
