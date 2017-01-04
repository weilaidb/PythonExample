static struct workqueue_struct *scsi_tgtd;
static struct kmem_cache *scsi_tgt_cmd_cache;
struct scsi_tgt_cmd ;
#define TGT_HASH_ORDER	4
#define cmd_hashfn(tag)	hash_long((unsigned long) (tag), TGT_HASH_ORDER)
struct scsi_tgt_queuedata ;
struct scsi_cmnd *scsi_host_get_command(struct Scsi_Host *shost,
enum dma_data_direction data_dir,
gfp_t gfp_mask)
EXPORT_SYMBOL_GPL(scsi_host_get_command);
void scsi_host_put_command(struct Scsi_Host *shost, struct scsi_cmnd *cmd)
EXPORT_SYMBOL_GPL(scsi_host_put_command);
static void cmd_hashlist_del(struct scsi_cmnd *cmd)
static void scsi_unmap_user_pages(struct scsi_tgt_cmd *tcmd)
static void scsi_tgt_cmd_destroy(struct work_struct *work)
static void init_scsi_tgt_cmd(struct request *rq, struct scsi_tgt_cmd *tcmd,
u64 itn_id, u64 tag)
int scsi_tgt_alloc_queue(struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(scsi_tgt_alloc_queue);
void scsi_tgt_free_queue(struct Scsi_Host *shost)
EXPORT_SYMBOL_GPL(scsi_tgt_free_queue);
struct Scsi_Host *scsi_tgt_cmd_to_host(struct scsi_cmnd *cmd)
EXPORT_SYMBOL_GPL(scsi_tgt_cmd_to_host);
int scsi_tgt_queue_command(struct scsi_cmnd *cmd, u64 itn_id,
struct scsi_lun *scsilun, u64 tag)
EXPORT_SYMBOL_GPL(scsi_tgt_queue_command);
static void scsi_tgt_cmd_done(struct scsi_cmnd *cmd)
static int scsi_tgt_transfer_response(struct scsi_cmnd *cmd)
static int scsi_map_user_pages(struct scsi_tgt_cmd *tcmd, struct scsi_cmnd *cmd,
unsigned long uaddr, unsigned int len, int rw)
static int scsi_tgt_copy_sense(struct scsi_cmnd *cmd, unsigned long uaddr,
unsigned len)
static int scsi_tgt_abort_cmd(struct Scsi_Host *shost, struct scsi_cmnd *cmd)
static struct request *tgt_cmd_hash_lookup(struct request_queue *q, u64 tag)
int scsi_tgt_kspace_exec(int host_no, u64 itn_id, int result, u64 tag,
unsigned long uaddr, u32 len, unsigned long sense_uaddr,
u32 sense_len, u8 rw)
int scsi_tgt_tsk_mgmt_request(struct Scsi_Host *shost, u64 itn_id,
int function, u64 tag, struct scsi_lun *scsilun,
void *data)
EXPORT_SYMBOL_GPL(scsi_tgt_tsk_mgmt_request);
int scsi_tgt_kspace_tsk_mgmt(int host_no, u64 itn_id, u64 mid, int result)
int scsi_tgt_it_nexus_create(struct Scsi_Host *shost, u64 itn_id,
char *initiator)
EXPORT_SYMBOL_GPL(scsi_tgt_it_nexus_create);
int scsi_tgt_it_nexus_destroy(struct Scsi_Host *shost, u64 itn_id)
EXPORT_SYMBOL_GPL(scsi_tgt_it_nexus_destroy);
int scsi_tgt_kspace_it_nexus_rsp(int host_no, u64 itn_id, int result)
static int __init scsi_tgt_init(void)
static void __exit scsi_tgt_exit(void)
module_init(scsi_tgt_init);
module_exit(scsi_tgt_exit);
MODULE_DESCRIPTION("SCSI target core");
MODULE_LICENSE("GPL");
