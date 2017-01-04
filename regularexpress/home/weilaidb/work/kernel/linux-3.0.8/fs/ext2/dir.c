typedef struct ext2_dir_entry_2 ext2_dirent;
static inline unsigned ext2_rec_len_from_disk(__le16 dlen)
static inline __le16 ext2_rec_len_to_disk(unsigned len)
static inline unsigned ext2_chunk_size(struct inode *inode)
static inline void ext2_put_page(struct page *page)
static inline unsigned long dir_pages(struct inode *inode)
static unsigned
ext2_last_byte(struct inode *inode, unsigned long page_nr)
static int ext2_commit_chunk(struct page *page, loff_t pos, unsigned len)
static void ext2_check_page(struct page *page, int quiet)
static struct page * ext2_get_page(struct inode *dir, unsigned long n,
int quiet)
static inline int ext2_match (int len, const char * const name,
struct ext2_dir_entry_2 * de)
static inline ext2_dirent *ext2_next_entry(ext2_dirent *p)
static inline unsigned
ext2_validate_entry(char *base, unsigned offset, unsigned mask)
static unsigned char ext2_filetype_table[EXT2_FT_MAX] = ;
#define S_SHIFT 12
static unsigned char ext2_type_by_mode[S_IFMT >> S_SHIFT] = ;
static inline void ext2_set_de_type(ext2_dirent *de, struct inode *inode)
static int
ext2_readdir (struct file * filp, void * dirent, filldir_t filldir)
struct ext2_dir_entry_2 *ext2_find_entry (struct inode * dir,
struct qstr *child, struct page ** res_page)
struct ext2_dir_entry_2 * ext2_dotdot (struct inode *dir, struct page **p)
ino_t ext2_inode_by_name(struct inode *dir, struct qstr *child)
static int ext2_prepare_chunk(struct page *page, loff_t pos, unsigned len)
void ext2_set_link(struct inode *dir, struct ext2_dir_entry_2 *de,
struct page *page, struct inode *inode, int update_times)
int ext2_add_link (struct dentry *dentry, struct inode *inode)
int ext2_delete_entry (struct ext2_dir_entry_2 * dir, struct page * page )
int ext2_make_empty(struct inode *inode, struct inode *parent)
int ext2_empty_dir (struct inode * inode)
const struct file_operations ext2_dir_operations = ;
