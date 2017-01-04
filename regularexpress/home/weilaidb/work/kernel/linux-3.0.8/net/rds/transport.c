static struct rds_transport *transports[RDS_TRANS_COUNT];
static DECLARE_RWSEM(rds_trans_sem);
int rds_trans_register(struct rds_transport *trans)
EXPORT_SYMBOL_GPL(rds_trans_register);
void rds_trans_unregister(struct rds_transport *trans)
EXPORT_SYMBOL_GPL(rds_trans_unregister);
void rds_trans_put(struct rds_transport *trans)
struct rds_transport *rds_trans_get_preferred(__be32 addr)
unsigned int rds_trans_stats_info_copy(struct rds_info_iterator *iter,
unsigned int avail)
