DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define _AU0828_BULKPIPE 0x83
#define _BULKPIPESIZE 0xe522
static u8 hauppauge_hvr950q_led_states[] = ;
static struct au8522_led_config hauppauge_hvr950q_led_cfg = ;
static struct au8522_config hauppauge_hvr950q_config = ;
static struct au8522_config fusionhdtv7usb_config = ;
static struct au8522_config hauppauge_woodbury_config = ;
static struct xc5000_config hauppauge_hvr950q_tunerconfig = ;
static struct mxl5007t_config mxl5007t_hvr950q_config = ;
static struct tda18271_config hauppauge_woodbury_tunerconfig = ;
static void urb_completion(struct urb *purb)
static int stop_urb_transfer(struct au0828_dev *dev)
static int start_urb_transfer(struct au0828_dev *dev)
static int au0828_dvb_start_feed(struct dvb_demux_feed *feed)
static int au0828_dvb_stop_feed(struct dvb_demux_feed *feed)
static int dvb_register(struct au0828_dev *dev)
void au0828_dvb_unregister(struct au0828_dev *dev)
int au0828_dvb_register(struct au0828_dev *dev)
