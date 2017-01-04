#define _IWCH_CM_H_
#define MPA_KEY_REQ "MPA ID Req Frame"
#define MPA_KEY_REP "MPA ID Rep Frame"
#define MPA_MAX_PRIVATE_DATA	256
#define MPA_REV		0
#define MPA_REJECT		0x20
#define MPA_CRC			0x40
#define MPA_MARKERS		0x80
#define MPA_FLAGS_MASK		0xE0
#define put_ep(ep)
#define get_ep(ep)
struct mpa_message ;
struct terminate_message ;
#define TERM_MAX_LENGTH (sizeof(struct terminate_message) + 2 + 18 + 28)
enum iwch_layers_types ;
enum iwch_rdma_ecodes ;
enum iwch_ddp_ecodes ;
enum iwch_mpa_ecodes ;
enum iwch_ep_state ;
enum iwch_ep_flags ;
struct iwch_ep_common ;
struct iwch_listen_ep ;
struct iwch_ep ;
static inline struct iwch_ep *to_ep(struct iw_cm_id *cm_id)
static inline struct iwch_listen_ep *to_listen_ep(struct iw_cm_id *cm_id)
static inline int compute_wscale(int win)
int iwch_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param);
int iwch_create_listen(struct iw_cm_id *cm_id, int backlog);
int iwch_destroy_listen(struct iw_cm_id *cm_id);
int iwch_reject_cr(struct iw_cm_id *cm_id, const void *pdata, u8 pdata_len);
int iwch_accept_cr(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param);
int iwch_ep_disconnect(struct iwch_ep *ep, int abrupt, gfp_t gfp);
int iwch_quiesce_tid(struct iwch_ep *ep);
int iwch_resume_tid(struct iwch_ep *ep);
void __free_ep(struct kref *kref);
void iwch_rearp(struct iwch_ep *ep);
int iwch_ep_redirect(void *ctx, struct dst_entry *old, struct dst_entry *new, struct l2t_entry *l2t);
int __init iwch_cm_init(void);
void __exit iwch_cm_term(void);
extern int peer2peer;
