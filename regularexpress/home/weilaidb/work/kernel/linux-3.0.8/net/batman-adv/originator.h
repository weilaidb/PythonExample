#define _NET_BATMAN_ADV_ORIGINATOR_H_
int originator_init(struct bat_priv *bat_priv);
void originator_free(struct bat_priv *bat_priv);
void purge_orig_ref(struct bat_priv *bat_priv);
void orig_node_free_ref(struct orig_node *orig_node);
struct orig_node *get_orig_node(struct bat_priv *bat_priv, uint8_t *addr);
struct neigh_node *create_neighbor(struct orig_node *orig_node,
struct orig_node *orig_neigh_node,
uint8_t *neigh,
struct hard_iface *if_incoming);
void neigh_node_free_ref(struct neigh_node *neigh_node);
struct neigh_node *orig_node_get_router(struct orig_node *orig_node);
int orig_seq_print_text(struct seq_file *seq, void *offset);
int orig_hash_add_if(struct hard_iface *hard_iface, int max_if_num);
int orig_hash_del_if(struct hard_iface *hard_iface, int max_if_num);
static inline int compare_orig(struct hlist_node *node, void *data2)
