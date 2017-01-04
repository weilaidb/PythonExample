#define _DEBUGFS_H_
struct file_operations;
struct debugfs_blob_wrapper ;
extern struct dentry *arch_debugfs_dir;
#if defined(CONFIG_DEBUG_FS)
extern const struct file_operations debugfs_file_operations;
extern const struct inode_operations debugfs_link_operations;
struct dentry *debugfs_create_file(const char *name, mode_t mode,
struct dentry *parent, void *data,
const struct file_operations *fops);
struct dentry *debugfs_create_dir(const char *name, struct dentry *parent);
struct dentry *debugfs_create_symlink(const char *name, struct dentry *parent,
const char *dest);
void debugfs_remove(struct dentry *dentry);
void debugfs_remove_recursive(struct dentry *dentry);
struct dentry *debugfs_rename(struct dentry *old_dir, struct dentry *old_dentry,
struct dentry *new_dir, const char *new_name);
struct dentry *debugfs_create_u8(const char *name, mode_t mode,
struct dentry *parent, u8 *value);
struct dentry *debugfs_create_u16(const char *name, mode_t mode,
struct dentry *parent, u16 *value);
struct dentry *debugfs_create_u32(const char *name, mode_t mode,
struct dentry *parent, u32 *value);
struct dentry *debugfs_create_u64(const char *name, mode_t mode,
struct dentry *parent, u64 *value);
struct dentry *debugfs_create_x8(const char *name, mode_t mode,
struct dentry *parent, u8 *value);
struct dentry *debugfs_create_x16(const char *name, mode_t mode,
struct dentry *parent, u16 *value);
struct dentry *debugfs_create_x32(const char *name, mode_t mode,
struct dentry *parent, u32 *value);
struct dentry *debugfs_create_x64(const char *name, mode_t mode,
struct dentry *parent, u64 *value);
struct dentry *debugfs_create_size_t(const char *name, mode_t mode,
struct dentry *parent, size_t *value);
struct dentry *debugfs_create_bool(const char *name, mode_t mode,
struct dentry *parent, u32 *value);
struct dentry *debugfs_create_blob(const char *name, mode_t mode,
struct dentry *parent,
struct debugfs_blob_wrapper *blob);
bool debugfs_initialized(void);
static inline struct dentry *debugfs_create_file(const char *name, mode_t mode,
struct dentry *parent, void *data,
const struct file_operations *fops)
static inline struct dentry *debugfs_create_dir(const char *name,
struct dentry *parent)
static inline struct dentry *debugfs_create_symlink(const char *name,
struct dentry *parent,
const char *dest)
static inline void debugfs_remove(struct dentry *dentry)
static inline void debugfs_remove_recursive(struct dentry *dentry)
static inline struct dentry *debugfs_rename(struct dentry *old_dir, struct dentry *old_dentry,
struct dentry *new_dir, char *new_name)
static inline struct dentry *debugfs_create_u8(const char *name, mode_t mode,
struct dentry *parent,
u8 *value)
static inline struct dentry *debugfs_create_u16(const char *name, mode_t mode,
struct dentry *parent,
u16 *value)
static inline struct dentry *debugfs_create_u32(const char *name, mode_t mode,
struct dentry *parent,
u32 *value)
static inline struct dentry *debugfs_create_u64(const char *name, mode_t mode,
struct dentry *parent,
u64 *value)
static inline struct dentry *debugfs_create_x8(const char *name, mode_t mode,
struct dentry *parent,
u8 *value)
static inline struct dentry *debugfs_create_x16(const char *name, mode_t mode,
struct dentry *parent,
u16 *value)
static inline struct dentry *debugfs_create_x32(const char *name, mode_t mode,
struct dentry *parent,
u32 *value)
static inline struct dentry *debugfs_create_size_t(const char *name, mode_t mode,
struct dentry *parent,
size_t *value)
static inline struct dentry *debugfs_create_bool(const char *name, mode_t mode,
struct dentry *parent,
u32 *value)
static inline struct dentry *debugfs_create_blob(const char *name, mode_t mode,
struct dentry *parent,
struct debugfs_blob_wrapper *blob)
static inline bool debugfs_initialized(void)
