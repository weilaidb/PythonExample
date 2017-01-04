#define __XFS_QUOTA_PRIV_H__
#define XFS_DQITER_MAP_SIZE	10
#define XFS_DQ_HASHVAL(mp, id) (((__psunsigned_t)(mp) + \
(__psunsigned_t)(id)) & \
(xfs_Gqm->qm_dqhashmask - 1))
#define XFS_DQ_HASH(mp, id, type)   (type == XFS_DQ_USER ? \
(xfs_Gqm->qm_usr_dqhtable + \
XFS_DQ_HASHVAL(mp, id)) : \
(xfs_Gqm->qm_grp_dqhtable + \
XFS_DQ_HASHVAL(mp, id)))
#define XFS_IS_DQUOT_UNINITIALIZED(dqp) ( \
!dqp->q_core.d_blk_hardlimit && \
!dqp->q_core.d_blk_softlimit && \
!dqp->q_core.d_rtb_hardlimit && \
!dqp->q_core.d_rtb_softlimit && \
!dqp->q_core.d_ino_hardlimit && \
!dqp->q_core.d_ino_softlimit && \
!dqp->q_core.d_bcount && \
!dqp->q_core.d_rtbcount && \
!dqp->q_core.d_icount)
#define DQFLAGTO_TYPESTR(d)	(((d)->dq_flags & XFS_DQ_USER) ? "USR" : \
(((d)->dq_flags & XFS_DQ_GROUP) ? "GRP" : \
(((d)->dq_flags & XFS_DQ_PROJ) ? "PRJ":"???")))
