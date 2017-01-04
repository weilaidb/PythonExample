#define _IP_QUEUE_H
#define QDEBUG(x...) printk(KERN_DEBUG ## x)
#define QDEBUG(x...)
typedef struct ipq_packet_msg  ipq_packet_msg_t;
typedef struct ipq_mode_msg  ipq_mode_msg_t;
typedef struct ipq_verdict_msg  ipq_verdict_msg_t;
typedef struct ipq_peer_msg  ipq_peer_msg_t;
enum ;
#define IPQ_COPY_MAX IPQ_COPY_PACKET
#define IPQM_BASE	0x10
#define IPQM_MODE	(IPQM_BASE + 1)
#define IPQM_VERDICT	(IPQM_BASE + 2)
#define IPQM_PACKET	(IPQM_BASE + 3)
#define IPQM_MAX	(IPQM_BASE + 4)
