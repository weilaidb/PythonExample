#define _FAT_H
#define VFAT_SFN_DISPLAY_LOWER	0x0001
#define VFAT_SFN_DISPLAY_WIN95	0x0002
#define VFAT_SFN_DISPLAY_WINNT	0x0004
#define VFAT_SFN_CREATE_WIN95	0x0100
#define VFAT_SFN_CREATE_WINNT	0x0200
#define FAT_ERRORS_CONT		1
#define FAT_ERRORS_PANIC	2
#define FAT_ERRORS_RO		3
struct fat_mount_options ;
#define FAT_HASH_BITS	8
#define FAT_HASH_SIZE	(1UL << FAT_HASH_BITS)
struct msdos_sb_info ;
#define FAT_CACHE_VALID	0
struct msdos_inode_info ;
struct fat_slot_info ;
static inline struct msdos_sb_info *MSDOS_SB(struct super_block *sb)
static inline struct msdos_inode_info *MSDOS_I(struct inode *inode)
static inline int fat_mode_can_hold_ro(struct inode *inode)
static inline mode_t fat_make_mode(struct msdos_sb_info *sbi,
u8 attrs, mode_t mode)
static inline u8 fat_make_attrs(struct inode *inode)
static inline void fat_save_attrs(struct inode *inode, u8 attrs)
static inline unsigned char fat_checksum(const __u8 *name)
static inline sector_t fat_clus_to_blknr(struct msdos_sb_info *sbi, int clus)
static inline void fat16_towchar(wchar_t *dst, const __u8 *src, size_t len)
static inline void fatwchar_to16(__u8 *dst, const wchar_t *src, size_t len)
extern void fat_cache_inval_inode(struct inode *inode);
extern int fat_get_cluster(struct inode *inode, int cluster,
int *fclus, int *dclus);
extern int fat_bmap(struct inode *inode, sector_t sector, sector_t *phys,
unsigned long *mapped_blocks, int create);
extern const struct file_operations fat_dir_operations;
extern int fat_search_long(struct inode *inode, const unsigned char *name,
int name_len, struct fat_slot_info *sinfo);
extern int fat_dir_empty(struct inode *dir);
extern int fat_subdirs(struct inode *dir);
extern int fat_scan(struct inode *dir, const unsigned char *name,
struct fat_slot_info *sinfo);
extern int fat_get_dotdot_entry(struct inode *dir, struct buffer_head **bh,
struct msdos_dir_entry **de, loff_t *i_pos);
extern int fat_alloc_new_dir(struct inode *dir, struct timespec *ts);
extern int fat_add_entries(struct inode *dir, void *slots, int nr_slots,
struct fat_slot_info *sinfo);
extern int fat_remove_entries(struct inode *dir, struct fat_slot_info *sinfo);
struct fat_entry ;
static inline void fatent_init(struct fat_entry *fatent)
static inline void fatent_set_entry(struct fat_entry *fatent, int entry)
static inline void fatent_brelse(struct fat_entry *fatent)
extern void fat_ent_access_init(struct super_block *sb);
extern int fat_ent_read(struct inode *inode, struct fat_entry *fatent,
int entry);
extern int fat_ent_write(struct inode *inode, struct fat_entry *fatent,
int new, int wait);
extern int fat_alloc_clusters(struct inode *inode, int *cluster,
int nr_cluster);
extern int fat_free_clusters(struct inode *inode, int cluster);
extern int fat_count_free_clusters(struct super_block *sb);
extern long fat_generic_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg);
extern const struct file_operations fat_file_operations;
extern const struct inode_operations fat_file_inode_operations;
extern int fat_setattr(struct dentry * dentry, struct iattr * attr);
extern void fat_truncate_blocks(struct inode *inode, loff_t offset);
extern int fat_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat);
extern int fat_file_fsync(struct file *file, int datasync);
extern void fat_attach(struct inode *inode, loff_t i_pos);
extern void fat_detach(struct inode *inode);
extern struct inode *fat_iget(struct super_block *sb, loff_t i_pos);
extern struct inode *fat_build_inode(struct super_block *sb,
struct msdos_dir_entry *de, loff_t i_pos);
extern int fat_sync_inode(struct inode *inode);
extern int fat_fill_super(struct super_block *sb, void *data, int silent,
int isvfat, void (*setup)(struct super_block *));
extern int fat_flush_inodes(struct super_block *sb, struct inode *i1,
struct inode *i2);
extern void
__fat_fs_error(struct super_block *sb, int report, const char *fmt, ...)
__attribute__ ((format (printf, 3, 4))) __cold;
#define fat_fs_error(sb, fmt, args...)		\
__fat_fs_error(sb, 1, fmt , ## args)
#define fat_fs_error_ratelimit(sb, fmt, args...) \
__fat_fs_error(sb, __ratelimit(&MSDOS_SB(sb)->ratelimit), fmt , ## args)
void fat_msg(struct super_block *sb, const char *level, const char *fmt, ...)
__attribute__ ((format (printf, 3, 4))) __cold;
extern int fat_clusters_flush(struct super_block *sb);
extern int fat_chain_add(struct inode *inode, int new_dclus, int nr_cluster);
extern void fat_time_fat2unix(struct msdos_sb_info *sbi, struct timespec *ts,
__le16 __time, __le16 __date, u8 time_cs);
extern void fat_time_unix2fat(struct msdos_sb_info *sbi, struct timespec *ts,
__le16 *time, __le16 *date, u8 *time_cs);
extern int fat_sync_bhs(struct buffer_head **bhs, int nr_bhs);
int fat_cache_init(void);
void fat_cache_destroy(void);
typedef unsigned long long	llu;
