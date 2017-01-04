static inline int
nlm_cmp_owner(struct nlm_share *share, struct xdr_netobj *oh)
__be32
nlmsvc_share_file(struct nlm_host *host, struct nlm_file *file,
struct nlm_args *argp)
__be32
nlmsvc_unshare_file(struct nlm_host *host, struct nlm_file *file,
struct nlm_args *argp)
void nlmsvc_traverse_shares(struct nlm_host *host, struct nlm_file *file,
nlm_host_match_fn_t match)
