static int iwch_poll_cq_one(struct iwch_dev *rhp, struct iwch_cq *chp,
struct ib_wc *wc)
int iwch_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *wc)
