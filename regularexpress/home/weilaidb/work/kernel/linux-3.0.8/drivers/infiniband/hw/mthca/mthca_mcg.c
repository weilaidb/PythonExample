struct mthca_mgm ;
static const u8 zero_gid[16];
static int find_mgm(struct mthca_dev *dev,
u8 *gid, struct mthca_mailbox *mgm_mailbox,
u16 *hash, int *prev, int *index)
int mthca_multicast_attach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
int mthca_multicast_detach(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
int mthca_init_mcg_table(struct mthca_dev *dev)
void mthca_cleanup_mcg_table(struct mthca_dev *dev)
