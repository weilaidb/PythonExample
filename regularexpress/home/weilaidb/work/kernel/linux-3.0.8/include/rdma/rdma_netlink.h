#define _RDMA_NETLINK_H
enum ;
#define RDMA_NL_GET_CLIENT(type) ((type & (((1 << 6) - 1) << 10)) >> 10)
#define RDMA_NL_GET_OP(type) (type & ((1 << 10) - 1))
#define RDMA_NL_GET_TYPE(client, op) ((client << 10) + op)
enum ;
enum ;
struct rdma_cm_id_stats ;
struct ibnl_client_cbs ;
int ibnl_init(void);
void ibnl_cleanup(void);
int ibnl_add_client(int index, int nops,
const struct ibnl_client_cbs cb_table[]);
int ibnl_remove_client(int index);
void *ibnl_put_msg(struct sk_buff *skb, struct nlmsghdr **nlh, int seq,
int len, int client, int op);
int ibnl_put_attr(struct sk_buff *skb, struct nlmsghdr *nlh,
int len, void *data, int type);
