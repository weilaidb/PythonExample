MODULE_AUTHOR("Frank van de Pol <fvdpol@coil.demon.nl>, Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Advanced Linux Sound Architecture sequencer MIDI synth.");
MODULE_LICENSE("GPL");
static int output_buffer_size = PAGE_SIZE;
module_param(output_buffer_size, int, 0644);
MODULE_PARM_DESC(output_buffer_size, "Output buffer size in bytes.");
static int input_buffer_size = PAGE_SIZE;
module_param(input_buffer_size, int, 0644);
MODULE_PARM_DESC(input_buffer_size, "Input buffer size in bytes.");
struct seq_midisynth ;
struct seq_midisynth_client ;
static struct seq_midisynth_client *synths[SNDRV_CARDS];
static DEFINE_MUTEX(register_mutex);
static void snd_midi_input_event(struct snd_rawmidi_substream *substream)
static int dump_midi(struct snd_rawmidi_substream *substream, const char *buf, int count)
static int event_process_midi(struct snd_seq_event *ev, int direct,
void *private_data, int atomic, int hop)
static int snd_seq_midisynth_new(struct seq_midisynth *msynth,
struct snd_card *card,
int device,
int subdevice)
static int midisynth_subscribe(void *private_data, struct snd_seq_port_subscribe *info)
static int midisynth_unsubscribe(void *private_data, struct snd_seq_port_subscribe *info)
static int midisynth_use(void *private_data, struct snd_seq_port_subscribe *info)
static int midisynth_unuse(void *private_data, struct snd_seq_port_subscribe *info)
static void snd_seq_midisynth_delete(struct seq_midisynth *msynth)
static int
snd_seq_midisynth_register_port(struct snd_seq_device *dev)
static int
snd_seq_midisynth_unregister_port(struct snd_seq_device *dev)
static int __init alsa_seq_midi_init(void)
static void __exit alsa_seq_midi_exit(void)
module_init(alsa_seq_midi_init)
module_exit(alsa_seq_midi_exit)
