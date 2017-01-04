extern char snd_opl3_regmap[MAX_OPL2_VOICES][4];
static char snd_opl3_drum_table[47] =
;
struct snd_opl3_drum_voice ;
struct snd_opl3_drum_note ;
static struct snd_opl3_drum_voice bass_op0 = ;
static struct snd_opl3_drum_voice bass_op1 = ;
static struct snd_opl3_drum_note bass_note = ;
static struct snd_opl3_drum_voice hihat = ;
static struct snd_opl3_drum_voice snare = ;
static struct snd_opl3_drum_note snare_note = ;
static struct snd_opl3_drum_voice tomtom = ;
static struct snd_opl3_drum_note tomtom_note = ;
static struct snd_opl3_drum_voice cymbal = ;
static void snd_opl3_drum_voice_set(struct snd_opl3 *opl3,
struct snd_opl3_drum_voice *data)
static void snd_opl3_drum_note_set(struct snd_opl3 *opl3,
struct snd_opl3_drum_note *data)
static void snd_opl3_drum_vol_set(struct snd_opl3 *opl3,
struct snd_opl3_drum_voice *data,
int vel, struct snd_midi_channel *chan)
void snd_opl3_load_drums(struct snd_opl3 *opl3)
void snd_opl3_drum_switch(struct snd_opl3 *opl3, int note, int vel, int on_off,
struct snd_midi_channel *chan)
