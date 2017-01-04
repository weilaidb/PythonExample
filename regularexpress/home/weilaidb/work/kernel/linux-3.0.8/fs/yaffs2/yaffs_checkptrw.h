#define __YAFFS_CHECKPTRW_H__
int yaffs2_checkpt_open(struct yaffs_dev *dev, int writing);
int yaffs2_checkpt_wr(struct yaffs_dev *dev, const void *data, int n_bytes);
int yaffs2_checkpt_rd(struct yaffs_dev *dev, void *data, int n_bytes);
int yaffs2_get_checkpt_sum(struct yaffs_dev *dev, u32 * sum);
int yaffs_checkpt_close(struct yaffs_dev *dev);
int yaffs2_checkpt_invalidate_stream(struct yaffs_dev *dev);
