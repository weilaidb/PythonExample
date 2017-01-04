#define MAX_ASSOCIATED_TTYS 2
#define SC_RCV_BITS     (SC_RCV_B7_1|SC_RCV_B7_0|SC_RCV_ODDP|SC_RCV_EVNP)
struct ipw_network ;
static void notify_packet_sent(void *callback_data, unsigned int packet_length)
static int ipwireless_ppp_start_xmit(struct ppp_channel *ppp_channel,
struct sk_buff *skb)
static int ipwireless_ppp_ioctl(struct ppp_channel *ppp_channel,
unsigned int cmd, unsigned long arg)
static const struct ppp_channel_ops ipwireless_ppp_channel_ops = ;
static void do_go_online(struct work_struct *work_go_online)
static void do_go_offline(struct work_struct *work_go_offline)
void ipwireless_network_notify_control_line_change(struct ipw_network *network,
unsigned int channel_idx,
unsigned int control_lines,
unsigned int changed_mask)
static struct sk_buff *ipw_packet_received_skb(unsigned char *data,
unsigned int length)
void ipwireless_network_packet_received(struct ipw_network *network,
unsigned int channel_idx,
unsigned char *data,
unsigned int length)
struct ipw_network *ipwireless_network_create(struct ipw_hardware *hw)
void ipwireless_network_free(struct ipw_network *network)
void ipwireless_associate_network_tty(struct ipw_network *network,
unsigned int channel_idx,
struct ipw_tty *tty)
void ipwireless_disassociate_network_ttys(struct ipw_network *network,
unsigned int channel_idx)
void ipwireless_ppp_open(struct ipw_network *network)
void ipwireless_ppp_close(struct ipw_network *network)
int ipwireless_ppp_channel_index(struct ipw_network *network)
int ipwireless_ppp_unit_number(struct ipw_network *network)
int ipwireless_ppp_mru(const struct ipw_network *network)
