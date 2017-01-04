static int nsp_backoff[NSP_MAXRXTSHIFT + 1] = ;
static void dn_nsp_send(struct sk_buff *skb)
struct sk_buff *dn_alloc_skb(struct sock *sk, int size, gfp_t pri)
unsigned long dn_nsp_persist(struct sock *sk)
static void dn_nsp_rtt(struct sock *sk, long rtt)
static inline unsigned dn_nsp_clone_and_send(struct sk_buff *skb,
gfp_t gfp)
void dn_nsp_output(struct sock *sk)
int dn_nsp_xmit_timeout(struct sock *sk)
static inline __le16 *dn_mk_common_header(struct dn_scp *scp, struct sk_buff *skb, unsigned char msgflag, int len)
static __le16 *dn_mk_ack_header(struct sock *sk, struct sk_buff *skb, unsigned char msgflag, int hlen, int other)
static __le16 *dn_nsp_mk_data_header(struct sock *sk, struct sk_buff *skb, int oth)
void dn_nsp_queue_xmit(struct sock *sk, struct sk_buff *skb,
gfp_t gfp, int oth)
int dn_nsp_check_xmit_queue(struct sock *sk, struct sk_buff *skb, struct sk_buff_head *q, unsigned short acknum)
void dn_nsp_send_data_ack(struct sock *sk)
void dn_nsp_send_oth_ack(struct sock *sk)
void dn_send_conn_ack (struct sock *sk)
void dn_nsp_delayed_ack(struct sock *sk)
static int dn_nsp_retrans_conn_conf(struct sock *sk)
void dn_send_conn_conf(struct sock *sk, gfp_t gfp)
static __inline__ void dn_nsp_do_disc(struct sock *sk, unsigned char msgflg,
unsigned short reason, gfp_t gfp,
struct dst_entry *dst,
int ddl, unsigned char *dd, __le16 rem, __le16 loc)
void dn_nsp_send_disc(struct sock *sk, unsigned char msgflg,
unsigned short reason, gfp_t gfp)
void dn_nsp_return_disc(struct sk_buff *skb, unsigned char msgflg,
unsigned short reason)
void dn_nsp_send_link(struct sock *sk, unsigned char lsflags, char fcval)
static int dn_nsp_retrans_conninit(struct sock *sk)
void dn_nsp_send_conninit(struct sock *sk, unsigned char msgflg)
