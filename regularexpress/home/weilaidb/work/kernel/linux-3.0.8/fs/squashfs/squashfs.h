#define TRACE(s, args...)	pr_debug("SQUASHFS: "s, ## args)
#define ERROR(s, args...)	pr_err("SQUASHFS error: "s, ## args)
#define WARNING(s, args...)	pr_warning("SQUASHFS: "s, ## args)
extern int squashfs_read_data(struct super_block *, void **, u64, int, u64 *,
int, int);
extern struct squashfs_cache *squashfs_cache_init(char *, int, int);
extern void squashfs_cache_delete(struct squashfs_cache *);
extern struct squashfs_cache_entry *squashfs_cache_get(struct super_block *,
struct squashfs_cache *, u64, int);
extern void squashfs_cache_put(struct squashfs_cache_entry *);
extern int squashfs_copy_data(void *, struct squashfs_cache_entry *, int, int);
extern int squashfs_read_metadata(struct super_block *, void *, u64 *,
int *, int);
extern struct squashfs_cache_entry *squashfs_get_fragment(struct super_block *,
u64, int);
extern struct squashfs_cache_entry *squashfs_get_datablock(struct super_block *,
u64, int);
extern void *squashfs_read_table(struct super_block *, u64, int);
extern const struct squashfs_decompressor *squashfs_lookup_decompressor(int);
extern void *squashfs_decompressor_init(struct super_block *, unsigned short);
extern __le64 *squashfs_read_inode_lookup_table(struct super_block *, u64, u64,
unsigned int);
extern int squashfs_frag_lookup(struct super_block *, unsigned int, u64 *);
extern __le64 *squashfs_read_fragment_index_table(struct super_block *,
u64, u64, unsigned int);
extern int squashfs_get_id(struct super_block *, unsigned int, unsigned int *);
extern __le64 *squashfs_read_id_index_table(struct super_block *, u64, u64,
unsigned short);
extern struct inode *squashfs_iget(struct super_block *, long long,
unsigned int);
extern int squashfs_read_inode(struct inode *, long long);
extern ssize_t squashfs_listxattr(struct dentry *, char *, size_t);
extern const struct file_operations squashfs_dir_ops;
extern const struct export_operations squashfs_export_ops;
extern const struct address_space_operations squashfs_aops;
extern const struct inode_operations squashfs_inode_ops;
extern const struct inode_operations squashfs_dir_inode_ops;
extern const struct address_space_operations squashfs_symlink_aops;
extern const struct inode_operations squashfs_symlink_inode_ops;
extern const struct xattr_handler *squashfs_xattr_handlers[];
extern const struct squashfs_decompressor squashfs_zlib_comp_ops;
