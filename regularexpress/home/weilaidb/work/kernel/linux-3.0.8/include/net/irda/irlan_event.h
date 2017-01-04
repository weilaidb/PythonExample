#define IRLAN_EVENT_H
typedef enum  IRLAN_STATE;
typedef enum  IRLAN_EVENT;
extern const char * const irlan_state[];
void irlan_do_client_event(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
void irlan_do_provider_event(struct irlan_cb *self, IRLAN_EVENT event,
struct sk_buff *skb);
void irlan_next_client_state(struct irlan_cb *self, IRLAN_STATE state);
void irlan_next_provider_state(struct irlan_cb *self, IRLAN_STATE state);
