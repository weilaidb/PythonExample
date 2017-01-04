int sysctl_fast_poll_increase = 50;
static int irlap_state_ndm    (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_query  (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_reply  (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_conn   (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_setup  (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_offline(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_xmit_p (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_pclose (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_nrm_p  (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_reset_wait(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_reset  (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_nrm_s  (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_xmit_s (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_sclose (struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
static int irlap_state_reset_check(struct irlap_cb *, IRLAP_EVENT event,
struct sk_buff *, struct irlap_info *);
static const char *const irlap_event[] = ;
const char *const irlap_state[] = ;
static int (*state[])(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info) =
;
static void irlap_poll_timer_expired(void *data)
static void irlap_start_poll_timer(struct irlap_cb *self, int timeout)
void irlap_do_event(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_ndm(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_query(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_reply(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_conn(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_setup(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_offline(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_xmit_p(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_pclose(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_nrm_p(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_reset_wait(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_reset(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_xmit_s(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_nrm_s(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_sclose(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info)
static int irlap_state_reset_check( struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb,
struct irlap_info *info)
