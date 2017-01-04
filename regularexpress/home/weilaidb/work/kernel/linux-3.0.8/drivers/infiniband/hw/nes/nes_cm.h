#define NES_CM_H
#define QUEUE_EVENTS
#define NES_MANAGE_APBVT_DEL 0
#define NES_MANAGE_APBVT_ADD 1
#define NES_MPA_REQUEST_ACCEPT  1
#define NES_MPA_REQUEST_REJECT  2
#define IEFT_MPA_KEY_REQ  "MPA ID Req Frame"
#define IEFT_MPA_KEY_REP  "MPA ID Rep Frame"
#define IETF_MPA_KEY_SIZE 16
#define IETF_MPA_VERSION  1
#define IETF_MAX_PRIV_DATA_LEN 512
#define IETF_MPA_FRAME_SIZE     20
enum ietf_mpa_flags ;
struct ietf_mpa_frame ;
#define ietf_mpa_req_resp_frame ietf_mpa_frame
struct nes_v4_quad ;
struct nes_cm_node;
enum nes_timer_type ;
#define NES_PASSIVE_STATE_INDICATED	0
#define NES_DO_NOT_SEND_RESET_EVENT	1
#define NES_SEND_RESET_EVENT		2
#define MAX_NES_IFS 4
#define SET_ACK 1
#define SET_SYN 2
#define SET_FIN 4
#define SET_RST 8
#define TCP_OPTIONS_PADDING	3
struct option_base ;
enum option_numbers ;
struct option_mss ;
struct option_windowscale ;
union all_known_options ;
struct nes_timer_entry ;
#define NES_DEFAULT_RETRYS  64
#define NES_DEFAULT_RETRANS 8
#define NES_RETRY_TIMEOUT   (1000*HZ/1000)
#define NES_RETRY_TIMEOUT   (3000*HZ/1000)
#define NES_SHORT_TIME      (10)
#define NES_LONG_TIME       (2000*HZ/1000)
#define NES_MAX_TIMEOUT     ((unsigned long) (12*HZ))
#define NES_CM_HASHTABLE_SIZE         1024
#define NES_CM_TCP_TIMER_INTERVAL     3000
#define NES_CM_DEFAULT_MTU            1540
#define NES_CM_DEFAULT_FRAME_CNT      10
#define NES_CM_THREAD_STACK_SIZE      256
#define NES_CM_DEFAULT_RCV_WND        64240
#define NES_CM_DEFAULT_RCV_WND_SCALED 256960
#define NES_CM_DEFAULT_RCV_WND_SCALE  2
#define NES_CM_DEFAULT_FREE_PKTS      0x000A
#define NES_CM_FREE_PKT_LO_WATERMARK  2
#define NES_CM_DEFAULT_MSS   536
#define NES_CM_DEF_SEQ       0x159bf75f
#define NES_CM_DEF_LOCAL_ID  0x3b47
#define NES_CM_DEF_SEQ2      0x18ed5740
#define NES_CM_DEF_LOCAL_ID2 0xb807
#define	MAX_CM_BUFFER	(IETF_MPA_FRAME_SIZE + IETF_MAX_PRIV_DATA_LEN)
typedef u32 nes_addr_t;
#define nes_cm_tsa_context nes_qp_context
struct nes_qp;
enum nes_cm_node_state ;
enum nes_tcpip_pkt_type ;
enum nes_cm_conn_type ;
struct nes_cm_tcp_context ;
enum nes_cm_listener_state ;
struct nes_cm_listener ;
struct nes_cm_node ;
struct nes_cm_info ;
enum  nes_cm_event_type ;
struct nes_cm_event ;
struct nes_cm_core ;
#define NES_CM_SET_PKT_SIZE        (1 << 1)
#define NES_CM_SET_FREE_PKT_Q_SIZE (1 << 2)
struct nes_cm_ops ;
int schedule_nes_timer(struct nes_cm_node *, struct sk_buff *,
enum nes_timer_type, int, int);
int nes_accept(struct iw_cm_id *, struct iw_cm_conn_param *);
int nes_reject(struct iw_cm_id *, const void *, u8);
int nes_connect(struct iw_cm_id *, struct iw_cm_conn_param *);
int nes_create_listen(struct iw_cm_id *, int);
int nes_destroy_listen(struct iw_cm_id *);
int nes_cm_recv(struct sk_buff *, struct net_device *);
int nes_cm_start(void);
int nes_cm_stop(void);
