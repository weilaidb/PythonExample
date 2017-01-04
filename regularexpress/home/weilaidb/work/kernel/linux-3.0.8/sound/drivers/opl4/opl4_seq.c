MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_DESCRIPTION("OPL4 wavetable synth driver");
MODULE_LICENSE("Dual BSD/GPL");
int volume_boost = 8;
module_param(volume_boost, int, 0644);
MODULE_PARM_DESC(volume_boost, "Additional volume for OPL4 wavetable sounds.");
static int snd_opl4_seq_use_inc(struct snd_opl4 *opl4)
static void snd_opl4_seq_use_dec(struct snd_opl4 *opl4)
static int snd_opl4_seq_use(void *private_data, struct snd_seq_port_subscribe *info)
static int snd_opl4_seq_unuse(void *private_data, struct snd_seq_port_subscribe *info)
static struct snd_midi_op opl4_ops = ;
static int snd_opl4_seq_event_input(struct snd_seq_event *ev, int direct,
void *private_data, int atomic, int hop)
static void snd_opl4_seq_free_port(void *private_data)
static int snd_opl4_seq_new_device(struct snd_seq_device *dev)
static int snd_opl4_seq_delete_device(struct snd_seq_device *dev)
static int __init alsa_opl4_synth_init(void)
static void __exit alsa_opl4_synth_exit(void)
module_init(alsa_opl4_synth_init)
module_exit(alsa_opl4_synth_exit)
