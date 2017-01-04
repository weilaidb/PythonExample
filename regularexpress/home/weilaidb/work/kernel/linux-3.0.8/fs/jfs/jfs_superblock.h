#define _H_JFS_SUPERBLOCK
#define JFS_MAGIC	"JFS1"
#define JFS_VERSION	2
#define LV_NAME_SIZE	11
struct jfs_superblock ;
extern int readSuper(struct super_block *, struct buffer_head **);
extern int updateSuper(struct super_block *, uint);
extern void jfs_error(struct super_block *, const char *, ...);
extern int jfs_mount(struct super_block *);
extern int jfs_mount_rw(struct super_block *, int);
extern int jfs_umount(struct super_block *);
extern int jfs_umount_rw(struct super_block *);
extern int jfs_extendfs(struct super_block *, s64, int);
extern struct task_struct *jfsIOthread;
extern struct task_struct *jfsSyncThread;
