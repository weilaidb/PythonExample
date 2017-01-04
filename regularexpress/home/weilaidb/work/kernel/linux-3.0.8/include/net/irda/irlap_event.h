#define IRLAP_EVENT_H
struct irlap_cb;
struct irlap_info;
typedef enum  IRLAP_STATE;
typedef enum  IRLAP_EVENT;
typedef enum  LAP_REASON;
extern const char *const irlap_state[];
void irlap_do_event(struct irlap_cb *self, IRLAP_EVENT event,
struct sk_buff *skb, struct irlap_info *info);
void irlap_print_event(IRLAP_EVENT event);
extern int irlap_qos_negotiate(struct irlap_cb *self, struct sk_buff *skb);
