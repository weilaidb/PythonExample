int force_sensor;
static int dump_bridge;
int dump_sensor;
static const struct usb_device_id m5602_table[] = ;
MODULE_DEVICE_TABLE(usb, m5602_table);
int m5602_read_bridge(struct sd *sd, const u8 address, u8 *i2c_data)
int m5602_write_bridge(struct sd *sd, const u8 address, const u8 i2c_data)
static int m5602_wait_for_i2c(struct sd *sd)
int m5602_read_sensor(struct sd *sd, const u8 address,
u8 *i2c_data, const u8 len)
int m5602_write_sensor(struct sd *sd, const u8 address,
u8 *i2c_data, const u8 len)
static void m5602_dump_bridge(struct sd *sd)
static int m5602_probe_sensor(struct sd *sd)
static int m5602_configure(struct gspca_dev *gspca_dev,
const struct usb_device_id *id);
static int m5602_init(struct gspca_dev *gspca_dev)
static int m5602_start_transfer(struct gspca_dev *gspca_dev)
static void m5602_urb_complete(struct gspca_dev *gspca_dev,
u8 *data, int len)
static void m5602_stop_transfer(struct gspca_dev *gspca_dev)
static struct sd_desc sd_desc = ;
static int m5602_configure(struct gspca_dev *gspca_dev,
const struct usb_device_id *id)
static int m5602_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void m5602_disconnect(struct usb_interface *intf)
static struct usb_driver sd_driver = ;
static int __init mod_m5602_init(void)
static void __exit mod_m5602_exit(void)
module_init(mod_m5602_init);
module_exit(mod_m5602_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(force_sensor, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(force_sensor,
"forces detection of a sensor, "
"1 = OV9650, 2 = S5K83A, 3 = S5K4AA, "
"4 = MT9M111, 5 = PO1030, 6 = OV7660");
module_param(dump_bridge, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(dump_bridge, "Dumps all usb bridge registers at startup");
module_param(dump_sensor, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(dump_sensor, "Dumps all usb sensor registers "
"at startup providing a sensor is found");
