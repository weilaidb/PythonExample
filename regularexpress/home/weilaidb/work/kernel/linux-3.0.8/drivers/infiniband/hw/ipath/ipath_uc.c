#define OP(x) IB_OPCODE_UC_##x
int ipath_make_uc_req(struct ipath_qp *qp)
void ipath_uc_rcv(struct ipath_ibdev *dev, struct ipath_ib_header *hdr,
int has_grh, void *data, u32 tlen, struct ipath_qp *qp)
