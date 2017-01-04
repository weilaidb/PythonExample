STATIC int	xlog_find_zeroed(xlog_t *, xfs_daddr_t *);
STATIC int	xlog_clear_stale_blocks(xlog_t *, xfs_lsn_t);
#if defined(DEBUG)
STATIC void	xlog_recover_check_summary(xlog_t *);
#define	xlog_recover_check_summary(log)
struct xfs_buf_cancel ;
static inline int
xlog_buf_bbcount_valid(
xlog_t		*log,
int		bbcount)
STATIC xfs_buf_t *
xlog_get_bp(
xlog_t		*log,
int		nbblks)
STATIC void
xlog_put_bp(
xfs_buf_t	*bp)
STATIC xfs_caddr_t
xlog_align(
xlog_t		*log,
xfs_daddr_t	blk_no,
int		nbblks,
xfs_buf_t	*bp)
STATIC int
xlog_bread_noalign(
xlog_t		*log,
xfs_daddr_t	blk_no,
int		nbblks,
xfs_buf_t	*bp)
STATIC int
xlog_bread(
xlog_t		*log,
xfs_daddr_t	blk_no,
int		nbblks,
xfs_buf_t	*bp,
xfs_caddr_t	*offset)
STATIC int
xlog_bread_offset(
xlog_t		*log,
xfs_daddr_t	blk_no,
int		nbblks,
xfs_buf_t	*bp,
xfs_caddr_t	offset)
STATIC int
xlog_bwrite(
xlog_t		*log,
xfs_daddr_t	blk_no,
int		nbblks,
xfs_buf_t	*bp)
STATIC void
xlog_header_check_dump(
xfs_mount_t		*mp,
xlog_rec_header_t	*head)
#define xlog_header_check_dump(mp, head)
STATIC int
xlog_header_check_recover(
xfs_mount_t		*mp,
xlog_rec_header_t	*head)
STATIC int
xlog_header_check_mount(
xfs_mount_t		*mp,
xlog_rec_header_t	*head)
STATIC void
xlog_recover_iodone(
struct xfs_buf	*bp)
STATIC int
xlog_find_cycle_start(
xlog_t		*log,
xfs_buf_t	*bp,
xfs_daddr_t	first_blk,
xfs_daddr_t	*last_blk,
uint		cycle)
STATIC int
xlog_find_verify_cycle(
xlog_t		*log,
xfs_daddr_t	start_blk,
int		nbblks,
uint		stop_on_cycle_no,
xfs_daddr_t	*new_blk)
STATIC int
xlog_find_verify_log_record(
xlog_t			*log,
xfs_daddr_t		start_blk,
xfs_daddr_t		*last_blk,
int			extra_bblks)
STATIC int
xlog_find_head(
xlog_t 		*log,
xfs_daddr_t	*return_head_blk)
STATIC int
xlog_find_tail(
xlog_t			*log,
xfs_daddr_t		*head_blk,
xfs_daddr_t		*tail_blk)
STATIC int
xlog_find_zeroed(
xlog_t		*log,
xfs_daddr_t	*blk_no)
STATIC void
xlog_add_record(
xlog_t			*log,
xfs_caddr_t		buf,
int			cycle,
int			block,
int			tail_cycle,
int			tail_block)
STATIC int
xlog_write_log_records(
xlog_t		*log,
int		cycle,
int		start_block,
int		blocks,
int		tail_cycle,
int		tail_block)
STATIC int
xlog_clear_stale_blocks(
xlog_t		*log,
xfs_lsn_t	tail_lsn)
STATIC xlog_recover_t *
xlog_recover_find_tid(
struct hlist_head	*head,
xlog_tid_t		tid)
STATIC void
xlog_recover_new_tid(
struct hlist_head	*head,
xlog_tid_t		tid,
xfs_lsn_t		lsn)
STATIC void
xlog_recover_add_item(
struct list_head	*head)
STATIC int
xlog_recover_add_to_cont_trans(
struct log		*log,
xlog_recover_t		*trans,
xfs_caddr_t		dp,
int			len)
STATIC int
xlog_recover_add_to_trans(
struct log		*log,
xlog_recover_t		*trans,
xfs_caddr_t		dp,
int			len)
STATIC int
xlog_recover_reorder_trans(
struct log		*log,
xlog_recover_t		*trans,
int			pass)
STATIC int
xlog_recover_buffer_pass1(
struct log		*log,
xlog_recover_item_t	*item)
STATIC int
xlog_check_buffer_cancelled(
struct log		*log,
xfs_daddr_t		blkno,
uint			len,
ushort			flags)
STATIC int
xlog_recover_do_inode_buffer(
struct xfs_mount	*mp,
xlog_recover_item_t	*item,
struct xfs_buf		*bp,
xfs_buf_log_format_t	*buf_f)
STATIC void
xlog_recover_do_reg_buffer(
struct xfs_mount	*mp,
xlog_recover_item_t	*item,
struct xfs_buf		*bp,
xfs_buf_log_format_t	*buf_f)
int
xfs_qm_dqcheck(
struct xfs_mount *mp,
xfs_disk_dquot_t *ddq,
xfs_dqid_t	 id,
uint		 type,
uint		 flags,
char		 *str)
STATIC void
xlog_recover_do_dquot_buffer(
xfs_mount_t		*mp,
xlog_t			*log,
xlog_recover_item_t	*item,
xfs_buf_t		*bp,
xfs_buf_log_format_t	*buf_f)
STATIC int
xlog_recover_buffer_pass2(
xlog_t			*log,
xlog_recover_item_t	*item)
STATIC int
xlog_recover_inode_pass2(
xlog_t			*log,
xlog_recover_item_t	*item)
STATIC int
xlog_recover_quotaoff_pass1(
xlog_t			*log,
xlog_recover_item_t	*item)
STATIC int
xlog_recover_dquot_pass2(
xlog_t			*log,
xlog_recover_item_t	*item)
STATIC int
xlog_recover_efi_pass2(
xlog_t			*log,
xlog_recover_item_t	*item,
xfs_lsn_t		lsn)
STATIC int
xlog_recover_efd_pass2(
xlog_t			*log,
xlog_recover_item_t	*item)
STATIC void
xlog_recover_free_trans(
struct xlog_recover	*trans)
STATIC int
xlog_recover_commit_pass1(
struct log		*log,
struct xlog_recover	*trans,
xlog_recover_item_t	*item)
STATIC int
xlog_recover_commit_pass2(
struct log		*log,
struct xlog_recover	*trans,
xlog_recover_item_t	*item)
STATIC int
xlog_recover_commit_trans(
struct log		*log,
struct xlog_recover	*trans,
int			pass)
STATIC int
xlog_recover_unmount_trans(
struct log		*log,
xlog_recover_t		*trans)
STATIC int
xlog_recover_process_data(
xlog_t			*log,
struct hlist_head	rhash[],
xlog_rec_header_t	*rhead,
xfs_caddr_t		dp,
int			pass)
STATIC int
xlog_recover_process_efi(
xfs_mount_t		*mp,
xfs_efi_log_item_t	*efip)
STATIC int
xlog_recover_process_efis(
xlog_t			*log)
STATIC void
xlog_recover_clear_agi_bucket(
xfs_mount_t	*mp,
xfs_agnumber_t	agno,
int		bucket)
STATIC xfs_agino_t
xlog_recover_process_one_iunlink(
struct xfs_mount		*mp,
xfs_agnumber_t			agno,
xfs_agino_t			agino,
int				bucket)
STATIC void
xlog_recover_process_iunlinks(
xlog_t		*log)
STATIC void
xlog_pack_data_checksum(
xlog_t		*log,
xlog_in_core_t	*iclog,
int		size)
#define xlog_pack_data_checksum(log, iclog, size)
void
xlog_pack_data(
xlog_t			*log,
xlog_in_core_t		*iclog,
int			roundoff)
STATIC void
xlog_unpack_data(
xlog_rec_header_t	*rhead,
xfs_caddr_t		dp,
xlog_t			*log)
STATIC int
xlog_valid_rec_header(
xlog_t			*log,
xlog_rec_header_t	*rhead,
xfs_daddr_t		blkno)
STATIC int
xlog_do_recovery_pass(
xlog_t			*log,
xfs_daddr_t		head_blk,
xfs_daddr_t		tail_blk,
int			pass)
STATIC int
xlog_do_log_recovery(
xlog_t		*log,
xfs_daddr_t	head_blk,
xfs_daddr_t	tail_blk)
STATIC int
xlog_do_recover(
xlog_t		*log,
xfs_daddr_t	head_blk,
xfs_daddr_t	tail_blk)
int
xlog_recover(
xlog_t		*log)
int
xlog_recover_finish(
xlog_t		*log)
#if defined(DEBUG)
void
xlog_recover_check_summary(
xlog_t		*log)
