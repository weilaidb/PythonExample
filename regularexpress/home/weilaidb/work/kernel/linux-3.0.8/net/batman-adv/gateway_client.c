static void gw_node_free_ref(struct gw_node *gw_node)
static struct gw_node *gw_get_selected_gw_node(struct bat_priv *bat_priv)
struct orig_node *gw_get_selected_orig(struct bat_priv *bat_priv)
static void gw_select(struct bat_priv *bat_priv, struct gw_node *new_gw_node)
void gw_deselect(struct bat_priv *bat_priv)
void gw_election(struct bat_priv *bat_priv)
void gw_check_election(struct bat_priv *bat_priv, struct orig_node *orig_node)
static void gw_node_add(struct bat_priv *bat_priv,
struct orig_node *orig_node, uint8_t new_gwflags)
void gw_node_update(struct bat_priv *bat_priv,
struct orig_node *orig_node, uint8_t new_gwflags)
void gw_node_delete(struct bat_priv *bat_priv, struct orig_node *orig_node)
void gw_node_purge(struct bat_priv *bat_priv)
static int _write_buffer_text(struct bat_priv *bat_priv,
struct seq_file *seq, struct gw_node *gw_node)
int gw_client_seq_print_text(struct seq_file *seq, void *offset)
int gw_is_target(struct bat_priv *bat_priv, struct sk_buff *skb)
