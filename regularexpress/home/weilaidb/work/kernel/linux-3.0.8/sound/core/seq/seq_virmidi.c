MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("Virtual Raw MIDI client on Sequencer");
MODULE_LICENSE("GPL");
static void snd_virmidi_init_event(struct snd_virmidi *vmidi,
struct snd_seq_event *ev)
static int snd_virmidi_dev_receive_event(struct snd_virmidi_dev *rdev,
struct snd_seq_event *ev)
static int snd_virmidi_event_input(struct snd_seq_event *ev, int direct,
void *private_data, int atomic, int hop)
static void snd_virmidi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_virmidi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static int snd_virmidi_input_open(struct snd_rawmidi_substream *substream)
static int snd_virmidi_output_open(struct snd_rawmidi_substream *substream)
static int snd_virmidi_input_close(struct snd_rawmidi_substream *substream)
static int snd_virmidi_output_close(struct snd_rawmidi_substream *substream)
static int snd_virmidi_subscribe(void *private_data,
struct snd_seq_port_subscribe *info)
static int snd_virmidi_unsubscribe(void *private_data,
struct snd_seq_port_subscribe *info)
static int snd_virmidi_use(void *private_data,
struct snd_seq_port_subscribe *info)
static int snd_virmidi_unuse(void *private_data,
struct snd_seq_port_subscribe *info)
static struct snd_rawmidi_ops snd_virmidi_input_ops = ;
static struct snd_rawmidi_ops snd_virmidi_output_ops = ;
static int snd_virmidi_dev_attach_seq(struct snd_virmidi_dev *rdev)
static void snd_virmidi_dev_detach_seq(struct snd_virmidi_dev *rdev)
static int snd_virmidi_dev_register(struct snd_rawmidi *rmidi)
static int snd_virmidi_dev_unregister(struct snd_rawmidi *rmidi)
static struct snd_rawmidi_global_ops snd_virmidi_global_ops = ;
static void snd_virmidi_free(struct snd_rawmidi *rmidi)
int snd_virmidi_new(struct snd_card *card, int device, struct snd_rawmidi **rrmidi)
static int __init alsa_virmidi_init(void)
static void __exit alsa_virmidi_exit(void)
module_init(alsa_virmidi_init)
module_exit(alsa_virmidi_exit)
EXPORT_SYMBOL(snd_virmidi_new);
