kmem_zone_t	*xfs_log_ticket_zone;
STATIC int	 xlog_commit_record(struct log *log, struct xlog_ticket *ticket,
xlog_in_core_t **, xfs_lsn_t *);
STATIC xlog_t *  xlog_alloc_log(xfs_mount_t	*mp,
xfs_buftarg_t	*log_target,
xfs_daddr_t	blk_offset,
int		num_bblks);
STATIC int	 xlog_space_left(struct log *log, atomic64_t *head);
STATIC int	 xlog_sync(xlog_t *log, xlog_in_core_t *iclog);
STATIC void	 xlog_dealloc_log(xlog_t *log);
STATIC void xlog_state_done_syncing(xlog_in_core_t *iclog, int);
STATIC void xlog_state_do_callback(xlog_t *log,int aborted, xlog_in_core_t *iclog);
STATIC int  xlog_state_get_iclog_space(xlog_t		*log,
int		len,
xlog_in_core_t	**iclog,
xlog_ticket_t	*ticket,
int		*continued_write,
int		*logoffsetp);
STATIC int  xlog_state_release_iclog(xlog_t		*log,
xlog_in_core_t	*iclog);
STATIC void xlog_state_switch_iclogs(xlog_t		*log,
xlog_in_core_t *iclog,
int		eventual_size);
STATIC void xlog_state_want_sync(xlog_t	*log, xlog_in_core_t *iclog);
STATIC int  xlog_grant_log_space(xlog_t		*log,
xlog_ticket_t	*xtic);
STATIC void xlog_grant_push_ail(struct log	*log,
int		need_bytes);
STATIC void xlog_regrant_reserve_log_space(xlog_t	 *log,
xlog_ticket_t *ticket);
STATIC int xlog_regrant_write_log_space(xlog_t		*log,
xlog_ticket_t  *ticket);
STATIC void xlog_ungrant_log_space(xlog_t	 *log,
xlog_ticket_t *ticket);
#if defined(DEBUG)
STATIC void	xlog_verify_dest_ptr(xlog_t *log, char *ptr);
STATIC void	xlog_verify_grant_tail(struct log *log);
STATIC void	xlog_verify_iclog(xlog_t *log, xlog_in_core_t *iclog,
int count, boolean_t syncing);
STATIC void	xlog_verify_tail_lsn(xlog_t *log, xlog_in_core_t *iclog,
xfs_lsn_t tail_lsn);
#define xlog_verify_dest_ptr(a,b)
#define xlog_verify_grant_tail(a)
#define xlog_verify_iclog(a,b,c,d)
#define xlog_verify_tail_lsn(a,b,c)
STATIC int	xlog_iclogs_empty(xlog_t *log);
static void
xlog_grant_sub_space(
struct log	*log,
atomic64_t	*head,
int		bytes)
static void
xlog_grant_add_space(
struct log	*log,
atomic64_t	*head,
int		bytes)
static void
xlog_tic_reset_res(xlog_ticket_t *tic)
static void
xlog_tic_add_region(xlog_ticket_t *tic, uint len, uint type)
xfs_lsn_t
xfs_log_done(
struct xfs_mount	*mp,
struct xlog_ticket	*ticket,
struct xlog_in_core	**iclog,
uint			flags)
int
xfs_log_notify(
struct xfs_mount	*mp,
struct xlog_in_core	*iclog,
xfs_log_callback_t	*cb)
int
xfs_log_release_iclog(
struct xfs_mount	*mp,
struct xlog_in_core	*iclog)
int
xfs_log_reserve(
struct xfs_mount	*mp,
int		 	unit_bytes,
int		 	cnt,
struct xlog_ticket	**ticket,
__uint8_t	 	client,
uint		 	flags,
uint		 	t_type)
int
xfs_log_mount(
xfs_mount_t	*mp,
xfs_buftarg_t	*log_target,
xfs_daddr_t	blk_offset,
int		num_bblks)
int
xfs_log_mount_finish(xfs_mount_t *mp)
int
xfs_log_unmount_write(xfs_mount_t *mp)
void
xfs_log_unmount(xfs_mount_t *mp)
void
xfs_log_item_init(
struct xfs_mount	*mp,
struct xfs_log_item	*item,
int			type,
struct xfs_item_ops	*ops)
int
xfs_log_write(
struct xfs_mount	*mp,
struct xfs_log_iovec	reg[],
int			nentries,
struct xlog_ticket	*tic,
xfs_lsn_t		*start_lsn)
void
xfs_log_move_tail(xfs_mount_t	*mp,
xfs_lsn_t	tail_lsn)
int
xfs_log_need_covered(xfs_mount_t *mp)
xfs_lsn_t
xlog_assign_tail_lsn(
struct xfs_mount	*mp)
STATIC int
xlog_space_left(
struct log	*log,
atomic64_t	*head)
void
xlog_iodone(xfs_buf_t *bp)
STATIC void
xlog_get_iclog_buffer_size(xfs_mount_t	*mp,
xlog_t	*log)
STATIC xlog_t *
xlog_alloc_log(xfs_mount_t	*mp,
xfs_buftarg_t	*log_target,
xfs_daddr_t	blk_offset,
int		num_bblks)
STATIC int
xlog_commit_record(
struct log		*log,
struct xlog_ticket	*ticket,
struct xlog_in_core	**iclog,
xfs_lsn_t		*commitlsnp)
STATIC void
xlog_grant_push_ail(
struct log	*log,
int		need_bytes)
STATIC int
xlog_bdstrat(
struct xfs_buf		*bp)
STATIC int
xlog_sync(xlog_t		*log,
xlog_in_core_t	*iclog)
STATIC void
xlog_dealloc_log(xlog_t *log)
static inline void
xlog_state_finish_copy(xlog_t		*log,
xlog_in_core_t	*iclog,
int		record_cnt,
int		copy_bytes)
void
xlog_print_tic_res(
struct xfs_mount	*mp,
struct xlog_ticket	*ticket)
static int
xlog_write_calc_vec_length(
struct xlog_ticket	*ticket,
struct xfs_log_vec	*log_vector)
static int
xlog_write_start_rec(
struct xlog_op_header	*ophdr,
struct xlog_ticket	*ticket)
static xlog_op_header_t *
xlog_write_setup_ophdr(
struct log		*log,
struct xlog_op_header	*ophdr,
struct xlog_ticket	*ticket,
uint			flags)
static int
xlog_write_setup_copy(
struct xlog_ticket	*ticket,
struct xlog_op_header	*ophdr,
int			space_available,
int			space_required,
int			*copy_off,
int			*copy_len,
int			*last_was_partial_copy,
int			*bytes_consumed)
static int
xlog_write_copy_finish(
struct log		*log,
struct xlog_in_core	*iclog,
uint			flags,
int			*record_cnt,
int			*data_cnt,
int			*partial_copy,
int			*partial_copy_len,
int			log_offset,
struct xlog_in_core	**commit_iclog)
int
xlog_write(
struct log		*log,
struct xfs_log_vec	*log_vector,
struct xlog_ticket	*ticket,
xfs_lsn_t		*start_lsn,
struct xlog_in_core	**commit_iclog,
uint			flags)
STATIC void
xlog_state_clean_log(xlog_t *log)
STATIC xfs_lsn_t
xlog_get_lowest_lsn(
xlog_t		*log)
STATIC void
xlog_state_do_callback(
xlog_t		*log,
int		aborted,
xlog_in_core_t	*ciclog)
STATIC void
xlog_state_done_syncing(
xlog_in_core_t	*iclog,
int		aborted)
STATIC int
xlog_state_get_iclog_space(xlog_t	  *log,
int		  len,
xlog_in_core_t **iclogp,
xlog_ticket_t  *ticket,
int		  *continued_write,
int		  *logoffsetp)
STATIC int
xlog_grant_log_space(xlog_t	   *log,
xlog_ticket_t *tic)
STATIC int
xlog_regrant_write_log_space(xlog_t	   *log,
xlog_ticket_t *tic)
STATIC void
xlog_regrant_reserve_log_space(xlog_t	     *log,
xlog_ticket_t *ticket)
STATIC void
xlog_ungrant_log_space(xlog_t	     *log,
xlog_ticket_t *ticket)
STATIC int
xlog_state_release_iclog(
xlog_t		*log,
xlog_in_core_t	*iclog)
STATIC void
xlog_state_switch_iclogs(xlog_t		*log,
xlog_in_core_t *iclog,
int		eventual_size)
int
_xfs_log_force(
struct xfs_mount	*mp,
uint			flags,
int			*log_flushed)
void
xfs_log_force(
xfs_mount_t	*mp,
uint		flags)
int
_xfs_log_force_lsn(
struct xfs_mount	*mp,
xfs_lsn_t		lsn,
uint			flags,
int			*log_flushed)
void
xfs_log_force_lsn(
xfs_mount_t	*mp,
xfs_lsn_t	lsn,
uint		flags)
STATIC void
xlog_state_want_sync(xlog_t *log, xlog_in_core_t *iclog)
void
xfs_log_ticket_put(
xlog_ticket_t	*ticket)
xlog_ticket_t *
xfs_log_ticket_get(
xlog_ticket_t	*ticket)
xlog_ticket_t *
xlog_ticket_alloc(
struct log	*log,
int		unit_bytes,
int		cnt,
char		client,
uint		xflags,
int		alloc_flags)
#if defined(DEBUG)
void
xlog_verify_dest_ptr(
struct log	*log,
char		*ptr)
STATIC void
xlog_verify_grant_tail(
struct log	*log)
STATIC void
xlog_verify_tail_lsn(xlog_t	    *log,
xlog_in_core_t *iclog,
xfs_lsn_t	    tail_lsn)
STATIC void
xlog_verify_iclog(xlog_t	 *log,
xlog_in_core_t *iclog,
int		 count,
boolean_t	 syncing)
STATIC int
xlog_state_ioerror(
xlog_t	*log)
int
xfs_log_force_umount(
struct xfs_mount	*mp,
int			logerror)
STATIC int
xlog_iclogs_empty(xlog_t *log)
