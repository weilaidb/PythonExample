#define _HYPFS_H_
#define REG_FILE_MODE    0440
#define UPDATE_FILE_MODE 0220
#define DIR_MODE         0550
extern struct dentry *hypfs_mkdir(struct super_block *sb, struct dentry *parent,
const char *name);
extern struct dentry *hypfs_create_u64(struct super_block *sb,
struct dentry *dir, const char *name,
__u64 value);
extern struct dentry *hypfs_create_str(struct super_block *sb,
struct dentry *dir, const char *name,
char *string);
extern int hypfs_diag_init(void);
extern void hypfs_diag_exit(void);
extern int hypfs_diag_create_files(struct super_block *sb, struct dentry *root);
extern int hypfs_vm_init(void);
extern void hypfs_vm_exit(void);
extern int hypfs_vm_create_files(struct super_block *sb, struct dentry *root);
struct hypfs_dbfs_file;
struct hypfs_dbfs_data ;
struct hypfs_dbfs_file ;
extern int hypfs_dbfs_init(void);
extern void hypfs_dbfs_exit(void);
extern int hypfs_dbfs_create_file(struct hypfs_dbfs_file *df);
extern void hypfs_dbfs_remove_file(struct hypfs_dbfs_file *df);
