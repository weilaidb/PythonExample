#define __SHMEM_FS_H
#define SHMEM_NR_DIRECT 16
#define SHMEM_SYMLINK_INLINE_LEN (SHMEM_NR_DIRECT * sizeof(swp_entry_t))
struct shmem_inode_info ;
struct shmem_sb_info ;
static inline struct shmem_inode_info *SHMEM_I(struct inode *inode)
extern int init_tmpfs(void);
extern int shmem_fill_super(struct super_block *sb, void *data, int silent);
extern struct file *shmem_file_setup(const char *name,
loff_t size, unsigned long flags);
extern int shmem_zero_setup(struct vm_area_struct *);
extern int shmem_lock(struct file *file, int lock, struct user_struct *user);
extern struct page *shmem_read_mapping_page_gfp(struct address_space *mapping,
pgoff_t index, gfp_t gfp_mask);
extern void shmem_truncate_range(struct inode *inode, loff_t start, loff_t end);
extern int shmem_unuse(swp_entry_t entry, struct page *page);
extern void mem_cgroup_get_shmem_target(struct inode *inode, pgoff_t pgoff,
struct page **pagep, swp_entry_t *ent);
static inline struct page *shmem_read_mapping_page(
struct address_space *mapping, pgoff_t index)
