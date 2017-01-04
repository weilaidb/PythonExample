void slide_own_bcast_window(struct hard_iface *hard_iface)
static void update_TT(struct bat_priv *bat_priv, struct orig_node *orig_node,
unsigned char *tt_buff, int tt_buff_len)
static void update_route(struct bat_priv *bat_priv,
struct orig_node *orig_node,
struct neigh_node *neigh_node,
unsigned char *tt_buff, int tt_buff_len)
void update_routes(struct bat_priv *bat_priv, struct orig_node *orig_node,
struct neigh_node *neigh_node, unsigned char *tt_buff,
int tt_buff_len)
static int is_bidirectional_neigh(struct orig_node *orig_node,
struct orig_node *orig_neigh_node,
struct batman_packet *batman_packet,
struct hard_iface *if_incoming)
void bonding_candidate_del(struct orig_node *orig_node,
struct neigh_node *neigh_node)
static void bonding_candidate_add(struct orig_node *orig_node,
struct neigh_node *neigh_node)
static void bonding_save_primary(struct orig_node *orig_node,
struct orig_node *orig_neigh_node,
struct batman_packet *batman_packet)
static void update_orig(struct bat_priv *bat_priv,
struct orig_node *orig_node,
struct ethhdr *ethhdr,
struct batman_packet *batman_packet,
struct hard_iface *if_incoming,
unsigned char *tt_buff, int tt_buff_len,
char is_duplicate)
static int window_protected(struct bat_priv *bat_priv,
int32_t seq_num_diff,
unsigned long *last_reset)
static char count_real_packets(struct ethhdr *ethhdr,
struct batman_packet *batman_packet,
struct hard_iface *if_incoming)
void receive_bat_packet(struct ethhdr *ethhdr,
struct batman_packet *batman_packet,
unsigned char *tt_buff, int tt_buff_len,
struct hard_iface *if_incoming)
int recv_bat_packet(struct sk_buff *skb, struct hard_iface *hard_iface)
static int recv_my_icmp_packet(struct bat_priv *bat_priv,
struct sk_buff *skb, size_t icmp_len)
static int recv_icmp_ttl_exceeded(struct bat_priv *bat_priv,
struct sk_buff *skb)
int recv_icmp_packet(struct sk_buff *skb, struct hard_iface *recv_if)
static struct neigh_node *find_bond_router(struct orig_node *primary_orig,
struct hard_iface *recv_if)
static struct neigh_node *find_ifalter_router(struct orig_node *primary_orig,
struct hard_iface *recv_if)
struct neigh_node *find_router(struct bat_priv *bat_priv,
struct orig_node *orig_node,
struct hard_iface *recv_if)
static int check_unicast_packet(struct sk_buff *skb, int hdr_size)
int route_unicast_packet(struct sk_buff *skb, struct hard_iface *recv_if)
int recv_unicast_packet(struct sk_buff *skb, struct hard_iface *recv_if)
int recv_ucast_frag_packet(struct sk_buff *skb, struct hard_iface *recv_if)
int recv_bcast_packet(struct sk_buff *skb, struct hard_iface *recv_if)
int recv_vis_packet(struct sk_buff *skb, struct hard_iface *recv_if)
