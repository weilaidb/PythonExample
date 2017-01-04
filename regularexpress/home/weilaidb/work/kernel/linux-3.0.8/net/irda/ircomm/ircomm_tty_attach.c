static void ircomm_tty_ias_register(struct ircomm_tty_cb *self);
static void ircomm_tty_discovery_indication(discinfo_t *discovery,
DISCOVERY_MODE mode,
void *priv);
static void ircomm_tty_getvalue_confirm(int result, __u16 obj_id,
struct ias_value *value, void *priv);
static void ircomm_tty_start_watchdog_timer(struct ircomm_tty_cb *self,
int timeout);
static void ircomm_tty_watchdog_timer_expired(void *data);
static int ircomm_tty_state_idle(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info);
static int ircomm_tty_state_search(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info);
static int ircomm_tty_state_query_parameters(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info);
static int ircomm_tty_state_query_lsap_sel(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info);
static int ircomm_tty_state_setup(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info);
static int ircomm_tty_state_ready(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info);
const char *const ircomm_tty_state[] = ;
static const char *const ircomm_tty_event[] = ;
static int (*state[])(struct ircomm_tty_cb *self, IRCOMM_TTY_EVENT event,
struct sk_buff *skb, struct ircomm_tty_info *info) =
;
int ircomm_tty_attach_cable(struct ircomm_tty_cb *self)
void ircomm_tty_detach_cable(struct ircomm_tty_cb *self)
static void ircomm_tty_ias_register(struct ircomm_tty_cb *self)
static void ircomm_tty_ias_unregister(struct ircomm_tty_cb *self)
int ircomm_tty_send_initial_parameters(struct ircomm_tty_cb *self)
static void ircomm_tty_discovery_indication(discinfo_t *discovery,
DISCOVERY_MODE mode,
void *priv)
void ircomm_tty_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *skb)
static void ircomm_tty_getvalue_confirm(int result, __u16 obj_id,
struct ias_value *value,
void *priv)
void ircomm_tty_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_data_size,
__u8 max_header_size,
struct sk_buff *skb)
void ircomm_tty_connect_indication(void *instance, void *sap,
struct qos_info *qos,
__u32 max_data_size,
__u8 max_header_size,
struct sk_buff *skb)
void ircomm_tty_link_established(struct ircomm_tty_cb *self)
static void ircomm_tty_start_watchdog_timer(struct ircomm_tty_cb *self,
int timeout)
static void ircomm_tty_watchdog_timer_expired(void *data)
int ircomm_tty_do_event(struct ircomm_tty_cb *self, IRCOMM_TTY_EVENT event,
struct sk_buff *skb, struct ircomm_tty_info *info)
static inline void ircomm_tty_next_state(struct ircomm_tty_cb *self, IRCOMM_TTY_STATE state)
static int ircomm_tty_state_idle(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info)
static int ircomm_tty_state_search(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info)
static int ircomm_tty_state_query_parameters(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info)
static int ircomm_tty_state_query_lsap_sel(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info)
static int ircomm_tty_state_setup(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info)
static int ircomm_tty_state_ready(struct ircomm_tty_cb *self,
IRCOMM_TTY_EVENT event,
struct sk_buff *skb,
struct ircomm_tty_info *info)
