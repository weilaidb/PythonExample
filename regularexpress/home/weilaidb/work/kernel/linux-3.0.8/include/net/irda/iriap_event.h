#define IRIAP_FSM_H
struct iriap_cb;
typedef enum  IRIAP_STATE;
typedef enum  IRIAP_EVENT;
void iriap_next_client_state   (struct iriap_cb *self, IRIAP_STATE state);
void iriap_next_call_state     (struct iriap_cb *self, IRIAP_STATE state);
void iriap_next_server_state   (struct iriap_cb *self, IRIAP_STATE state);
void iriap_next_r_connect_state(struct iriap_cb *self, IRIAP_STATE state);
void iriap_do_client_event(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
void iriap_do_call_event  (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
void iriap_do_server_event   (struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
void iriap_do_r_connect_event(struct iriap_cb *self, IRIAP_EVENT event,
struct sk_buff *skb);
