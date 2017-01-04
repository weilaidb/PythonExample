static inline unsigned exofs_chunk_size(struct inode *inode)
static inline void exofs_put_page(struct page *page)
static inline unsigned long dir_pages(struct inode *inode)
static unsigned exofs_last_byte(struct inode *inode, unsigned long page_nr)
static int exofs_commit_chunk(struct page *page, loff_t pos, unsigned len)
static void exofs_check_page(struct page *page)
static struct page *exofs_get_page(struct inode *dir, unsigned long n)
static inline int exofs_match(int len, const unsigned char *name,
struct exofs_dir_entry *de)
static inline
struct exofs_dir_entry *exofs_next_entry(struct exofs_dir_entry *p)
static inline unsigned
exofs_validate_entry(char *base, unsigned offset, unsigned mask)
static unsigned char exofs_filetype_table[EXOFS_FT_MAX] = ;
#define S_SHIFT 12
static unsigned char exofs_type_by_mode[S_IFMT >> S_SHIFT] = ;
static inline
void exofs_set_de_type(struct exofs_dir_entry *de, struct inode *inode)
static int
exofs_readdir(struct file *filp, void *dirent, filldir_t filldir)
struct exofs_dir_entry *exofs_find_entry(struct inode *dir,
struct dentry *dentry, struct page **res_page)
struct exofs_dir_entry *exofs_dotdot(struct inode *dir, struct page **p)
ino_t exofs_parent_ino(struct dentry *child)
ino_t exofs_inode_by_name(struct inode *dir, struct dentry *dentry)
int exofs_set_link(struct inode *dir, struct exofs_dir_entry *de,
struct page *page, struct inode *inode)
int exofs_add_link(struct dentry *dentry, struct inode *inode)
int exofs_delete_entry(struct exofs_dir_entry *dir, struct page *page)
#define THIS_DIR ".\0\0"
#define PARENT_DIR "..\0"
int exofs_make_empty(struct inode *inode, struct inode *parent)
int exofs_empty_dir(struct inode *inode)
const struct file_operations exofs_dir_operations = ;
