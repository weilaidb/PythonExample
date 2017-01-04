#define _DCCP_FEAT_H
#define DCCPF_ACK_RATIO_MAX	0xFFFF
#define DCCPF_SEQ_WMIN		32
#define DCCPF_SEQ_WMAX		0x3FFFFFFFFFFFull
#define DCCP_FEAT_MAX_SP_VALS	(DCCP_SINGLE_OPT_MAXLEN - 2)
enum dccp_feat_type ;
enum dccp_feat_state ;
typedef union  dccp_feat_val;
struct dccp_feat_entry ;
static inline u8 dccp_feat_genopt(struct dccp_feat_entry *entry)
struct ccid_dependency ;
extern unsigned long sysctl_dccp_sequence_window;
extern int	     sysctl_dccp_rx_ccid;
extern int	     sysctl_dccp_tx_ccid;
extern int  dccp_feat_init(struct sock *sk);
extern void dccp_feat_initialise_sysctls(void);
extern int  dccp_feat_register_sp(struct sock *sk, u8 feat, u8 is_local,
u8 const *list, u8 len);
extern int  dccp_feat_parse_options(struct sock *, struct dccp_request_sock *,
u8 mand, u8 opt, u8 feat, u8 *val, u8 len);
extern int  dccp_feat_clone_list(struct list_head const *, struct list_head *);
#define DCCP_OPTVAL_MAXLEN	6
extern void dccp_encode_value_var(const u64 value, u8 *to, const u8 len);
extern u64  dccp_decode_value_var(const u8 *bf, const u8 len);
extern int  dccp_insert_option_mandatory(struct sk_buff *skb);
extern int  dccp_insert_fn_opt(struct sk_buff *skb, u8 type, u8 feat,
u8 *val, u8 len, bool repeat_first);
