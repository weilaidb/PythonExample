MODULE_AUTHOR("Erik Andrén");
MODULE_DESCRIPTION("STV06XX USB Camera Driver");
MODULE_LICENSE("GPL");
static int dump_bridge;
static int dump_sensor;
int stv06xx_write_bridge(struct sd *sd, u16 address, u16 i2c_data)
int stv06xx_read_bridge(struct sd *sd, u16 address, u8 *i2c_data)
int stv06xx_write_sensor(struct sd *sd, u8 address, u16 value)
static int stv06xx_write_sensor_finish(struct sd *sd)
int stv06xx_write_sensor_bytes(struct sd *sd, const u8 *data, u8 len)
int stv06xx_write_sensor_words(struct sd *sd, const u16 *data, u8 len)
int stv06xx_read_sensor(struct sd *sd, const u8 address, u16 *value)
static void stv06xx_dump_bridge(struct sd *sd)
static int stv06xx_init(struct gspca_dev *gspca_dev)
static int stv06xx_start(struct gspca_dev *gspca_dev)
static int stv06xx_isoc_init(struct gspca_dev *gspca_dev)
static int stv06xx_isoc_nego(struct gspca_dev *gspca_dev)
static void stv06xx_stopN(struct gspca_dev *gspca_dev)
static void stv06xx_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
#if defined(CONFIG_INPUT) || defined(CONFIG_INPUT_MODULE)
static int sd_int_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
static int stv06xx_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id);
static const struct sd_desc sd_desc = ;
static int stv06xx_config(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static const struct usb_device_id device_table[] = ;
MODULE_DEVICE_TABLE(usb, device_table);
static int sd_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void sd_disconnect(struct usb_interface *intf)
static struct usb_driver sd_driver = ;
static int __init sd_mod_init(void)
static void __exit sd_mod_exit(void)
module_init(sd_mod_init);
module_exit(sd_mod_exit);
module_param(dump_bridge, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(dump_bridge, "Dumps all usb bridge registers at startup");
module_param(dump_sensor, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(dump_sensor, "Dumps all sensor registers at startup");
