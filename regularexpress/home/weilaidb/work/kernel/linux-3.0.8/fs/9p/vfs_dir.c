struct p9_rdir ;
static inline int dt_type(struct p9_wstat *mistat)
static void p9stat_init(struct p9_wstat *stbuf)
static int v9fs_alloc_rdir_buf(struct file *filp, int buflen)
static int v9fs_dir_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int v9fs_dir_readdir_dotl(struct file *filp, void *dirent,
filldir_t filldir)
int v9fs_dir_release(struct inode *inode, struct file *filp)
const struct file_operations v9fs_dir_operations = ;
const struct file_operations v9fs_dir_operations_dotl = ;
