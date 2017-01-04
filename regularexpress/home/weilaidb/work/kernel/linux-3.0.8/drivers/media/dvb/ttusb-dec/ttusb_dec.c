static int debug;
static int output_pva;
static int enable_rc;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
module_param(output_pva, int, 0444);
MODULE_PARM_DESC(output_pva, "Output PVA from dvr device (default:off)");
module_param(enable_rc, int, 0644);
MODULE_PARM_DESC(enable_rc, "Turn on/off IR remote control(default: off)");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk	if (debug) printk
#define DRIVER_NAME		"TechnoTrend/Hauppauge DEC USB"
#define COMMAND_PIPE		0x03
#define RESULT_PIPE		0x04
#define IN_PIPE			0x08
#define OUT_PIPE		0x07
#define IRQ_PIPE		0x0A
#define COMMAND_PACKET_SIZE	0x3c
#define ARM_PACKET_SIZE		0x1000
#define IRQ_PACKET_SIZE		0x8
#define ISO_BUF_COUNT		0x04
#define FRAMES_PER_ISO_BUF	0x04
#define ISO_FRAME_SIZE		0x0380
#define	MAX_PVA_LENGTH		6144
enum ttusb_dec_model ;
enum ttusb_dec_packet_type ;
enum ttusb_dec_interface ;
struct ttusb_dec ;
struct urb_frame ;
struct filter_info ;
static u16 rc_keys[] = ;
static void ttusb_dec_set_model(struct ttusb_dec *dec,
enum ttusb_dec_model model);
static void ttusb_dec_handle_irq( struct urb *urb)
static u16 crc16(u16 crc, const u8 *buf, size_t len)
static int ttusb_dec_send_command(struct ttusb_dec *dec, const u8 command,
int param_length, const u8 params[],
int *result_length, u8 cmd_result[])
static int ttusb_dec_get_stb_state (struct ttusb_dec *dec, unsigned int *mode,
unsigned int *model, unsigned int *version)
static int ttusb_dec_audio_pes2ts_cb(void *priv, unsigned char *data)
static int ttusb_dec_video_pes2ts_cb(void *priv, unsigned char *data)
static void ttusb_dec_set_pids(struct ttusb_dec *dec)
static void ttusb_dec_process_pva(struct ttusb_dec *dec, u8 *pva, int length)
static void ttusb_dec_process_filter(struct ttusb_dec *dec, u8 *packet,
int length)
static void ttusb_dec_process_packet(struct ttusb_dec *dec)
static void swap_bytes(u8 *b, int length)
static void ttusb_dec_process_urb_frame(struct ttusb_dec *dec, u8 *b,
int length)
static void ttusb_dec_process_urb_frame_list(unsigned long data)
static void ttusb_dec_process_urb(struct urb *urb)
static void ttusb_dec_setup_urbs(struct ttusb_dec *dec)
static void ttusb_dec_stop_iso_xfer(struct ttusb_dec *dec)
static int ttusb_dec_set_interface(struct ttusb_dec *dec,
enum ttusb_dec_interface interface)
static int ttusb_dec_start_iso_xfer(struct ttusb_dec *dec)
static int ttusb_dec_start_ts_feed(struct dvb_demux_feed *dvbdmxfeed)
static int ttusb_dec_start_sec_feed(struct dvb_demux_feed *dvbdmxfeed)
static int ttusb_dec_start_feed(struct dvb_demux_feed *dvbdmxfeed)
static int ttusb_dec_stop_ts_feed(struct dvb_demux_feed *dvbdmxfeed)
static int ttusb_dec_stop_sec_feed(struct dvb_demux_feed *dvbdmxfeed)
static int ttusb_dec_stop_feed(struct dvb_demux_feed *dvbdmxfeed)
static void ttusb_dec_free_iso_urbs(struct ttusb_dec *dec)
static int ttusb_dec_alloc_iso_urbs(struct ttusb_dec *dec)
static void ttusb_dec_init_tasklet(struct ttusb_dec *dec)
static int ttusb_init_rc( struct ttusb_dec *dec)
static void ttusb_dec_init_v_pes(struct ttusb_dec *dec)
static int ttusb_dec_init_usb(struct ttusb_dec *dec)
static int ttusb_dec_boot_dsp(struct ttusb_dec *dec)
static int ttusb_dec_init_stb(struct ttusb_dec *dec)
static int ttusb_dec_init_dvb(struct ttusb_dec *dec)
static void ttusb_dec_exit_dvb(struct ttusb_dec *dec)
static void ttusb_dec_exit_rc(struct ttusb_dec *dec)
static void ttusb_dec_exit_usb(struct ttusb_dec *dec)
static void ttusb_dec_exit_tasklet(struct ttusb_dec *dec)
static void ttusb_dec_init_filters(struct ttusb_dec *dec)
static void ttusb_dec_exit_filters(struct ttusb_dec *dec)
static int fe_send_command(struct dvb_frontend* fe, const u8 command,
int param_length, const u8 params[],
int *result_length, u8 cmd_result[])
static struct ttusbdecfe_config fe_config = ;
static int ttusb_dec_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void ttusb_dec_disconnect(struct usb_interface *intf)
static void ttusb_dec_set_model(struct ttusb_dec *dec,
enum ttusb_dec_model model)
static struct usb_device_id ttusb_dec_table[] = ;
static struct usb_driver ttusb_dec_driver = ;
static int __init ttusb_dec_init(void)
static void __exit ttusb_dec_exit(void)
module_init(ttusb_dec_init);
module_exit(ttusb_dec_exit);
MODULE_AUTHOR("Alex Woods <linux-dvb@giblets.org>");
MODULE_DESCRIPTION(DRIVER_NAME);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, ttusb_dec_table);
