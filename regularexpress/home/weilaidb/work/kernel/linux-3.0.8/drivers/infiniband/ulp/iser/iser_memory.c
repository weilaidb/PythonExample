#define ISER_KMALLOC_THRESHOLD 0x20000
static int iser_start_rdma_unaligned_sg(struct iscsi_iser_task *iser_task,
enum iser_data_dir cmd_dir)
void iser_finalize_rdma_unaligned_sg(struct iscsi_iser_task *iser_task,
enum iser_data_dir         cmd_dir)
#define IS_4K_ALIGNED(addr)	((((unsigned long)addr) & ~MASK_4K) == 0)
static int iser_sg_to_page_vec(struct iser_data_buf *data,
struct iser_page_vec *page_vec,
struct ib_device *ibdev)
static int iser_data_buf_aligned_len(struct iser_data_buf *data,
struct ib_device *ibdev)
static void iser_data_buf_dump(struct iser_data_buf *data,
struct ib_device *ibdev)
static void iser_dump_page_vec(struct iser_page_vec *page_vec)
static void iser_page_vec_build(struct iser_data_buf *data,
struct iser_page_vec *page_vec,
struct ib_device *ibdev)
int iser_dma_map_task_data(struct iscsi_iser_task *iser_task,
struct iser_data_buf *data,
enum iser_data_dir iser_dir,
enum dma_data_direction dma_dir)
void iser_dma_unmap_task_data(struct iscsi_iser_task *iser_task)
int iser_reg_rdma_mem(struct iscsi_iser_task *iser_task,
enum   iser_data_dir        cmd_dir)
