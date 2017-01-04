static uint32_t dm_ulog_seq;
#define DM_ULOG_RETRY_TIMEOUT (15 * HZ)
#define DM_ULOG_PREALLOCED_SIZE 512
static struct cn_msg *prealloced_cn_msg;
static struct dm_ulog_request *prealloced_ulog_tfr;
static struct cb_id ulog_cn_id = ;
static DEFINE_MUTEX(dm_ulog_lock);
struct receiving_pkg ;
static DEFINE_SPINLOCK(receiving_list_lock);
static struct list_head receiving_list;
static int dm_ulog_sendto_server(struct dm_ulog_request *tfr)
static int fill_pkg(struct cn_msg *msg, struct dm_ulog_request *tfr)
static void cn_ulog_callback(struct cn_msg *msg, struct netlink_skb_parms *nsp)
int dm_consult_userspace(const char *uuid, uint64_t luid, int request_type,
char *data, size_t data_size,
char *rdata, size_t *rdata_size)
int dm_ulog_tfr_init(void)
void dm_ulog_tfr_exit(void)
