static int sysclient = -1;
static int announce_port = -1;
static int setheader(struct snd_seq_event * ev, int client, int port)
void snd_seq_system_broadcast(int client, int port, int type)
int snd_seq_system_notify(int client, int port, struct snd_seq_event *ev)
static int event_input_timer(struct snd_seq_event * ev, int direct, void *private_data, int atomic, int hop)
int __init snd_seq_system_client_init(void)
void __exit snd_seq_system_client_done(void)
