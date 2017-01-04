const char *const irlmp_state[] = ;
const char *const irlsap_state[] = ;
static const char *const irlmp_event[] = ;
static void irlmp_state_standby  (struct lap_cb *, IRLMP_EVENT,
struct sk_buff *);
static void irlmp_state_u_connect(struct lap_cb *, IRLMP_EVENT,
struct sk_buff *);
static void irlmp_state_active   (struct lap_cb *, IRLMP_EVENT,
struct sk_buff *);
static int irlmp_state_disconnected(struct lsap_cb *, IRLMP_EVENT,
struct sk_buff *);
static int irlmp_state_connect     (struct lsap_cb *, IRLMP_EVENT,
struct sk_buff *);
static int irlmp_state_connect_pend(struct lsap_cb *, IRLMP_EVENT,
struct sk_buff *);
static int irlmp_state_dtr         (struct lsap_cb *, IRLMP_EVENT,
struct sk_buff *);
static int irlmp_state_setup       (struct lsap_cb *, IRLMP_EVENT,
struct sk_buff *);
static int irlmp_state_setup_pend  (struct lsap_cb *, IRLMP_EVENT,
struct sk_buff *);
static void (*lap_state[]) (struct lap_cb *, IRLMP_EVENT, struct sk_buff *) =
;
static int (*lsap_state[])( struct lsap_cb *, IRLMP_EVENT, struct sk_buff *) =
;
static inline void irlmp_next_lap_state(struct lap_cb *self,
IRLMP_STATE state)
static inline void irlmp_next_lsap_state(struct lsap_cb *self,
LSAP_STATE state)
int irlmp_do_lsap_event(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
void irlmp_do_lap_event(struct lap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
void irlmp_discovery_timer_expired(void *data)
void irlmp_watchdog_timer_expired(void *data)
void irlmp_idle_timer_expired(void *data)
static inline void
irlmp_do_all_lsap_event(hashbin_t *	lsap_hashbin,
IRLMP_EVENT	event)
static void irlmp_state_standby(struct lap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static void irlmp_state_u_connect(struct lap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static void irlmp_state_active(struct lap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static int irlmp_state_disconnected(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static int irlmp_state_connect(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static int irlmp_state_connect_pend(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static int irlmp_state_dtr(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static int irlmp_state_setup(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
static int irlmp_state_setup_pend(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb)
