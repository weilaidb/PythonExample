#define OCFS2_INODE_H
struct ocfs2_inode_info
;
#define OCFS2_INODE_SYSTEM_FILE		0x00000001
#define OCFS2_INODE_JOURNAL		0x00000002
#define OCFS2_INODE_BITMAP		0x00000004
#define OCFS2_INODE_DELETED		0x00000008
#define OCFS2_INODE_SKIP_DELETE		0x00000010
#define OCFS2_INODE_MAYBE_ORPHANED	0x00000020
#define OCFS2_INODE_OPEN_DIRECT		0x00000040
#define OCFS2_INODE_SKIP_ORPHAN_DIR     0x00000080
static inline struct ocfs2_inode_info *OCFS2_I(struct inode *inode)
#define INODE_JOURNAL(i) (OCFS2_I(i)->ip_flags & OCFS2_INODE_JOURNAL)
#define SET_INODE_JOURNAL(i) (OCFS2_I(i)->ip_flags |= OCFS2_INODE_JOURNAL)
extern struct kmem_cache *ocfs2_inode_cache;
extern const struct address_space_operations ocfs2_aops;
extern const struct ocfs2_caching_operations ocfs2_inode_caching_ops;
static inline struct ocfs2_caching_info *INODE_CACHE(struct inode *inode)
void ocfs2_evict_inode(struct inode *inode);
int ocfs2_drop_inode(struct inode *inode);
#define OCFS2_FI_FLAG_SYSFILE		0x1
#define OCFS2_FI_FLAG_ORPHAN_RECOVERY	0x2
struct inode *ocfs2_ilookup(struct super_block *sb, u64 feoff);
struct inode *ocfs2_iget(struct ocfs2_super *osb, u64 feoff, unsigned flags,
int sysfile_type);
int ocfs2_inode_init_private(struct inode *inode);
int ocfs2_inode_revalidate(struct dentry *dentry);
void ocfs2_populate_inode(struct inode *inode, struct ocfs2_dinode *fe,
int create_ino);
void ocfs2_read_inode(struct inode *inode);
void ocfs2_read_inode2(struct inode *inode, void *opaque);
ssize_t ocfs2_rw_direct(int rw, struct file *filp, char *buf,
size_t size, loff_t *offp);
void ocfs2_sync_blockdev(struct super_block *sb);
void ocfs2_refresh_inode(struct inode *inode,
struct ocfs2_dinode *fe);
int ocfs2_mark_inode_dirty(handle_t *handle,
struct inode *inode,
struct buffer_head *bh);
int ocfs2_aio_read(struct file *file, struct kiocb *req, struct iocb *iocb);
int ocfs2_aio_write(struct file *file, struct kiocb *req, struct iocb *iocb);
struct buffer_head *ocfs2_bread(struct inode *inode,
int block, int *err, int reada);
void ocfs2_set_inode_flags(struct inode *inode);
void ocfs2_get_inode_flags(struct ocfs2_inode_info *oi);
static inline blkcnt_t ocfs2_inode_sector_count(struct inode *inode)
int ocfs2_validate_inode_block(struct super_block *sb,
struct buffer_head *bh);
int ocfs2_read_inode_block(struct inode *inode, struct buffer_head **bh);
int ocfs2_read_inode_block_full(struct inode *inode, struct buffer_head **bh,
int flags);
static inline struct ocfs2_inode_info *cache_info_to_inode(struct ocfs2_caching_info *ci)
