#define _FS_CEPH_SUPER_H
#define CEPH_SUPER_MAGIC 0x00c36400
#define CEPH_BLOCK_SHIFT   20
#define CEPH_BLOCK         (1 << CEPH_BLOCK_SHIFT)
#define CEPH_MOUNT_OPT_DIRSTAT         (1<<4)
#define CEPH_MOUNT_OPT_RBYTES          (1<<5)
#define CEPH_MOUNT_OPT_NOASYNCREADDIR  (1<<7)
#define CEPH_MOUNT_OPT_INO32           (1<<8)
#define CEPH_MOUNT_OPT_DEFAULT    (CEPH_MOUNT_OPT_RBYTES)
#define ceph_set_mount_opt(fsc, opt) \
(fsc)->mount_options->flags |= CEPH_MOUNT_OPT_##opt;
#define ceph_test_mount_opt(fsc, opt) \
(!!((fsc)->mount_options->flags & CEPH_MOUNT_OPT_##opt))
#define CEPH_RSIZE_DEFAULT             (512*1024)
#define CEPH_MAX_READDIR_DEFAULT        1024
#define CEPH_MAX_READDIR_BYTES_DEFAULT  (512*1024)
#define CEPH_SNAPDIRNAME_DEFAULT        ".snap"
struct ceph_mount_options ;
struct ceph_fs_client ;
struct ceph_cap ;
#define CHECK_CAPS_NODELAY    1
#define CHECK_CAPS_AUTHONLY   2
#define CHECK_CAPS_FLUSH      4
struct ceph_cap_snap ;
static inline void ceph_put_cap_snap(struct ceph_cap_snap *capsnap)
#define CEPH_MAX_DIRFRAG_REP 4
struct ceph_inode_frag ;
struct ceph_inode_xattr ;
struct ceph_dentry_info ;
struct ceph_inode_xattrs_info ;
struct ceph_inode_info ;
static inline struct ceph_inode_info *ceph_inode(struct inode *inode)
static inline struct ceph_fs_client *ceph_inode_to_client(struct inode *inode)
static inline struct ceph_fs_client *ceph_sb_to_client(struct super_block *sb)
static inline struct ceph_vino ceph_vino(struct inode *inode)
static inline u32 ceph_ino_to_ino32(ino_t ino)
static inline ino_t ceph_vino_to_ino(struct ceph_vino vino)
#if BITS_PER_LONG == 32
static inline ino_t ceph_translate_ino(struct super_block *sb, ino_t ino)
static inline ino_t ceph_translate_ino(struct super_block *sb, ino_t ino)
#define ceph_vinop(i) ceph_inode(i)->i_vino.ino, ceph_inode(i)->i_vino.snap
static inline u64 ceph_ino(struct inode *inode)
static inline u64 ceph_snap(struct inode *inode)
static inline int ceph_ino_compare(struct inode *inode, void *data)
static inline struct inode *ceph_find_inode(struct super_block *sb,
struct ceph_vino vino)
#define CEPH_I_COMPLETE  1
#define CEPH_I_NODELAY   4
#define CEPH_I_FLUSH     8
#define CEPH_I_NOFLUSH  16
static inline void ceph_i_clear(struct inode *inode, unsigned mask)
static inline void ceph_i_set(struct inode *inode, unsigned mask)
static inline bool ceph_i_test(struct inode *inode, unsigned mask)
extern struct ceph_inode_frag *__ceph_find_frag(struct ceph_inode_info *ci,
u32 f);
extern u32 ceph_choose_frag(struct ceph_inode_info *ci, u32 v,
struct ceph_inode_frag *pfrag,
int *found);
static inline struct ceph_dentry_info *ceph_dentry(struct dentry *dentry)
static inline loff_t ceph_make_fpos(unsigned frag, unsigned off)
static inline bool __ceph_is_any_real_caps(struct ceph_inode_info *ci)
extern int __ceph_caps_issued(struct ceph_inode_info *ci, int *implemented);
extern int __ceph_caps_issued_mask(struct ceph_inode_info *ci, int mask, int t);
extern int __ceph_caps_issued_other(struct ceph_inode_info *ci,
struct ceph_cap *cap);
static inline int ceph_caps_issued(struct ceph_inode_info *ci)
static inline int ceph_caps_issued_mask(struct ceph_inode_info *ci, int mask,
int touch)
static inline int __ceph_caps_dirty(struct ceph_inode_info *ci)
extern int __ceph_mark_dirty_caps(struct ceph_inode_info *ci, int mask);
extern int ceph_caps_revoking(struct ceph_inode_info *ci, int mask);
extern int __ceph_caps_used(struct ceph_inode_info *ci);
extern int __ceph_caps_file_wanted(struct ceph_inode_info *ci);
static inline int __ceph_caps_wanted(struct ceph_inode_info *ci)
extern int __ceph_caps_mds_wanted(struct ceph_inode_info *ci);
extern void ceph_caps_init(struct ceph_mds_client *mdsc);
extern void ceph_caps_finalize(struct ceph_mds_client *mdsc);
extern void ceph_adjust_min_caps(struct ceph_mds_client *mdsc, int delta);
extern int ceph_reserve_caps(struct ceph_mds_client *mdsc,
struct ceph_cap_reservation *ctx, int need);
extern int ceph_unreserve_caps(struct ceph_mds_client *mdsc,
struct ceph_cap_reservation *ctx);
extern void ceph_reservation_status(struct ceph_fs_client *client,
int *total, int *avail, int *used,
int *reserved, int *min);
struct ceph_file_info ;
struct ceph_snap_realm ;
static inline int default_congestion_kb(void)
struct ceph_snap_realm *ceph_lookup_snap_realm(struct ceph_mds_client *mdsc,
u64 ino);
extern void ceph_get_snap_realm(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm);
extern void ceph_put_snap_realm(struct ceph_mds_client *mdsc,
struct ceph_snap_realm *realm);
extern int ceph_update_snap_trace(struct ceph_mds_client *m,
void *p, void *e, bool deletion);
extern void ceph_handle_snap(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session,
struct ceph_msg *msg);
extern void ceph_queue_cap_snap(struct ceph_inode_info *ci);
extern int __ceph_finish_cap_snap(struct ceph_inode_info *ci,
struct ceph_cap_snap *capsnap);
extern void ceph_cleanup_empty_realms(struct ceph_mds_client *mdsc);
static inline bool __ceph_have_pending_cap_snap(struct ceph_inode_info *ci)
extern const struct inode_operations ceph_file_iops;
extern struct inode *ceph_alloc_inode(struct super_block *sb);
extern void ceph_destroy_inode(struct inode *inode);
extern struct inode *ceph_get_inode(struct super_block *sb,
struct ceph_vino vino);
extern struct inode *ceph_get_snapdir(struct inode *parent);
extern int ceph_fill_file_size(struct inode *inode, int issued,
u32 truncate_seq, u64 truncate_size, u64 size);
extern void ceph_fill_file_time(struct inode *inode, int issued,
u64 time_warp_seq, struct timespec *ctime,
struct timespec *mtime, struct timespec *atime);
extern int ceph_fill_trace(struct super_block *sb,
struct ceph_mds_request *req,
struct ceph_mds_session *session);
extern int ceph_readdir_prepopulate(struct ceph_mds_request *req,
struct ceph_mds_session *session);
extern int ceph_inode_holds_cap(struct inode *inode, int mask);
extern int ceph_inode_set_size(struct inode *inode, loff_t size);
extern void __ceph_do_pending_vmtruncate(struct inode *inode);
extern void ceph_queue_vmtruncate(struct inode *inode);
extern void ceph_queue_invalidate(struct inode *inode);
extern void ceph_queue_writeback(struct inode *inode);
extern int ceph_do_getattr(struct inode *inode, int mask);
extern int ceph_permission(struct inode *inode, int mask, unsigned int flags);
extern int ceph_setattr(struct dentry *dentry, struct iattr *attr);
extern int ceph_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat);
extern int ceph_setxattr(struct dentry *, const char *, const void *,
size_t, int);
extern ssize_t ceph_getxattr(struct dentry *, const char *, void *, size_t);
extern ssize_t ceph_listxattr(struct dentry *, char *, size_t);
extern int ceph_removexattr(struct dentry *, const char *);
extern void __ceph_build_xattrs_blob(struct ceph_inode_info *ci);
extern void __ceph_destroy_xattrs(struct ceph_inode_info *ci);
extern const char *ceph_cap_string(int c);
extern void ceph_handle_caps(struct ceph_mds_session *session,
struct ceph_msg *msg);
extern int ceph_add_cap(struct inode *inode,
struct ceph_mds_session *session, u64 cap_id,
int fmode, unsigned issued, unsigned wanted,
unsigned cap, unsigned seq, u64 realmino, int flags,
struct ceph_cap_reservation *caps_reservation);
extern void __ceph_remove_cap(struct ceph_cap *cap);
static inline void ceph_remove_cap(struct ceph_cap *cap)
extern void ceph_put_cap(struct ceph_mds_client *mdsc,
struct ceph_cap *cap);
extern void ceph_queue_caps_release(struct inode *inode);
extern int ceph_write_inode(struct inode *inode, struct writeback_control *wbc);
extern int ceph_fsync(struct file *file, int datasync);
extern void ceph_kick_flushing_caps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session);
extern struct ceph_cap *ceph_get_cap_for_mds(struct ceph_inode_info *ci,
int mds);
extern int ceph_get_cap_mds(struct inode *inode);
extern void ceph_get_cap_refs(struct ceph_inode_info *ci, int caps);
extern void ceph_put_cap_refs(struct ceph_inode_info *ci, int had);
extern void ceph_put_wrbuffer_cap_refs(struct ceph_inode_info *ci, int nr,
struct ceph_snap_context *snapc);
extern void __ceph_flush_snaps(struct ceph_inode_info *ci,
struct ceph_mds_session **psession,
int again);
extern void ceph_check_caps(struct ceph_inode_info *ci, int flags,
struct ceph_mds_session *session);
extern void ceph_check_delayed_caps(struct ceph_mds_client *mdsc);
extern void ceph_flush_dirty_caps(struct ceph_mds_client *mdsc);
extern int ceph_encode_inode_release(void **p, struct inode *inode,
int mds, int drop, int unless, int force);
extern int ceph_encode_dentry_release(void **p, struct dentry *dn,
int mds, int drop, int unless);
extern int ceph_get_caps(struct ceph_inode_info *ci, int need, int want,
int *got, loff_t endoff);
static inline void __ceph_get_fmode(struct ceph_inode_info *ci, int mode)
extern void ceph_put_fmode(struct ceph_inode_info *ci, int mode);
extern const struct address_space_operations ceph_aops;
extern int ceph_mmap(struct file *file, struct vm_area_struct *vma);
extern const struct file_operations ceph_file_fops;
extern const struct address_space_operations ceph_aops;
extern int ceph_copy_to_page_vector(struct page **pages,
const char *data,
loff_t off, size_t len);
extern int ceph_copy_from_page_vector(struct page **pages,
char *data,
loff_t off, size_t len);
extern struct page **ceph_alloc_page_vector(int num_pages, gfp_t flags);
extern int ceph_open(struct inode *inode, struct file *file);
extern struct dentry *ceph_lookup_open(struct inode *dir, struct dentry *dentry,
struct nameidata *nd, int mode,
int locked_dir);
extern int ceph_release(struct inode *inode, struct file *filp);
extern const struct file_operations ceph_dir_fops;
extern const struct inode_operations ceph_dir_iops;
extern const struct dentry_operations ceph_dentry_ops, ceph_snap_dentry_ops,
ceph_snapdir_dentry_ops;
extern int ceph_handle_notrace_create(struct inode *dir, struct dentry *dentry);
extern struct dentry *ceph_finish_lookup(struct ceph_mds_request *req,
struct dentry *dentry, int err);
extern void ceph_dentry_lru_add(struct dentry *dn);
extern void ceph_dentry_lru_touch(struct dentry *dn);
extern void ceph_dentry_lru_del(struct dentry *dn);
extern void ceph_invalidate_dentry_lease(struct dentry *dentry);
extern unsigned ceph_dentry_hash(struct dentry *dn);
int ceph_init_dentry(struct dentry *dentry);
extern long ceph_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
extern const struct export_operations ceph_export_ops;
extern int ceph_lock(struct file *file, int cmd, struct file_lock *fl);
extern int ceph_flock(struct file *file, int cmd, struct file_lock *fl);
extern void ceph_count_locks(struct inode *inode, int *p_num, int *f_num);
extern int ceph_encode_locks(struct inode *i, struct ceph_pagelist *p,
int p_locks, int f_locks);
extern int lock_to_ceph_filelock(struct file_lock *fl, struct ceph_filelock *c);
static inline struct inode *get_dentry_parent_inode(struct dentry *dentry)
extern int ceph_fs_debugfs_init(struct ceph_fs_client *client);
extern void ceph_fs_debugfs_cleanup(struct ceph_fs_client *client);
