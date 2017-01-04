struct rds_info_iterator ;
static DEFINE_SPINLOCK(rds_info_lock);
static rds_info_func rds_info_funcs[RDS_INFO_LAST - RDS_INFO_FIRST + 1];
void rds_info_register_func(int optname, rds_info_func func)
EXPORT_SYMBOL_GPL(rds_info_register_func);
void rds_info_deregister_func(int optname, rds_info_func func)
EXPORT_SYMBOL_GPL(rds_info_deregister_func);
void rds_info_iter_unmap(struct rds_info_iterator *iter)
void rds_info_copy(struct rds_info_iterator *iter, void *data,
unsigned long bytes)
EXPORT_SYMBOL_GPL(rds_info_copy);
int rds_info_getsockopt(struct socket *sock, int optname, char __user *optval,
int __user *optlen)
