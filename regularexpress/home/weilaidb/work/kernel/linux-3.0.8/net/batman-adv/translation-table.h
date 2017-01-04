#define _NET_BATMAN_ADV_TRANSLATION_TABLE_H_
int tt_local_init(struct bat_priv *bat_priv);
void tt_local_add(struct net_device *soft_iface, uint8_t *addr);
void tt_local_remove(struct bat_priv *bat_priv,
uint8_t *addr, char *message);
int tt_local_fill_buffer(struct bat_priv *bat_priv,
unsigned char *buff, int buff_len);
int tt_local_seq_print_text(struct seq_file *seq, void *offset);
void tt_local_free(struct bat_priv *bat_priv);
int tt_global_init(struct bat_priv *bat_priv);
void tt_global_add_orig(struct bat_priv *bat_priv,
struct orig_node *orig_node,
unsigned char *tt_buff, int tt_buff_len);
int tt_global_seq_print_text(struct seq_file *seq, void *offset);
void tt_global_del_orig(struct bat_priv *bat_priv,
struct orig_node *orig_node, char *message);
void tt_global_free(struct bat_priv *bat_priv);
struct orig_node *transtable_search(struct bat_priv *bat_priv, uint8_t *addr);
