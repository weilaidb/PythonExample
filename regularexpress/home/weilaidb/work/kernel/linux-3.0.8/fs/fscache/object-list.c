#define FSCACHE_DEBUG_LEVEL COOKIE
static struct rb_root fscache_object_list;
static DEFINE_RWLOCK(fscache_object_list_lock);
struct fscache_objlist_data ;
void fscache_objlist_add(struct fscache_object *obj)
void fscache_object_destroy(struct fscache_object *obj)
EXPORT_SYMBOL(fscache_object_destroy);
static struct fscache_object *fscache_objlist_lookup(loff_t *_pos)
static void *fscache_objlist_start(struct seq_file *m, loff_t *_pos)
__acquires(&fscache_object_list_lock)
static void *fscache_objlist_next(struct seq_file *m, void *v, loff_t *_pos)
static void fscache_objlist_stop(struct seq_file *m, void *v)
__releases(&fscache_object_list_lock)
static int fscache_objlist_show(struct seq_file *m, void *v)
static const struct seq_operations fscache_objlist_ops = ;
static void fscache_objlist_config(struct fscache_objlist_data *data)
static int fscache_objlist_open(struct inode *inode, struct file *file)
static int fscache_objlist_release(struct inode *inode, struct file *file)
const struct file_operations fscache_objlist_fops = ;
