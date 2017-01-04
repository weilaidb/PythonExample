static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk(x...) do  while (0)
#define ISO_BUF_COUNT      4
#define FRAMES_PER_ISO_BUF 4
#define ISO_FRAME_SIZE     912
#define TTUSB_MAXCHANNEL   32
#define TTUSB_MAXFILTER    16
#define TTUSB_REV_2_2	0x22
#define TTUSB_BUDGET_NAME "ttusb_stc_fw"
struct ttusb ;
static int ttusb_cmd(struct ttusb *ttusb,
const u8 * data, int len, int needresult)
static int ttusb_result(struct ttusb *ttusb, u8 * data, int len)
static int ttusb_i2c_msg(struct ttusb *ttusb,
u8 addr, u8 * snd_buf, u8 snd_len, u8 * rcv_buf,
u8 rcv_len)
static int master_xfer(struct i2c_adapter* adapter, struct i2c_msg *msg, int num)
static int ttusb_boot_dsp(struct ttusb *ttusb)
static int ttusb_set_channel(struct ttusb *ttusb, int chan_id, int filter_type,
int pid)
static int ttusb_del_channel(struct ttusb *ttusb, int channel_id)
static int ttusb_set_filter(struct ttusb *ttusb, int filter_id,
int associated_chan, u8 filter[8], u8 mask[8])
static int ttusb_del_filter(struct ttusb *ttusb, int filter_id)
static int ttusb_init_controller(struct ttusb *ttusb)
static int ttusb_send_diseqc(struct dvb_frontend* fe,
const struct dvb_diseqc_master_cmd *cmd)
static int ttusb_update_lnb(struct ttusb *ttusb)
static int ttusb_set_voltage(struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int ttusb_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static void ttusb_handle_ts_data(struct ttusb_channel *channel,
const u8 * data, int len);
static void ttusb_handle_sec_data(struct ttusb_channel *channel,
const u8 * data, int len);
static int numpkt, numts, numstuff, numsec, numinvalid;
static unsigned long lastj;
static void ttusb_process_muxpack(struct ttusb *ttusb, const u8 * muxpack,
int len)
static void ttusb_process_frame(struct ttusb *ttusb, u8 * data, int len)
static void ttusb_iso_irq(struct urb *urb)
static void ttusb_free_iso_urbs(struct ttusb *ttusb)
static int ttusb_alloc_iso_urbs(struct ttusb *ttusb)
static void ttusb_stop_iso_xfer(struct ttusb *ttusb)
static int ttusb_start_iso_xfer(struct ttusb *ttusb)
static void ttusb_handle_ts_data(struct dvb_demux_feed *dvbdmxfeed, const u8 * data,
int len)
static void ttusb_handle_sec_data(struct dvb_demux_feed *dvbdmxfeed, const u8 * data,
int len)
static int ttusb_start_feed(struct dvb_demux_feed *dvbdmxfeed)
static int ttusb_stop_feed(struct dvb_demux_feed *dvbdmxfeed)
static int ttusb_setup_interfaces(struct ttusb *ttusb)
static u32 functionality(struct i2c_adapter *adapter)
static int alps_tdmb7_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct cx22700_config alps_tdmb7_config = ;
static int philips_tdm1316l_tuner_init(struct dvb_frontend* fe)
static int philips_tdm1316l_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static int philips_tdm1316l_request_firmware(struct dvb_frontend* fe, const struct firmware **fw, char* name)
static struct tda1004x_config philips_tdm1316l_config = ;
static u8 alps_bsbe1_inittab[] = ;
static u8 alps_bsru6_inittab[] = ;
static int alps_stv0299_set_symbol_rate(struct dvb_frontend *fe, u32 srate, u32 ratio)
static int philips_tsa5059_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static struct stv0299_config alps_stv0299_config = ;
static int ttusb_novas_grundig_29504_491_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static struct tda8083_config ttusb_novas_grundig_29504_491_config = ;
static int alps_tdbe2_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct ves1820_config alps_tdbe2_config = ;
static u8 read_pwm(struct ttusb* ttusb)
static int dvbc_philips_tdm1316l_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static u8 dvbc_philips_tdm1316l_inittab[] = ;
static struct stv0297_config dvbc_philips_tdm1316l_config = ;
static void frontend_init(struct ttusb* ttusb)
static struct i2c_algorithm ttusb_dec_algo = ;
static int ttusb_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void ttusb_disconnect(struct usb_interface *intf)
static struct usb_device_id ttusb_table[] = ;
MODULE_DEVICE_TABLE(usb, ttusb_table);
static struct usb_driver ttusb_driver = ;
static int __init ttusb_init(void)
static void __exit ttusb_exit(void)
module_init(ttusb_init);
module_exit(ttusb_exit);
MODULE_AUTHOR("Holger Waechtler <holger@convergence.de>");
MODULE_DESCRIPTION("TTUSB DVB Driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("ttusb-budget/dspbootcode.bin");
