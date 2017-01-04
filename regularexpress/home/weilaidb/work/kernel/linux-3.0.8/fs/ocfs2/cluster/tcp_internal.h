#define O2CLUSTER_TCP_INTERNAL_H
#define O2NET_MSG_MAGIC           ((u16)0xfa55)
#define O2NET_MSG_STATUS_MAGIC    ((u16)0xfa56)
#define O2NET_MSG_KEEP_REQ_MAGIC  ((u16)0xfa57)
#define O2NET_MSG_KEEP_RESP_MAGIC ((u16)0xfa58)
#define O2NET_QUORUM_DELAY_MS	((o2hb_dead_threshold + 2) * O2HB_REGION_TIMEOUT_MS)
#define O2NET_PROTOCOL_VERSION 11ULL
struct o2net_handshake ;
struct o2net_node ;
struct o2net_sock_container ;
struct o2net_msg_handler ;
enum o2net_system_error ;
struct o2net_status_wait ;
struct o2net_send_tracking ;
struct o2net_send_tracking ;
