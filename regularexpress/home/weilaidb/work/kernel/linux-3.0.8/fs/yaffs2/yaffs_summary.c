struct yaffs_summary_tags ;
struct yaffs_summary_header ;
static void yaffs_summary_clear(struct yaffs_dev *dev)
void yaffs_summary_deinit(struct yaffs_dev *dev)
int yaffs_summary_init(struct yaffs_dev *dev)
static unsigned yaffs_summary_sum(struct yaffs_dev *dev)
static int yaffs_summary_write(struct yaffs_dev *dev, int blk)
int yaffs_summary_read(struct yaffs_dev *dev,
struct yaffs_summary_tags *st,
int blk)
int yaffs_summary_add(struct yaffs_dev *dev,
struct yaffs_ext_tags *tags,
int chunk_in_nand)
int yaffs_summary_fetch(struct yaffs_dev *dev,
struct yaffs_ext_tags *tags,
int chunk_in_block)
void yaffs_summary_gc(struct yaffs_dev *dev, int blk)
