#define _LINUX_PROC_FS_H
struct net;
struct completion;
struct mm_struct;
#define FIRST_PROCESS_ENTRY 256
#define PROC_NUMBUF 13
enum ;
typedef	int (read_proc_t)(char *page, char **start, off_t off,
int count, int *eof, void *data);
typedef	int (write_proc_t)(struct file *file, const char __user *buffer,
unsigned long count, void *data);
struct proc_dir_entry ;
enum kcore_type ;
struct kcore_list ;
struct vmcore ;
extern void proc_root_init(void);
void proc_flush_task(struct task_struct *task);
extern struct proc_dir_entry *create_proc_entry(const char *name, mode_t mode,
struct proc_dir_entry *parent);
struct proc_dir_entry *proc_create_data(const char *name, mode_t mode,
struct proc_dir_entry *parent,
const struct file_operations *proc_fops,
void *data);
extern void remove_proc_entry(const char *name, struct proc_dir_entry *parent);
struct pid_namespace;
extern int pid_ns_prepare_proc(struct pid_namespace *ns);
extern void pid_ns_release_proc(struct pid_namespace *ns);
struct tty_driver;
extern void proc_tty_init(void);
extern void proc_tty_register_driver(struct tty_driver *driver);
extern void proc_tty_unregister_driver(struct tty_driver *driver);
struct device_node;
struct property;
extern void proc_device_tree_init(void);
extern void proc_device_tree_add_node(struct device_node *, struct proc_dir_entry *);
extern void proc_device_tree_add_prop(struct proc_dir_entry *pde, struct property *prop);
extern void proc_device_tree_remove_prop(struct proc_dir_entry *pde,
struct property *prop);
extern void proc_device_tree_update_prop(struct proc_dir_entry *pde,
struct property *newprop,
struct property *oldprop);
extern struct proc_dir_entry *proc_symlink(const char *,
struct proc_dir_entry *, const char *);
extern struct proc_dir_entry *proc_mkdir(const char *,struct proc_dir_entry *);
extern struct proc_dir_entry *proc_mkdir_mode(const char *name, mode_t mode,
struct proc_dir_entry *parent);
static inline struct proc_dir_entry *proc_create(const char *name, mode_t mode,
struct proc_dir_entry *parent, const struct file_operations *proc_fops)
static inline struct proc_dir_entry *create_proc_read_entry(const char *name,
mode_t mode, struct proc_dir_entry *base,
read_proc_t *read_proc, void * data)
extern struct proc_dir_entry *proc_net_fops_create(struct net *net,
const char *name, mode_t mode, const struct file_operations *fops);
extern void proc_net_remove(struct net *net, const char *name);
extern struct proc_dir_entry *proc_net_mkdir(struct net *net, const char *name,
struct proc_dir_entry *parent);
extern struct file *proc_ns_fget(int fd);
#define proc_net_fops_create(net, name, mode, fops)  ()
static inline void proc_net_remove(struct net *net, const char *name)
static inline void proc_flush_task(struct task_struct *task)
static inline struct proc_dir_entry *create_proc_entry(const char *name,
mode_t mode, struct proc_dir_entry *parent)
static inline struct proc_dir_entry *proc_create(const char *name,
mode_t mode, struct proc_dir_entry *parent,
const struct file_operations *proc_fops)
static inline struct proc_dir_entry *proc_create_data(const char *name,
mode_t mode, struct proc_dir_entry *parent,
const struct file_operations *proc_fops, void *data)
#define remove_proc_entry(name, parent) do  while (0)
static inline struct proc_dir_entry *proc_symlink(const char *name,
struct proc_dir_entry *parent,const char *dest)
static inline struct proc_dir_entry *proc_mkdir(const char *name,
struct proc_dir_entry *parent)
static inline struct proc_dir_entry *proc_mkdir_mode(const char *name,
mode_t mode, struct proc_dir_entry *parent)
static inline struct proc_dir_entry *create_proc_read_entry(const char *name,
mode_t mode, struct proc_dir_entry *base,
read_proc_t *read_proc, void * data)
struct tty_driver;
static inline void proc_tty_register_driver(struct tty_driver *driver) ;
static inline void proc_tty_unregister_driver(struct tty_driver *driver) ;
static inline int pid_ns_prepare_proc(struct pid_namespace *ns)
static inline void pid_ns_release_proc(struct pid_namespace *ns)
static inline struct file *proc_ns_fget(int fd)
#if !defined(CONFIG_PROC_KCORE)
static inline void
kclist_add(struct kcore_list *new, void *addr, size_t size, int type)
extern void kclist_add(struct kcore_list *, void *, size_t, int type);
struct nsproxy;
struct proc_ns_operations ;
extern const struct proc_ns_operations netns_operations;
extern const struct proc_ns_operations utsns_operations;
extern const struct proc_ns_operations ipcns_operations;
union proc_op ;
struct ctl_table_header;
struct ctl_table;
struct proc_inode ;
static inline struct proc_inode *PROC_I(const struct inode *inode)
static inline struct proc_dir_entry *PDE(const struct inode *inode)
static inline struct net *PDE_NET(struct proc_dir_entry *pde)
