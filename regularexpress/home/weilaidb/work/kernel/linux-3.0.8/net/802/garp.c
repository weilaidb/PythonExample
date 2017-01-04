static unsigned int garp_join_time __read_mostly = 200;
module_param(garp_join_time, uint, 0644);
MODULE_PARM_DESC(garp_join_time, "Join time in ms (default 200ms)");
MODULE_LICENSE("GPL");
static const struct garp_state_trans  garp_applicant_state_table[GARP_APPLICANT_MAX + 1][GARP_EVENT_MAX + 1] = ;
static int garp_attr_cmp(const struct garp_attr *attr,
const void *data, u8 len, u8 type)
static struct garp_attr *garp_attr_lookup(const struct garp_applicant *app,
const void *data, u8 len, u8 type)
static void garp_attr_insert(struct garp_applicant *app, struct garp_attr *new)
static struct garp_attr *garp_attr_create(struct garp_applicant *app,
const void *data, u8 len, u8 type)
static void garp_attr_destroy(struct garp_applicant *app, struct garp_attr *attr)
static int garp_pdu_init(struct garp_applicant *app)
static int garp_pdu_append_end_mark(struct garp_applicant *app)
static void garp_pdu_queue(struct garp_applicant *app)
static void garp_queue_xmit(struct garp_applicant *app)
static int garp_pdu_append_msg(struct garp_applicant *app, u8 attrtype)
static int garp_pdu_append_attr(struct garp_applicant *app,
const struct garp_attr *attr,
enum garp_attr_event event)
static void garp_attr_event(struct garp_applicant *app,
struct garp_attr *attr, enum garp_event event)
int garp_request_join(const struct net_device *dev,
const struct garp_application *appl,
const void *data, u8 len, u8 type)
EXPORT_SYMBOL_GPL(garp_request_join);
void garp_request_leave(const struct net_device *dev,
const struct garp_application *appl,
const void *data, u8 len, u8 type)
EXPORT_SYMBOL_GPL(garp_request_leave);
static void garp_gid_event(struct garp_applicant *app, enum garp_event event)
static void garp_join_timer_arm(struct garp_applicant *app)
static void garp_join_timer(unsigned long data)
static int garp_pdu_parse_end_mark(struct sk_buff *skb)
static int garp_pdu_parse_attr(struct garp_applicant *app, struct sk_buff *skb,
u8 attrtype)
static int garp_pdu_parse_msg(struct garp_applicant *app, struct sk_buff *skb)
static void garp_pdu_rcv(const struct stp_proto *proto, struct sk_buff *skb,
struct net_device *dev)
static int garp_init_port(struct net_device *dev)
static void garp_release_port(struct net_device *dev)
int garp_init_applicant(struct net_device *dev, struct garp_application *appl)
EXPORT_SYMBOL_GPL(garp_init_applicant);
void garp_uninit_applicant(struct net_device *dev, struct garp_application *appl)
EXPORT_SYMBOL_GPL(garp_uninit_applicant);
int garp_register_application(struct garp_application *appl)
EXPORT_SYMBOL_GPL(garp_register_application);
void garp_unregister_application(struct garp_application *appl)
EXPORT_SYMBOL_GPL(garp_unregister_application);
