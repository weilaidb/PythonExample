#define LINUX_LOCKD_SHARE_H
struct nlm_share ;
__be32	nlmsvc_share_file(struct nlm_host *, struct nlm_file *,
struct nlm_args *);
__be32	nlmsvc_unshare_file(struct nlm_host *, struct nlm_file *,
struct nlm_args *);
void	nlmsvc_traverse_shares(struct nlm_host *, struct nlm_file *,
nlm_host_match_fn_t);
