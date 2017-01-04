#define _NET_BATMAN_ADV_AGGREGATION_H_
static inline int aggregated_packet(int buff_pos, int packet_len, int num_tt)
void add_bat_packet_to_list(struct bat_priv *bat_priv,
unsigned char *packet_buff, int packet_len,
struct hard_iface *if_incoming, char own_packet,
unsigned long send_time);
void receive_aggr_bat_packet(struct ethhdr *ethhdr, unsigned char *packet_buff,
int packet_len, struct hard_iface *if_incoming);
