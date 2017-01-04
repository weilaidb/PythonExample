static struct se_subsystem_api rd_dr_template;
static struct se_subsystem_api rd_mcp_template;
static int rd_attach_hba(struct se_hba *hba, u32 host_id)
static void rd_detach_hba(struct se_hba *hba)
static void rd_release_device_space(struct rd_dev *rd_dev)
static int rd_build_device_space(struct rd_dev *rd_dev)
static void *rd_allocate_virtdevice(
struct se_hba *hba,
const char *name,
int rd_direct)
static void *rd_DIRECT_allocate_virtdevice(struct se_hba *hba, const char *name)
static void *rd_MEMCPY_allocate_virtdevice(struct se_hba *hba, const char *name)
static struct se_device *rd_create_virtdevice(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
void *p,
int rd_direct)
static struct se_device *rd_DIRECT_create_virtdevice(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
void *p)
static struct se_device *rd_MEMCPY_create_virtdevice(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
void *p)
static void rd_free_device(void *p)
static inline struct rd_request *RD_REQ(struct se_task *task)
static struct se_task *
rd_alloc_task(struct se_cmd *cmd)
static struct rd_dev_sg_table *rd_get_sg_table(struct rd_dev *rd_dev, u32 page)
static int rd_MEMCPY_read(struct rd_request *req)
static int rd_MEMCPY_write(struct rd_request *req)
static int rd_MEMCPY_do_task(struct se_task *task)
static int rd_DIRECT_with_offset(
struct se_task *task,
struct list_head *se_mem_list,
u32 *se_mem_cnt,
u32 *task_offset)
static int rd_DIRECT_without_offset(
struct se_task *task,
struct list_head *se_mem_list,
u32 *se_mem_cnt,
u32 *task_offset)
static int rd_DIRECT_do_se_mem_map(
struct se_task *task,
struct list_head *se_mem_list,
void *in_mem,
struct se_mem *in_se_mem,
struct se_mem **out_se_mem,
u32 *se_mem_cnt,
u32 *task_offset_in)
static int rd_DIRECT_do_task(struct se_task *task)
static void rd_free_task(struct se_task *task)
enum ;
static match_table_t tokens = ;
static ssize_t rd_set_configfs_dev_params(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
const char *page,
ssize_t count)
static ssize_t rd_check_configfs_dev_params(struct se_hba *hba, struct se_subsystem_dev *se_dev)
static ssize_t rd_show_configfs_dev_params(
struct se_hba *hba,
struct se_subsystem_dev *se_dev,
char *b)
static unsigned char *rd_get_cdb(struct se_task *task)
static u32 rd_get_device_rev(struct se_device *dev)
static u32 rd_get_device_type(struct se_device *dev)
static sector_t rd_get_blocks(struct se_device *dev)
static struct se_subsystem_api rd_dr_template = ;
static struct se_subsystem_api rd_mcp_template = ;
int __init rd_module_init(void)
void rd_module_exit(void)
