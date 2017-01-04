#define FUNCTIONFS_MAGIC	0xa647361
#  define pr_vdebug pr_debug
#  define ffs_dump_mem(prefix, ptr, len) \
print_hex_dump_bytes(pr_fmt(prefix ": "), DUMP_PREFIX_NONE, ptr, len)
#  define pr_vdebug(...)                 do  while (0)
#  define ffs_dump_mem(prefix, ptr, len) do  while (0)
#define ENTER()    pr_vdebug("%s()\n", __func__)
enum ffs_state ;
enum ffs_setup_state ;
struct ffs_epfile;
struct ffs_function;
struct ffs_data ;
static void ffs_data_get(struct ffs_data *ffs);
static void ffs_data_put(struct ffs_data *ffs);
static struct ffs_data *__must_check ffs_data_new(void) __attribute__((malloc));
static void ffs_data_opened(struct ffs_data *ffs);
static void ffs_data_closed(struct ffs_data *ffs);
static int __must_check
__ffs_data_got_descs(struct ffs_data *ffs, char *data, size_t len);
static int __must_check
__ffs_data_got_strings(struct ffs_data *ffs, char *data, size_t len);
struct ffs_ep;
struct ffs_function ;
static struct ffs_function *ffs_func_from_usb(struct usb_function *f)
static void ffs_func_free(struct ffs_function *func);
static void ffs_func_eps_disable(struct ffs_function *func);
static int __must_check ffs_func_eps_enable(struct ffs_function *func);
static int ffs_func_bind(struct usb_configuration *,
struct usb_function *);
static void ffs_func_unbind(struct usb_configuration *,
struct usb_function *);
static int ffs_func_set_alt(struct usb_function *, unsigned, unsigned);
static void ffs_func_disable(struct usb_function *);
static int ffs_func_setup(struct usb_function *,
const struct usb_ctrlrequest *);
static void ffs_func_suspend(struct usb_function *);
static void ffs_func_resume(struct usb_function *);
static int ffs_func_revmap_ep(struct ffs_function *func, u8 num);
static int ffs_func_revmap_intf(struct ffs_function *func, u8 intf);
struct ffs_ep ;
struct ffs_epfile ;
static int  __must_check ffs_epfiles_create(struct ffs_data *ffs);
static void ffs_epfiles_destroy(struct ffs_epfile *epfiles, unsigned count);
static struct inode *__must_check
ffs_sb_create_file(struct super_block *sb, const char *name, void *data,
const struct file_operations *fops,
struct dentry **dentry_p);
static int ffs_mutex_lock(struct mutex *mutex, unsigned nonblock)
__attribute__((warn_unused_result, nonnull));
static char *ffs_prepare_buffer(const char * __user buf, size_t len)
__attribute__((warn_unused_result, nonnull));
static void ffs_ep0_complete(struct usb_ep *ep, struct usb_request *req)
static int __ffs_ep0_queue_wait(struct ffs_data *ffs, char *data, size_t len)
static int __ffs_ep0_stall(struct ffs_data *ffs)
static ssize_t ffs_ep0_write(struct file *file, const char __user *buf,
size_t len, loff_t *ptr)
static ssize_t __ffs_ep0_read_events(struct ffs_data *ffs, char __user *buf,
size_t n)
static ssize_t ffs_ep0_read(struct file *file, char __user *buf,
size_t len, loff_t *ptr)
static int ffs_ep0_open(struct inode *inode, struct file *file)
static int ffs_ep0_release(struct inode *inode, struct file *file)
static long ffs_ep0_ioctl(struct file *file, unsigned code, unsigned long value)
static const struct file_operations ffs_ep0_operations = ;
static void ffs_epfile_io_complete(struct usb_ep *_ep, struct usb_request *req)
static ssize_t ffs_epfile_io(struct file *file,
char __user *buf, size_t len, int read)
static ssize_t
ffs_epfile_write(struct file *file, const char __user *buf, size_t len,
loff_t *ptr)
static ssize_t
ffs_epfile_read(struct file *file, char __user *buf, size_t len, loff_t *ptr)
static int
ffs_epfile_open(struct inode *inode, struct file *file)
static int
ffs_epfile_release(struct inode *inode, struct file *file)
static long ffs_epfile_ioctl(struct file *file, unsigned code,
unsigned long value)
static const struct file_operations ffs_epfile_operations = ;
static struct inode *__must_check
ffs_sb_make_inode(struct super_block *sb, void *data,
const struct file_operations *fops,
const struct inode_operations *iops,
struct ffs_file_perms *perms)
static struct inode *ffs_sb_create_file(struct super_block *sb,
const char *name, void *data,
const struct file_operations *fops,
struct dentry **dentry_p)
static const struct super_operations ffs_sb_operations = ;
struct ffs_sb_fill_data ;
static int ffs_sb_fill(struct super_block *sb, void *_data, int silent)
static int ffs_fs_parse_opts(struct ffs_sb_fill_data *data, char *opts)
static struct dentry *
ffs_fs_mount(struct file_system_type *t, int flags,
const char *dev_name, void *opts)
static void
ffs_fs_kill_sb(struct super_block *sb)
static struct file_system_type ffs_fs_type = ;
static int functionfs_init(void)
static void functionfs_cleanup(void)
static void ffs_data_clear(struct ffs_data *ffs);
static void ffs_data_reset(struct ffs_data *ffs);
static void ffs_data_get(struct ffs_data *ffs)
static void ffs_data_opened(struct ffs_data *ffs)
static void ffs_data_put(struct ffs_data *ffs)
static void ffs_data_closed(struct ffs_data *ffs)
static struct ffs_data *ffs_data_new(void)
static void ffs_data_clear(struct ffs_data *ffs)
static void ffs_data_reset(struct ffs_data *ffs)
static int functionfs_bind(struct ffs_data *ffs, struct usb_composite_dev *cdev)
static void functionfs_unbind(struct ffs_data *ffs)
static int ffs_epfiles_create(struct ffs_data *ffs)
static void ffs_epfiles_destroy(struct ffs_epfile *epfiles, unsigned count)
static int functionfs_bind_config(struct usb_composite_dev *cdev,
struct usb_configuration *c,
struct ffs_data *ffs)
static void ffs_func_free(struct ffs_function *func)
static void ffs_func_eps_disable(struct ffs_function *func)
static int ffs_func_eps_enable(struct ffs_function *func)
enum ffs_entity_type ;
typedef int (*ffs_entity_callback)(enum ffs_entity_type entity,
u8 *valuep,
struct usb_descriptor_header *desc,
void *priv);
static int __must_check ffs_do_desc(char *data, unsigned len,
ffs_entity_callback entity, void *priv)
static int __must_check ffs_do_descs(unsigned count, char *data, unsigned len,
ffs_entity_callback entity, void *priv)
static int __ffs_data_do_entity(enum ffs_entity_type type,
u8 *valuep, struct usb_descriptor_header *desc,
void *priv)
static int __ffs_data_got_descs(struct ffs_data *ffs,
char *const _data, size_t len)
static int __ffs_data_got_strings(struct ffs_data *ffs,
char *const _data, size_t len)
static void __ffs_event_add(struct ffs_data *ffs,
enum usb_functionfs_event_type type)
static void ffs_event_add(struct ffs_data *ffs,
enum usb_functionfs_event_type type)
static int __ffs_func_bind_do_descs(enum ffs_entity_type type, u8 *valuep,
struct usb_descriptor_header *desc,
void *priv)
static int __ffs_func_bind_do_nums(enum ffs_entity_type type, u8 *valuep,
struct usb_descriptor_header *desc,
void *priv)
static int ffs_func_bind(struct usb_configuration *c,
struct usb_function *f)
static void ffs_func_unbind(struct usb_configuration *c,
struct usb_function *f)
static int ffs_func_set_alt(struct usb_function *f,
unsigned interface, unsigned alt)
static void ffs_func_disable(struct usb_function *f)
static int ffs_func_setup(struct usb_function *f,
const struct usb_ctrlrequest *creq)
static void ffs_func_suspend(struct usb_function *f)
static void ffs_func_resume(struct usb_function *f)
static int ffs_func_revmap_ep(struct ffs_function *func, u8 num)
static int ffs_func_revmap_intf(struct ffs_function *func, u8 intf)
static int ffs_mutex_lock(struct mutex *mutex, unsigned nonblock)
static char *ffs_prepare_buffer(const char * __user buf, size_t len)
