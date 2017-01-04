static int yaffs_tags_marshall_write(struct yaffs_dev *dev,
int nand_chunk, const u8 *data,
const struct yaffs_ext_tags *tags)
static int yaffs_tags_marshall_read(struct yaffs_dev *dev,
int nand_chunk, u8 *data,
struct yaffs_ext_tags *tags)
static int yaffs_tags_marshall_query_block(struct yaffs_dev *dev, int block_no,
enum yaffs_block_state *state,
u32 *seq_number)
static int yaffs_tags_marshall_mark_bad(struct yaffs_dev *dev, int block_no)
void yaffs_tags_marshall_install(struct yaffs_dev *dev)
