#define _SYSV_H
typedef __u16 __bitwise __fs16;
typedef __u32 __bitwise __fs32;
struct sysv_sb_info ;
struct sysv_inode_info ;
static inline struct sysv_inode_info *SYSV_I(struct inode *inode)
static inline struct sysv_sb_info *SYSV_SB(struct super_block *sb)
enum ;
#define SYSV_MAGIC_BASE		0x012FF7B3
#define XENIX_SUPER_MAGIC	(SYSV_MAGIC_BASE+FSTYPE_XENIX)
#define SYSV4_SUPER_MAGIC	(SYSV_MAGIC_BASE+FSTYPE_SYSV4)
#define SYSV2_SUPER_MAGIC	(SYSV_MAGIC_BASE+FSTYPE_SYSV2)
#define COH_SUPER_MAGIC		(SYSV_MAGIC_BASE+FSTYPE_COH)
enum ;
static inline void dirty_sb(struct super_block *sb)
extern struct sysv_inode *sysv_raw_inode(struct super_block *, unsigned,
struct buffer_head **);
extern struct inode * sysv_new_inode(const struct inode *, mode_t);
extern void sysv_free_inode(struct inode *);
extern unsigned long sysv_count_free_inodes(struct super_block *);
extern sysv_zone_t sysv_new_block(struct super_block *);
extern void sysv_free_block(struct super_block *, sysv_zone_t);
extern unsigned long sysv_count_free_blocks(struct super_block *);
extern void sysv_truncate(struct inode *);
extern int sysv_prepare_chunk(struct page *page, loff_t pos, unsigned len);
extern struct inode *sysv_iget(struct super_block *, unsigned int);
extern int sysv_write_inode(struct inode *, struct writeback_control *wbc);
extern int sysv_sync_inode(struct inode *);
extern void sysv_set_inode(struct inode *, dev_t);
extern int sysv_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int sysv_init_icache(void);
extern void sysv_destroy_icache(void);
extern struct sysv_dir_entry *sysv_find_entry(struct dentry *, struct page **);
extern int sysv_add_link(struct dentry *, struct inode *);
extern int sysv_delete_entry(struct sysv_dir_entry *, struct page *);
extern int sysv_make_empty(struct inode *, struct inode *);
extern int sysv_empty_dir(struct inode *);
extern void sysv_set_link(struct sysv_dir_entry *, struct page *,
struct inode *);
extern struct sysv_dir_entry *sysv_dotdot(struct inode *, struct page **);
extern ino_t sysv_inode_by_name(struct dentry *);
extern const struct inode_operations sysv_file_inode_operations;
extern const struct inode_operations sysv_dir_inode_operations;
extern const struct inode_operations sysv_fast_symlink_inode_operations;
extern const struct file_operations sysv_file_operations;
extern const struct file_operations sysv_dir_operations;
extern const struct address_space_operations sysv_aops;
extern const struct super_operations sysv_sops;
extern const struct dentry_operations sysv_dentry_operations;
enum ;
static inline u32 PDP_swab(u32 x)
static inline __u32 fs32_to_cpu(struct sysv_sb_info *sbi, __fs32 n)
static inline __fs32 cpu_to_fs32(struct sysv_sb_info *sbi, __u32 n)
static inline __fs32 fs32_add(struct sysv_sb_info *sbi, __fs32 *n, int d)
static inline __u16 fs16_to_cpu(struct sysv_sb_info *sbi, __fs16 n)
static inline __fs16 cpu_to_fs16(struct sysv_sb_info *sbi, __u16 n)
static inline __fs16 fs16_add(struct sysv_sb_info *sbi, __fs16 *n, int d)
