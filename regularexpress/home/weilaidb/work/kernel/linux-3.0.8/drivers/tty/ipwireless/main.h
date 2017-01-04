#define _IPWIRELESS_CS_H_
#define IPWIRELESS_PCCARD_NAME		"ipwireless"
#define IPWIRELESS_PCMCIA_VERSION	"1.1"
#define IPWIRELESS_PCMCIA_AUTHOR        \
"Stephen Blackheath, Ben Martel, Jiri Kosina and David Sterba"
#define IPWIRELESS_TX_QUEUE_SIZE  262144
#define IPWIRELESS_RX_QUEUE_SIZE  262144
#define IPWIRELESS_STATE_DEBUG
struct ipw_hardware;
struct ipw_network;
struct ipw_tty;
struct ipw_dev ;
extern int ipwireless_debug;
extern int ipwireless_loopback;
extern int ipwireless_out_queue;
