#define _NET_BATMAN_ADV_ICMP_SOCKET_H_
#define ICMP_SOCKET "socket"
void bat_socket_init(void);
int bat_socket_setup(struct bat_priv *bat_priv);
void bat_socket_receive_packet(struct icmp_packet_rr *icmp_packet,
size_t icmp_len);
