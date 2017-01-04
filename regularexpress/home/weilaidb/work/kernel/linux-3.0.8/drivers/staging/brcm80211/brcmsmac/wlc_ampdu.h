#define _wlc_ampdu_h_
extern struct ampdu_info *wlc_ampdu_attach(struct wlc_info *wlc);
extern void wlc_ampdu_detach(struct ampdu_info *ampdu);
extern int wlc_sendampdu(struct ampdu_info *ampdu, struct wlc_txq_info *qi,
struct sk_buff **aggp, int prec);
extern void wlc_ampdu_dotxstatus(struct ampdu_info *ampdu, struct scb *scb,
struct sk_buff *p, tx_status_t *txs);
extern void wlc_ampdu_macaddr_upd(struct wlc_info *wlc);
extern void wlc_ampdu_shm_upd(struct ampdu_info *ampdu);
