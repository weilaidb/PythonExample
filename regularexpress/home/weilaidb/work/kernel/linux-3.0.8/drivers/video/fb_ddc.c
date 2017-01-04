#define DDC_ADDR	0x50
static unsigned char *fb_do_probe_ddc_edid(struct i2c_adapter *adapter)
unsigned char *fb_ddc_read(struct i2c_adapter *adapter)
EXPORT_SYMBOL_GPL(fb_ddc_read);
MODULE_AUTHOR("Dennis Munsie <dmunsie@cecropia.com>");
MODULE_DESCRIPTION("DDC/EDID reading support");
MODULE_LICENSE("GPL");
