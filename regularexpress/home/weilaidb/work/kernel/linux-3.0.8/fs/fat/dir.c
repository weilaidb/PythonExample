#define FAT_MAX_SHORT_SIZE	((MSDOS_NAME + 1) * NLS_MAX_CHARSET_SIZE + 1)
#define FAT_MAX_UNI_CHARS	((MSDOS_SLOTS - 1) * 13 + 1)
#define FAT_MAX_UNI_SIZE	(FAT_MAX_UNI_CHARS * sizeof(wchar_t))
static inline loff_t fat_make_i_pos(struct super_block *sb,
struct buffer_head *bh,
struct msdos_dir_entry *de)
static inline void fat_dir_readahead(struct inode *dir, sector_t iblock,
sector_t phys)
static int fat__get_entry(struct inode *dir, loff_t *pos,
struct buffer_head **bh, struct msdos_dir_entry **de)
static inline int fat_get_entry(struct inode *dir, loff_t *pos,
struct buffer_head **bh,
struct msdos_dir_entry **de)
static int uni16_to_x8(struct super_block *sb, unsigned char *ascii,
const wchar_t *uni, int len, struct nls_table *nls)
static inline int fat_uni_to_x8(struct super_block *sb, const wchar_t *uni,
unsigned char *buf, int size)
static inline int
fat_short2uni(struct nls_table *t, unsigned char *c, int clen, wchar_t *uni)
static inline int
fat_short2lower_uni(struct nls_table *t, unsigned char *c, int clen, wchar_t *uni)
static inline int
fat_shortname2uni(struct nls_table *nls, unsigned char *buf, int buf_size,
wchar_t *uni_buf, unsigned short opt, int lower)
static inline int fat_name_match(struct msdos_sb_info *sbi,
const unsigned char *a, int a_len,
const unsigned char *b, int b_len)
enum ;
static int fat_parse_long(struct inode *dir, loff_t *pos,
struct buffer_head **bh, struct msdos_dir_entry **de,
wchar_t **unicode, unsigned char *nr_slots)
int fat_search_long(struct inode *inode, const unsigned char *name,
int name_len, struct fat_slot_info *sinfo)
EXPORT_SYMBOL_GPL(fat_search_long);
struct fat_ioctl_filldir_callback ;
static int __fat_readdir(struct inode *inode, struct file *filp, void *dirent,
filldir_t filldir, int short_only, int both)
static int fat_readdir(struct file *filp, void *dirent, filldir_t filldir)
#define FAT_IOCTL_FILLDIR_FUNC(func, dirent_type)			   \
static int func(void *__buf, const char *name, int name_len,		   \
loff_t offset, u64 ino, unsigned int d_type)  \
FAT_IOCTL_FILLDIR_FUNC(fat_ioctl_filldir, __fat_dirent)
static int fat_ioctl_readdir(struct inode *inode, struct file *filp,
void __user *dirent, filldir_t filldir,
int short_only, int both)
static long fat_dir_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
#define	VFAT_IOCTL_READDIR_BOTH32	_IOR('r', 1, struct compat_dirent[2])
#define	VFAT_IOCTL_READDIR_SHORT32	_IOR('r', 2, struct compat_dirent[2])
FAT_IOCTL_FILLDIR_FUNC(fat_compat_ioctl_filldir, compat_dirent)
static long fat_compat_dir_ioctl(struct file *filp, unsigned cmd,
unsigned long arg)
const struct file_operations fat_dir_operations = ;
static int fat_get_short_entry(struct inode *dir, loff_t *pos,
struct buffer_head **bh,
struct msdos_dir_entry **de)
int fat_get_dotdot_entry(struct inode *dir, struct buffer_head **bh,
struct msdos_dir_entry **de, loff_t *i_pos)
EXPORT_SYMBOL_GPL(fat_get_dotdot_entry);
int fat_dir_empty(struct inode *dir)
EXPORT_SYMBOL_GPL(fat_dir_empty);
int fat_subdirs(struct inode *dir)
int fat_scan(struct inode *dir, const unsigned char *name,
struct fat_slot_info *sinfo)
EXPORT_SYMBOL_GPL(fat_scan);
static int __fat_remove_entries(struct inode *dir, loff_t pos, int nr_slots)
int fat_remove_entries(struct inode *dir, struct fat_slot_info *sinfo)
EXPORT_SYMBOL_GPL(fat_remove_entries);
static int fat_zeroed_cluster(struct inode *dir, sector_t blknr, int nr_used,
struct buffer_head **bhs, int nr_bhs)
int fat_alloc_new_dir(struct inode *dir, struct timespec *ts)
EXPORT_SYMBOL_GPL(fat_alloc_new_dir);
static int fat_add_new_entries(struct inode *dir, void *slots, int nr_slots,
int *nr_cluster, struct msdos_dir_entry **de,
struct buffer_head **bh, loff_t *i_pos)
int fat_add_entries(struct inode *dir, void *slots, int nr_slots,
struct fat_slot_info *sinfo)
EXPORT_SYMBOL_GPL(fat_add_entries);
