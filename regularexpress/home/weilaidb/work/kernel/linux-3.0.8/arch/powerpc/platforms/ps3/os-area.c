enum ;
enum os_area_ldr_format ;
#define OS_AREA_HEADER_MAGIC_NUM "cell_ext_os_area"
struct os_area_header ;
enum os_area_boot_flag ;
enum os_area_ctrl_button ;
struct os_area_params ;
#define OS_AREA_DB_MAGIC_NUM "-db-"
struct os_area_db ;
enum os_area_db_owner ;
enum os_area_db_key ;
struct os_area_db_id ;
static const struct os_area_db_id os_area_db_id_empty = ;
static const struct os_area_db_id os_area_db_id_any = ;
static const struct os_area_db_id os_area_db_id_rtc_diff = ;
static const struct os_area_db_id os_area_db_id_video_mode = ;
#define SECONDS_FROM_1970_TO_2000 946684800LL
struct saved_params  static saved_params;
static struct property property_rtc_diff = ;
static struct property property_av_multi_out = ;
static DEFINE_MUTEX(os_area_flash_mutex);
static const struct ps3_os_area_flash_ops *os_area_flash_ops;
void ps3_os_area_flash_register(const struct ps3_os_area_flash_ops *ops)
EXPORT_SYMBOL_GPL(ps3_os_area_flash_register);
static ssize_t os_area_flash_read(void *buf, size_t count, loff_t pos)
static ssize_t os_area_flash_write(const void *buf, size_t count, loff_t pos)
static void os_area_set_property(struct device_node *node,
struct property *prop)
static void __init os_area_get_property(struct device_node *node,
struct property *prop)
static void dump_field(char *s, const u8 *field, int size_of_field)
#define dump_header(_a) _dump_header(_a, __func__, __LINE__)
static void _dump_header(const struct os_area_header *h, const char *func,
int line)
#define dump_params(_a) _dump_params(_a, __func__, __LINE__)
static void _dump_params(const struct os_area_params *p, const char *func,
int line)
static int verify_header(const struct os_area_header *header)
static int db_verify(const struct os_area_db *db)
struct db_index ;
struct db_iterator ;
static unsigned int db_align_up(unsigned int val, unsigned int size)
static int db_for_each_64(const struct os_area_db *db,
const struct os_area_db_id *match_id, struct db_iterator *i)
static int db_delete_64(struct os_area_db *db, const struct os_area_db_id *id)
static int db_set_64(struct os_area_db *db, const struct os_area_db_id *id,
uint64_t value)
static int db_get_64(const struct os_area_db *db,
const struct os_area_db_id *id, uint64_t *value)
static int db_get_rtc_diff(const struct os_area_db *db, int64_t *rtc_diff)
#define dump_db(a) _dump_db(a, __func__, __LINE__)
static void _dump_db(const struct os_area_db *db, const char *func,
int line)
static void os_area_db_init(struct os_area_db *db)
static int update_flash_db(void)
static void os_area_queue_work_handler(struct work_struct *work)
static void os_area_queue_work(void)
void __init ps3_os_area_save_params(void)
void __init ps3_os_area_init(void)
u64 ps3_os_area_get_rtc_diff(void)
EXPORT_SYMBOL_GPL(ps3_os_area_get_rtc_diff);
void ps3_os_area_set_rtc_diff(u64 rtc_diff)
EXPORT_SYMBOL_GPL(ps3_os_area_set_rtc_diff);
enum ps3_param_av_multi_out ps3_os_area_get_av_multi_out(void)
EXPORT_SYMBOL_GPL(ps3_os_area_get_av_multi_out);
