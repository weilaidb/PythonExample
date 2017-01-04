static struct se_subsystem_api iblock_template;
static void iblock_bio_done(struct bio *, int);
static int iblock_attach_hba(struct se_hba *hba, u32 host_id)
static void iblock_detach_hba(struct se_hba *hba)
static void *iblock_allocate_virtdevice(struct se_hba *hba, const char *name)
static struct se_device *iblock_create_virtdevice(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
void *p)
static void iblock_free_device(void *p)
static inline struct iblock_req *IBLOCK_REQ(struct se_task *task)
static struct se_task *
iblock_alloc_task(struct se_cmd *cmd)
static unsigned long long iblock_emulate_read_cap_with_block_size(
struct se_device *dev,
struct block_device *bd,
struct request_queue *q)
static void iblock_emulate_sync_cache(struct se_task *task)
static int iblock_emulated_write_cache(struct se_device *dev)
static int iblock_emulated_dpo(struct se_device *dev)
static int iblock_emulated_fua_write(struct se_device *dev)
static int iblock_emulated_fua_read(struct se_device *dev)
static int iblock_do_task(struct se_task *task)
static int iblock_do_discard(struct se_device *dev, sector_t lba, u32 range)
static void iblock_free_task(struct se_task *task)
enum ;
static match_table_t tokens = ;
static ssize_t iblock_set_configfs_dev_params(struct se_hba *hba,
struct se_subsystem_dev *se_dev,
const char *page, ssize_t count)
static ssize_t iblock_check_configfs_dev_params(
struct se_hba *hba,
struct se_subsystem_dev *se_dev)
static ssize_t iblock_show_configfs_dev_params(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
char *b)
static void iblock_bio_destructor(struct bio *bio)
static struct bio *iblock_get_bio(
struct se_task *task,
struct iblock_req *ib_req,
struct iblock_dev *ib_dev,
int *ret,
sector_t lba,
u32 sg_num)
static int iblock_map_task_SG(struct se_task *task)
static unsigned char *iblock_get_cdb(struct se_task *task)
static u32 iblock_get_device_rev(struct se_device *dev)
static u32 iblock_get_device_type(struct se_device *dev)
static sector_t iblock_get_blocks(struct se_device *dev)
static void iblock_bio_done(struct bio *bio, int err)
static struct se_subsystem_api iblock_template = ;
static int __init iblock_module_init(void)
static void iblock_module_exit(void)
MODULE_DESCRIPTION("TCM IBLOCK subsystem plugin");
MODULE_AUTHOR("nab@Linux-iSCSI.org");
MODULE_LICENSE("GPL");
module_init(iblock_module_init);
module_exit(iblock_module_exit);
