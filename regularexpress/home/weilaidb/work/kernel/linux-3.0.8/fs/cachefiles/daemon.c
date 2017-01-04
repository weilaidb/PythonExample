static int cachefiles_daemon_open(struct inode *, struct file *);
static int cachefiles_daemon_release(struct inode *, struct file *);
static ssize_t cachefiles_daemon_read(struct file *, char __user *, size_t,
loff_t *);
static ssize_t cachefiles_daemon_write(struct file *, const char __user *,
size_t, loff_t *);
static unsigned int cachefiles_daemon_poll(struct file *,
struct poll_table_struct *);
static int cachefiles_daemon_frun(struct cachefiles_cache *, char *);
static int cachefiles_daemon_fcull(struct cachefiles_cache *, char *);
static int cachefiles_daemon_fstop(struct cachefiles_cache *, char *);
static int cachefiles_daemon_brun(struct cachefiles_cache *, char *);
static int cachefiles_daemon_bcull(struct cachefiles_cache *, char *);
static int cachefiles_daemon_bstop(struct cachefiles_cache *, char *);
static int cachefiles_daemon_cull(struct cachefiles_cache *, char *);
static int cachefiles_daemon_debug(struct cachefiles_cache *, char *);
static int cachefiles_daemon_dir(struct cachefiles_cache *, char *);
static int cachefiles_daemon_inuse(struct cachefiles_cache *, char *);
static int cachefiles_daemon_secctx(struct cachefiles_cache *, char *);
static int cachefiles_daemon_tag(struct cachefiles_cache *, char *);
static unsigned long cachefiles_open;
const struct file_operations cachefiles_daemon_fops = ;
struct cachefiles_daemon_cmd ;
static const struct cachefiles_daemon_cmd cachefiles_daemon_cmds[] = ;
static int cachefiles_daemon_open(struct inode *inode, struct file *file)
static int cachefiles_daemon_release(struct inode *inode, struct file *file)
static ssize_t cachefiles_daemon_read(struct file *file, char __user *_buffer,
size_t buflen, loff_t *pos)
static ssize_t cachefiles_daemon_write(struct file *file,
const char __user *_data,
size_t datalen,
loff_t *pos)
static unsigned int cachefiles_daemon_poll(struct file *file,
struct poll_table_struct *poll)
static int cachefiles_daemon_range_error(struct cachefiles_cache *cache,
char *args)
static int cachefiles_daemon_frun(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_fcull(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_fstop(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_brun(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_bcull(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_bstop(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_dir(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_secctx(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_tag(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_cull(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_debug(struct cachefiles_cache *cache, char *args)
static int cachefiles_daemon_inuse(struct cachefiles_cache *cache, char *args)
int cachefiles_has_space(struct cachefiles_cache *cache,
unsigned fnr, unsigned bnr)
