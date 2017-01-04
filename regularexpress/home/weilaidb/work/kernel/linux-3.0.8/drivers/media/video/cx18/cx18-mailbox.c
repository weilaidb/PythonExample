static const char *rpu_str[] = ;
#define API_FAST (1 << 2)
#define API_SLOW (1 << 3)
struct cx18_api_info ;
#define API_ENTRY(rpu, x, f)
static const struct cx18_api_info api_info[] = ;
static const struct cx18_api_info *find_api_info(u32 cmd)
static char *u32arr2hex(u32 data[], int n, char *buf)
static void dump_mb(struct cx18 *cx, struct cx18_mailbox *mb, char *name)
static void cx18_mdl_send_to_dvb(struct cx18_stream *s, struct cx18_mdl *mdl)
static void cx18_mdl_send_to_videobuf(struct cx18_stream *s,
struct cx18_mdl *mdl)
static void cx18_mdl_send_to_alsa(struct cx18 *cx, struct cx18_stream *s,
struct cx18_mdl *mdl)
static void epu_dma_done(struct cx18 *cx, struct cx18_in_work_order *order)
static void epu_debug(struct cx18 *cx, struct cx18_in_work_order *order)
static void epu_cmd(struct cx18 *cx, struct cx18_in_work_order *order)
static
void free_in_work_order(struct cx18 *cx, struct cx18_in_work_order *order)
void cx18_in_work_handler(struct work_struct *work)
static void mb_ack_irq(struct cx18 *cx, struct cx18_in_work_order *order)
static int epu_dma_done_irq(struct cx18 *cx, struct cx18_in_work_order *order)
static
int epu_debug_irq(struct cx18 *cx, struct cx18_in_work_order *order)
static inline
int epu_cmd_irq(struct cx18 *cx, struct cx18_in_work_order *order)
static inline
struct cx18_in_work_order *alloc_in_work_order_irq(struct cx18 *cx)
void cx18_api_epu_cmd_irq(struct cx18 *cx, int rpu)
static int cx18_api_call(struct cx18 *cx, u32 cmd, int args, u32 data[])
int cx18_api(struct cx18 *cx, u32 cmd, int args, u32 data[])
static int cx18_set_filter_param(struct cx18_stream *s)
int cx18_api_func(void *priv, u32 cmd, int in, int out,
u32 data[CX2341X_MBOX_MAX_DATA])
int cx18_vapi_result(struct cx18 *cx, u32 data[MAX_MB_ARGUMENTS],
u32 cmd, int args, ...)
int cx18_vapi(struct cx18 *cx, u32 cmd, int args, ...)
