#define __BMAP_DOT_H__
struct inode;
struct gfs2_inode;
struct page;
static inline void gfs2_write_calc_reserv(const struct gfs2_inode *ip,
unsigned int len,
unsigned int *data_blocks,
unsigned int *ind_blocks)
extern int gfs2_unstuff_dinode(struct gfs2_inode *ip, struct page *page);
extern int gfs2_block_map(struct inode *inode, sector_t lblock,
struct buffer_head *bh, int create);
extern int gfs2_extent_map(struct inode *inode, u64 lblock, int *new,
u64 *dblock, unsigned *extlen);
extern int gfs2_setattr_size(struct inode *inode, u64 size);
extern void gfs2_trim_blocks(struct inode *inode);
extern int gfs2_truncatei_resume(struct gfs2_inode *ip);
extern int gfs2_file_dealloc(struct gfs2_inode *ip);
extern int gfs2_write_alloc_required(struct gfs2_inode *ip, u64 offset,
unsigned int len);
