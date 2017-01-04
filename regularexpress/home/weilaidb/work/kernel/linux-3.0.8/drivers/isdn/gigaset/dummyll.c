void gigaset_skb_sent(struct bc_state *bcs, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(gigaset_skb_sent);
void gigaset_skb_rcvd(struct bc_state *bcs, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(gigaset_skb_rcvd);
void gigaset_isdn_rcv_err(struct bc_state *bcs)
EXPORT_SYMBOL_GPL(gigaset_isdn_rcv_err);
int gigaset_isdn_icall(struct at_state_t *at_state)
void gigaset_isdn_connD(struct bc_state *bcs)
void gigaset_isdn_hupD(struct bc_state *bcs)
void gigaset_isdn_connB(struct bc_state *bcs)
void gigaset_isdn_hupB(struct bc_state *bcs)
void gigaset_isdn_start(struct cardstate *cs)
void gigaset_isdn_stop(struct cardstate *cs)
int gigaset_isdn_regdev(struct cardstate *cs, const char *isdnid)
void gigaset_isdn_unregdev(struct cardstate *cs)
void gigaset_isdn_regdrv(void)
void gigaset_isdn_unregdrv(void)
