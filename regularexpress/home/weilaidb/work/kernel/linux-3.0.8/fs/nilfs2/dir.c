static inline unsigned nilfs_chunk_size(struct inode *inode)
static inline void nilfs_put_page(struct page *page)
static inline unsigned long dir_pages(struct inode *inode)
static unsigned nilfs_last_byte(struct inode *inode, unsigned long page_nr)
static int nilfs_prepare_chunk(struct page *page, unsigned from, unsigned to)
static void nilfs_commit_chunk(struct page *page,
struct address_space *mapping,
unsigned from, unsigned to)
static void nilfs_check_page(struct page *page)
static struct page *nilfs_get_page(struct inode *dir, unsigned long n)
static int
nilfs_match(int len, const unsigned char *name, struct nilfs_dir_entry *de)
static struct nilfs_dir_entry *nilfs_next_entry(struct nilfs_dir_entry *p)
static unsigned char
nilfs_filetype_table[NILFS_FT_MAX] = ;
#define S_SHIFT 12
static unsigned char
nilfs_type_by_mode[S_IFMT >> S_SHIFT] = ;
static void nilfs_set_de_type(struct nilfs_dir_entry *de, struct inode *inode)
static int nilfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
struct nilfs_dir_entry *
nilfs_find_entry(struct inode *dir, const struct qstr *qstr,
struct page **res_page)
struct nilfs_dir_entry *nilfs_dotdot(struct inode *dir, struct page **p)
ino_t nilfs_inode_by_name(struct inode *dir, const struct qstr *qstr)
void nilfs_set_link(struct inode *dir, struct nilfs_dir_entry *de,
struct page *page, struct inode *inode)
int nilfs_add_link(struct dentry *dentry, struct inode *inode)
int nilfs_delete_entry(struct nilfs_dir_entry *dir, struct page *page)
int nilfs_make_empty(struct inode *inode, struct inode *parent)
int nilfs_empty_dir(struct inode *inode)
const struct file_operations nilfs_dir_operations = ;
