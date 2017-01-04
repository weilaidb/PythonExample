#define _LINUX_HFS_FS_H
#define DBG_BNODE_REFS	0x00000001
#define DBG_BNODE_MOD	0x00000002
#define DBG_CAT_MOD	0x00000004
#define DBG_INODE	0x00000008
#define DBG_SUPER	0x00000010
#define DBG_EXTENT	0x00000020
#define DBG_BITMAP	0x00000040
#define DBG_MASK	(0)
#define dprint(flg, fmt, args...) \
if (flg & DBG_MASK) printk(fmt , ## args)
struct hfs_inode_info ;
#define HFS_FLG_RSRC		0x0001
#define HFS_FLG_EXT_DIRTY	0x0002
#define HFS_FLG_EXT_NEW		0x0004
#define HFS_IS_RSRC(inode)	(HFS_I(inode)->flags & HFS_FLG_RSRC)
struct hfs_sb_info ;
#define HFS_FLG_BITMAP_DIRTY	0
#define HFS_FLG_MDB_DIRTY	1
#define HFS_FLG_ALT_MDB_DIRTY	2
extern u32 hfs_vbm_search_free(struct super_block *, u32, u32 *);
extern int hfs_clear_vbm_bits(struct super_block *, u16, u16);
extern int hfs_cat_keycmp(const btree_key *, const btree_key *);
struct hfs_find_data;
extern int hfs_cat_find_brec(struct super_block *, u32, struct hfs_find_data *);
extern int hfs_cat_create(u32, struct inode *, struct qstr *, struct inode *);
extern int hfs_cat_delete(u32, struct inode *, struct qstr *);
extern int hfs_cat_move(u32, struct inode *, struct qstr *,
struct inode *, struct qstr *);
extern void hfs_cat_build_key(struct super_block *, btree_key *, u32, struct qstr *);
extern const struct file_operations hfs_dir_operations;
extern const struct inode_operations hfs_dir_inode_operations;
extern int hfs_ext_keycmp(const btree_key *, const btree_key *);
extern int hfs_free_fork(struct super_block *, struct hfs_cat_file *, int);
extern void hfs_ext_write_extent(struct inode *);
extern int hfs_extend_file(struct inode *);
extern void hfs_file_truncate(struct inode *);
extern int hfs_get_block(struct inode *, sector_t, struct buffer_head *, int);
extern const struct address_space_operations hfs_aops;
extern const struct address_space_operations hfs_btree_aops;
extern struct inode *hfs_new_inode(struct inode *, struct qstr *, int);
extern void hfs_inode_write_fork(struct inode *, struct hfs_extent *, __be32 *, __be32 *);
extern int hfs_write_inode(struct inode *, struct writeback_control *);
extern int hfs_inode_setattr(struct dentry *, struct iattr *);
extern void hfs_inode_read_fork(struct inode *inode, struct hfs_extent *ext,
__be32 log_size, __be32 phys_size, u32 clump_size);
extern struct inode *hfs_iget(struct super_block *, struct hfs_cat_key *, hfs_cat_rec *);
extern void hfs_evict_inode(struct inode *);
extern void hfs_delete_inode(struct inode *);
extern int hfs_setxattr(struct dentry *dentry, const char *name,
const void *value, size_t size, int flags);
extern ssize_t hfs_getxattr(struct dentry *dentry, const char *name,
void *value, size_t size);
extern ssize_t hfs_listxattr(struct dentry *dentry, char *buffer, size_t size);
extern int hfs_mdb_get(struct super_block *);
extern void hfs_mdb_commit(struct super_block *);
extern void hfs_mdb_close(struct super_block *);
extern void hfs_mdb_put(struct super_block *);
extern int hfs_part_find(struct super_block *, sector_t *, sector_t *);
extern const struct dentry_operations hfs_dentry_operations;
extern int hfs_hash_dentry(const struct dentry *, const struct inode *,
struct qstr *);
extern int hfs_strcmp(const unsigned char *, unsigned int,
const unsigned char *, unsigned int);
extern int hfs_compare_dentry(const struct dentry *parent,
const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name);
extern void hfs_asc2mac(struct super_block *, struct hfs_name *, struct qstr *);
extern int hfs_mac2asc(struct super_block *, char *, const struct hfs_name *);
extern struct timezone sys_tz;
#define __hfs_u_to_mtime(sec)	cpu_to_be32(sec + 2082844800U - sys_tz.tz_minuteswest * 60)
#define __hfs_m_to_utime(sec)	(be32_to_cpu(sec) - 2082844800U  + sys_tz.tz_minuteswest * 60)
#define HFS_I(inode)	(list_entry(inode, struct hfs_inode_info, vfs_inode))
#define HFS_SB(sb)	((struct hfs_sb_info *)(sb)->s_fs_info)
#define hfs_m_to_utime(time)	(struct timespec)
#define hfs_u_to_mtime(time)	__hfs_u_to_mtime((time).tv_sec)
#define hfs_mtime()		__hfs_u_to_mtime(get_seconds())
static inline const char *hfs_mdb_name(struct super_block *sb)
static inline void hfs_bitmap_dirty(struct super_block *sb)
#define sb_bread512(sb, sec, data) ()
