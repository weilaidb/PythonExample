#define _LINUX_NODE_H_
struct node ;
struct memory_block;
extern struct node node_devices[];
typedef  void (*node_registration_func_t)(struct node *);
extern int register_node(struct node *, int, struct node *);
extern void unregister_node(struct node *node);
extern int register_one_node(int nid);
extern void unregister_one_node(int nid);
extern int register_cpu_under_node(unsigned int cpu, unsigned int nid);
extern int unregister_cpu_under_node(unsigned int cpu, unsigned int nid);
extern int register_mem_sect_under_node(struct memory_block *mem_blk,
int nid);
extern int unregister_mem_sect_under_nodes(struct memory_block *mem_blk,
unsigned long phys_index);
extern void register_hugetlbfs_with_node(node_registration_func_t doregister,
node_registration_func_t unregister);
static inline int register_one_node(int nid)
static inline int unregister_one_node(int nid)
static inline int register_cpu_under_node(unsigned int cpu, unsigned int nid)
static inline int unregister_cpu_under_node(unsigned int cpu, unsigned int nid)
static inline int register_mem_sect_under_node(struct memory_block *mem_blk,
int nid)
static inline int unregister_mem_sect_under_nodes(struct memory_block *mem_blk,
unsigned long phys_index)
static inline void register_hugetlbfs_with_node(node_registration_func_t reg,
node_registration_func_t unreg)
#define to_node(sys_device) container_of(sys_device, struct node, sysdev)
