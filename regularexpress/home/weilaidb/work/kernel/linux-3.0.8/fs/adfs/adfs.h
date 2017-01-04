#define ADFS_FREE_FRAG		 0
#define ADFS_BAD_FRAG		 1
#define ADFS_ROOT_FRAG		 2
#define ADFS_NDA_OWNER_READ	(1 << 0)
#define ADFS_NDA_OWNER_WRITE	(1 << 1)
#define ADFS_NDA_LOCKED		(1 << 2)
#define ADFS_NDA_DIRECTORY	(1 << 3)
#define ADFS_NDA_EXECUTE	(1 << 4)
#define ADFS_NDA_PUBLIC_READ	(1 << 5)
#define ADFS_NDA_PUBLIC_WRITE	(1 << 6)
struct buffer_head;
struct adfs_inode_info ;
struct adfs_discmap;
struct adfs_dir_ops;
struct adfs_sb_info ;
static inline struct adfs_sb_info *ADFS_SB(struct super_block *sb)
static inline struct adfs_inode_info *ADFS_I(struct inode *inode)
struct adfs_dir ;
#define ADFS_MAX_NAME_LEN	(256 + 4)
struct object_info ;
static inline int append_filetype_suffix(char *buf, __u16 filetype)
struct adfs_dir_ops ;
struct adfs_discmap ;
struct inode *adfs_iget(struct super_block *sb, struct object_info *obj);
int adfs_write_inode(struct inode *inode, struct writeback_control *wbc);
int adfs_notify_change(struct dentry *dentry, struct iattr *attr);
extern int adfs_map_lookup(struct super_block *sb, unsigned int frag_id, unsigned int offset);
extern unsigned int adfs_map_free(struct super_block *sb);
void __adfs_error(struct super_block *sb, const char *function,
const char *fmt, ...);
#define adfs_error(sb, fmt...) __adfs_error(sb, __func__, fmt)
extern const struct inode_operations adfs_dir_inode_operations;
extern const struct file_operations adfs_dir_operations;
extern const struct dentry_operations adfs_dentry_operations;
extern struct adfs_dir_ops adfs_f_dir_ops;
extern struct adfs_dir_ops adfs_fplus_dir_ops;
extern int adfs_dir_update(struct super_block *sb, struct object_info *obj,
int wait);
extern const struct inode_operations adfs_file_inode_operations;
extern const struct file_operations adfs_file_operations;
static inline __u32 signed_asl(__u32 val, signed int shift)
static inline int
__adfs_block_map(struct super_block *sb, unsigned int object_id,
unsigned int block)
