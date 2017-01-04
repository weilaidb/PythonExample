static inline struct vfsmount *next_peer(struct vfsmount *p)
static inline struct vfsmount *first_slave(struct vfsmount *p)
static inline struct vfsmount *next_slave(struct vfsmount *p)
static bool is_path_reachable(struct vfsmount *mnt, struct dentry *dentry,
const struct path *root)
static struct vfsmount *get_peer_under_root(struct vfsmount *mnt,
struct mnt_namespace *ns,
const struct path *root)
int get_dominating_id(struct vfsmount *mnt, const struct path *root)
static int do_make_slave(struct vfsmount *mnt)
void change_mnt_propagation(struct vfsmount *mnt, int type)
static struct vfsmount *propagation_next(struct vfsmount *m,
struct vfsmount *origin)
static struct vfsmount *get_source(struct vfsmount *dest,
struct vfsmount *last_dest,
struct vfsmount *last_src,
int *type)
int propagate_mnt(struct vfsmount *dest_mnt, struct dentry *dest_dentry,
struct vfsmount *source_mnt, struct list_head *tree_list)
static inline int do_refcount_check(struct vfsmount *mnt, int count)
int propagate_mount_busy(struct vfsmount *mnt, int refcnt)
static void __propagate_umount(struct vfsmount *mnt)
int propagate_umount(struct list_head *list)
