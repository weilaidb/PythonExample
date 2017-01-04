#define ITEM_SIZE sizeof(struct distr_item)
struct distr_item ;
static LIST_HEAD(publ_root);
static u32 publ_cnt;
static void publ_to_item(struct distr_item *i, struct publication *p)
static struct sk_buff *named_prepare_buf(u32 type, u32 size, u32 dest)
static void named_cluster_distribute(struct sk_buff *buf)
void tipc_named_publish(struct publication *publ)
void tipc_named_withdraw(struct publication *publ)
void tipc_named_node_up(unsigned long node)
static void named_purge_publ(struct publication *publ)
void tipc_named_recv(struct sk_buff *buf)
void tipc_named_reinit(void)
