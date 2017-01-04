#if 1
#define DEBUG_FD_CACHE(x...) printk(x)
#define DEBUG_FD_CACHE(x...)
#if 1
#define DEBUG_FD_FUA(x...) printk(x)
#define DEBUG_FD_FUA(x...)
static struct se_subsystem_api fileio_template;
static int fd_attach_hba(struct se_hba *hba, u32 host_id)
static void fd_detach_hba(struct se_hba *hba)
static void *fd_allocate_virtdevice(struct se_hba *hba, const char *name)
static struct se_device *fd_create_virtdevice(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
void *p)
static void fd_free_device(void *p)
static inline struct fd_request *FILE_REQ(struct se_task *task)
static struct se_task *
fd_alloc_task(struct se_cmd *cmd)
static int fd_do_readv(struct se_task *task)
static int fd_do_writev(struct se_task *task)
static void fd_emulate_sync_cache(struct se_task *task)
static int fd_emulated_write_cache(struct se_device *dev)
static int fd_emulated_dpo(struct se_device *dev)
static int fd_emulated_fua_write(struct se_device *dev)
static int fd_emulated_fua_read(struct se_device *dev)
static void fd_emulate_write_fua(struct se_cmd *cmd, struct se_task *task)
static int fd_do_task(struct se_task *task)
static void fd_free_task(struct se_task *task)
enum ;
static match_table_t tokens = ;
static ssize_t fd_set_configfs_dev_params(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
const char *page, ssize_t count)
static ssize_t fd_check_configfs_dev_params(struct se_hba *hba, struct se_subsystem_dev *se_dev)
static ssize_t fd_show_configfs_dev_params(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
char *b)
static unsigned char *fd_get_cdb(struct se_task *task)
static u32 fd_get_device_rev(struct se_device *dev)
static u32 fd_get_device_type(struct se_device *dev)
static sector_t fd_get_blocks(struct se_device *dev)
static struct se_subsystem_api fileio_template = ;
static int __init fileio_module_init(void)
static void fileio_module_exit(void)
MODULE_DESCRIPTION("TCM FILEIO subsystem plugin");
MODULE_AUTHOR("nab@Linux-iSCSI.org");
MODULE_LICENSE("GPL");
module_init(fileio_module_init);
module_exit(fileio_module_exit);
