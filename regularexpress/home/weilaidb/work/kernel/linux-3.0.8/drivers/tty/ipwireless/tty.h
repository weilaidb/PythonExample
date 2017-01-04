#define _IPWIRELESS_CS_TTY_H_
struct ipw_tty;
struct ipw_network;
struct ipw_hardware;
int ipwireless_tty_init(void);
void ipwireless_tty_release(void);
struct ipw_tty *ipwireless_tty_create(struct ipw_hardware *hw,
struct ipw_network *net);
void ipwireless_tty_free(struct ipw_tty *tty);
void ipwireless_tty_received(struct ipw_tty *tty, unsigned char *data,
unsigned int length);
int ipwireless_tty_is_modem(struct ipw_tty *tty);
void ipwireless_tty_notify_control_line_change(struct ipw_tty *tty,
unsigned int channel_idx,
unsigned int control_lines,
unsigned int changed_mask);
