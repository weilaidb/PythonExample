#define __YAFFS_SUMMARY_H__
int yaffs_summary_init(struct yaffs_dev *dev);
void yaffs_summary_deinit(struct yaffs_dev *dev);
int yaffs_summary_add(struct yaffs_dev *dev,
struct yaffs_ext_tags *tags,
int chunk_in_block);
int yaffs_summary_fetch(struct yaffs_dev *dev,
struct yaffs_ext_tags *tags,
int chunk_in_block);
int yaffs_summary_read(struct yaffs_dev *dev,
struct yaffs_summary_tags *st,
int blk);
void yaffs_summary_gc(struct yaffs_dev *dev, int blk);
