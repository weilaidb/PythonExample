static int sctp_copy_one_addr(struct sctp_bind_addr *, union sctp_addr *,
sctp_scope_t scope, gfp_t gfp,
int flags);
static void sctp_bind_addr_clean(struct sctp_bind_addr *);
int sctp_bind_addr_copy(struct sctp_bind_addr *dest,
const struct sctp_bind_addr *src,
sctp_scope_t scope, gfp_t gfp,
int flags)
int sctp_bind_addr_dup(struct sctp_bind_addr *dest,
const struct sctp_bind_addr *src,
gfp_t gfp)
void sctp_bind_addr_init(struct sctp_bind_addr *bp, __u16 port)
static void sctp_bind_addr_clean(struct sctp_bind_addr *bp)
void sctp_bind_addr_free(struct sctp_bind_addr *bp)
int sctp_add_bind_addr(struct sctp_bind_addr *bp, union sctp_addr *new,
__u8 addr_state, gfp_t gfp)
int sctp_del_bind_addr(struct sctp_bind_addr *bp, union sctp_addr *del_addr)
union sctp_params sctp_bind_addrs_to_raw(const struct sctp_bind_addr *bp,
int *addrs_len,
gfp_t gfp)
int sctp_raw_to_bind_addrs(struct sctp_bind_addr *bp, __u8 *raw_addr_list,
int addrs_len, __u16 port, gfp_t gfp)
int sctp_bind_addr_match(struct sctp_bind_addr *bp,
const union sctp_addr *addr,
struct sctp_sock *opt)
int sctp_bind_addr_conflict(struct sctp_bind_addr *bp,
const union sctp_addr *addr,
struct sctp_sock *bp_sp,
struct sctp_sock *addr_sp)
int sctp_bind_addr_state(const struct sctp_bind_addr *bp,
const union sctp_addr *addr)
union sctp_addr *sctp_find_unmatch_addr(struct sctp_bind_addr	*bp,
const union sctp_addr	*addrs,
int			addrcnt,
struct sctp_sock	*opt)
static int sctp_copy_one_addr(struct sctp_bind_addr *dest,
union sctp_addr *addr,
sctp_scope_t scope, gfp_t gfp,
int flags)
int sctp_is_any(struct sock *sk, const union sctp_addr *addr)
int sctp_in_scope(const union sctp_addr *addr, sctp_scope_t scope)
sctp_scope_t sctp_scope(const union sctp_addr *addr)
