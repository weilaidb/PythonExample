static void tt_local_purge(struct work_struct *work);
static void _tt_global_del_orig(struct bat_priv *bat_priv,
struct tt_global_entry *tt_global_entry,
char *message);
static int compare_ltt(struct hlist_node *node, void *data2)
static int compare_gtt(struct hlist_node *node, void *data2)
static void tt_local_start_timer(struct bat_priv *bat_priv)
static struct tt_local_entry *tt_local_hash_find(struct bat_priv *bat_priv,
void *data)
static struct tt_global_entry *tt_global_hash_find(struct bat_priv *bat_priv,
void *data)
int tt_local_init(struct bat_priv *bat_priv)
void tt_local_add(struct net_device *soft_iface, uint8_t *addr)
int tt_local_fill_buffer(struct bat_priv *bat_priv,
unsigned char *buff, int buff_len)
int tt_local_seq_print_text(struct seq_file *seq, void *offset)
static void _tt_local_del(struct hlist_node *node, void *arg)
static void tt_local_del(struct bat_priv *bat_priv,
struct tt_local_entry *tt_local_entry,
char *message)
void tt_local_remove(struct bat_priv *bat_priv,
uint8_t *addr, char *message)
static void tt_local_purge(struct work_struct *work)
void tt_local_free(struct bat_priv *bat_priv)
int tt_global_init(struct bat_priv *bat_priv)
void tt_global_add_orig(struct bat_priv *bat_priv,
struct orig_node *orig_node,
unsigned char *tt_buff, int tt_buff_len)
int tt_global_seq_print_text(struct seq_file *seq, void *offset)
static void _tt_global_del_orig(struct bat_priv *bat_priv,
struct tt_global_entry *tt_global_entry,
char *message)
void tt_global_del_orig(struct bat_priv *bat_priv,
struct orig_node *orig_node, char *message)
static void tt_global_del(struct hlist_node *node, void *arg)
void tt_global_free(struct bat_priv *bat_priv)
struct orig_node *transtable_search(struct bat_priv *bat_priv, uint8_t *addr)
