#define __SND_SEQ_PORTS_H
struct snd_seq_subscribers ;
struct snd_seq_port_subs_info ;
struct snd_seq_client_port ;
struct snd_seq_client;
struct snd_seq_client_port *snd_seq_port_use_ptr(struct snd_seq_client *client, int num);
struct snd_seq_client_port *snd_seq_port_query_nearest(struct snd_seq_client *client,
struct snd_seq_port_info *pinfo);
#define snd_seq_port_unlock(port) snd_use_lock_free(&(port)->use_lock)
struct snd_seq_client_port *snd_seq_create_port(struct snd_seq_client *client, int port_index);
int snd_seq_delete_port(struct snd_seq_client *client, int port);
int snd_seq_delete_all_ports(struct snd_seq_client *client);
int snd_seq_set_port_info(struct snd_seq_client_port *port,
struct snd_seq_port_info *info);
int snd_seq_get_port_info(struct snd_seq_client_port *port,
struct snd_seq_port_info *info);
int snd_seq_port_connect(struct snd_seq_client *caller,
struct snd_seq_client *s, struct snd_seq_client_port *sp,
struct snd_seq_client *d, struct snd_seq_client_port *dp,
struct snd_seq_port_subscribe *info);
int snd_seq_port_disconnect(struct snd_seq_client *caller,
struct snd_seq_client *s, struct snd_seq_client_port *sp,
struct snd_seq_client *d, struct snd_seq_client_port *dp,
struct snd_seq_port_subscribe *info);
int snd_seq_port_subscribe(struct snd_seq_client_port *port,
struct snd_seq_port_subscribe *info);
struct snd_seq_subscribers *snd_seq_port_get_subscription(struct snd_seq_port_subs_info *src_grp,
struct snd_seq_addr *dest_addr);
