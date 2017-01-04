#define _IPWIRELESS_CS_NETWORK_H_
struct ipw_network;
struct ipw_tty;
struct ipw_hardware;
#define IPW_CHANNEL_RAS      0
#define IPW_CHANNEL_DIALLER  1
#define IPW_CHANNEL_CONSOLE  2
#define NO_OF_IPW_CHANNELS   5
void ipwireless_network_notify_control_line_change(struct ipw_network *net,
unsigned int channel_idx, unsigned int control_lines,
unsigned int control_mask);
void ipwireless_network_packet_received(struct ipw_network *net,
unsigned int channel_idx, unsigned char *data,
unsigned int length);
struct ipw_network *ipwireless_network_create(struct ipw_hardware *hw);
void ipwireless_network_free(struct ipw_network *net);
void ipwireless_associate_network_tty(struct ipw_network *net,
unsigned int channel_idx, struct ipw_tty *tty);
void ipwireless_disassociate_network_ttys(struct ipw_network *net,
unsigned int channel_idx);
void ipwireless_ppp_open(struct ipw_network *net);
void ipwireless_ppp_close(struct ipw_network *net);
int ipwireless_ppp_channel_index(struct ipw_network *net);
int ipwireless_ppp_unit_number(struct ipw_network *net);
int ipwireless_ppp_mru(const struct ipw_network *net);
