#define INC_DIR_INODE_NLINK(i) if (i->i_nlink != 1)
#define DEC_DIR_INODE_NLINK(i) if (i->i_nlink != 1) drop_nlink(i);
static int bin_search_in_dir_item(struct reiserfs_dir_entry *de, loff_t off)
static inline void set_de_item_location(struct reiserfs_dir_entry *de,
struct treepath *path)
inline void set_de_name_and_namelen(struct reiserfs_dir_entry *de)
static inline void set_de_object_key(struct reiserfs_dir_entry *de)
static inline void store_de_entry_key(struct reiserfs_dir_entry *de)
int search_by_entry_key(struct super_block *sb, const struct cpu_key *key,
struct treepath *path, struct reiserfs_dir_entry *de)
static __u32 get_third_component(struct super_block *s,
const char *name, int len)
static int reiserfs_match(struct reiserfs_dir_entry *de,
const char *name, int namelen)
static int linear_search_in_dir_item(struct cpu_key *key,
struct reiserfs_dir_entry *de,
const char *name, int namelen)
static int reiserfs_find_entry(struct inode *dir, const char *name, int namelen,
struct treepath *path_to_entry,
struct reiserfs_dir_entry *de)
static struct dentry *reiserfs_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
struct dentry *reiserfs_get_parent(struct dentry *child)
static int reiserfs_add_entry(struct reiserfs_transaction_handle *th,
struct inode *dir, const char *name, int namelen,
struct inode *inode, int visible)
static int drop_new_inode(struct inode *inode)
static int new_inode_init(struct inode *inode, struct inode *dir, int mode)
static int reiserfs_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int reiserfs_mknod(struct inode *dir, struct dentry *dentry, int mode,
dev_t rdev)
static int reiserfs_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static inline int reiserfs_empty_dir(struct inode *inode)
static int reiserfs_rmdir(struct inode *dir, struct dentry *dentry)
static int reiserfs_unlink(struct inode *dir, struct dentry *dentry)
static int reiserfs_symlink(struct inode *parent_dir,
struct dentry *dentry, const char *symname)
static int reiserfs_link(struct dentry *old_dentry, struct inode *dir,
struct dentry *dentry)
static int de_still_valid(const char *name, int len,
struct reiserfs_dir_entry *de)
static int entry_points_to_object(const char *name, int len,
struct reiserfs_dir_entry *de,
struct inode *inode)
static void set_ino_in_dir_entry(struct reiserfs_dir_entry *de,
struct reiserfs_key *key)
static int reiserfs_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
const struct inode_operations reiserfs_dir_inode_operations = ;
const struct inode_operations reiserfs_symlink_inode_operations = ;
const struct inode_operations reiserfs_special_inode_operations = ;
