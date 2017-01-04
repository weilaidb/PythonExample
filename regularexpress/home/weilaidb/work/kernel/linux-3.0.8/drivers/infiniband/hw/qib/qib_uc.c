#define OP(x) IB_OPCODE_UC_##x
int qib_make_uc_req(struct qib_qp *qp)
void qib_uc_rcv(struct qib_ibport *ibp, struct qib_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct qib_qp *qp)
