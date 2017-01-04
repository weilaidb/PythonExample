int nandmtd_erase_block(struct yaffs_dev *dev, int block_no)
static 	int yaffs_mtd_write(struct yaffs_dev *dev, int nand_chunk,
const u8 *data, int data_len,
const u8 *oob, int oob_len)
static int yaffs_mtd_read(struct yaffs_dev *dev, int nand_chunk,
u8 *data, int data_len,
u8 *oob, int oob_len,
enum yaffs_ecc_result *ecc_result)
static 	int yaffs_mtd_erase(struct yaffs_dev *dev, int block_no)
static int yaffs_mtd_mark_bad(struct yaffs_dev *dev, int block_no)
static int yaffs_mtd_check_bad(struct yaffs_dev *dev, int block_no)
static int yaffs_mtd_initialise(struct yaffs_dev *dev)
static int yaffs_mtd_deinitialise(struct yaffs_dev *dev)
void yaffs_mtd_drv_install(struct yaffs_dev *dev)
