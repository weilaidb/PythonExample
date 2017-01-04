static void purge_orig(struct work_struct *work);
static void start_purge_timer(struct bat_priv *bat_priv)
int originator_init(struct bat_priv *bat_priv)
void neigh_node_free_ref(struct neigh_node *neigh_node)
struct neigh_node *orig_node_get_router(struct orig_node *orig_node)
struct neigh_node *create_neighbor(struct orig_node *orig_node,
struct orig_node *orig_neigh_node,
uint8_t *neigh,
struct hard_iface *if_incoming)
static void orig_node_free_rcu(struct rcu_head *rcu)
void orig_node_free_ref(struct orig_node *orig_node)
void originator_free(struct bat_priv *bat_priv)
struct orig_node *get_orig_node(struct bat_priv *bat_priv, uint8_t *addr)
static bool purge_orig_neighbors(struct bat_priv *bat_priv,
struct orig_node *orig_node,
struct neigh_node **best_neigh_node)
static bool purge_orig_node(struct bat_priv *bat_priv,
struct orig_node *orig_node)
static void _purge_orig(struct bat_priv *bat_priv)
static void purge_orig(struct work_struct *work)
void purge_orig_ref(struct bat_priv *bat_priv)
int orig_seq_print_text(struct seq_file *seq, void *offset)
static int orig_node_add_if(struct orig_node *orig_node, int max_if_num)
int orig_hash_add_if(struct hard_iface *hard_iface, int max_if_num)
static int orig_node_del_if(struct orig_node *orig_node,
int max_if_num, int del_if_num)
int orig_hash_del_if(struct hard_iface *hard_iface, int max_if_num)
