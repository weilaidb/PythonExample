static const char *hfcsusb_rev = "Revision: 0.3.3 (socket), 2008-11-05";
static unsigned int debug;
static int poll = DEFAULT_TRANSP_BURST_SZ;
static LIST_HEAD(HFClist);
static DEFINE_RWLOCK(HFClock);
MODULE_AUTHOR("Martin Bachem");
MODULE_LICENSE("GPL");
module_param(debug, uint, S_IRUGO | S_IWUSR);
module_param(poll, int, 0);
static int hfcsusb_cnt;
static void hfcsusb_ph_command(struct hfcsusb *hw, u_char command);
static void release_hw(struct hfcsusb *hw);
static void reset_hfcsusb(struct hfcsusb *hw);
static void setPortMode(struct hfcsusb *hw);
static void hfcsusb_start_endpoint(struct hfcsusb *hw, int channel);
static void hfcsusb_stop_endpoint(struct hfcsusb *hw, int channel);
static int  hfcsusb_setup_bch(struct bchannel *bch, int protocol);
static void deactivate_bchannel(struct bchannel *bch);
static void hfcsusb_ph_info(struct hfcsusb *hw);
static void
ctrl_start_transfer(struct hfcsusb *hw)
static int write_reg(struct hfcsusb *hw, __u8 reg, __u8 val)
static void
ctrl_complete(struct urb *urb)
static void
set_led_bit(struct hfcsusb *hw, signed short led_bits, int set_on)
static void
handle_led(struct hfcsusb *hw, int event)
static int
hfcusb_l2l1B(struct mISDNchannel *ch, struct sk_buff *skb)
static void
hfcsusb_ph_info(struct hfcsusb *hw)
static int
hfcusb_l2l1D(struct mISDNchannel *ch, struct sk_buff *skb)
static int
hfc_l1callback(struct dchannel *dch, u_int cmd)
static int
open_dchannel(struct hfcsusb *hw, struct mISDNchannel *ch,
struct channel_req *rq)
static int
open_bchannel(struct hfcsusb *hw, struct channel_req *rq)
static int
channel_ctrl(struct hfcsusb *hw, struct mISDN_ctrl_req *cq)
static int
hfc_dctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static void
ph_state_te(struct dchannel *dch)
static void
ph_state_nt(struct dchannel *dch)
static void
ph_state(struct dchannel *dch)
static int
hfcsusb_setup_bch(struct bchannel *bch, int protocol)
static void
hfcsusb_ph_command(struct hfcsusb *hw, u_char command)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static void
hfcsusb_rx_frame(struct usb_fifo *fifo, __u8 *data, unsigned int len,
int finish)
static void
fill_isoc_urb(struct urb *urb, struct usb_device *dev, unsigned int pipe,
void *buf, int num_packets, int packet_size, int interval,
usb_complete_t complete, void *context)
static void
rx_iso_complete(struct urb *urb)
static void
rx_int_complete(struct urb *urb)
static void
tx_iso_complete(struct urb *urb)
static int
start_isoc_chain(struct usb_fifo *fifo, int num_packets_per_urb,
usb_complete_t complete, int packet_size)
static void
stop_iso_gracefull(struct usb_fifo *fifo)
static void
stop_int_gracefull(struct usb_fifo *fifo)
static void
start_int_fifo(struct usb_fifo *fifo)
static void
setPortMode(struct hfcsusb *hw)
static void
reset_hfcsusb(struct hfcsusb *hw)
static void
hfcsusb_start_endpoint(struct hfcsusb *hw, int channel)
static void
hfcsusb_stop_endpoint(struct hfcsusb *hw, int channel)
static int
setup_hfcsusb(struct hfcsusb *hw)
static void
release_hw(struct hfcsusb *hw)
static void
deactivate_bchannel(struct bchannel *bch)
static int
hfc_bctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static int
setup_instance(struct hfcsusb *hw, struct device *parent)
static int
hfcsusb_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void
hfcsusb_disconnect(struct usb_interface *intf)
static struct usb_driver hfcsusb_drv = ;
static int __init
hfcsusb_init(void)
static void __exit
hfcsusb_cleanup(void)
module_init(hfcsusb_init);
module_exit(hfcsusb_cleanup);
