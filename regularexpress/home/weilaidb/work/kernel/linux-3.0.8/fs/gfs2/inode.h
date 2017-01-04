#define __INODE_DOT_H__
extern int gfs2_releasepage(struct page *page, gfp_t gfp_mask);
extern int gfs2_internal_read(struct gfs2_inode *ip,
struct file_ra_state *ra_state,
char *buf, loff_t *pos, unsigned size);
extern void gfs2_page_add_databufs(struct gfs2_inode *ip, struct page *page,
unsigned int from, unsigned int to);
extern void gfs2_set_aops(struct inode *inode);
static inline int gfs2_is_stuffed(const struct gfs2_inode *ip)
static inline int gfs2_is_jdata(const struct gfs2_inode *ip)
static inline int gfs2_is_writeback(const struct gfs2_inode *ip)
static inline int gfs2_is_ordered(const struct gfs2_inode *ip)
static inline int gfs2_is_dir(const struct gfs2_inode *ip)
static inline void gfs2_set_inode_blocks(struct inode *inode, u64 blocks)
static inline u64 gfs2_get_inode_blocks(const struct inode *inode)
static inline void gfs2_add_inode_blocks(struct inode *inode, s64 change)
static inline int gfs2_check_inum(const struct gfs2_inode *ip, u64 no_addr,
u64 no_formal_ino)
static inline void gfs2_inum_out(const struct gfs2_inode *ip,
struct gfs2_dirent *dent)
static inline int gfs2_check_internal_file_size(struct inode *inode,
u64 minsize, u64 maxsize)
extern struct inode *gfs2_inode_lookup(struct super_block *sb, unsigned type,
u64 no_addr, u64 no_formal_ino,
int non_block);
extern struct inode *gfs2_lookup_by_inum(struct gfs2_sbd *sdp, u64 no_addr,
u64 *no_formal_ino,
unsigned int blktype);
extern struct inode *gfs2_ilookup(struct super_block *sb, u64 no_addr, int nonblock);
extern int gfs2_inode_refresh(struct gfs2_inode *ip);
extern struct inode *gfs2_lookupi(struct inode *dir, const struct qstr *name,
int is_root);
extern int gfs2_permission(struct inode *inode, int mask, unsigned int flags);
extern int gfs2_setattr_simple(struct gfs2_inode *ip, struct iattr *attr);
extern struct inode *gfs2_lookup_simple(struct inode *dip, const char *name);
extern void gfs2_dinode_out(const struct gfs2_inode *ip, void *buf);
extern const struct inode_operations gfs2_file_iops;
extern const struct inode_operations gfs2_dir_iops;
extern const struct inode_operations gfs2_symlink_iops;
extern const struct file_operations gfs2_file_fops_nolock;
extern const struct file_operations gfs2_dir_fops_nolock;
extern void gfs2_set_inode_flags(struct inode *inode);
extern const struct file_operations gfs2_file_fops;
extern const struct file_operations gfs2_dir_fops;
static inline int gfs2_localflocks(const struct gfs2_sbd *sdp)
#define gfs2_file_fops gfs2_file_fops_nolock
#define gfs2_dir_fops gfs2_dir_fops_nolock
static inline int gfs2_localflocks(const struct gfs2_sbd *sdp)
