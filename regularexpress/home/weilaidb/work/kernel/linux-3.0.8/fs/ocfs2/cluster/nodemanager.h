#define O2CLUSTER_NODEMANAGER_H
enum o2nm_fence_method ;
struct o2nm_node ;
struct o2nm_cluster ;
extern struct o2nm_cluster *o2nm_single_cluster;
u8 o2nm_this_node(void);
int o2nm_configured_node_map(unsigned long *map, unsigned bytes);
struct o2nm_node *o2nm_get_node_by_num(u8 node_num);
struct o2nm_node *o2nm_get_node_by_ip(__be32 addr);
void o2nm_node_get(struct o2nm_node *node);
void o2nm_node_put(struct o2nm_node *node);
int o2nm_depend_item(struct config_item *item);
void o2nm_undepend_item(struct config_item *item);
int o2nm_depend_this_node(void);
void o2nm_undepend_this_node(void);
