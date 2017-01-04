#define SG_MEMPOOL_NR		ARRAY_SIZE(scsi_sg_pools)
#define SG_MEMPOOL_SIZE		2
struct scsi_host_sg_pool ;
#define SP(x)
#if (SCSI_MAX_SG_SEGMENTS < 32)
#error SCSI_MAX_SG_SEGMENTS is too small (must be 32 or greater)
static struct scsi_host_sg_pool scsi_sg_pools[] = ;
#undef SP
struct kmem_cache *scsi_sdb_cache;
#define SCSI_QUEUE_DELAY	3
static void scsi_unprep_request(struct request *req)
static int __scsi_queue_insert(struct scsi_cmnd *cmd, int reason, int unbusy)
int scsi_queue_insert(struct scsi_cmnd *cmd, int reason)
int scsi_execute(struct scsi_device *sdev, const unsigned char *cmd,
int data_direction, void *buffer, unsigned bufflen,
unsigned char *sense, int timeout, int retries, int flags,
int *resid)
EXPORT_SYMBOL(scsi_execute);
int scsi_execute_req(struct scsi_device *sdev, const unsigned char *cmd,
int data_direction, void *buffer, unsigned bufflen,
struct scsi_sense_hdr *sshdr, int timeout, int retries,
int *resid)
EXPORT_SYMBOL(scsi_execute_req);
static void scsi_init_cmd_errh(struct scsi_cmnd *cmd)
void scsi_device_unbusy(struct scsi_device *sdev)
static void scsi_single_lun_run(struct scsi_device *current_sdev)
static inline int scsi_device_is_busy(struct scsi_device *sdev)
static inline int scsi_target_is_busy(struct scsi_target *starget)
static inline int scsi_host_is_busy(struct Scsi_Host *shost)
static void scsi_run_queue(struct request_queue *q)
void scsi_requeue_run_queue(struct work_struct *work)
static void scsi_requeue_command(struct request_queue *q, struct scsi_cmnd *cmd)
void scsi_next_command(struct scsi_cmnd *cmd)
void scsi_run_host_queues(struct Scsi_Host *shost)
static void __scsi_release_buffers(struct scsi_cmnd *, int);
static struct scsi_cmnd *scsi_end_request(struct scsi_cmnd *cmd, int error,
int bytes, int requeue)
static inline unsigned int scsi_sgtable_index(unsigned short nents)
static void scsi_sg_free(struct scatterlist *sgl, unsigned int nents)
static struct scatterlist *scsi_sg_alloc(unsigned int nents, gfp_t gfp_mask)
static int scsi_alloc_sgtable(struct scsi_data_buffer *sdb, int nents,
gfp_t gfp_mask)
static void scsi_free_sgtable(struct scsi_data_buffer *sdb)
static void __scsi_release_buffers(struct scsi_cmnd *cmd, int do_bidi_check)
void scsi_release_buffers(struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_release_buffers);
static int __scsi_error_from_host_byte(struct scsi_cmnd *cmd, int result)
void scsi_io_completion(struct scsi_cmnd *cmd, unsigned int good_bytes)
static int scsi_init_sgtable(struct request *req, struct scsi_data_buffer *sdb,
gfp_t gfp_mask)
int scsi_init_io(struct scsi_cmnd *cmd, gfp_t gfp_mask)
EXPORT_SYMBOL(scsi_init_io);
static struct scsi_cmnd *scsi_get_cmd_from_req(struct scsi_device *sdev,
struct request *req)
int scsi_setup_blk_pc_cmnd(struct scsi_device *sdev, struct request *req)
EXPORT_SYMBOL(scsi_setup_blk_pc_cmnd);
int scsi_setup_fs_cmnd(struct scsi_device *sdev, struct request *req)
EXPORT_SYMBOL(scsi_setup_fs_cmnd);
int scsi_prep_state_check(struct scsi_device *sdev, struct request *req)
EXPORT_SYMBOL(scsi_prep_state_check);
int scsi_prep_return(struct request_queue *q, struct request *req, int ret)
EXPORT_SYMBOL(scsi_prep_return);
int scsi_prep_fn(struct request_queue *q, struct request *req)
EXPORT_SYMBOL(scsi_prep_fn);
static inline int scsi_dev_queue_ready(struct request_queue *q,
struct scsi_device *sdev)
static inline int scsi_target_queue_ready(struct Scsi_Host *shost,
struct scsi_device *sdev)
static inline int scsi_host_queue_ready(struct request_queue *q,
struct Scsi_Host *shost,
struct scsi_device *sdev)
static int scsi_lld_busy(struct request_queue *q)
static void scsi_kill_request(struct request *req, struct request_queue *q)
static void scsi_softirq_done(struct request *rq)
static void scsi_request_fn(struct request_queue *q)
u64 scsi_calculate_bounce_limit(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_calculate_bounce_limit);
struct request_queue *__scsi_alloc_queue(struct Scsi_Host *shost,
request_fn_proc *request_fn)
EXPORT_SYMBOL(__scsi_alloc_queue);
struct request_queue *scsi_alloc_queue(struct scsi_device *sdev)
void scsi_free_queue(struct request_queue *q)
void scsi_block_requests(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_block_requests);
void scsi_unblock_requests(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_unblock_requests);
int __init scsi_init_queue(void)
void scsi_exit_queue(void)
int
scsi_mode_select(struct scsi_device *sdev, int pf, int sp, int modepage,
unsigned char *buffer, int len, int timeout, int retries,
struct scsi_mode_data *data, struct scsi_sense_hdr *sshdr)
EXPORT_SYMBOL_GPL(scsi_mode_select);
int
scsi_mode_sense(struct scsi_device *sdev, int dbd, int modepage,
unsigned char *buffer, int len, int timeout, int retries,
struct scsi_mode_data *data, struct scsi_sense_hdr *sshdr)
EXPORT_SYMBOL(scsi_mode_sense);
int
scsi_test_unit_ready(struct scsi_device *sdev, int timeout, int retries,
struct scsi_sense_hdr *sshdr_external)
EXPORT_SYMBOL(scsi_test_unit_ready);
int
scsi_device_set_state(struct scsi_device *sdev, enum scsi_device_state state)
EXPORT_SYMBOL(scsi_device_set_state);
static void scsi_evt_emit(struct scsi_device *sdev, struct scsi_event *evt)
void scsi_evt_thread(struct work_struct *work)
void sdev_evt_send(struct scsi_device *sdev, struct scsi_event *evt)
EXPORT_SYMBOL_GPL(sdev_evt_send);
struct scsi_event *sdev_evt_alloc(enum scsi_device_event evt_type,
gfp_t gfpflags)
EXPORT_SYMBOL_GPL(sdev_evt_alloc);
void sdev_evt_send_simple(struct scsi_device *sdev,
enum scsi_device_event evt_type, gfp_t gfpflags)
EXPORT_SYMBOL_GPL(sdev_evt_send_simple);
int
scsi_device_quiesce(struct scsi_device *sdev)
EXPORT_SYMBOL(scsi_device_quiesce);
void
scsi_device_resume(struct scsi_device *sdev)
EXPORT_SYMBOL(scsi_device_resume);
static void
device_quiesce_fn(struct scsi_device *sdev, void *data)
void
scsi_target_quiesce(struct scsi_target *starget)
EXPORT_SYMBOL(scsi_target_quiesce);
static void
device_resume_fn(struct scsi_device *sdev, void *data)
void
scsi_target_resume(struct scsi_target *starget)
EXPORT_SYMBOL(scsi_target_resume);
int
scsi_internal_device_block(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(scsi_internal_device_block);
int
scsi_internal_device_unblock(struct scsi_device *sdev)
EXPORT_SYMBOL_GPL(scsi_internal_device_unblock);
static void
device_block(struct scsi_device *sdev, void *data)
static int
target_block(struct device *dev, void *data)
void
scsi_target_block(struct device *dev)
EXPORT_SYMBOL_GPL(scsi_target_block);
static void
device_unblock(struct scsi_device *sdev, void *data)
static int
target_unblock(struct device *dev, void *data)
void
scsi_target_unblock(struct device *dev)
EXPORT_SYMBOL_GPL(scsi_target_unblock);
void *scsi_kmap_atomic_sg(struct scatterlist *sgl, int sg_count,
size_t *offset, size_t *len)
EXPORT_SYMBOL(scsi_kmap_atomic_sg);
void scsi_kunmap_atomic_sg(void *virt)
EXPORT_SYMBOL(scsi_kunmap_atomic_sg);
