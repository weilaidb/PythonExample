#define MAX_MC_LID 0xFFFE
#define MIN_MC_LID 0xC000
#define EHCA_VALID_MULTICAST_GID(gid)  ((gid)[0] == 0xFF)
#define EHCA_VALID_MULTICAST_LID(lid) \
(((lid) >= MIN_MC_LID) && ((lid) <= MAX_MC_LID))
int ehca_attach_mcast(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
int ehca_detach_mcast(struct ib_qp *ibqp, union ib_gid *gid, u16 lid)
