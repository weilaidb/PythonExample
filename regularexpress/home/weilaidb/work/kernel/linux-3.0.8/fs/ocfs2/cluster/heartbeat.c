static DECLARE_RWSEM(o2hb_callback_sem);
static DEFINE_SPINLOCK(o2hb_live_lock);
static struct list_head o2hb_live_slots[O2NM_MAX_NODES];
static unsigned long o2hb_live_node_bitmap[BITS_TO_LONGS(O2NM_MAX_NODES)];
static LIST_HEAD(o2hb_node_events);
static DECLARE_WAIT_QUEUE_HEAD(o2hb_steady_queue);
static unsigned long o2hb_region_bitmap[BITS_TO_LONGS(O2NM_MAX_REGIONS)];
static unsigned long o2hb_live_region_bitmap[BITS_TO_LONGS(O2NM_MAX_REGIONS)];
static unsigned long o2hb_quorum_region_bitmap[BITS_TO_LONGS(O2NM_MAX_REGIONS)];
static unsigned long o2hb_failed_region_bitmap[BITS_TO_LONGS(O2NM_MAX_REGIONS)];
#define O2HB_DB_TYPE_LIVENODES		0
#define O2HB_DB_TYPE_LIVEREGIONS	1
#define O2HB_DB_TYPE_QUORUMREGIONS	2
#define O2HB_DB_TYPE_FAILEDREGIONS	3
#define O2HB_DB_TYPE_REGION_LIVENODES	4
#define O2HB_DB_TYPE_REGION_NUMBER	5
#define O2HB_DB_TYPE_REGION_ELAPSED_TIME	6
#define O2HB_DB_TYPE_REGION_PINNED	7
struct o2hb_debug_buf ;
static struct o2hb_debug_buf *o2hb_db_livenodes;
static struct o2hb_debug_buf *o2hb_db_liveregions;
static struct o2hb_debug_buf *o2hb_db_quorumregions;
static struct o2hb_debug_buf *o2hb_db_failedregions;
#define O2HB_DEBUG_DIR			"o2hb"
#define O2HB_DEBUG_LIVENODES		"livenodes"
#define O2HB_DEBUG_LIVEREGIONS		"live_regions"
#define O2HB_DEBUG_QUORUMREGIONS	"quorum_regions"
#define O2HB_DEBUG_FAILEDREGIONS	"failed_regions"
#define O2HB_DEBUG_REGION_NUMBER	"num"
#define O2HB_DEBUG_REGION_ELAPSED_TIME	"elapsed_time_in_ms"
#define O2HB_DEBUG_REGION_PINNED	"pinned"
static struct dentry *o2hb_debug_dir;
static struct dentry *o2hb_debug_livenodes;
static struct dentry *o2hb_debug_liveregions;
static struct dentry *o2hb_debug_quorumregions;
static struct dentry *o2hb_debug_failedregions;
static LIST_HEAD(o2hb_all_regions);
static struct o2hb_callback  o2hb_callbacks[O2HB_NUM_CB];
static struct o2hb_callback *hbcall_from_type(enum o2hb_callback_type type);
#define O2HB_DEFAULT_BLOCK_BITS       9
enum o2hb_heartbeat_modes ;
char *o2hb_heartbeat_mode_desc[O2HB_HEARTBEAT_NUM_MODES] = ;
unsigned int o2hb_dead_threshold = O2HB_DEFAULT_DEAD_THRESHOLD;
unsigned int o2hb_heartbeat_mode = O2HB_HEARTBEAT_LOCAL;
unsigned int o2hb_dependent_users;
#define O2HB_PIN_CUT_OFF		3
static int o2hb_region_pin(const char *region_uuid);
static void o2hb_region_unpin(const char *region_uuid);
static void o2hb_dead_threshold_set(unsigned int threshold)
static int o2hb_global_hearbeat_mode_set(unsigned int hb_mode)
struct o2hb_node_event ;
struct o2hb_disk_slot ;
struct o2hb_region ;
struct o2hb_bio_wait_ctxt ;
static int o2hb_pop_count(void *map, int count)
static void o2hb_write_timeout(struct work_struct *work)
static void o2hb_arm_write_timeout(struct o2hb_region *reg)
static void o2hb_disarm_write_timeout(struct o2hb_region *reg)
static inline void o2hb_bio_wait_init(struct o2hb_bio_wait_ctxt *wc)
static inline void o2hb_bio_wait_dec(struct o2hb_bio_wait_ctxt *wc,
unsigned int num)
static void o2hb_wait_on_io(struct o2hb_region *reg,
struct o2hb_bio_wait_ctxt *wc)
static void o2hb_bio_end_io(struct bio *bio,
int error)
static struct bio *o2hb_setup_one_bio(struct o2hb_region *reg,
struct o2hb_bio_wait_ctxt *wc,
unsigned int *current_slot,
unsigned int max_slots)
static int o2hb_read_slots(struct o2hb_region *reg,
unsigned int max_slots)
static int o2hb_issue_node_write(struct o2hb_region *reg,
struct o2hb_bio_wait_ctxt *write_wc)
static u32 o2hb_compute_block_crc_le(struct o2hb_region *reg,
struct o2hb_disk_heartbeat_block *hb_block)
static void o2hb_dump_slot(struct o2hb_disk_heartbeat_block *hb_block)
static int o2hb_verify_crc(struct o2hb_region *reg,
struct o2hb_disk_heartbeat_block *hb_block)
static void o2hb_check_last_timestamp(struct o2hb_region *reg)
static inline void o2hb_prepare_block(struct o2hb_region *reg,
u64 generation)
static void o2hb_fire_callbacks(struct o2hb_callback *hbcall,
struct o2nm_node *node,
int idx)
static void o2hb_run_event_list(struct o2hb_node_event *queued_event)
static void o2hb_queue_node_event(struct o2hb_node_event *event,
enum o2hb_callback_type type,
struct o2nm_node *node,
int node_num)
static void o2hb_shutdown_slot(struct o2hb_disk_slot *slot)
static void o2hb_set_quorum_device(struct o2hb_region *reg,
struct o2hb_disk_slot *slot)
static int o2hb_check_slot(struct o2hb_region *reg,
struct o2hb_disk_slot *slot)
static int o2hb_highest_node(unsigned long *nodes,
int numbits)
static int o2hb_do_disk_heartbeat(struct o2hb_region *reg)
static void o2hb_tv_subtract(struct timeval *a,
struct timeval *b)
static unsigned int o2hb_elapsed_msecs(struct timeval *start,
struct timeval *end)
static int o2hb_thread(void *data)
static int o2hb_debug_open(struct inode *inode, struct file *file)
static int o2hb_debug_release(struct inode *inode, struct file *file)
static ssize_t o2hb_debug_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int o2hb_debug_open(struct inode *inode, struct file *file)
static int o2hb_debug_release(struct inode *inode, struct file *file)
static ssize_t o2hb_debug_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static const struct file_operations o2hb_debug_fops = ;
void o2hb_exit(void)
static struct dentry *o2hb_debug_create(const char *name, struct dentry *dir,
struct o2hb_debug_buf **db, int db_len,
int type, int size, int len, void *data)
static int o2hb_debug_init(void)
int o2hb_init(void)
static void o2hb_fill_node_map_from_callback(unsigned long *map,
unsigned bytes)
void o2hb_fill_node_map(unsigned long *map, unsigned bytes)
EXPORT_SYMBOL_GPL(o2hb_fill_node_map);
static struct o2hb_region *to_o2hb_region(struct config_item *item)
static void o2hb_region_release(struct config_item *item)
static int o2hb_read_block_input(struct o2hb_region *reg,
const char *page,
size_t count,
unsigned long *ret_bytes,
unsigned int *ret_bits)
static ssize_t o2hb_region_block_bytes_read(struct o2hb_region *reg,
char *page)
static ssize_t o2hb_region_block_bytes_write(struct o2hb_region *reg,
const char *page,
size_t count)
static ssize_t o2hb_region_start_block_read(struct o2hb_region *reg,
char *page)
static ssize_t o2hb_region_start_block_write(struct o2hb_region *reg,
const char *page,
size_t count)
static ssize_t o2hb_region_blocks_read(struct o2hb_region *reg,
char *page)
static ssize_t o2hb_region_blocks_write(struct o2hb_region *reg,
const char *page,
size_t count)
static ssize_t o2hb_region_dev_read(struct o2hb_region *reg,
char *page)
static void o2hb_init_region_params(struct o2hb_region *reg)
static int o2hb_map_slot_data(struct o2hb_region *reg)
static int o2hb_populate_slot_data(struct o2hb_region *reg)
static ssize_t o2hb_region_dev_write(struct o2hb_region *reg,
const char *page,
size_t count)
static ssize_t o2hb_region_pid_read(struct o2hb_region *reg,
char *page)
struct o2hb_region_attribute ;
static struct o2hb_region_attribute o2hb_region_attr_block_bytes = ;
static struct o2hb_region_attribute o2hb_region_attr_start_block = ;
static struct o2hb_region_attribute o2hb_region_attr_blocks = ;
static struct o2hb_region_attribute o2hb_region_attr_dev = ;
static struct o2hb_region_attribute o2hb_region_attr_pid = ;
static struct configfs_attribute *o2hb_region_attrs[] = ;
static ssize_t o2hb_region_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static ssize_t o2hb_region_store(struct config_item *item,
struct configfs_attribute *attr,
const char *page, size_t count)
static struct configfs_item_operations o2hb_region_item_ops = ;
static struct config_item_type o2hb_region_type = ;
struct o2hb_heartbeat_group ;
static struct o2hb_heartbeat_group *to_o2hb_heartbeat_group(struct config_group *group)
static int o2hb_debug_region_init(struct o2hb_region *reg, struct dentry *dir)
static struct config_item *o2hb_heartbeat_group_make_item(struct config_group *group,
const char *name)
static void o2hb_heartbeat_group_drop_item(struct config_group *group,
struct config_item *item)
struct o2hb_heartbeat_group_attribute ;
static ssize_t o2hb_heartbeat_group_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static ssize_t o2hb_heartbeat_group_store(struct config_item *item,
struct configfs_attribute *attr,
const char *page, size_t count)
static ssize_t o2hb_heartbeat_group_threshold_show(struct o2hb_heartbeat_group *group,
char *page)
static ssize_t o2hb_heartbeat_group_threshold_store(struct o2hb_heartbeat_group *group,
const char *page,
size_t count)
static
ssize_t o2hb_heartbeat_group_mode_show(struct o2hb_heartbeat_group *group,
char *page)
static
ssize_t o2hb_heartbeat_group_mode_store(struct o2hb_heartbeat_group *group,
const char *page, size_t count)
static struct o2hb_heartbeat_group_attribute o2hb_heartbeat_group_attr_threshold = ;
static struct o2hb_heartbeat_group_attribute o2hb_heartbeat_group_attr_mode = ;
static struct configfs_attribute *o2hb_heartbeat_group_attrs[] = ;
static struct configfs_item_operations o2hb_hearbeat_group_item_ops = ;
static struct configfs_group_operations o2hb_heartbeat_group_group_ops = ;
static struct config_item_type o2hb_heartbeat_group_type = ;
struct config_group *o2hb_alloc_hb_set(void)
void o2hb_free_hb_set(struct config_group *group)
static struct o2hb_callback *hbcall_from_type(enum o2hb_callback_type type)
void o2hb_setup_callback(struct o2hb_callback_func *hc,
enum o2hb_callback_type type,
o2hb_cb_func *func,
void *data,
int priority)
EXPORT_SYMBOL_GPL(o2hb_setup_callback);
static int o2hb_region_pin(const char *region_uuid)
static void o2hb_region_unpin(const char *region_uuid)
static int o2hb_region_inc_user(const char *region_uuid)
void o2hb_region_dec_user(const char *region_uuid)
int o2hb_register_callback(const char *region_uuid,
struct o2hb_callback_func *hc)
EXPORT_SYMBOL_GPL(o2hb_register_callback);
void o2hb_unregister_callback(const char *region_uuid,
struct o2hb_callback_func *hc)
EXPORT_SYMBOL_GPL(o2hb_unregister_callback);
int o2hb_check_node_heartbeating(u8 node_num)
EXPORT_SYMBOL_GPL(o2hb_check_node_heartbeating);
int o2hb_check_node_heartbeating_from_callback(u8 node_num)
EXPORT_SYMBOL_GPL(o2hb_check_node_heartbeating_from_callback);
int o2hb_check_local_node_heartbeating(void)
EXPORT_SYMBOL_GPL(o2hb_check_local_node_heartbeating);
void o2hb_stop_all_regions(void)
EXPORT_SYMBOL_GPL(o2hb_stop_all_regions);
int o2hb_get_all_regions(char *region_uuids, u8 max_regions)
EXPORT_SYMBOL_GPL(o2hb_get_all_regions);
int o2hb_global_heartbeat_active(void)
EXPORT_SYMBOL(o2hb_global_heartbeat_active);
