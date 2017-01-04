static int tt_len(struct batman_packet *batman_packet)
static bool can_aggregate_with(struct batman_packet *new_batman_packet,
int packet_len,
unsigned long send_time,
bool directlink,
struct hard_iface *if_incoming,
struct forw_packet *forw_packet)
static void new_aggregated_packet(unsigned char *packet_buff, int packet_len,
unsigned long send_time, bool direct_link,
struct hard_iface *if_incoming,
int own_packet)
static void aggregate(struct forw_packet *forw_packet_aggr,
unsigned char *packet_buff,
int packet_len,
bool direct_link)
void add_bat_packet_to_list(struct bat_priv *bat_priv,
unsigned char *packet_buff, int packet_len,
struct hard_iface *if_incoming, char own_packet,
unsigned long send_time)
void receive_aggr_bat_packet(struct ethhdr *ethhdr, unsigned char *packet_buff,
int packet_len, struct hard_iface *if_incoming)
