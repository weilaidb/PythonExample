struct nilfs_sufile_info ;
static inline struct nilfs_sufile_info *NILFS_SUI(struct inode *sufile)
static inline unsigned long
nilfs_sufile_segment_usages_per_block(const struct inode *sufile)
static unsigned long
nilfs_sufile_get_blkoff(const struct inode *sufile, __u64 segnum)
static unsigned long
nilfs_sufile_get_offset(const struct inode *sufile, __u64 segnum)
static unsigned long
nilfs_sufile_segment_usages_in_block(const struct inode *sufile, __u64 curr,
__u64 max)
static struct nilfs_segment_usage *
nilfs_sufile_block_get_segment_usage(const struct inode *sufile, __u64 segnum,
struct buffer_head *bh, void *kaddr)
static inline int nilfs_sufile_get_header_block(struct inode *sufile,
struct buffer_head **bhp)
static inline int
nilfs_sufile_get_segment_usage_block(struct inode *sufile, __u64 segnum,
int create, struct buffer_head **bhp)
static int nilfs_sufile_delete_segment_usage_block(struct inode *sufile,
__u64 segnum)
static void nilfs_sufile_mod_counter(struct buffer_head *header_bh,
u64 ncleanadd, u64 ndirtyadd)
unsigned long nilfs_sufile_get_ncleansegs(struct inode *sufile)
int nilfs_sufile_updatev(struct inode *sufile, __u64 *segnumv, size_t nsegs,
int create, size_t *ndone,
void (*dofunc)(struct inode *, __u64,
struct buffer_head *,
struct buffer_head *))
int nilfs_sufile_update(struct inode *sufile, __u64 segnum, int create,
void (*dofunc)(struct inode *, __u64,
struct buffer_head *,
struct buffer_head *))
int nilfs_sufile_set_alloc_range(struct inode *sufile, __u64 start, __u64 end)
int nilfs_sufile_alloc(struct inode *sufile, __u64 *segnump)
void nilfs_sufile_do_cancel_free(struct inode *sufile, __u64 segnum,
struct buffer_head *header_bh,
struct buffer_head *su_bh)
void nilfs_sufile_do_scrap(struct inode *sufile, __u64 segnum,
struct buffer_head *header_bh,
struct buffer_head *su_bh)
void nilfs_sufile_do_free(struct inode *sufile, __u64 segnum,
struct buffer_head *header_bh,
struct buffer_head *su_bh)
int nilfs_sufile_mark_dirty(struct inode *sufile, __u64 segnum)
int nilfs_sufile_set_segment_usage(struct inode *sufile, __u64 segnum,
unsigned long nblocks, time_t modtime)
int nilfs_sufile_get_stat(struct inode *sufile, struct nilfs_sustat *sustat)
void nilfs_sufile_do_set_error(struct inode *sufile, __u64 segnum,
struct buffer_head *header_bh,
struct buffer_head *su_bh)
static int nilfs_sufile_truncate_range(struct inode *sufile,
__u64 start, __u64 end)
int nilfs_sufile_resize(struct inode *sufile, __u64 newnsegs)
ssize_t nilfs_sufile_get_suinfo(struct inode *sufile, __u64 segnum, void *buf,
unsigned sisz, size_t nsi)
int nilfs_sufile_read(struct super_block *sb, size_t susize,
struct nilfs_inode *raw_inode, struct inode **inodep)
