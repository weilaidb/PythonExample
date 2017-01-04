MODULE_AUTHOR("Uros Bizjak <uros@kss-loka.si>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ALSA driver for OPL3 FM synth");
int use_internal_drums = 0;
module_param(use_internal_drums, bool, 0444);
MODULE_PARM_DESC(use_internal_drums, "Enable internal OPL2/3 drums.");
int snd_opl3_synth_use_inc(struct snd_opl3 * opl3)
void snd_opl3_synth_use_dec(struct snd_opl3 * opl3)
int snd_opl3_synth_setup(struct snd_opl3 * opl3)
void snd_opl3_synth_cleanup(struct snd_opl3 * opl3)
static int snd_opl3_synth_use(void *private_data, struct snd_seq_port_subscribe * info)
static int snd_opl3_synth_unuse(void *private_data, struct snd_seq_port_subscribe * info)
struct snd_midi_op opl3_ops = ;
static int snd_opl3_synth_event_input(struct snd_seq_event * ev, int direct,
void *private_data, int atomic, int hop)
static void snd_opl3_synth_free_port(void *private_data)
static int snd_opl3_synth_create_port(struct snd_opl3 * opl3)
static int snd_opl3_seq_new_device(struct snd_seq_device *dev)
static int snd_opl3_seq_delete_device(struct snd_seq_device *dev)
static int __init alsa_opl3_seq_init(void)
static void __exit alsa_opl3_seq_exit(void)
module_init(alsa_opl3_seq_init)
module_exit(alsa_opl3_seq_exit)
