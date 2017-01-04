#define _TIPC_NAME_TABLE_H
struct subscription;
struct port_list;
#define TIPC_ZM_SRV 3
struct publication ;
extern rwlock_t tipc_nametbl_lock;
struct sk_buff *tipc_nametbl_get(const void *req_tlv_area, int req_tlv_space);
u32 tipc_nametbl_translate(u32 type, u32 instance, u32 *node);
int tipc_nametbl_mc_translate(u32 type, u32 lower, u32 upper, u32 limit,
struct port_list *dports);
int tipc_nametbl_publish_rsv(u32 ref, unsigned int scope,
struct tipc_name_seq const *seq);
struct publication *tipc_nametbl_publish(u32 type, u32 lower, u32 upper,
u32 scope, u32 port_ref, u32 key);
int tipc_nametbl_withdraw(u32 type, u32 lower, u32 ref, u32 key);
struct publication *tipc_nametbl_insert_publ(u32 type, u32 lower, u32 upper,
u32 scope, u32 node, u32 ref, u32 key);
struct publication *tipc_nametbl_remove_publ(u32 type, u32 lower,
u32 node, u32 ref, u32 key);
void tipc_nametbl_subscribe(struct subscription *s);
void tipc_nametbl_unsubscribe(struct subscription *s);
int tipc_nametbl_init(void);
void tipc_nametbl_stop(void);
