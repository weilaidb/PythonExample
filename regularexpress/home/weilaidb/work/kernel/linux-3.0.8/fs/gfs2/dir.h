#define __DIR_DOT_H__
struct inode;
struct gfs2_inode;
struct gfs2_inum;
extern struct inode *gfs2_dir_search(struct inode *dir,
const struct qstr *filename);
extern int gfs2_dir_check(struct inode *dir, const struct qstr *filename,
const struct gfs2_inode *ip);
extern int gfs2_dir_add(struct inode *inode, const struct qstr *filename,
const struct gfs2_inode *ip);
extern int gfs2_dir_del(struct gfs2_inode *dip, const struct dentry *dentry);
extern int gfs2_dir_read(struct inode *inode, u64 *offset, void *opaque,
filldir_t filldir);
extern int gfs2_dir_mvino(struct gfs2_inode *dip, const struct qstr *filename,
const struct gfs2_inode *nip, unsigned int new_type);
extern int gfs2_dir_exhash_dealloc(struct gfs2_inode *dip);
extern int gfs2_diradd_alloc_required(struct inode *dir,
const struct qstr *filename);
extern int gfs2_dir_get_new_buffer(struct gfs2_inode *ip, u64 block,
struct buffer_head **bhp);
static inline u32 gfs2_disk_hash(const char *data, int len)
static inline void gfs2_str2qstr(struct qstr *name, const char *fname)
static inline void gfs2_qstr2dirent(const struct qstr *name, u16 reclen, struct gfs2_dirent *dent)
extern struct qstr gfs2_qdot;
extern struct qstr gfs2_qdotdot;
