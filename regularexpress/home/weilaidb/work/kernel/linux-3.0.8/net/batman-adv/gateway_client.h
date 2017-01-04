#define _NET_BATMAN_ADV_GATEWAY_CLIENT_H_
void gw_deselect(struct bat_priv *bat_priv);
void gw_election(struct bat_priv *bat_priv);
struct orig_node *gw_get_selected_orig(struct bat_priv *bat_priv);
void gw_check_election(struct bat_priv *bat_priv, struct orig_node *orig_node);
void gw_node_update(struct bat_priv *bat_priv,
struct orig_node *orig_node, uint8_t new_gwflags);
void gw_node_delete(struct bat_priv *bat_priv, struct orig_node *orig_node);
void gw_node_purge(struct bat_priv *bat_priv);
int gw_client_seq_print_text(struct seq_file *seq, void *offset);
int gw_is_target(struct bat_priv *bat_priv, struct sk_buff *skb);
