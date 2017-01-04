#define KMSG_COMPONENT "sclp_sdias"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TRACE(x...) debug_sprintf_event(sdias_dbf, 1, x)
#define SDIAS_RETRIES 300
#define SDIAS_SLEEP_TICKS 50
#define EQ_STORE_DATA	0x0
#define EQ_SIZE		0x1
#define DI_FCP_DUMP	0x0
#define ASA_SIZE_32	0x0
#define ASA_SIZE_64	0x1
#define EVSTATE_ALL_STORED	0x0
#define EVSTATE_NO_DATA		0x3
#define EVSTATE_PART_STORED	0x10
static struct debug_info *sdias_dbf;
static struct sclp_register sclp_sdias_register = ;
struct sdias_evbuf  __attribute__((packed));
struct sdias_sccb  __attribute__((packed));
static struct sdias_sccb sccb __attribute__((aligned(4096)));
static int sclp_req_done;
static wait_queue_head_t sdias_wq;
static DEFINE_MUTEX(sdias_mutex);
static void sdias_callback(struct sclp_req *request, void *data)
static int sdias_sclp_send(struct sclp_req *req)
int sclp_sdias_blk_count(void)
int sclp_sdias_copy(void *dest, int start_blk, int nr_blks)
int __init sclp_sdias_init(void)
void __exit sclp_sdias_exit(void)
