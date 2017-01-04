MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("ALSA sequencer MIDI-through client");
MODULE_LICENSE("GPL");
MODULE_ALIAS("snd-seq-client-" __stringify(SNDRV_SEQ_CLIENT_DUMMY));
static int ports = 1;
static int duplex;
module_param(ports, int, 0444);
MODULE_PARM_DESC(ports, "number of ports to be created");
module_param(duplex, bool, 0444);
MODULE_PARM_DESC(duplex, "create DUPLEX ports");
struct snd_seq_dummy_port ;
static int my_client = -1;
static int
dummy_unuse(void *private_data, struct snd_seq_port_subscribe *info)
static int
dummy_input(struct snd_seq_event *ev, int direct, void *private_data,
int atomic, int hop)
static void
dummy_free(void *private_data)
static struct snd_seq_dummy_port __init *
create_port(int idx, int type)
static int __init
register_client(void)
static void __exit
delete_client(void)
static int __init alsa_seq_dummy_init(void)
static void __exit alsa_seq_dummy_exit(void)
module_init(alsa_seq_dummy_init)
module_exit(alsa_seq_dummy_exit)
