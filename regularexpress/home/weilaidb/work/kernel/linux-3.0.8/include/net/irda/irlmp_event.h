#define IRLMP_EVENT_H
struct irlmp_cb;
struct lsap_cb;
struct lap_cb;
struct discovery_t;
typedef enum  IRLMP_STATE;
typedef enum  LSAP_STATE;
typedef enum  IRLMP_EVENT;
extern const char *const irlmp_state[];
extern const char *const irlsap_state[];
void irlmp_watchdog_timer_expired(void *data);
void irlmp_discovery_timer_expired(void *data);
void irlmp_idle_timer_expired(void *data);
void irlmp_do_lap_event(struct lap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb);
int irlmp_do_lsap_event(struct lsap_cb *self, IRLMP_EVENT event,
struct sk_buff *skb);
