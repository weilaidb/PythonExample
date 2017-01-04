#define IRCOMM_CORE_H
#define IRCOMM_MAGIC 0x98347298
#define IRCOMM_HEADER_SIZE 1
struct ircomm_cb;
typedef struct  call_t;
struct ircomm_cb ;
extern hashbin_t *ircomm;
struct ircomm_cb *ircomm_open(notify_t *notify, __u8 service_type, int line);
int ircomm_close(struct ircomm_cb *self);
int ircomm_data_request(struct ircomm_cb *self, struct sk_buff *skb);
void ircomm_data_indication(struct ircomm_cb *self, struct sk_buff *skb);
void ircomm_process_data(struct ircomm_cb *self, struct sk_buff *skb);
int ircomm_control_request(struct ircomm_cb *self, struct sk_buff *skb);
int ircomm_connect_request(struct ircomm_cb *self, __u8 dlsap_sel,
__u32 saddr, __u32 daddr, struct sk_buff *skb,
__u8 service_type);
void ircomm_connect_indication(struct ircomm_cb *self, struct sk_buff *skb,
struct ircomm_info *info);
void ircomm_connect_confirm(struct ircomm_cb *self, struct sk_buff *skb,
struct ircomm_info *info);
int ircomm_connect_response(struct ircomm_cb *self, struct sk_buff *userdata);
int ircomm_disconnect_request(struct ircomm_cb *self, struct sk_buff *userdata);
void ircomm_disconnect_indication(struct ircomm_cb *self, struct sk_buff *skb,
struct ircomm_info *info);
void ircomm_flow_request(struct ircomm_cb *self, LOCAL_FLOW flow);
#define ircomm_is_connected(self) (self->state == IRCOMM_CONN)
