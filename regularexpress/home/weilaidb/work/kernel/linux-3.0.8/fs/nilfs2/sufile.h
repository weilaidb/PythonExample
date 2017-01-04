#define _NILFS_SUFILE_H
static inline unsigned long nilfs_sufile_get_nsegments(struct inode *sufile)
unsigned long nilfs_sufile_get_ncleansegs(struct inode *sufile);
int nilfs_sufile_set_alloc_range(struct inode *sufile, __u64 start, __u64 end);
int nilfs_sufile_alloc(struct inode *, __u64 *);
int nilfs_sufile_mark_dirty(struct inode *sufile, __u64 segnum);
int nilfs_sufile_set_segment_usage(struct inode *sufile, __u64 segnum,
unsigned long nblocks, time_t modtime);
int nilfs_sufile_get_stat(struct inode *, struct nilfs_sustat *);
ssize_t nilfs_sufile_get_suinfo(struct inode *, __u64, void *, unsigned,
size_t);
int nilfs_sufile_updatev(struct inode *, __u64 *, size_t, int, size_t *,
void (*dofunc)(struct inode *, __u64,
struct buffer_head *,
struct buffer_head *));
int nilfs_sufile_update(struct inode *, __u64, int,
void (*dofunc)(struct inode *, __u64,
struct buffer_head *,
struct buffer_head *));
void nilfs_sufile_do_scrap(struct inode *, __u64, struct buffer_head *,
struct buffer_head *);
void nilfs_sufile_do_free(struct inode *, __u64, struct buffer_head *,
struct buffer_head *);
void nilfs_sufile_do_cancel_free(struct inode *, __u64, struct buffer_head *,
struct buffer_head *);
void nilfs_sufile_do_set_error(struct inode *, __u64, struct buffer_head *,
struct buffer_head *);
int nilfs_sufile_resize(struct inode *sufile, __u64 newnsegs);
int nilfs_sufile_read(struct super_block *sb, size_t susize,
struct nilfs_inode *raw_inode, struct inode **inodep);
static inline int nilfs_sufile_scrap(struct inode *sufile, __u64 segnum)
static inline int nilfs_sufile_free(struct inode *sufile, __u64 segnum)
static inline int nilfs_sufile_freev(struct inode *sufile, __u64 *segnumv,
size_t nsegs, size_t *ndone)
static inline int nilfs_sufile_cancel_freev(struct inode *sufile,
__u64 *segnumv, size_t nsegs,
size_t *ndone)
static inline int nilfs_sufile_set_error(struct inode *sufile, __u64 segnum)
