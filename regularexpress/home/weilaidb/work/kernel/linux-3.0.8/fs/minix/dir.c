typedef struct minix_dir_entry minix_dirent;
typedef struct minix3_dir_entry minix3_dirent;
static int minix_readdir(struct file *, void *, filldir_t);
const struct file_operations minix_dir_operations = ;
static inline void dir_put_page(struct page *page)
static unsigned
minix_last_byte(struct inode *inode, unsigned long page_nr)
static inline unsigned long dir_pages(struct inode *inode)
static int dir_commit_chunk(struct page *page, loff_t pos, unsigned len)
static struct page * dir_get_page(struct inode *dir, unsigned long n)
static inline void *minix_next_entry(void *de, struct minix_sb_info *sbi)
static int minix_readdir(struct file * filp, void * dirent, filldir_t filldir)
static inline int namecompare(int len, int maxlen,
const char * name, const char * buffer)
minix_dirent *minix_find_entry(struct dentry *dentry, struct page **res_page)
int minix_add_link(struct dentry *dentry, struct inode *inode)
int minix_delete_entry(struct minix_dir_entry *de, struct page *page)
int minix_make_empty(struct inode *inode, struct inode *dir)
int minix_empty_dir(struct inode * inode)
void minix_set_link(struct minix_dir_entry *de, struct page *page,
struct inode *inode)
struct minix_dir_entry * minix_dotdot (struct inode *dir, struct page **p)
ino_t minix_inode_by_name(struct dentry *dentry)
