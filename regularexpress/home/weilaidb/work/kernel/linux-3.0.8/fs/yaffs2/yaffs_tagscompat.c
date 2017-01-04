static void yaffs_handle_rd_data_error(struct yaffs_dev *dev, int nand_chunk);
void yaffs_calc_tags_ecc(struct yaffs_tags *tags)
int yaffs_check_tags_ecc(struct yaffs_tags *tags)
static void yaffs_load_tags_to_spare(struct yaffs_dev *dev,
struct yaffs_spare *spare_ptr,
struct yaffs_tags *tags_ptr)
static void yaffs_get_tags_from_spare(struct yaffs_dev *dev,
struct yaffs_spare *spare_ptr,
struct yaffs_tags *tags_ptr)
static void yaffs_spare_init(struct yaffs_spare *spare)
static int yaffs_wr_nand(struct yaffs_dev *dev,
int nand_chunk, const u8 *data,
struct yaffs_spare *spare)
static int yaffs_rd_chunk_nand(struct yaffs_dev *dev,
int nand_chunk,
u8 *data,
struct yaffs_spare *spare,
enum yaffs_ecc_result *ecc_result,
int correct_errors)
static void yaffs_handle_rd_data_error(struct yaffs_dev *dev, int nand_chunk)
static int yaffs_tags_compat_wr(struct yaffs_dev *dev,
int nand_chunk,
const u8 *data, const struct yaffs_ext_tags *ext_tags)
static int yaffs_tags_compat_rd(struct yaffs_dev *dev,
int nand_chunk,
u8 *data, struct yaffs_ext_tags *ext_tags)
static int yaffs_tags_compat_mark_bad(struct yaffs_dev *dev, int flash_block)
static int yaffs_tags_compat_query_block(struct yaffs_dev *dev,
int block_no,
enum yaffs_block_state *state,
u32 *seq_number)
void yaffs_tags_compat_install(struct yaffs_dev *dev)
