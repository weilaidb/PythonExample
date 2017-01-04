static inline int ufs_match(struct super_block *sb, int len,
const unsigned char *name, struct ufs_dir_entry *de)
static int ufs_commit_chunk(struct page *page, loff_t pos, unsigned len)
static inline void ufs_put_page(struct page *page)
static inline unsigned long ufs_dir_pages(struct inode *inode)
ino_t ufs_inode_by_name(struct inode *dir, const struct qstr *qstr)
void ufs_set_link(struct inode *dir, struct ufs_dir_entry *de,
struct page *page, struct inode *inode)
static void ufs_check_page(struct page *page)
static struct page *ufs_get_page(struct inode *dir, unsigned long n)
static unsigned
ufs_last_byte(struct inode *inode, unsigned long page_nr)
static inline struct ufs_dir_entry *
ufs_next_entry(struct super_block *sb, struct ufs_dir_entry *p)
struct ufs_dir_entry *ufs_dotdot(struct inode *dir, struct page **p)
struct ufs_dir_entry *ufs_find_entry(struct inode *dir, const struct qstr *qstr,
struct page **res_page)
int ufs_add_link(struct dentry *dentry, struct inode *inode)
static inline unsigned
ufs_validate_entry(struct super_block *sb, char *base,
unsigned offset, unsigned mask)
static int
ufs_readdir(struct file *filp, void *dirent, filldir_t filldir)
int ufs_delete_entry(struct inode *inode, struct ufs_dir_entry *dir,
struct page * page)
int ufs_make_empty(struct inode * inode, struct inode *dir)
int ufs_empty_dir(struct inode * inode)
const struct file_operations ufs_dir_operations = ;
