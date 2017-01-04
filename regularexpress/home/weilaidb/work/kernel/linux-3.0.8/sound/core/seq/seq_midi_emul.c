MODULE_AUTHOR("Takashi Iwai / Steve Ratcliffe");
MODULE_DESCRIPTION("Advanced Linux Sound Architecture sequencer MIDI emulation.");
MODULE_LICENSE("GPL");
static void note_off(struct snd_midi_op *ops, void *drv,
struct snd_midi_channel *chan,
int note, int vel);
static void do_control(struct snd_midi_op *ops, void *private,
struct snd_midi_channel_set *chset,
struct snd_midi_channel *chan,
int control, int value);
static void rpn(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan,
struct snd_midi_channel_set *chset);
static void nrpn(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan,
struct snd_midi_channel_set *chset);
static void sysex(struct snd_midi_op *ops, void *private, unsigned char *sysex,
int len, struct snd_midi_channel_set *chset);
static void all_sounds_off(struct snd_midi_op *ops, void *private,
struct snd_midi_channel *chan);
static void all_notes_off(struct snd_midi_op *ops, void *private,
struct snd_midi_channel *chan);
static void snd_midi_reset_controllers(struct snd_midi_channel *chan);
static void reset_all_channels(struct snd_midi_channel_set *chset);
void
snd_midi_process_event(struct snd_midi_op *ops,
struct snd_seq_event *ev,
struct snd_midi_channel_set *chanset)
static void
note_off(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan,
int note, int vel)
static void
do_control(struct snd_midi_op *ops, void *drv, struct snd_midi_channel_set *chset,
struct snd_midi_channel *chan, int control, int value)
void
snd_midi_channel_set_clear(struct snd_midi_channel_set *chset)
static void
rpn(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan,
struct snd_midi_channel_set *chset)
static void
nrpn(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan,
struct snd_midi_channel_set *chset)
static int
get_channel(unsigned char cmd)
static void
sysex(struct snd_midi_op *ops, void *private, unsigned char *buf, int len,
struct snd_midi_channel_set *chset)
static void
all_sounds_off(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan)
static void
all_notes_off(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan)
static void snd_midi_channel_init(struct snd_midi_channel *p, int n)
static struct snd_midi_channel *snd_midi_channel_init_set(int n)
static void
reset_all_channels(struct snd_midi_channel_set *chset)
struct snd_midi_channel_set *snd_midi_channel_alloc_set(int n)
static void snd_midi_reset_controllers(struct snd_midi_channel *chan)
void snd_midi_channel_free_set(struct snd_midi_channel_set *chset)
static int __init alsa_seq_midi_emul_init(void)
static void __exit alsa_seq_midi_emul_exit(void)
module_init(alsa_seq_midi_emul_init)
module_exit(alsa_seq_midi_emul_exit)
EXPORT_SYMBOL(snd_midi_process_event);
EXPORT_SYMBOL(snd_midi_channel_set_clear);
EXPORT_SYMBOL(snd_midi_channel_alloc_set);
EXPORT_SYMBOL(snd_midi_channel_free_set);
