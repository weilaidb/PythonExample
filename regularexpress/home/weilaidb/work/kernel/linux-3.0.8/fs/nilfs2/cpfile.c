static inline unsigned long
nilfs_cpfile_checkpoints_per_block(const struct inode *cpfile)
static unsigned long
nilfs_cpfile_get_blkoff(const struct inode *cpfile, __u64 cno)
static unsigned long
nilfs_cpfile_get_offset(const struct inode *cpfile, __u64 cno)
static unsigned long
nilfs_cpfile_checkpoints_in_block(const struct inode *cpfile,
__u64 curr,
__u64 max)
static inline int nilfs_cpfile_is_in_first(const struct inode *cpfile,
__u64 cno)
static unsigned int
nilfs_cpfile_block_add_valid_checkpoints(const struct inode *cpfile,
struct buffer_head *bh,
void *kaddr,
unsigned int n)
static unsigned int
nilfs_cpfile_block_sub_valid_checkpoints(const struct inode *cpfile,
struct buffer_head *bh,
void *kaddr,
unsigned int n)
static inline struct nilfs_cpfile_header *
nilfs_cpfile_block_get_header(const struct inode *cpfile,
struct buffer_head *bh,
void *kaddr)
static struct nilfs_checkpoint *
nilfs_cpfile_block_get_checkpoint(const struct inode *cpfile, __u64 cno,
struct buffer_head *bh,
void *kaddr)
static void nilfs_cpfile_block_init(struct inode *cpfile,
struct buffer_head *bh,
void *kaddr)
static inline int nilfs_cpfile_get_header_block(struct inode *cpfile,
struct buffer_head **bhp)
static inline int nilfs_cpfile_get_checkpoint_block(struct inode *cpfile,
__u64 cno,
int create,
struct buffer_head **bhp)
static inline int nilfs_cpfile_delete_checkpoint_block(struct inode *cpfile,
__u64 cno)
int nilfs_cpfile_get_checkpoint(struct inode *cpfile,
__u64 cno,
int create,
struct nilfs_checkpoint **cpp,
struct buffer_head **bhp)
void nilfs_cpfile_put_checkpoint(struct inode *cpfile, __u64 cno,
struct buffer_head *bh)
int nilfs_cpfile_delete_checkpoints(struct inode *cpfile,
__u64 start,
__u64 end)
static void nilfs_cpfile_checkpoint_to_cpinfo(struct inode *cpfile,
struct nilfs_checkpoint *cp,
struct nilfs_cpinfo *ci)
static ssize_t nilfs_cpfile_do_get_cpinfo(struct inode *cpfile, __u64 *cnop,
void *buf, unsigned cisz, size_t nci)
static ssize_t nilfs_cpfile_do_get_ssinfo(struct inode *cpfile, __u64 *cnop,
void *buf, unsigned cisz, size_t nci)
ssize_t nilfs_cpfile_get_cpinfo(struct inode *cpfile, __u64 *cnop, int mode,
void *buf, unsigned cisz, size_t nci)
int nilfs_cpfile_delete_checkpoint(struct inode *cpfile, __u64 cno)
static struct nilfs_snapshot_list *
nilfs_cpfile_block_get_snapshot_list(const struct inode *cpfile,
__u64 cno,
struct buffer_head *bh,
void *kaddr)
static int nilfs_cpfile_set_snapshot(struct inode *cpfile, __u64 cno)
static int nilfs_cpfile_clear_snapshot(struct inode *cpfile, __u64 cno)
int nilfs_cpfile_is_snapshot(struct inode *cpfile, __u64 cno)
int nilfs_cpfile_change_cpmode(struct inode *cpfile, __u64 cno, int mode)
int nilfs_cpfile_get_stat(struct inode *cpfile, struct nilfs_cpstat *cpstat)
int nilfs_cpfile_read(struct super_block *sb, size_t cpsize,
struct nilfs_inode *raw_inode, struct inode **inodep)
