#define _NET_BATMAN_ADV_VIS_H_
#define VIS_TIMEOUT		200
int vis_seq_print_text(struct seq_file *seq, void *offset);
void receive_server_sync_packet(struct bat_priv *bat_priv,
struct vis_packet *vis_packet,
int vis_info_len);
void receive_client_update_packet(struct bat_priv *bat_priv,
struct vis_packet *vis_packet,
int vis_info_len);
int vis_init(struct bat_priv *bat_priv);
void vis_quit(struct bat_priv *bat_priv);
