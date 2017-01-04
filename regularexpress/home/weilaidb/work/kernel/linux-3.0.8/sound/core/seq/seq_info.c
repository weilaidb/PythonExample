static struct snd_info_entry *queues_entry;
static struct snd_info_entry *clients_entry;
static struct snd_info_entry *timer_entry;
static struct snd_info_entry * __init
create_info_entry(char *name, void (*read)(struct snd_info_entry *,
struct snd_info_buffer *))
int __init snd_seq_info_init(void)
int __exit snd_seq_info_done(void)
