#define IRIAP_H
#define IAP_LST 0x80
#define IAP_ACK 0x40
#define IAS_SERVER 0
#define IAS_CLIENT 1
#define GET_INFO_BASE      0x01
#define GET_OBJECTS        0x02
#define GET_VALUE          0x03
#define GET_VALUE_BY_CLASS 0x04
#define GET_OBJECT_INFO    0x05
#define GET_ATTRIB_NAMES   0x06
#define IAS_SUCCESS        0
#define IAS_CLASS_UNKNOWN  1
#define IAS_ATTRIB_UNKNOWN 2
#define IAS_DISCONNECT     10
typedef void (*CONFIRM_CALLBACK)(int result, __u16 obj_id,
struct ias_value *value, void *priv);
struct iriap_cb ;
int  iriap_init(void);
void iriap_cleanup(void);
struct iriap_cb *iriap_open(__u8 slsap_sel, int mode, void *priv,
CONFIRM_CALLBACK callback);
void iriap_close(struct iriap_cb *self);
int iriap_getvaluebyclass_request(struct iriap_cb *self,
__u32 saddr, __u32 daddr,
char *name, char *attr);
void iriap_connect_request(struct iriap_cb *self);
void iriap_send_ack( struct iriap_cb *self);
void iriap_call_indication(struct iriap_cb *self, struct sk_buff *skb);
void iriap_register_server(void);
