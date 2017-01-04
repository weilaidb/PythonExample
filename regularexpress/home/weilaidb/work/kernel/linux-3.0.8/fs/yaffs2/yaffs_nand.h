#define __YAFFS_NAND_H__
int yaffs_rd_chunk_tags_nand(struct yaffs_dev *dev, int nand_chunk,
u8 *buffer, struct yaffs_ext_tags *tags);
int yaffs_wr_chunk_tags_nand(struct yaffs_dev *dev,
int nand_chunk,
const u8 *buffer, struct yaffs_ext_tags *tags);
int yaffs_mark_bad(struct yaffs_dev *dev, int block_no);
int yaffs_query_init_block_state(struct yaffs_dev *dev,
int block_no,
enum yaffs_block_state *state,
unsigned *seq_number);
int yaffs_erase_block(struct yaffs_dev *dev, int flash_block);
int yaffs_init_nand(struct yaffs_dev *dev);
int yaffs_deinit_nand(struct yaffs_dev *dev);
