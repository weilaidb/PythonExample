#define _PING_H
#define PING_HTABLE_SIZE 	64
#define PING_HTABLE_MASK 	(PING_HTABLE_SIZE-1)
#define ping_portaddr_for_each_entry(__sk, node, list) \
hlist_nulls_for_each_entry(__sk, node, list, sk_nulls_node)
#define GID_T_MAX (((gid_t)~0U) >> 1)
struct ping_table ;
struct ping_iter_state ;
extern struct proto ping_prot;
extern void ping_rcv(struct sk_buff *);
extern void ping_err(struct sk_buff *, u32 info);
extern int __init ping_proc_init(void);
extern void ping_proc_exit(void);
void __init ping_init(void);
