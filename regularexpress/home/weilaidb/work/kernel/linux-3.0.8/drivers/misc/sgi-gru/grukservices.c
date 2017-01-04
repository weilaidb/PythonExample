#define ASYNC_HAN_TO_BID(h)	((h) - 1)
#define ASYNC_BID_TO_HAN(b)	((b) + 1)
#define ASYNC_HAN_TO_BS(h)	gru_base[ASYNC_HAN_TO_BID(h)]
#define GRU_NUM_KERNEL_CBR	1
#define GRU_NUM_KERNEL_DSR_BYTES 256
#define GRU_NUM_KERNEL_DSR_CL	(GRU_NUM_KERNEL_DSR_BYTES /		\
GRU_CACHE_LINE_BYTES)
#define IMA			IMA_CB_DELAY
#define __gru_cacheline_aligned__                               \
__attribute__((__aligned__(GRU_CACHE_LINE_BYTES)))
#define MAGIC	0x1234567887654321UL
#define EXCEPTION_RETRY_LIMIT	3
#define MQS_EMPTY		0
#define MQS_FULL		1
#define MQS_NOOP		2
struct message_queue ;
struct message_header ;
#define HSTATUS(mq, h)	((mq) + offsetof(struct message_queue, hstatus[h]))
static void gru_load_kernel_context(struct gru_blade_state *bs, int blade_id)
static int gru_free_kernel_contexts(void)
static struct gru_blade_state *gru_lock_kernel_context(int blade_id)
static void gru_unlock_kernel_context(int blade_id)
static int gru_get_cpu_resources(int dsr_bytes, void **cb, void **dsr)
static void gru_free_cpu_resources(void *cb, void *dsr)
unsigned long gru_reserve_async_resources(int blade_id, int cbrs, int dsr_bytes,
struct completion *cmp)
void gru_release_async_resources(unsigned long han)
void gru_wait_async_cbr(unsigned long han)
void gru_lock_async_resource(unsigned long han,  void **cb, void **dsr)
void gru_unlock_async_resource(unsigned long han)
int gru_get_cb_exception_detail(void *cb,
struct control_block_extended_exc_detail *excdet)
char *gru_get_cb_exception_detail_str(int ret, void *cb,
char *buf, int size)
static int gru_wait_idle_or_exception(struct gru_control_block_status *gen)
static int gru_retry_exception(void *cb)
int gru_check_status_proc(void *cb)
int gru_wait_proc(void *cb)
void gru_abort(int ret, void *cb, char *str)
void gru_wait_abort_proc(void *cb)
#define MQIE_AGAIN		-1
static inline int get_present2(void *p)
static inline void restore_present2(void *p, int val)
int gru_create_message_queue(struct gru_message_queue_desc *mqd,
void *p, unsigned int bytes, int nasid, int vector, int apicid)
EXPORT_SYMBOL_GPL(gru_create_message_queue);
static int send_noop_message(void *cb, struct gru_message_queue_desc *mqd,
void *mesg)
static int send_message_queue_full(void *cb, struct gru_message_queue_desc *mqd,
void *mesg, int lines)
static int send_message_put_nacked(void *cb, struct gru_message_queue_desc *mqd,
void *mesg, int lines)
static int send_message_failure(void *cb, struct gru_message_queue_desc *mqd,
void *mesg, int lines)
int gru_send_message_gpa(struct gru_message_queue_desc *mqd, void *mesg,
unsigned int bytes)
EXPORT_SYMBOL_GPL(gru_send_message_gpa);
void gru_free_message(struct gru_message_queue_desc *mqd, void *mesg)
EXPORT_SYMBOL_GPL(gru_free_message);
void *gru_get_next_message(struct gru_message_queue_desc *mqd)
EXPORT_SYMBOL_GPL(gru_get_next_message);
int gru_read_gpa(unsigned long *value, unsigned long gpa)
EXPORT_SYMBOL_GPL(gru_read_gpa);
int gru_copy_gpa(unsigned long dest_gpa, unsigned long src_gpa,
unsigned int bytes)
EXPORT_SYMBOL_GPL(gru_copy_gpa);
static int quicktest0(unsigned long arg)
#define ALIGNUP(p, q)	((void *)(((unsigned long)(p) + (q) - 1) & ~(q - 1)))
static int quicktest1(unsigned long arg)
static int quicktest2(unsigned long arg)
#define BUFSIZE 200
static int quicktest3(unsigned long arg)
int gru_ktest(unsigned long arg)
int gru_kservices_init(void)
void gru_kservices_exit(void)
