#define D_SUBMODULE rx
static int i2400m_rx_reorder_disabled;
module_param_named(rx_reorder_disabled, i2400m_rx_reorder_disabled, int, 0644);
MODULE_PARM_DESC(rx_reorder_disabled,
"If true, RX reordering will be disabled.");
struct i2400m_report_hook_args ;
void i2400m_report_hook_work(struct work_struct *ws)
static
void i2400m_report_hook_flush(struct i2400m *i2400m)
static
void i2400m_report_hook_queue(struct i2400m *i2400m, struct sk_buff *skb_rx,
const void *l3l4_hdr, size_t size)
static
void i2400m_rx_ctl_ack(struct i2400m *i2400m,
const void *payload, size_t size)
static
void i2400m_rx_ctl(struct i2400m *i2400m, struct sk_buff *skb_rx,
const void *payload, size_t size)
static
void i2400m_rx_trace(struct i2400m *i2400m,
const void *payload, size_t size)
struct i2400m_roq_data ;
struct i2400m_roq
;
static
void __i2400m_roq_init(struct i2400m_roq *roq)
static
unsigned __i2400m_roq_index(struct i2400m *i2400m, struct i2400m_roq *roq)
static
unsigned __i2400m_roq_nsn(struct i2400m_roq *roq, unsigned sn)
enum ;
struct i2400m_roq_log ;
static
void i2400m_roq_log_entry_print(struct i2400m *i2400m, unsigned index,
unsigned e_index,
struct i2400m_roq_log_entry *e)
static
void i2400m_roq_log_add(struct i2400m *i2400m,
struct i2400m_roq *roq, enum i2400m_ro_type type,
unsigned ws, unsigned count, unsigned sn,
unsigned nsn, unsigned new_ws)
static
void i2400m_roq_log_dump(struct i2400m *i2400m, struct i2400m_roq *roq)
static
void __i2400m_roq_queue(struct i2400m *i2400m, struct i2400m_roq *roq,
struct sk_buff *skb, unsigned sn, unsigned nsn)
static
unsigned __i2400m_roq_update_ws(struct i2400m *i2400m, struct i2400m_roq *roq,
unsigned sn)
static
void i2400m_roq_reset(struct i2400m *i2400m, struct i2400m_roq *roq)
static
void i2400m_roq_queue(struct i2400m *i2400m, struct i2400m_roq *roq,
struct sk_buff * skb, unsigned lbn)
static
void i2400m_roq_update_ws(struct i2400m *i2400m, struct i2400m_roq *roq,
unsigned sn)
static
void i2400m_roq_queue_update_ws(struct i2400m *i2400m, struct i2400m_roq *roq,
struct sk_buff * skb, unsigned sn)
static void i2400m_rx_roq_destroy(struct kref *ref)
static
void i2400m_rx_edata(struct i2400m *i2400m, struct sk_buff *skb_rx,
unsigned single_last, const void *payload, size_t size)
static
void i2400m_rx_payload(struct i2400m *i2400m, struct sk_buff *skb_rx,
unsigned single_last, const struct i2400m_pld *pld,
const void *payload)
static
int i2400m_rx_msg_hdr_check(struct i2400m *i2400m,
const struct i2400m_msg_hdr *msg_hdr,
size_t buf_size)
static
int i2400m_rx_pl_descr_check(struct i2400m *i2400m,
const struct i2400m_pld *pld,
size_t pl_itr, size_t buf_size)
int i2400m_rx(struct i2400m *i2400m, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(i2400m_rx);
void i2400m_unknown_barker(struct i2400m *i2400m,
const void *buf, size_t size)
EXPORT_SYMBOL(i2400m_unknown_barker);
int i2400m_rx_setup(struct i2400m *i2400m)
void i2400m_rx_release(struct i2400m *i2400m)
