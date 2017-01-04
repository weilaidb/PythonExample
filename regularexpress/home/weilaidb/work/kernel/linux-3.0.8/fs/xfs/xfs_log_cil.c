int
xlog_cil_init(
struct log	*log)
void
xlog_cil_destroy(
struct log	*log)
static struct xlog_ticket *
xlog_cil_ticket_alloc(
struct log	*log)
void
xlog_cil_init_post_recovery(
struct log	*log)
static void
xlog_cil_format_items(
struct log		*log,
struct xfs_log_vec	*log_vector)
STATIC void
xfs_cil_prepare_item(
struct log		*log,
struct xfs_log_vec	*lv,
int			*len,
int			*diff_iovecs)
static void
xlog_cil_insert_items(
struct log		*log,
struct xfs_log_vec	*log_vector,
struct xlog_ticket	*ticket)
static void
xlog_cil_free_logvec(
struct xfs_log_vec	*log_vector)
static void
xlog_cil_committed(
void	*args,
int	abort)
STATIC int
xlog_cil_push(
struct log		*log,
xfs_lsn_t		push_seq)
void
xfs_log_commit_cil(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
struct xfs_log_vec	*log_vector,
xfs_lsn_t		*commit_lsn,
int			flags)
xfs_lsn_t
xlog_cil_force_lsn(
struct log	*log,
xfs_lsn_t	sequence)
bool
xfs_log_item_in_current_chkpt(
struct xfs_log_item *lip)
