#define MIDI_CTL_RELEASE_TIME	0x48
#define MIDI_CTL_ATTACK_TIME	0x49
#define MIDI_CTL_DECAY_TIME	0x4b
#define MIDI_CTL_VIBRATO_RATE	0x4c
#define MIDI_CTL_VIBRATO_DEPTH	0x4d
#define MIDI_CTL_VIBRATO_DELAY	0x4e
static const s16 snd_opl4_pitch_map[0x600] = ;
static unsigned char snd_opl4_volume_table[128] = ;
void snd_opl4_synth_reset(struct snd_opl4 *opl4)
void snd_opl4_synth_shutdown(struct snd_opl4 *opl4)
static void snd_opl4_do_for_note(struct snd_opl4 *opl4, int note, struct snd_midi_channel *chan,
void (*func)(struct snd_opl4 *opl4, struct opl4_voice *voice))
static void snd_opl4_do_for_channel(struct snd_opl4 *opl4,
struct snd_midi_channel *chan,
void (*func)(struct snd_opl4 *opl4, struct opl4_voice *voice))
static void snd_opl4_do_for_all(struct snd_opl4 *opl4,
void (*func)(struct snd_opl4 *opl4, struct opl4_voice *voice))
static void snd_opl4_update_volume(struct snd_opl4 *opl4, struct opl4_voice *voice)
static void snd_opl4_update_pan(struct snd_opl4 *opl4, struct opl4_voice *voice)
static void snd_opl4_update_vibrato_depth(struct snd_opl4 *opl4,
struct opl4_voice *voice)
static void snd_opl4_update_pitch(struct snd_opl4 *opl4,
struct opl4_voice *voice)
static void snd_opl4_update_tone_parameters(struct snd_opl4 *opl4,
struct opl4_voice *voice)
static struct opl4_voice *snd_opl4_get_voice(struct snd_opl4 *opl4)
static void snd_opl4_wait_for_wave_headers(struct snd_opl4 *opl4)
void snd_opl4_note_on(void *private_data, int note, int vel, struct snd_midi_channel *chan)
static void snd_opl4_voice_off(struct snd_opl4 *opl4, struct opl4_voice *voice)
void snd_opl4_note_off(void *private_data, int note, int vel, struct snd_midi_channel *chan)
static void snd_opl4_terminate_voice(struct snd_opl4 *opl4, struct opl4_voice *voice)
void snd_opl4_terminate_note(void *private_data, int note, struct snd_midi_channel *chan)
void snd_opl4_control(void *private_data, int type, struct snd_midi_channel *chan)
void snd_opl4_sysex(void *private_data, unsigned char *buf, int len,
int parsed, struct snd_midi_channel_set *chset)
