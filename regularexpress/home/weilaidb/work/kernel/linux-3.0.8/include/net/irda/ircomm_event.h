#define IRCOMM_EVENT_H
typedef enum  IRCOMM_STATE;
typedef enum  IRCOMM_EVENT;
struct ircomm_info ;
extern const char *const ircomm_state[];
struct ircomm_cb;
int ircomm_do_event(struct ircomm_cb *self, IRCOMM_EVENT event,
struct sk_buff *skb, struct ircomm_info *info);
void ircomm_next_state(struct ircomm_cb *self, IRCOMM_STATE state);
