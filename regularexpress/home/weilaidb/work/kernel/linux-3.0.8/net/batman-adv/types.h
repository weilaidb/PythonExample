#define _NET_BATMAN_ADV_TYPES_H_
#define BAT_HEADER_LEN (sizeof(struct ethhdr) + \
((sizeof(struct unicast_packet) > sizeof(struct bcast_packet) ? \
sizeof(struct unicast_packet) : \
sizeof(struct bcast_packet))))
struct hard_iface ;
struct orig_node ;
struct gw_node ;
struct neigh_node ;
struct bat_priv ;
struct socket_client ;
struct socket_packet ;
struct tt_local_entry ;
struct tt_global_entry ;
struct forw_packet ;
struct if_list_entry ;
struct debug_log ;
struct frag_packet_list_entry ;
struct vis_info  __packed;
struct vis_info_entry  __packed;
struct recvlist_node ;
struct softif_neigh_vid ;
struct softif_neigh ;
