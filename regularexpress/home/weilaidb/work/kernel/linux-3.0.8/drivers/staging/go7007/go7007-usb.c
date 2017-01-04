static unsigned int assume_endura;
module_param(assume_endura, int, 0644);
MODULE_PARM_DESC(assume_endura, "when probing fails, "
"hardware is a Pelco Endura");
#define	HPI_STATUS_ADDR	0xFFF4
#define	INT_PARAM_ADDR	0xFFF6
#define	INT_INDEX_ADDR	0xFFF8
#define GO7007_USB_EZUSB		(1<<0)
#define GO7007_USB_EZUSB_I2C		(1<<1)
struct go7007_usb_board ;
struct go7007_usb ;
static struct go7007_usb_board board_matrix_ii = ;
static struct go7007_usb_board board_matrix_reload = ;
static struct go7007_usb_board board_star_trek = ;
static struct go7007_usb_board board_px_tv402u = ;
static struct go7007_usb_board board_xmen = ;
static struct go7007_usb_board board_matrix_revolution = ;
static struct go7007_usb_board board_lifeview_lr192 = ;
static struct go7007_usb_board board_endura = ;
static struct go7007_usb_board board_adlink_mpg24 = ;
static struct go7007_usb_board board_sensoray_2250 = ;
MODULE_FIRMWARE("go7007tv.bin");
static const struct usb_device_id go7007_usb_id_table[] = ;
MODULE_DEVICE_TABLE(usb, go7007_usb_id_table);
static int go7007_usb_vendor_request(struct go7007 *go, int request,
int value, int index, void *transfer_buffer, int length, int in)
static int go7007_usb_interface_reset(struct go7007 *go)
static int go7007_usb_ezusb_write_interrupt(struct go7007 *go,
int addr, int data)
static int go7007_usb_onboard_write_interrupt(struct go7007 *go,
int addr, int data)
static void go7007_usb_readinterrupt_complete(struct urb *urb)
static int go7007_usb_read_interrupt(struct go7007 *go)
static void go7007_usb_read_video_pipe_complete(struct urb *urb)
static void go7007_usb_read_audio_pipe_complete(struct urb *urb)
static int go7007_usb_stream_start(struct go7007 *go)
static int go7007_usb_stream_stop(struct go7007 *go)
static int go7007_usb_send_firmware(struct go7007 *go, u8 *data, int len)
static struct go7007_hpi_ops go7007_usb_ezusb_hpi_ops = ;
static struct go7007_hpi_ops go7007_usb_onboard_hpi_ops = ;
static int go7007_usb_i2c_master_xfer(struct i2c_adapter *adapter,
struct i2c_msg msgs[], int num)
static u32 go7007_usb_functionality(struct i2c_adapter *adapter)
static struct i2c_algorithm go7007_usb_algo = ;
static struct i2c_adapter go7007_usb_adap_templ = ;
static int go7007_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void go7007_usb_disconnect(struct usb_interface *intf)
static struct usb_driver go7007_usb_driver = ;
static int __init go7007_usb_init(void)
static void __exit go7007_usb_cleanup(void)
module_init(go7007_usb_init);
module_exit(go7007_usb_cleanup);
MODULE_LICENSE("GPL v2");
