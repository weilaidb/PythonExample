#define _TIPC_CONFIG_H
struct sk_buff *tipc_cfg_reply_alloc(int payload_size);
int tipc_cfg_append_tlv(struct sk_buff *buf, int tlv_type,
void *tlv_data, int tlv_data_size);
struct sk_buff *tipc_cfg_reply_string_type(u16 tlv_type, char *string);
static inline struct sk_buff *tipc_cfg_reply_none(void)
static inline struct sk_buff *tipc_cfg_reply_error_string(char *string)
static inline struct sk_buff *tipc_cfg_reply_ultra_string(char *string)
struct sk_buff *tipc_cfg_do_cmd(u32 orig_node, u16 cmd,
const void *req_tlv_area, int req_tlv_space,
int headroom);
void tipc_cfg_link_event(u32 addr, char *name, int up);
int  tipc_cfg_init(void);
void tipc_cfg_stop(void);
