#define ISPRINT(a)  ((a >= ' ') && (a <= '~'))
static struct se_subsystem_api pscsi_template;
static void pscsi_req_done(struct request *, int);
static struct Scsi_Host *pscsi_get_sh(u32 host_no)
static int pscsi_attach_hba(struct se_hba *hba, u32 host_id)
static void pscsi_detach_hba(struct se_hba *hba)
static int pscsi_pmode_enable_hba(struct se_hba *hba, unsigned long mode_flag)
static void pscsi_tape_read_blocksize(struct se_device *dev,
struct scsi_device *sdev)
static void
pscsi_set_inquiry_info(struct scsi_device *sdev, struct t10_wwn *wwn)
static int
pscsi_get_inquiry_vpd_serial(struct scsi_device *sdev, struct t10_wwn *wwn)
static void
pscsi_get_inquiry_vpd_device_ident(struct scsi_device *sdev,
struct t10_wwn *wwn)
static struct se_device *pscsi_add_device_to_list(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
struct pscsi_dev_virt *pdv,
struct scsi_device *sd,
int dev_flags)
static void *pscsi_allocate_virtdevice(struct se_hba *hba, const char *name)
static struct se_device *pscsi_create_type_disk(
struct scsi_device *sd,
struct pscsi_dev_virt *pdv,
struct se_subsystem_dev *se_dev,
struct se_hba *hba)
__releases(sh->host_lock)
static struct se_device *pscsi_create_type_rom(
struct scsi_device *sd,
struct pscsi_dev_virt *pdv,
struct se_subsystem_dev *se_dev,
struct se_hba *hba)
__releases(sh->host_lock)
static struct se_device *pscsi_create_type_other(
struct scsi_device *sd,
struct pscsi_dev_virt *pdv,
struct se_subsystem_dev *se_dev,
struct se_hba *hba)
__releases(sh->host_lock)
static struct se_device *pscsi_create_virtdevice(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
void *p)
static void pscsi_free_device(void *p)
static inline struct pscsi_plugin_task *PSCSI_TASK(struct se_task *task)
static int pscsi_transport_complete(struct se_task *task)
static struct se_task *
pscsi_alloc_task(struct se_cmd *cmd)
static inline void pscsi_blk_init_request(
struct se_task *task,
struct pscsi_plugin_task *pt,
struct request *req,
int bidi_read)
static int pscsi_blk_get_request(struct se_task *task)
static int pscsi_do_task(struct se_task *task)
static void pscsi_free_task(struct se_task *task)
enum ;
static match_table_t tokens = ;
static ssize_t pscsi_set_configfs_dev_params(struct se_hba *hba,
struct se_subsystem_dev *se_dev,
const char *page,
ssize_t count)
static ssize_t pscsi_check_configfs_dev_params(
struct se_hba *hba,
struct se_subsystem_dev *se_dev)
static ssize_t pscsi_show_configfs_dev_params(struct se_hba *hba,
struct se_subsystem_dev *se_dev,
char *b)
static void pscsi_bi_endio(struct bio *bio, int error)
static inline struct bio *pscsi_get_bio(struct pscsi_dev_virt *pdv, int sg_num)
static int __pscsi_map_task_SG(
struct se_task *task,
struct scatterlist *task_sg,
u32 task_sg_num,
int bidi_read)
static int pscsi_map_task_SG(struct se_task *task)
static int pscsi_map_task_non_SG(struct se_task *task)
static int pscsi_CDB_none(struct se_task *task)
static unsigned char *pscsi_get_cdb(struct se_task *task)
static unsigned char *pscsi_get_sense_buffer(struct se_task *task)
static u32 pscsi_get_device_rev(struct se_device *dev)
static u32 pscsi_get_device_type(struct se_device *dev)
static sector_t pscsi_get_blocks(struct se_device *dev)
static inline void pscsi_process_SAM_status(
struct se_task *task,
struct pscsi_plugin_task *pt)
static void pscsi_req_done(struct request *req, int uptodate)
static struct se_subsystem_api pscsi_template = ;
static int __init pscsi_module_init(void)
static void pscsi_module_exit(void)
MODULE_DESCRIPTION("TCM PSCSI subsystem plugin");
MODULE_AUTHOR("nab@Linux-iSCSI.org");
MODULE_LICENSE("GPL");
module_init(pscsi_module_init);
module_exit(pscsi_module_exit);
