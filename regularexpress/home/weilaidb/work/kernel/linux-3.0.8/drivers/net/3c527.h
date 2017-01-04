#define HOST_CMD		0
#define         HOST_CMD_START_RX   (1<<3)
#define         HOST_CMD_SUSPND_RX  (3<<3)
#define         HOST_CMD_RESTRT_RX  (5<<3)
#define         HOST_CMD_SUSPND_TX  3
#define         HOST_CMD_RESTRT_TX  5
#define HOST_STATUS		2
#define		HOST_STATUS_CRR	(1<<6)
#define		HOST_STATUS_CWR	(1<<5)
#define HOST_CTRL		6
#define		HOST_CTRL_ATTN	(1<<7)
#define 	HOST_CTRL_RESET	(1<<6)
#define 	HOST_CTRL_INTE	(1<<2)
#define HOST_RAMPAGE		8
#define HALTED 0
#define RUNNING 1
struct mc32_mailbox
__packed;
struct skb_header
__packed;
struct mc32_stats
__packed;
#define STATUS_MASK	0x0F
#define COMPLETED	(1<<7)
#define COMPLETED_OK	(1<<6)
#define BUFFER_BUSY	(1<<5)
#define CONTROL_EOP	(1<<7)
#define CONTROL_EOL	(1<<6)
#define MCA_MC32_ID	0x0041
