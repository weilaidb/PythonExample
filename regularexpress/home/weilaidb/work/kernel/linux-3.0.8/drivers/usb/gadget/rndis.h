#define _LINUX_RNDIS_H
#define RNDIS_MAXIMUM_FRAME_SIZE	1518
#define RNDIS_MAX_TOTAL_SIZE		1558
#define RNDIS_MAJOR_VERSION		1
#define RNDIS_MINOR_VERSION		0
#define RNDIS_STATUS_SUCCESS		0x00000000U
#define RNDIS_STATUS_FAILURE		0xC0000001U
#define RNDIS_STATUS_INVALID_DATA	0xC0010015U
#define RNDIS_STATUS_NOT_SUPPORTED	0xC00000BBU
#define RNDIS_STATUS_MEDIA_CONNECT	0x4001000BU
#define RNDIS_STATUS_MEDIA_DISCONNECT	0x4001000CU
#define REMOTE_NDIS_PACKET_MSG		0x00000001U
#define REMOTE_NDIS_INITIALIZE_MSG	0x00000002U
#define REMOTE_NDIS_HALT_MSG		0x00000003U
#define REMOTE_NDIS_QUERY_MSG		0x00000004U
#define REMOTE_NDIS_SET_MSG		0x00000005U
#define REMOTE_NDIS_RESET_MSG		0x00000006U
#define REMOTE_NDIS_INDICATE_STATUS_MSG	0x00000007U
#define REMOTE_NDIS_KEEPALIVE_MSG	0x00000008U
#define REMOTE_NDIS_INITIALIZE_CMPLT	0x80000002U
#define REMOTE_NDIS_QUERY_CMPLT		0x80000004U
#define REMOTE_NDIS_SET_CMPLT		0x80000005U
#define REMOTE_NDIS_RESET_CMPLT		0x80000006U
#define REMOTE_NDIS_KEEPALIVE_CMPLT	0x80000008U
#define RNDIS_DF_CONNECTIONLESS		0x00000001U
#define RNDIS_DF_CONNECTION_ORIENTED	0x00000002U
#define RNDIS_MEDIUM_802_3		0x00000000U
#define OID_PNP_CAPABILITIES			0xFD010100
#define OID_PNP_SET_POWER			0xFD010101
#define OID_PNP_QUERY_POWER			0xFD010102
#define OID_PNP_ADD_WAKE_UP_PATTERN		0xFD010103
#define OID_PNP_REMOVE_WAKE_UP_PATTERN		0xFD010104
#define OID_PNP_ENABLE_WAKE_UP			0xFD010106
typedef struct rndis_init_msg_type
rndis_init_msg_type;
typedef struct rndis_init_cmplt_type
rndis_init_cmplt_type;
typedef struct rndis_halt_msg_type
rndis_halt_msg_type;
typedef struct rndis_query_msg_type
rndis_query_msg_type;
typedef struct rndis_query_cmplt_type
rndis_query_cmplt_type;
typedef struct rndis_set_msg_type
rndis_set_msg_type;
typedef struct rndis_set_cmplt_type
rndis_set_cmplt_type;
typedef struct rndis_reset_msg_type
rndis_reset_msg_type;
typedef struct rndis_reset_cmplt_type
rndis_reset_cmplt_type;
typedef struct rndis_indicate_status_msg_type
rndis_indicate_status_msg_type;
typedef struct rndis_keepalive_msg_type
rndis_keepalive_msg_type;
typedef struct rndis_keepalive_cmplt_type
rndis_keepalive_cmplt_type;
struct rndis_packet_msg_type
__attribute__ ((packed));
struct rndis_config_parameter
;
enum rndis_state
;
typedef struct rndis_resp_t
rndis_resp_t;
typedef struct rndis_params
rndis_params;
int  rndis_msg_parser (u8 configNr, u8 *buf);
int  rndis_register(void (*resp_avail)(void *v), void *v);
void rndis_deregister (int configNr);
int  rndis_set_param_dev (u8 configNr, struct net_device *dev,
u16 *cdc_filter);
int  rndis_set_param_vendor (u8 configNr, u32 vendorID,
const char *vendorDescr);
int  rndis_set_param_medium (u8 configNr, u32 medium, u32 speed);
void rndis_add_hdr (struct sk_buff *skb);
int rndis_rm_hdr(struct gether *port, struct sk_buff *skb,
struct sk_buff_head *list);
u8   *rndis_get_next_response (int configNr, u32 *length);
void rndis_free_response (int configNr, u8 *buf);
void rndis_uninit (int configNr);
int  rndis_signal_connect (int configNr);
int  rndis_signal_disconnect (int configNr);
int  rndis_state (int configNr);
extern void rndis_set_host_mac (int configNr, const u8 *addr);
int rndis_init(void);
void rndis_exit (void);
