struct snd_seq_client_port *snd_seq_port_use_ptr(struct snd_seq_client *client,
int num)
struct snd_seq_client_port *snd_seq_port_query_nearest(struct snd_seq_client *client,
struct snd_seq_port_info *pinfo)
static void port_subs_info_init(struct snd_seq_port_subs_info *grp)
struct snd_seq_client_port *snd_seq_create_port(struct snd_seq_client *client,
int port)
enum group_type ;
static int subscribe_port(struct snd_seq_client *client,
struct snd_seq_client_port *port,
struct snd_seq_port_subs_info *grp,
struct snd_seq_port_subscribe *info, int send_ack);
static int unsubscribe_port(struct snd_seq_client *client,
struct snd_seq_client_port *port,
struct snd_seq_port_subs_info *grp,
struct snd_seq_port_subscribe *info, int send_ack);
static struct snd_seq_client_port *get_client_port(struct snd_seq_addr *addr,
struct snd_seq_client **cp)
static void clear_subscriber_list(struct snd_seq_client *client,
struct snd_seq_client_port *port,
struct snd_seq_port_subs_info *grp,
int grptype)
static int port_delete(struct snd_seq_client *client,
struct snd_seq_client_port *port)
int snd_seq_delete_port(struct snd_seq_client *client, int port)
int snd_seq_delete_all_ports(struct snd_seq_client *client)
int snd_seq_set_port_info(struct snd_seq_client_port * port,
struct snd_seq_port_info * info)
int snd_seq_get_port_info(struct snd_seq_client_port * port,
struct snd_seq_port_info * info)
static int subscribe_port(struct snd_seq_client *client,
struct snd_seq_client_port *port,
struct snd_seq_port_subs_info *grp,
struct snd_seq_port_subscribe *info,
int send_ack)
static int unsubscribe_port(struct snd_seq_client *client,
struct snd_seq_client_port *port,
struct snd_seq_port_subs_info *grp,
struct snd_seq_port_subscribe *info,
int send_ack)
static inline int addr_match(struct snd_seq_addr *r, struct snd_seq_addr *s)
static int match_subs_info(struct snd_seq_port_subscribe *r,
struct snd_seq_port_subscribe *s)
int snd_seq_port_connect(struct snd_seq_client *connector,
struct snd_seq_client *src_client,
struct snd_seq_client_port *src_port,
struct snd_seq_client *dest_client,
struct snd_seq_client_port *dest_port,
struct snd_seq_port_subscribe *info)
int snd_seq_port_disconnect(struct snd_seq_client *connector,
struct snd_seq_client *src_client,
struct snd_seq_client_port *src_port,
struct snd_seq_client *dest_client,
struct snd_seq_client_port *dest_port,
struct snd_seq_port_subscribe *info)
struct snd_seq_subscribers *snd_seq_port_get_subscription(struct snd_seq_port_subs_info *src_grp,
struct snd_seq_addr *dest_addr)
int snd_seq_event_port_attach(int client,
struct snd_seq_port_callback *pcbp,
int cap, int type, int midi_channels,
int midi_voices, char *portname)
EXPORT_SYMBOL(snd_seq_event_port_attach);
int snd_seq_event_port_detach(int client, int port)
EXPORT_SYMBOL(snd_seq_event_port_detach);
