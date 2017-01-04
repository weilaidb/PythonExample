#define __NET_NET_NAMESPACE_H
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
struct proc_dir_entry;
struct net_device;
struct sock;
struct ctl_table_header;
struct net_generic;
struct sock;
struct netns_ipvs;
#define NETDEV_HASHBITS    8
#define NETDEV_HASHENTRIES (1 << NETDEV_HASHBITS)
struct net ;
extern struct net init_net;
extern struct net *copy_net_ns(unsigned long flags, struct net *net_ns);
static inline struct net *copy_net_ns(unsigned long flags, struct net *net_ns)
extern struct list_head net_namespace_list;
extern struct net *get_net_ns_by_pid(pid_t pid);
extern struct net *get_net_ns_by_fd(int pid);
extern void __put_net(struct net *net);
static inline struct net *get_net(struct net *net)
static inline struct net *maybe_get_net(struct net *net)
static inline void put_net(struct net *net)
static inline
int net_eq(const struct net *net1, const struct net *net2)
extern void net_drop_ns(void *);
static inline struct net *get_net(struct net *net)
static inline void put_net(struct net *net)
static inline struct net *maybe_get_net(struct net *net)
static inline
int net_eq(const struct net *net1, const struct net *net2)
#define net_drop_ns NULL
static inline struct net *hold_net(struct net *net)
static inline void release_net(struct net *net)
static inline struct net *hold_net(struct net *net)
static inline void release_net(struct net *net)
static inline void write_pnet(struct net **pnet, struct net *net)
static inline struct net *read_pnet(struct net * const *pnet)
#define write_pnet(pnet, net)	do  while (0)
#define read_pnet(pnet)		(&init_net)
#define for_each_net(VAR)				\
list_for_each_entry(VAR, &net_namespace_list, list)
#define for_each_net_rcu(VAR)				\
list_for_each_entry_rcu(VAR, &net_namespace_list, list)
#define __net_init
#define __net_exit
#define __net_initdata
#define __net_init	__init
#define __net_exit	__exit_refok
#define __net_initdata	__initdata
struct pernet_operations ;
extern int register_pernet_subsys(struct pernet_operations *);
extern void unregister_pernet_subsys(struct pernet_operations *);
extern int register_pernet_device(struct pernet_operations *);
extern void unregister_pernet_device(struct pernet_operations *);
struct ctl_path;
struct ctl_table;
struct ctl_table_header;
extern struct ctl_table_header *register_net_sysctl_table(struct net *net,
const struct ctl_path *path, struct ctl_table *table);
extern struct ctl_table_header *register_net_sysctl_rotable(
const struct ctl_path *path, struct ctl_table *table);
extern void unregister_net_sysctl_table(struct ctl_table_header *header);
