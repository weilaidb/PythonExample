static void
dchannel_bh(struct work_struct *ws)
static void
bchannel_bh(struct work_struct *ws)
int
mISDN_initdchannel(struct dchannel *ch, int maxlen, void *phf)
EXPORT_SYMBOL(mISDN_initdchannel);
int
mISDN_initbchannel(struct bchannel *ch, int maxlen)
EXPORT_SYMBOL(mISDN_initbchannel);
int
mISDN_freedchannel(struct dchannel *ch)
EXPORT_SYMBOL(mISDN_freedchannel);
void
mISDN_clear_bchannel(struct bchannel *ch)
EXPORT_SYMBOL(mISDN_clear_bchannel);
int
mISDN_freebchannel(struct bchannel *ch)
EXPORT_SYMBOL(mISDN_freebchannel);
static inline u_int
get_sapi_tei(u_char *p)
void
recv_Dchannel(struct dchannel *dch)
EXPORT_SYMBOL(recv_Dchannel);
void
recv_Echannel(struct dchannel *ech, struct dchannel *dch)
EXPORT_SYMBOL(recv_Echannel);
void
recv_Bchannel(struct bchannel *bch, unsigned int id)
EXPORT_SYMBOL(recv_Bchannel);
void
recv_Dchannel_skb(struct dchannel *dch, struct sk_buff *skb)
EXPORT_SYMBOL(recv_Dchannel_skb);
void
recv_Bchannel_skb(struct bchannel *bch, struct sk_buff *skb)
EXPORT_SYMBOL(recv_Bchannel_skb);
static void
confirm_Dsend(struct dchannel *dch)
int
get_next_dframe(struct dchannel *dch)
EXPORT_SYMBOL(get_next_dframe);
void
confirm_Bsend(struct bchannel *bch)
EXPORT_SYMBOL(confirm_Bsend);
int
get_next_bframe(struct bchannel *bch)
EXPORT_SYMBOL(get_next_bframe);
void
queue_ch_frame(struct mISDNchannel *ch, u_int pr, int id, struct sk_buff *skb)
EXPORT_SYMBOL(queue_ch_frame);
int
dchannel_senddata(struct dchannel *ch, struct sk_buff *skb)
EXPORT_SYMBOL(dchannel_senddata);
int
bchannel_senddata(struct bchannel *ch, struct sk_buff *skb)
EXPORT_SYMBOL(bchannel_senddata);
