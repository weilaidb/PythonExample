#define YAFFS_CHECKPOINT_MIN_BLOCKS 60
#define YAFFS_SMALL_HOLE_THRESHOLD 4
void yaffs_calc_oldest_dirty_seq(struct yaffs_dev *dev)
void yaffs2_find_oldest_dirty_seq(struct yaffs_dev *dev)
void yaffs2_clear_oldest_dirty_seq(struct yaffs_dev *dev,
struct yaffs_block_info *bi)
void yaffs2_update_oldest_dirty_seq(struct yaffs_dev *dev, unsigned block_no,
struct yaffs_block_info *bi)
int yaffs_block_ok_for_gc(struct yaffs_dev *dev, struct yaffs_block_info *bi)
u32 yaffs2_find_refresh_block(struct yaffs_dev *dev)
int yaffs2_checkpt_required(struct yaffs_dev *dev)
int yaffs_calc_checkpt_blocks_required(struct yaffs_dev *dev)
static void yaffs2_do_endian_validity_marker(struct yaffs_dev *dev,
struct yaffs_checkpt_validity *v)
static int yaffs2_wr_checkpt_validity_marker(struct yaffs_dev *dev, int head)
static int yaffs2_rd_checkpt_validity_marker(struct yaffs_dev *dev, int head)
static void yaffs2_dev_to_checkpt_dev(struct yaffs_checkpt_dev *cp,
struct yaffs_dev *dev)
static void yaffs_checkpt_dev_to_dev(struct yaffs_dev *dev,
struct yaffs_checkpt_dev *cp)
static void yaffs2_do_endian_checkpt_dev(struct yaffs_dev *dev,
struct yaffs_checkpt_dev *cp)
static int yaffs2_wr_checkpt_dev(struct yaffs_dev *dev)
static int yaffs2_rd_checkpt_dev(struct yaffs_dev *dev)
static void yaffs2_checkpt_obj_bit_assign(struct yaffs_checkpt_obj *cp,
int bit_offset,
int bit_width,
u32 value)
static u32 yaffs2_checkpt_obj_bit_get(struct yaffs_checkpt_obj *cp,
int bit_offset,
int bit_width)
static void yaffs2_obj_checkpt_obj(struct yaffs_checkpt_obj *cp,
struct yaffs_obj *obj)
static int yaffs2_checkpt_obj_to_obj(struct yaffs_obj *obj,
struct yaffs_checkpt_obj *cp)
static void yaffs2_do_endian_tnode(struct yaffs_dev *dev, struct yaffs_tnode *tn)
struct yaffs_tnode *yaffs2_do_endian_tnode_copy(struct yaffs_dev *dev,
struct yaffs_tnode *tn)
static int yaffs2_checkpt_tnode_worker(struct yaffs_obj *in,
struct yaffs_tnode *tn, u32 level,
int chunk_offset)
static int yaffs2_wr_checkpt_tnodes(struct yaffs_obj *obj)
static int yaffs2_rd_checkpt_tnodes(struct yaffs_obj *obj)
static void yaffs2_do_endian_checkpt_obj(struct yaffs_dev *dev,
struct yaffs_checkpt_obj *cp)
static int yaffs2_wr_checkpt_objs(struct yaffs_dev *dev)
static int yaffs2_rd_checkpt_objs(struct yaffs_dev *dev)
static int yaffs2_wr_checkpt_sum(struct yaffs_dev *dev)
static int yaffs2_rd_checkpt_sum(struct yaffs_dev *dev)
static int yaffs2_wr_checkpt_data(struct yaffs_dev *dev)
static int yaffs2_rd_checkpt_data(struct yaffs_dev *dev)
void yaffs2_checkpt_invalidate(struct yaffs_dev *dev)
int yaffs_checkpoint_save(struct yaffs_dev *dev)
int yaffs2_checkpt_restore(struct yaffs_dev *dev)
int yaffs2_handle_hole(struct yaffs_obj *obj, loff_t new_size)
struct yaffs_block_index ;
static int yaffs2_ybicmp(const void *a, const void *b)
static inline int yaffs2_scan_chunk(struct yaffs_dev *dev,
struct yaffs_block_info *bi,
int blk, int chunk_in_block,
int *found_chunks,
u8 *chunk_data,
struct list_head *hard_list,
int summary_available)
int yaffs2_scan_backwards(struct yaffs_dev *dev)
