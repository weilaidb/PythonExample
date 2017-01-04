#define _NILFS_H
struct nilfs_inode_info ;
static inline struct nilfs_inode_info *NILFS_I(const struct inode *inode)
static inline struct nilfs_inode_info *
NILFS_BMAP_I(const struct nilfs_bmap *bmap)
static inline struct inode *NILFS_BTNC_I(struct address_space *btnc)
enum ;
enum ;
#define NILFS_MDT_INO_BITS   \
((unsigned int)(1 << NILFS_DAT_INO | 1 << NILFS_CPFILE_INO |	\
1 << NILFS_SUFILE_INO | 1 << NILFS_IFILE_INO |	\
1 << NILFS_ATIME_INO | 1 << NILFS_SKETCH_INO))
#define NILFS_SYS_INO_BITS   \
((unsigned int)(1 << NILFS_ROOT_INO) | NILFS_MDT_INO_BITS)
#define NILFS_FIRST_INO(sb) (((struct the_nilfs *)sb->s_fs_info)->ns_first_ino)
#define NILFS_MDT_INODE(sb, ino) \
((ino) < NILFS_FIRST_INO(sb) && (NILFS_MDT_INO_BITS & (1 << (ino))))
#define NILFS_VALID_INODE(sb, ino) \
((ino) >= NILFS_FIRST_INO(sb) || (NILFS_SYS_INO_BITS & (1 << (ino))))
struct nilfs_transaction_info ;
#define NILFS_TI_MAGIC		0xd9e392fb
#define NILFS_TI_DYNAMIC_ALLOC	0x0001
#define NILFS_TI_SYNC		0x0002
#define NILFS_TI_GC		0x0004
#define NILFS_TI_COMMIT		0x0008
#define NILFS_TI_WRITER		0x0010
int nilfs_transaction_begin(struct super_block *,
struct nilfs_transaction_info *, int);
int nilfs_transaction_commit(struct super_block *);
void nilfs_transaction_abort(struct super_block *);
static inline void nilfs_set_transaction_flag(unsigned int flag)
static inline int nilfs_test_transaction_flag(unsigned int flag)
static inline int nilfs_doing_gc(void)
static inline int nilfs_doing_construction(void)
#error "NILFS: not yet supported POSIX ACL"
extern int nilfs_acl_chmod(struct inode *);
extern int nilfs_init_acl(struct inode *, struct inode *);
static inline int nilfs_acl_chmod(struct inode *inode)
static inline int nilfs_init_acl(struct inode *inode, struct inode *dir)
#define NILFS_ATIME_DISABLE
#define NILFS_FL_INHERITED						\
(FS_SECRM_FL | FS_UNRM_FL | FS_COMPR_FL | FS_SYNC_FL |		\
FS_IMMUTABLE_FL | FS_APPEND_FL | FS_NODUMP_FL | FS_NOATIME_FL |\
FS_COMPRBLK_FL | FS_NOCOMP_FL | FS_NOTAIL_FL | FS_DIRSYNC_FL)
static inline __u32 nilfs_mask_flags(umode_t mode, __u32 flags)
extern int nilfs_add_link(struct dentry *, struct inode *);
extern ino_t nilfs_inode_by_name(struct inode *, const struct qstr *);
extern int nilfs_make_empty(struct inode *, struct inode *);
extern struct nilfs_dir_entry *
nilfs_find_entry(struct inode *, const struct qstr *, struct page **);
extern int nilfs_delete_entry(struct nilfs_dir_entry *, struct page *);
extern int nilfs_empty_dir(struct inode *);
extern struct nilfs_dir_entry *nilfs_dotdot(struct inode *, struct page **);
extern void nilfs_set_link(struct inode *, struct nilfs_dir_entry *,
struct page *, struct inode *);
extern int nilfs_sync_file(struct file *, int);
long nilfs_ioctl(struct file *, unsigned int, unsigned long);
long nilfs_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
int nilfs_ioctl_prepare_clean_segments(struct the_nilfs *, struct nilfs_argv *,
void **);
void nilfs_inode_add_blocks(struct inode *inode, int n);
void nilfs_inode_sub_blocks(struct inode *inode, int n);
extern struct inode *nilfs_new_inode(struct inode *, int);
extern void nilfs_free_inode(struct inode *);
extern int nilfs_get_block(struct inode *, sector_t, struct buffer_head *, int);
extern void nilfs_set_inode_flags(struct inode *);
extern int nilfs_read_inode_common(struct inode *, struct nilfs_inode *);
extern void nilfs_write_inode_common(struct inode *, struct nilfs_inode *, int);
struct inode *nilfs_ilookup(struct super_block *sb, struct nilfs_root *root,
unsigned long ino);
struct inode *nilfs_iget_locked(struct super_block *sb, struct nilfs_root *root,
unsigned long ino);
struct inode *nilfs_iget(struct super_block *sb, struct nilfs_root *root,
unsigned long ino);
extern struct inode *nilfs_iget_for_gc(struct super_block *sb,
unsigned long ino, __u64 cno);
extern void nilfs_update_inode(struct inode *, struct buffer_head *);
extern void nilfs_truncate(struct inode *);
extern void nilfs_evict_inode(struct inode *);
extern int nilfs_setattr(struct dentry *, struct iattr *);
int nilfs_permission(struct inode *inode, int mask, unsigned int flags);
int nilfs_load_inode_block(struct inode *inode, struct buffer_head **pbh);
extern int nilfs_inode_dirty(struct inode *);
int nilfs_set_file_dirty(struct inode *inode, unsigned nr_dirty);
extern int nilfs_mark_inode_dirty(struct inode *);
extern void nilfs_dirty_inode(struct inode *, int flags);
int nilfs_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
__u64 start, __u64 len);
extern struct inode *nilfs_alloc_inode(struct super_block *);
extern void nilfs_destroy_inode(struct inode *);
extern void nilfs_error(struct super_block *, const char *, const char *, ...)
__attribute__ ((format (printf, 3, 4)));
extern void nilfs_warning(struct super_block *, const char *, const char *, ...)
__attribute__ ((format (printf, 3, 4)));
extern struct nilfs_super_block *
nilfs_read_super_block(struct super_block *, u64, int, struct buffer_head **);
extern int nilfs_store_magic_and_option(struct super_block *,
struct nilfs_super_block *, char *);
extern int nilfs_check_feature_compatibility(struct super_block *,
struct nilfs_super_block *);
extern void nilfs_set_log_cursor(struct nilfs_super_block *,
struct the_nilfs *);
struct nilfs_super_block **nilfs_prepare_super(struct super_block *sb,
int flip);
int nilfs_commit_super(struct super_block *sb, int flag);
int nilfs_cleanup_super(struct super_block *sb);
int nilfs_resize_fs(struct super_block *sb, __u64 newsize);
int nilfs_attach_checkpoint(struct super_block *sb, __u64 cno, int curr_mnt,
struct nilfs_root **root);
int nilfs_checkpoint_is_mounted(struct super_block *sb, __u64 cno);
int nilfs_gccache_submit_read_data(struct inode *, sector_t, sector_t, __u64,
struct buffer_head **);
int nilfs_gccache_submit_read_node(struct inode *, sector_t, __u64,
struct buffer_head **);
int nilfs_gccache_wait_and_mark_dirty(struct buffer_head *);
int nilfs_init_gcinode(struct inode *inode);
void nilfs_remove_all_gcinodes(struct the_nilfs *nilfs);
extern const struct file_operations nilfs_dir_operations;
extern const struct inode_operations nilfs_file_inode_operations;
extern const struct file_operations nilfs_file_operations;
extern const struct address_space_operations nilfs_aops;
extern const struct inode_operations nilfs_dir_inode_operations;
extern const struct inode_operations nilfs_special_inode_operations;
extern const struct inode_operations nilfs_symlink_inode_operations;
extern struct file_system_type nilfs_fs_type;
