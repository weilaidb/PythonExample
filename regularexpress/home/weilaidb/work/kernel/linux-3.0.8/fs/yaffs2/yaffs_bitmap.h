#define __YAFFS_BITMAP_H__
void yaffs_verify_chunk_bit_id(struct yaffs_dev *dev, int blk, int chunk);
void yaffs_clear_chunk_bits(struct yaffs_dev *dev, int blk);
void yaffs_clear_chunk_bit(struct yaffs_dev *dev, int blk, int chunk);
void yaffs_set_chunk_bit(struct yaffs_dev *dev, int blk, int chunk);
int yaffs_check_chunk_bit(struct yaffs_dev *dev, int blk, int chunk);
int yaffs_still_some_chunks(struct yaffs_dev *dev, int blk);
int yaffs_count_chunk_bits(struct yaffs_dev *dev, int blk);
