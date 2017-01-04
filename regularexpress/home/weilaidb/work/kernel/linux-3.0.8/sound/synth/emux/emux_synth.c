#define LIMITVALUE(x, a, b) do  while (0)
#define LIMITMAX(x, a) do  while (0)
static int get_zone(struct snd_emux *emu, struct snd_emux_port *port,
int *notep, int vel, struct snd_midi_channel *chan,
struct snd_sf_zone **table);
static int get_bank(struct snd_emux_port *port, struct snd_midi_channel *chan);
static void terminate_note1(struct snd_emux *emu, int note,
struct snd_midi_channel *chan, int free);
static void exclusive_note_off(struct snd_emux *emu, struct snd_emux_port *port,
int exclass);
static void terminate_voice(struct snd_emux *emu, struct snd_emux_voice *vp, int free);
static void update_voice(struct snd_emux *emu, struct snd_emux_voice *vp, int update);
static void setup_voice(struct snd_emux_voice *vp);
static int calc_pan(struct snd_emux_voice *vp);
static int calc_volume(struct snd_emux_voice *vp);
static int calc_pitch(struct snd_emux_voice *vp);
void
snd_emux_note_on(void *p, int note, int vel, struct snd_midi_channel *chan)
void
snd_emux_note_off(void *p, int note, int vel, struct snd_midi_channel *chan)
void snd_emux_timer_callback(unsigned long data)
void
snd_emux_key_press(void *p, int note, int vel, struct snd_midi_channel *chan)
void
snd_emux_update_channel(struct snd_emux_port *port, struct snd_midi_channel *chan, int update)
void
snd_emux_update_port(struct snd_emux_port *port, int update)
void
snd_emux_control(void *p, int type, struct snd_midi_channel *chan)
static void
terminate_note1(struct snd_emux *emu, int note, struct snd_midi_channel *chan, int free)
void
snd_emux_terminate_note(void *p, int note, struct snd_midi_channel *chan)
void
snd_emux_terminate_all(struct snd_emux *emu)
EXPORT_SYMBOL(snd_emux_terminate_all);
void
snd_emux_sounds_off_all(struct snd_emux_port *port)
static void
exclusive_note_off(struct snd_emux *emu, struct snd_emux_port *port, int exclass)
static void
terminate_voice(struct snd_emux *emu, struct snd_emux_voice *vp, int free)
static void
update_voice(struct snd_emux *emu, struct snd_emux_voice *vp, int update)
#define LO_BYTE(v)	((v) & 0xff)
#define HI_BYTE(v)	(((v) >> 8) & 0xff)
static void
setup_voice(struct snd_emux_voice *vp)
static unsigned char pan_volumes[256] = ;
static int
calc_pan(struct snd_emux_voice *vp)
static unsigned char voltab1[128] = ;
static unsigned char voltab2[128] = ;
static unsigned char expressiontab[128] = ;
static int
calc_volume(struct snd_emux_voice *vp)
static int
calc_pitch(struct snd_emux_voice *vp)
static int
get_bank(struct snd_emux_port *port, struct snd_midi_channel *chan)
static int
get_zone(struct snd_emux *emu, struct snd_emux_port *port,
int *notep, int vel, struct snd_midi_channel *chan,
struct snd_sf_zone **table)
void
snd_emux_init_voices(struct snd_emux *emu)
void snd_emux_lock_voice(struct snd_emux *emu, int voice)
EXPORT_SYMBOL(snd_emux_lock_voice);
void snd_emux_unlock_voice(struct snd_emux *emu, int voice)
EXPORT_SYMBOL(snd_emux_unlock_voice);
