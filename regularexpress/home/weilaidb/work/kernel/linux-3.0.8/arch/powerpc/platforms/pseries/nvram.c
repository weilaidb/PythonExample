#define NVRW_CNT 0x20
static unsigned int nvram_size;
static int nvram_fetch, nvram_store;
static char nvram_buf[NVRW_CNT];
static DEFINE_SPINLOCK(nvram_lock);
struct err_log_info ;
struct nvram_os_partition ;
static struct nvram_os_partition rtas_log_partition = ;
static struct nvram_os_partition oops_log_partition = ;
static const char *pseries_nvram_os_partitions[] = ;
static void oops_to_nvram(struct kmsg_dumper *dumper,
enum kmsg_dump_reason reason,
const char *old_msgs, unsigned long old_len,
const char *new_msgs, unsigned long new_len);
static struct kmsg_dumper nvram_kmsg_dumper = ;
#define NVRAM_RTAS_READ_TIMEOUT 5
static unsigned long last_unread_rtas_event;
static char *oops_buf;
static ssize_t pSeries_nvram_read(char *buf, size_t count, loff_t *index)
static ssize_t pSeries_nvram_write(char *buf, size_t count, loff_t *index)
static ssize_t pSeries_nvram_get_size(void)
int nvram_write_os_partition(struct nvram_os_partition *part, char * buff,
int length, unsigned int err_type, unsigned int error_log_cnt)
int nvram_write_error_log(char * buff, int length,
unsigned int err_type, unsigned int error_log_cnt)
int nvram_read_error_log(char * buff, int length,
unsigned int * err_type, unsigned int * error_log_cnt)
int nvram_clear_error_log(void)
static int __init pseries_nvram_init_os_partition(struct nvram_os_partition
*part)
static void __init nvram_init_oops_partition(int rtas_partition_exists)
static int __init pseries_nvram_init_log_partitions(void)
machine_arch_initcall(pseries, pseries_nvram_init_log_partitions);
int __init pSeries_nvram_init(void)
static size_t capture_last_msgs(const char *old_msgs, size_t old_len,
const char *new_msgs, size_t new_len,
char *captured, size_t capture_len)
static int clobbering_unread_rtas_event(void)
static void oops_to_nvram(struct kmsg_dumper *dumper,
enum kmsg_dump_reason reason,
const char *old_msgs, unsigned long old_len,
const char *new_msgs, unsigned long new_len)
