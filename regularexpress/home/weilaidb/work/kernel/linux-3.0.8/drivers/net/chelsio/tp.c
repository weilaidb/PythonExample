struct petp ;
#define DROP_MSEC 16
#define DROP_PKTS_CNT  1
static void tp_init(adapter_t * ap, const struct tp_params *p,
unsigned int tp_clk)
void t1_tp_destroy(struct petp *tp)
struct petp *__devinit t1_tp_create(adapter_t * adapter, struct tp_params *p)
void t1_tp_intr_enable(struct petp *tp)
void t1_tp_intr_disable(struct petp *tp)
void t1_tp_intr_clear(struct petp *tp)
int t1_tp_intr_handler(struct petp *tp)
static void set_csum_offload(struct petp *tp, u32 csum_bit, int enable)
void t1_tp_set_ip_checksum_offload(struct petp *tp, int enable)
void t1_tp_set_tcp_checksum_offload(struct petp *tp, int enable)
int t1_tp_reset(struct petp *tp, struct tp_params *p, unsigned int tp_clk)
