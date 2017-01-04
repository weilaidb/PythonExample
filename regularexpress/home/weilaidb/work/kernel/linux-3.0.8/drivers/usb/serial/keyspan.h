#define __LINUX_USB_SERIAL_KEYSPAN_H
static int  keyspan_open		(struct tty_struct *tty,
struct usb_serial_port *port);
static void keyspan_close		(struct usb_serial_port *port);
static void keyspan_dtr_rts		(struct usb_serial_port *port, int on);
static int  keyspan_startup		(struct usb_serial *serial);
static void keyspan_disconnect		(struct usb_serial *serial);
static void keyspan_release		(struct usb_serial *serial);
static int  keyspan_write_room		(struct tty_struct *tty);
static int  keyspan_write		(struct tty_struct *tty,
struct usb_serial_port *port,
const unsigned char *buf,
int count);
static void keyspan_send_setup		(struct usb_serial_port *port,
int reset_port);
static void keyspan_set_termios		(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old);
static void keyspan_break_ctl		(struct tty_struct *tty,
int break_state);
static int  keyspan_tiocmget		(struct tty_struct *tty);
static int  keyspan_tiocmset		(struct tty_struct *tty,
unsigned int set,
unsigned int clear);
static int  keyspan_fake_startup	(struct usb_serial *serial);
static int  keyspan_usa19_calc_baud	(u32 baud_rate, u32 baudclk,
u8 *rate_hi, u8 *rate_low,
u8 *prescaler, int portnum);
static int  keyspan_usa19w_calc_baud	(u32 baud_rate, u32 baudclk,
u8 *rate_hi, u8 *rate_low,
u8 *prescaler, int portnum);
static int  keyspan_usa28_calc_baud	(u32 baud_rate, u32 baudclk,
u8 *rate_hi, u8 *rate_low,
u8 *prescaler, int portnum);
static int  keyspan_usa19hs_calc_baud	(u32 baud_rate, u32 baudclk,
u8 *rate_hi, u8 *rate_low,
u8 *prescaler, int portnum);
static int  keyspan_usa28_send_setup	(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port);
static int  keyspan_usa26_send_setup	(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port);
static int  keyspan_usa49_send_setup	(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port);
static int  keyspan_usa90_send_setup	(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port);
static int  keyspan_usa67_send_setup	(struct usb_serial *serial,
struct usb_serial_port *port,
int reset_port);
#define	KEYSPAN_INVALID_BAUD_RATE		(-1)
#define	KEYSPAN_BAUD_RATE_OK			(0)
#define	KEYSPAN_USA18X_BAUDCLK			(12000000L)
#define	KEYSPAN_USA19_BAUDCLK			(12000000L)
#define	KEYSPAN_USA19W_BAUDCLK			(24000000L)
#define	KEYSPAN_USA19HS_BAUDCLK			(14769231L)
#define	KEYSPAN_USA28_BAUDCLK			(1843200L)
#define	KEYSPAN_USA28X_BAUDCLK			(12000000L)
#define	KEYSPAN_USA49W_BAUDCLK			(48000000L)
#define		KEYSPAN_MAX_NUM_PORTS		(4)
#define		KEYSPAN_MAX_FLIPS		(2)
#define KEYSPAN_VENDOR_ID			(0x06cd)
#define	keyspan_usa18x_pre_product_id		0x0105
#define	keyspan_usa19_pre_product_id		0x0103
#define	keyspan_usa19qi_pre_product_id		0x010b
#define	keyspan_mpr_pre_product_id		0x011b
#define	keyspan_usa19qw_pre_product_id		0x0118
#define	keyspan_usa19w_pre_product_id		0x0106
#define	keyspan_usa28_pre_product_id		0x0101
#define	keyspan_usa28x_pre_product_id		0x0102
#define	keyspan_usa28xa_pre_product_id		0x0114
#define	keyspan_usa28xb_pre_product_id		0x0113
#define	keyspan_usa49w_pre_product_id		0x0109
#define	keyspan_usa49wlc_pre_product_id		0x011a
#define	keyspan_usa18x_product_id		0x0112
#define	keyspan_usa19_product_id		0x0107
#define	keyspan_usa19qi_product_id		0x010c
#define	keyspan_usa19hs_product_id		0x0121
#define	keyspan_mpr_product_id			0x011c
#define	keyspan_usa19qw_product_id		0x0119
#define	keyspan_usa19w_product_id		0x0108
#define	keyspan_usa28_product_id		0x010f
#define	keyspan_usa28x_product_id		0x0110
#define	keyspan_usa28xa_product_id		0x0115
#define	keyspan_usa28xb_product_id		0x0110
#define	keyspan_usa28xg_product_id		0x0135
#define	keyspan_usa49w_product_id		0x010a
#define	keyspan_usa49wlc_product_id		0x012a
#define	keyspan_usa49wg_product_id		0x0131
struct keyspan_device_details ;
static const struct keyspan_device_details usa18x_device_details = ;
static const struct keyspan_device_details usa19_device_details = ;
static const struct keyspan_device_details usa19qi_device_details = ;
static const struct keyspan_device_details mpr_device_details = ;
static const struct keyspan_device_details usa19qw_device_details = ;
static const struct keyspan_device_details usa19w_device_details = ;
static const struct keyspan_device_details usa19hs_device_details = ;
static const struct keyspan_device_details usa28_device_details = ;
static const struct keyspan_device_details usa28x_device_details = ;
static const struct keyspan_device_details usa28xa_device_details = ;
static const struct keyspan_device_details usa28xg_device_details = ;
static const struct keyspan_device_details usa49w_device_details = ;
static const struct keyspan_device_details usa49wlc_device_details = ;
static const struct keyspan_device_details usa49wg_device_details = ;
static const struct keyspan_device_details *keyspan_devices[] = ;
static const struct usb_device_id keyspan_ids_combined[] = ;
MODULE_DEVICE_TABLE(usb, keyspan_ids_combined);
static struct usb_driver keyspan_driver = ;
static const struct usb_device_id keyspan_pre_ids[] = ;
static const struct usb_device_id keyspan_1port_ids[] = ;
static const struct usb_device_id keyspan_2port_ids[] = ;
static const struct usb_device_id keyspan_4port_ids[] = ;
static struct usb_serial_driver keyspan_pre_device = ;
static struct usb_serial_driver keyspan_1port_device = ;
static struct usb_serial_driver keyspan_2port_device = ;
static struct usb_serial_driver keyspan_4port_device = ;
