#define MAX_CAP_STR 20
static char cap_str[MAX_CAP_STR][40];
static DEFINE_SPINLOCK(cap_str_lock);
static int last_cap_str;
static char *gcap_string(char *s, int c)
const char *ceph_cap_string(int caps)
void ceph_caps_init(struct ceph_mds_client *mdsc)
void ceph_caps_finalize(struct ceph_mds_client *mdsc)
void ceph_adjust_min_caps(struct ceph_mds_client *mdsc, int delta)
int ceph_reserve_caps(struct ceph_mds_client *mdsc,
struct ceph_cap_reservation *ctx, int need)
int ceph_unreserve_caps(struct ceph_mds_client *mdsc,
struct ceph_cap_reservation *ctx)
static struct ceph_cap *get_cap(struct ceph_mds_client *mdsc,
struct ceph_cap_reservation *ctx)
void ceph_put_cap(struct ceph_mds_client *mdsc, struct ceph_cap *cap)
void ceph_reservation_status(struct ceph_fs_client *fsc,
int *total, int *avail, int *used, int *reserved,
int *min)
static struct ceph_cap *__get_cap_for_mds(struct ceph_inode_info *ci, int mds)
struct ceph_cap *ceph_get_cap_for_mds(struct ceph_inode_info *ci, int mds)
static int __ceph_get_cap_mds(struct ceph_inode_info *ci)
int ceph_get_cap_mds(struct inode *inode)
static void __insert_cap_node(struct ceph_inode_info *ci,
struct ceph_cap *new)
static void __cap_set_timeouts(struct ceph_mds_client *mdsc,
struct ceph_inode_info *ci)
static void __cap_delay_requeue(struct ceph_mds_client *mdsc,
struct ceph_inode_info *ci)
static void __cap_delay_requeue_front(struct ceph_mds_client *mdsc,
struct ceph_inode_info *ci)
static void __cap_delay_cancel(struct ceph_mds_client *mdsc,
struct ceph_inode_info *ci)
static void __check_cap_issue(struct ceph_inode_info *ci, struct ceph_cap *cap,
unsigned issued)
int ceph_add_cap(struct inode *inode,
struct ceph_mds_session *session, u64 cap_id,
int fmode, unsigned issued, unsigned wanted,
unsigned seq, unsigned mseq, u64 realmino, int flags,
struct ceph_cap_reservation *caps_reservation)
static int __cap_is_valid(struct ceph_cap *cap)
int __ceph_caps_issued(struct ceph_inode_info *ci, int *implemented)
int __ceph_caps_issued_other(struct ceph_inode_info *ci, struct ceph_cap *ocap)
static void __touch_cap(struct ceph_cap *cap)
int __ceph_caps_issued_mask(struct ceph_inode_info *ci, int mask, int touch)
int ceph_caps_revoking(struct ceph_inode_info *ci, int mask)
int __ceph_caps_used(struct ceph_inode_info *ci)
int __ceph_caps_file_wanted(struct ceph_inode_info *ci)
int __ceph_caps_mds_wanted(struct ceph_inode_info *ci)
static int __ceph_is_any_caps(struct ceph_inode_info *ci)
void __ceph_remove_cap(struct ceph_cap *cap)
static int send_cap_msg(struct ceph_mds_session *session,
u64 ino, u64 cid, int op,
int caps, int wanted, int dirty,
u32 seq, u64 flush_tid, u32 issue_seq, u32 mseq,
u64 size, u64 max_size,
struct timespec *mtime, struct timespec *atime,
u64 time_warp_seq,
uid_t uid, gid_t gid, mode_t mode,
u64 xattr_version,
struct ceph_buffer *xattrs_buf,
u64 follows)
static void __queue_cap_release(struct ceph_mds_session *session,
u64 ino, u64 cap_id, u32 migrate_seq,
u32 issue_seq)
void ceph_queue_caps_release(struct inode *inode)
static int __send_cap(struct ceph_mds_client *mdsc, struct ceph_cap *cap,
int op, int used, int want, int retain, int flushing,
unsigned *pflush_tid)
__releases(cap->ci->vfs_inode->i_lock)
void __ceph_flush_snaps(struct ceph_inode_info *ci,
struct ceph_mds_session **psession,
int again)
__releases(ci->vfs_inode->i_lock)
__acquires(ci->vfs_inode->i_lock)
static void ceph_flush_snaps(struct ceph_inode_info *ci)
int __ceph_mark_dirty_caps(struct ceph_inode_info *ci, int mask)
static int __mark_caps_flushing(struct inode *inode,
struct ceph_mds_session *session)
static int try_nonblocking_invalidate(struct inode *inode)
void ceph_check_caps(struct ceph_inode_info *ci, int flags,
struct ceph_mds_session *session)
static int try_flush_caps(struct inode *inode, struct ceph_mds_session *session,
unsigned *flush_tid)
static int caps_are_flushed(struct inode *inode, unsigned tid)
static void sync_write_wait(struct inode *inode)
int ceph_fsync(struct file *file, int datasync)
int ceph_write_inode(struct inode *inode, struct writeback_control *wbc)
static void kick_flushing_capsnaps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
void ceph_kick_flushing_caps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session)
static void kick_flushing_inode_caps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session,
struct inode *inode)
static void __take_cap_refs(struct ceph_inode_info *ci, int got)
static int try_get_cap_refs(struct ceph_inode_info *ci, int need, int want,
int *got, loff_t endoff, int *check_max, int *err)
static void check_max_size(struct inode *inode, loff_t endoff)
int ceph_get_caps(struct ceph_inode_info *ci, int need, int want, int *got,
loff_t endoff)
void ceph_get_cap_refs(struct ceph_inode_info *ci, int caps)
void ceph_put_cap_refs(struct ceph_inode_info *ci, int had)
void ceph_put_wrbuffer_cap_refs(struct ceph_inode_info *ci, int nr,
struct ceph_snap_context *snapc)
static void handle_cap_grant(struct inode *inode, struct ceph_mds_caps *grant,
struct ceph_mds_session *session,
struct ceph_cap *cap,
struct ceph_buffer *xattr_buf)
__releases(inode->i_lock)
static void handle_cap_flush_ack(struct inode *inode, u64 flush_tid,
struct ceph_mds_caps *m,
struct ceph_mds_session *session,
struct ceph_cap *cap)
__releases(inode->i_lock)
static void handle_cap_flushsnap_ack(struct inode *inode, u64 flush_tid,
struct ceph_mds_caps *m,
struct ceph_mds_session *session)
static void handle_cap_trunc(struct inode *inode,
struct ceph_mds_caps *trunc,
struct ceph_mds_session *session)
__releases(inode->i_lock)
static void handle_cap_export(struct inode *inode, struct ceph_mds_caps *ex,
struct ceph_mds_session *session,
int *open_target_sessions)
static void handle_cap_import(struct ceph_mds_client *mdsc,
struct inode *inode, struct ceph_mds_caps *im,
struct ceph_mds_session *session,
void *snaptrace, int snaptrace_len)
void ceph_handle_caps(struct ceph_mds_session *session,
struct ceph_msg *msg)
void ceph_check_delayed_caps(struct ceph_mds_client *mdsc)
void ceph_flush_dirty_caps(struct ceph_mds_client *mdsc)
void ceph_put_fmode(struct ceph_inode_info *ci, int fmode)
int ceph_encode_inode_release(void **p, struct inode *inode,
int mds, int drop, int unless, int force)
int ceph_encode_dentry_release(void **p, struct dentry *dentry,
int mds, int drop, int unless)
