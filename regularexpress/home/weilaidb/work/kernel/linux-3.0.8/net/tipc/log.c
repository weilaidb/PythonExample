static struct print_buf null_buf = ;
struct print_buf *const TIPC_NULL = &null_buf;
static struct print_buf cons_buf = ;
struct print_buf *const TIPC_CONS = &cons_buf;
static struct print_buf log_buf = ;
struct print_buf *const TIPC_LOG = &log_buf;
static char print_string[TIPC_PB_MAX_STR];
static DEFINE_SPINLOCK(print_lock);
static void tipc_printbuf_move(struct print_buf *pb_to,
struct print_buf *pb_from);
#define FORMAT(PTR, LEN, FMT) \
void tipc_printbuf_init(struct print_buf *pb, char *raw, u32 size)
static void tipc_printbuf_reset(struct print_buf *pb)
static int tipc_printbuf_empty(struct print_buf *pb)
int tipc_printbuf_validate(struct print_buf *pb)
static void tipc_printbuf_move(struct print_buf *pb_to,
struct print_buf *pb_from)
void tipc_printf(struct print_buf *pb, const char *fmt, ...)
int tipc_log_resize(int log_size)
struct sk_buff *tipc_log_resize_cmd(const void *req_tlv_area, int req_tlv_space)
struct sk_buff *tipc_log_dump(void)
