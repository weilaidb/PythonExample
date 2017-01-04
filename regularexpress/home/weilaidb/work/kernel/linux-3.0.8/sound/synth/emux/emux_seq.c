static void free_port(void *private);
static void snd_emux_init_port(struct snd_emux_port *p);
static int snd_emux_use(void *private_data, struct snd_seq_port_subscribe *info);
static int snd_emux_unuse(void *private_data, struct snd_seq_port_subscribe *info);
static struct snd_midi_op emux_ops = ;
#define MIDI_CHANNELS		16
#define DEFAULT_MIDI_TYPE	(SNDRV_SEQ_PORT_TYPE_MIDI_GENERIC |\
SNDRV_SEQ_PORT_TYPE_MIDI_GM |\
SNDRV_SEQ_PORT_TYPE_MIDI_GS |\
SNDRV_SEQ_PORT_TYPE_MIDI_XG |\
SNDRV_SEQ_PORT_TYPE_HARDWARE |\
SNDRV_SEQ_PORT_TYPE_SYNTHESIZER)
int
snd_emux_init_seq(struct snd_emux *emu, struct snd_card *card, int index)
void
snd_emux_detach_seq(struct snd_emux *emu)
struct snd_emux_port *
snd_emux_create_port(struct snd_emux *emu, char *name,
int max_channels, int oss_port,
struct snd_seq_port_callback *callback)
static void
free_port(void *private_data)
#define DEFAULT_DRUM_FLAGS	(1<<9)
static void
snd_emux_init_port(struct snd_emux_port *p)
void
snd_emux_reset_port(struct snd_emux_port *port)
int
snd_emux_event_input(struct snd_seq_event *ev, int direct, void *private_data,
int atomic, int hop)
int
snd_emux_inc_count(struct snd_emux *emu)
void
snd_emux_dec_count(struct snd_emux *emu)
static int
snd_emux_use(void *private_data, struct snd_seq_port_subscribe *info)
static int
snd_emux_unuse(void *private_data, struct snd_seq_port_subscribe *info)
int snd_emux_init_virmidi(struct snd_emux *emu, struct snd_card *card)
int snd_emux_delete_virmidi(struct snd_emux *emu)
