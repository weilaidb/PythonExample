#define _LINUX_FS_STRUCT_H
struct fs_struct ;
extern struct kmem_cache *fs_cachep;
extern void exit_fs(struct task_struct *);
extern void set_fs_root(struct fs_struct *, struct path *);
extern void set_fs_pwd(struct fs_struct *, struct path *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void free_fs_struct(struct fs_struct *);
extern void daemonize_fs_struct(void);
extern int unshare_fs_struct(void);
static inline void get_fs_root(struct fs_struct *fs, struct path *root)
static inline void get_fs_pwd(struct fs_struct *fs, struct path *pwd)
static inline void get_fs_root_and_pwd(struct fs_struct *fs, struct path *root,
struct path *pwd)
