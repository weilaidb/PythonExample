#define _TIPC_BCAST_H
#define MAX_NODES 4096
#define WSIZE 32
struct tipc_node_map ;
extern struct tipc_node_map tipc_bcast_nmap;
#define PLSIZE 32
struct port_list ;
struct tipc_node;
extern const char tipc_bclink_name[];
void tipc_nmap_add(struct tipc_node_map *nm_ptr, u32 node);
void tipc_nmap_remove(struct tipc_node_map *nm_ptr, u32 node);
static inline int tipc_nmap_equal(struct tipc_node_map *nm_a, struct tipc_node_map *nm_b)
void tipc_port_list_add(struct port_list *pl_ptr, u32 port);
void tipc_port_list_free(struct port_list *pl_ptr);
int  tipc_bclink_init(void);
void tipc_bclink_stop(void);
struct tipc_node *tipc_bclink_retransmit_to(void);
void tipc_bclink_acknowledge(struct tipc_node *n_ptr, u32 acked);
int  tipc_bclink_send_msg(struct sk_buff *buf);
void tipc_bclink_recv_pkt(struct sk_buff *buf);
u32  tipc_bclink_get_last_sent(void);
u32  tipc_bclink_acks_missing(struct tipc_node *n_ptr);
void tipc_bclink_check_gap(struct tipc_node *n_ptr, u32 seqno);
int  tipc_bclink_stats(char *stats_buf, const u32 buf_size);
int  tipc_bclink_reset_stats(void);
int  tipc_bclink_set_queue_limits(u32 limit);
void tipc_bcbearer_sort(void);
void tipc_bcbearer_push(void);
