static void qib_ud_loopback(struct qib_qp *sqp, struct qib_swqe *swqe)
int qib_make_ud_req(struct qib_qp *qp)
static unsigned qib_lookup_pkey(struct qib_ibport *ibp, u16 pkey)
void qib_ud_rcv(struct qib_ibport *ibp, struct qib_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct qib_qp *qp)
