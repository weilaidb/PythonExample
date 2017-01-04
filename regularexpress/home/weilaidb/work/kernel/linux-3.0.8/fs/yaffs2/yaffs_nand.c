static int apply_chunk_offset(struct yaffs_dev *dev, int chunk)
int yaffs_rd_chunk_tags_nand(struct yaffs_dev *dev, int nand_chunk,
u8 *buffer, struct yaffs_ext_tags *tags)
int yaffs_wr_chunk_tags_nand(struct yaffs_dev *dev,
int nand_chunk,
const u8 *buffer, struct yaffs_ext_tags *tags)
int yaffs_mark_bad(struct yaffs_dev *dev, int block_no)
int yaffs_query_init_block_state(struct yaffs_dev *dev,
int block_no,
enum yaffs_block_state *state,
u32 *seq_number)
int yaffs_erase_block(struct yaffs_dev *dev, int block_no)
int yaffs_init_nand(struct yaffs_dev *dev)
int yaffs_deinit_nand(struct yaffs_dev *dev)
