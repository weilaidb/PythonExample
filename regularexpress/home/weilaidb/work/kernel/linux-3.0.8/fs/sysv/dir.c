static int sysv_readdir(struct file *, void *, filldir_t);
const struct file_operations sysv_dir_operations = ;
static inline void dir_put_page(struct page *page)
static inline unsigned long dir_pages(struct inode *inode)
static int dir_commit_chunk(struct page *page, loff_t pos, unsigned len)
static struct page * dir_get_page(struct inode *dir, unsigned long n)
static int sysv_readdir(struct file * filp, void * dirent, filldir_t filldir)
static inline int namecompare(int len, int maxlen,
const char * name, const char * buffer)
struct sysv_dir_entry *sysv_find_entry(struct dentry *dentry, struct page **res_page)
int sysv_add_link(struct dentry *dentry, struct inode *inode)
int sysv_delete_entry(struct sysv_dir_entry *de, struct page *page)
int sysv_make_empty(struct inode *inode, struct inode *dir)
int sysv_empty_dir(struct inode * inode)
void sysv_set_link(struct sysv_dir_entry *de, struct page *page,
struct inode *inode)
struct sysv_dir_entry * sysv_dotdot (struct inode *dir, struct page **p)
ino_t sysv_inode_by_name(struct dentry *dentry)
