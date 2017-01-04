extern struct proc_dir_entry proc_root;
extern int proc_sys_init(void);
static inline void proc_sys_init(void)
extern int proc_net_init(void);
static inline int proc_net_init(void)
struct vmalloc_info ;
extern struct mm_struct *mm_for_maps(struct task_struct *);
#define VMALLOC_TOTAL (VMALLOC_END - VMALLOC_START)
extern void get_vmalloc_info(struct vmalloc_info *vmi);
#define VMALLOC_TOTAL 0UL
#define get_vmalloc_info(vmi)			\
do  while(0)
extern int proc_tid_stat(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task);
extern int proc_tgid_stat(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task);
extern int proc_pid_status(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task);
extern int proc_pid_statm(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task);
extern loff_t mem_lseek(struct file *file, loff_t offset, int orig);
extern const struct file_operations proc_maps_operations;
extern const struct file_operations proc_numa_maps_operations;
extern const struct file_operations proc_smaps_operations;
extern const struct file_operations proc_clear_refs_operations;
extern const struct file_operations proc_pagemap_operations;
extern const struct file_operations proc_net_operations;
extern const struct inode_operations proc_net_inode_operations;
struct proc_maps_private ;
void proc_init_inodecache(void);
static inline struct pid *proc_pid(struct inode *inode)
static inline struct task_struct *get_proc_task(struct inode *inode)
static inline int proc_fd(struct inode *inode)
struct dentry *proc_lookup_de(struct proc_dir_entry *de, struct inode *ino,
struct dentry *dentry);
int proc_readdir_de(struct proc_dir_entry *de, struct file *filp, void *dirent,
filldir_t filldir);
struct pde_opener ;
void pde_users_dec(struct proc_dir_entry *pde);
extern spinlock_t proc_subdir_lock;
struct dentry *proc_pid_lookup(struct inode *dir, struct dentry * dentry, struct nameidata *);
int proc_pid_readdir(struct file * filp, void * dirent, filldir_t filldir);
unsigned long task_vsize(struct mm_struct *);
unsigned long task_statm(struct mm_struct *,
unsigned long *, unsigned long *, unsigned long *, unsigned long *);
void task_mem(struct seq_file *, struct mm_struct *);
static inline struct proc_dir_entry *pde_get(struct proc_dir_entry *pde)
void pde_put(struct proc_dir_entry *pde);
int proc_fill_super(struct super_block *);
struct inode *proc_get_inode(struct super_block *, struct proc_dir_entry *);
int proc_readdir(struct file *, void *, filldir_t);
struct dentry *proc_lookup(struct inode *, struct dentry *, struct nameidata *);
typedef struct dentry *instantiate_t(struct inode *, struct dentry *,
struct task_struct *, const void *);
int proc_fill_cache(struct file *filp, void *dirent, filldir_t filldir,
const char *name, int len,
instantiate_t instantiate, struct task_struct *task, const void *ptr);
int pid_revalidate(struct dentry *dentry, struct nameidata *nd);
struct inode *proc_pid_make_inode(struct super_block * sb, struct task_struct *task);
extern const struct dentry_operations pid_dentry_operations;
int pid_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat);
int proc_setattr(struct dentry *dentry, struct iattr *attr);
extern const struct inode_operations proc_ns_dir_inode_operations;
extern const struct file_operations proc_ns_dir_operations;
