#define _NET_DN_NSP_H
extern void dn_nsp_send_data_ack(struct sock *sk);
extern void dn_nsp_send_oth_ack(struct sock *sk);
extern void dn_nsp_delayed_ack(struct sock *sk);
extern void dn_send_conn_ack(struct sock *sk);
extern void dn_send_conn_conf(struct sock *sk, gfp_t gfp);
extern void dn_nsp_send_disc(struct sock *sk, unsigned char type,
unsigned short reason, gfp_t gfp);
extern void dn_nsp_return_disc(struct sk_buff *skb, unsigned char type,
unsigned short reason);
extern void dn_nsp_send_link(struct sock *sk, unsigned char lsflags, char fcval);
extern void dn_nsp_send_conninit(struct sock *sk, unsigned char flags);
extern void dn_nsp_output(struct sock *sk);
extern int dn_nsp_check_xmit_queue(struct sock *sk, struct sk_buff *skb, struct sk_buff_head *q, unsigned short acknum);
extern void dn_nsp_queue_xmit(struct sock *sk, struct sk_buff *skb, gfp_t gfp, int oob);
extern unsigned long dn_nsp_persist(struct sock *sk);
extern int dn_nsp_xmit_timeout(struct sock *sk);
extern int dn_nsp_rx(struct sk_buff *);
extern int dn_nsp_backlog_rcv(struct sock *sk, struct sk_buff *skb);
extern struct sk_buff *dn_alloc_skb(struct sock *sk, int size, gfp_t pri);
extern struct sk_buff *dn_alloc_send_skb(struct sock *sk, size_t *size, int noblock, long timeo, int *err);
#define NSP_REASON_OK 0
#define NSP_REASON_NR 1
#define NSP_REASON_UN 2
#define NSP_REASON_SD 3
#define NSP_REASON_ID 4
#define NSP_REASON_ER 5
#define NSP_REASON_OB 6
#define NSP_REASON_US 7
#define NSP_REASON_TP 8
#define NSP_REASON_EA 9
#define NSP_REASON_IF 10
#define NSP_REASON_LS 11
#define NSP_REASON_LL 32
#define NSP_REASON_LE 33
#define NSP_REASON_UR 34
#define NSP_REASON_UA 36
#define NSP_REASON_TM 38
#define NSP_REASON_NU 39
#define NSP_REASON_NL 41
#define NSP_REASON_DC 42
#define NSP_REASON_IO 43
#define NSP_DISCINIT 0x38
#define NSP_DISCCONF 0x48
struct nsp_data_seg_msg  __packed;
struct nsp_data_opt_msg  __packed;
struct nsp_data_opt_msg1  __packed;
struct nsp_data_ack_msg  __packed;
struct  nsp_conn_ack_msg  __packed;
struct  nsp_conn_init_msg  __packed;
struct  nsp_disconn_init_msg  __packed;
struct  srcobj_fmt  __packed;
static __inline__ int dn_before(__u16 seq1, __u16 seq2)
static __inline__ int dn_after(__u16 seq1, __u16 seq2)
static __inline__ int dn_equal(__u16 seq1, __u16 seq2)
static __inline__ int dn_before_or_equal(__u16 seq1, __u16 seq2)
static __inline__ void seq_add(__u16 *seq, __u16 off)
static __inline__ int seq_next(__u16 seq1, __u16 seq2)
static __inline__ int sendack(__u16 seq)
static __inline__ int dn_congested(struct sock *sk)
#define DN_MAX_NSP_DATA_HEADER (11)
