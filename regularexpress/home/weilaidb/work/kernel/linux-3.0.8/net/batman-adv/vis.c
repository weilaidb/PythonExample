#define MAX_VIS_PACKET_SIZE 1000
#define smallest_signed_int(x) (1u << (7u + 8u * (sizeof(x) - 1u)))
#define seq_before(x, y) ()
#define seq_after(x, y) seq_before(y, x)
static void start_vis_timer(struct bat_priv *bat_priv);
static void free_info(struct kref *ref)
static int vis_info_cmp(struct hlist_node *node, void *data2)
static void vis_data_insert_interface(const uint8_t *interface,
struct hlist_head *if_list,
bool primary)
static ssize_t vis_data_read_prim_sec(char *buff, struct hlist_head *if_list)
static size_t vis_data_count_prim_sec(struct hlist_head *if_list)
static ssize_t vis_data_read_entry(char *buff, struct vis_info_entry *entry,
uint8_t *src, bool primary)
int vis_seq_print_text(struct seq_file *seq, void *offset)
static void send_list_add(struct bat_priv *bat_priv, struct vis_info *info)
static void send_list_del(struct vis_info *info)
static void recv_list_add(struct bat_priv *bat_priv,
struct list_head *recv_list, char *mac)
static int recv_list_is_in(struct bat_priv *bat_priv,
struct list_head *recv_list, char *mac)
static struct vis_info *add_packet(struct bat_priv *bat_priv,
struct vis_packet *vis_packet,
int vis_info_len, int *is_new,
int make_broadcast)
void receive_server_sync_packet(struct bat_priv *bat_priv,
struct vis_packet *vis_packet,
int vis_info_len)
void receive_client_update_packet(struct bat_priv *bat_priv,
struct vis_packet *vis_packet,
int vis_info_len)
static int find_best_vis_server(struct bat_priv *bat_priv,
struct vis_info *info)
static bool vis_packet_full(struct vis_info *info)
static int generate_vis_packet(struct bat_priv *bat_priv)
static void purge_vis_packets(struct bat_priv *bat_priv)
static void broadcast_vis_packet(struct bat_priv *bat_priv,
struct vis_info *info)
static void unicast_vis_packet(struct bat_priv *bat_priv,
struct vis_info *info)
static void send_vis_packet(struct bat_priv *bat_priv, struct vis_info *info)
static void send_vis_packets(struct work_struct *work)
int vis_init(struct bat_priv *bat_priv)
static void free_info_ref(struct hlist_node *node, void *arg)
void vis_quit(struct bat_priv *bat_priv)
static void start_vis_timer(struct bat_priv *bat_priv)
