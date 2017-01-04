MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>, Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("MIDI byte <-> sequencer event coder");
MODULE_LICENSE("GPL");
#define ST_INVALID	7
#define ST_SPECIAL	8
#define ST_SYSEX	ST_SPECIAL
static void note_event(struct snd_midi_event *dev, struct snd_seq_event *ev);
static void one_param_ctrl_event(struct snd_midi_event *dev, struct snd_seq_event *ev);
static void pitchbend_ctrl_event(struct snd_midi_event *dev, struct snd_seq_event *ev);
static void two_param_ctrl_event(struct snd_midi_event *dev, struct snd_seq_event *ev);
static void one_param_event(struct snd_midi_event *dev, struct snd_seq_event *ev);
static void songpos_event(struct snd_midi_event *dev, struct snd_seq_event *ev);
static void note_decode(struct snd_seq_event *ev, unsigned char *buf);
static void one_param_decode(struct snd_seq_event *ev, unsigned char *buf);
static void pitchbend_decode(struct snd_seq_event *ev, unsigned char *buf);
static void two_param_decode(struct snd_seq_event *ev, unsigned char *buf);
static void songpos_decode(struct snd_seq_event *ev, unsigned char *buf);
static struct status_event_list  status_event[] = ;
static int extra_decode_ctrl14(struct snd_midi_event *dev, unsigned char *buf, int len,
struct snd_seq_event *ev);
static int extra_decode_xrpn(struct snd_midi_event *dev, unsigned char *buf, int count,
struct snd_seq_event *ev);
static struct extra_event_list  extra_event[] = ;
int snd_midi_event_new(int bufsize, struct snd_midi_event **rdev)
void snd_midi_event_free(struct snd_midi_event *dev)
static inline void reset_encode(struct snd_midi_event *dev)
void snd_midi_event_reset_encode(struct snd_midi_event *dev)
void snd_midi_event_reset_decode(struct snd_midi_event *dev)
void snd_midi_event_no_status(struct snd_midi_event *dev, int on)
long snd_midi_event_encode(struct snd_midi_event *dev, unsigned char *buf, long count,
struct snd_seq_event *ev)
int snd_midi_event_encode_byte(struct snd_midi_event *dev, int c,
struct snd_seq_event *ev)
static void note_event(struct snd_midi_event *dev, struct snd_seq_event *ev)
static void one_param_ctrl_event(struct snd_midi_event *dev, struct snd_seq_event *ev)
static void pitchbend_ctrl_event(struct snd_midi_event *dev, struct snd_seq_event *ev)
static void two_param_ctrl_event(struct snd_midi_event *dev, struct snd_seq_event *ev)
static void one_param_event(struct snd_midi_event *dev, struct snd_seq_event *ev)
static void songpos_event(struct snd_midi_event *dev, struct snd_seq_event *ev)
long snd_midi_event_decode(struct snd_midi_event *dev, unsigned char *buf, long count,
struct snd_seq_event *ev)
static void note_decode(struct snd_seq_event *ev, unsigned char *buf)
static void one_param_decode(struct snd_seq_event *ev, unsigned char *buf)
static void pitchbend_decode(struct snd_seq_event *ev, unsigned char *buf)
static void two_param_decode(struct snd_seq_event *ev, unsigned char *buf)
static void songpos_decode(struct snd_seq_event *ev, unsigned char *buf)
static int extra_decode_ctrl14(struct snd_midi_event *dev, unsigned char *buf,
int count, struct snd_seq_event *ev)
static int extra_decode_xrpn(struct snd_midi_event *dev, unsigned char *buf,
int count, struct snd_seq_event *ev)
EXPORT_SYMBOL(snd_midi_event_new);
EXPORT_SYMBOL(snd_midi_event_free);
EXPORT_SYMBOL(snd_midi_event_reset_encode);
EXPORT_SYMBOL(snd_midi_event_reset_decode);
EXPORT_SYMBOL(snd_midi_event_no_status);
EXPORT_SYMBOL(snd_midi_event_encode);
EXPORT_SYMBOL(snd_midi_event_encode_byte);
EXPORT_SYMBOL(snd_midi_event_decode);
static int __init alsa_seq_midi_event_init(void)
static void __exit alsa_seq_midi_event_exit(void)
module_init(alsa_seq_midi_event_init)
module_exit(alsa_seq_midi_event_exit)
