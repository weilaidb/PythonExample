enum srp_task_attributes ;
#define eprintk(fmt, args...)					\
do  while (0)
#define dprintk(fmt, args...)
static int srp_iu_pool_alloc(struct srp_queue *q, size_t max,
struct srp_buf **ring)
static void srp_iu_pool_free(struct srp_queue *q)
static struct srp_buf **srp_ring_alloc(struct device *dev,
size_t max, size_t size)
static void srp_ring_free(struct device *dev, struct srp_buf **ring, size_t max,
size_t size)
int srp_target_alloc(struct srp_target *target, struct device *dev,
size_t nr, size_t iu_size)
EXPORT_SYMBOL_GPL(srp_target_alloc);
void srp_target_free(struct srp_target *target)
EXPORT_SYMBOL_GPL(srp_target_free);
struct iu_entry *srp_iu_get(struct srp_target *target)
EXPORT_SYMBOL_GPL(srp_iu_get);
void srp_iu_put(struct iu_entry *iue)
EXPORT_SYMBOL_GPL(srp_iu_put);
static int srp_direct_data(struct scsi_cmnd *sc, struct srp_direct_buf *md,
enum dma_data_direction dir, srp_rdma_t rdma_io,
int dma_map, int ext_desc)
static int srp_indirect_data(struct scsi_cmnd *sc, struct srp_cmd *cmd,
struct srp_indirect_buf *id,
enum dma_data_direction dir, srp_rdma_t rdma_io,
int dma_map, int ext_desc)
static int data_out_desc_size(struct srp_cmd *cmd)
int srp_transfer_data(struct scsi_cmnd *sc, struct srp_cmd *cmd,
srp_rdma_t rdma_io, int dma_map, int ext_desc)
EXPORT_SYMBOL_GPL(srp_transfer_data);
static int vscsis_data_length(struct srp_cmd *cmd, enum dma_data_direction dir)
int srp_cmd_queue(struct Scsi_Host *shost, struct srp_cmd *cmd, void *info,
u64 itn_id, u64 addr)
EXPORT_SYMBOL_GPL(srp_cmd_queue);
MODULE_DESCRIPTION("SCSI RDMA Protocol lib functions");
MODULE_AUTHOR("FUJITA Tomonori");
MODULE_LICENSE("GPL");
