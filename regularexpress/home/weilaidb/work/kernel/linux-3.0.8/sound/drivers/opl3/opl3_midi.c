#undef DEBUG_ALLOC
#undef DEBUG_MIDI
extern char snd_opl3_regmap[MAX_OPL2_VOICES][4];
extern int use_internal_drums;
static void snd_opl3_note_off_unsafe(void *p, int note, int vel,
struct snd_midi_channel *chan);
static char opl3_volume_table[128] =
;
void snd_opl3_calc_volume(unsigned char *volbyte, int vel,
struct snd_midi_channel *chan)
static short opl3_note_table[16] =
;
static void snd_opl3_calc_pitch(unsigned char *fnum, unsigned char *blocknum,
int note, struct snd_midi_channel *chan)
static void debug_alloc(struct snd_opl3 *opl3, char *s, int voice)
static int opl3_get_voice(struct snd_opl3 *opl3, int instr_4op,
struct snd_midi_channel *chan)
void snd_opl3_timer_func(unsigned long data)
static void snd_opl3_start_timer(struct snd_opl3 *opl3)
static int snd_opl3_oss_map[MAX_OPL3_VOICES] = ;
void snd_opl3_note_on(void *p, int note, int vel, struct snd_midi_channel *chan)
static void snd_opl3_kill_voice(struct snd_opl3 *opl3, int voice)
static void snd_opl3_note_off_unsafe(void *p, int note, int vel,
struct snd_midi_channel *chan)
void snd_opl3_note_off(void *p, int note, int vel,
struct snd_midi_channel *chan)
void snd_opl3_key_press(void *p, int note, int vel, struct snd_midi_channel *chan)
void snd_opl3_terminate_note(void *p, int note, struct snd_midi_channel *chan)
static void snd_opl3_update_pitch(struct snd_opl3 *opl3, int voice)
static void snd_opl3_pitch_ctrl(struct snd_opl3 *opl3, struct snd_midi_channel *chan)
void snd_opl3_control(void *p, int type, struct snd_midi_channel *chan)
void snd_opl3_nrpn(void *p, struct snd_midi_channel *chan,
struct snd_midi_channel_set *chset)
void snd_opl3_sysex(void *p, unsigned char *buf, int len,
int parsed, struct snd_midi_channel_set *chset)
