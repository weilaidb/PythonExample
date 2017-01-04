#define __OPL4_LOCAL_H
#define OPL4_REG_TEST0			0x00
#define OPL4_REG_TEST1			0x01
#define OPL4_REG_MEMORY_CONFIGURATION	0x02
#define   OPL4_MODE_BIT			0x01
#define   OPL4_MTYPE_BIT		0x02
#define   OPL4_TONE_HEADER_MASK		0x1c
#define   OPL4_DEVICE_ID_MASK		0xe0
#define OPL4_REG_MEMORY_ADDRESS_HIGH	0x03
#define OPL4_REG_MEMORY_ADDRESS_MID	0x04
#define OPL4_REG_MEMORY_ADDRESS_LOW	0x05
#define OPL4_REG_MEMORY_DATA		0x06
#define OPL4_REG_TONE_NUMBER		0x08
#define OPL4_REG_F_NUMBER		0x20
#define   OPL4_TONE_NUMBER_BIT8		0x01
#define   OPL4_F_NUMBER_LOW_MASK	0xfe
#define OPL4_REG_OCTAVE			0x38
#define   OPL4_F_NUMBER_HIGH_MASK	0x07
#define   OPL4_BLOCK_MASK		0xf0
#define   OPL4_PSEUDO_REVERB_BIT	0x08
#define OPL4_REG_LEVEL			0x50
#define   OPL4_TOTAL_LEVEL_MASK		0xfe
#define   OPL4_LEVEL_DIRECT_BIT		0x01
#define OPL4_REG_MISC			0x68
#define   OPL4_KEY_ON_BIT		0x80
#define   OPL4_DAMP_BIT			0x40
#define   OPL4_LFO_RESET_BIT		0x20
#define   OPL4_OUTPUT_CHANNEL_BIT	0x10
#define   OPL4_PAN_POT_MASK		0x0f
#define OPL4_REG_LFO_VIBRATO		0x80
#define   OPL4_LFO_FREQUENCY_MASK	0x38
#define   OPL4_VIBRATO_DEPTH_MASK	0x07
#define   OPL4_CHORUS_SEND_MASK		0xc0
#define OPL4_REG_ATTACK_DECAY1		0x98
#define   OPL4_ATTACK_RATE_MASK		0xf0
#define   OPL4_DECAY1_RATE_MASK		0x0f
#define OPL4_REG_LEVEL_DECAY2		0xb0
#define   OPL4_DECAY_LEVEL_MASK		0xf0
#define   OPL4_DECAY2_RATE_MASK		0x0f
#define OPL4_REG_RELEASE_CORRECTION	0xc8
#define   OPL4_RELEASE_RATE_MASK	0x0f
#define   OPL4_RATE_INTERPOLATION_MASK	0xf0
#define OPL4_REG_TREMOLO		0xe0
#define   OPL4_TREMOLO_DEPTH_MASK	0x07
#define   OPL4_REVERB_SEND_MASK		0xe0
#define OPL4_REG_MIX_CONTROL_FM		0xf8
#define OPL4_REG_MIX_CONTROL_PCM	0xf9
#define   OPL4_MIX_LEFT_MASK		0x07
#define   OPL4_MIX_RIGHT_MASK		0x38
#define OPL4_REG_ATC			0xfa
#define   OPL4_ATC_BIT			0x01
#define OPL4_STATUS_BUSY		0x01
#define OPL4_STATUS_LOAD		0x02
#define OPL4_MAX_VOICES 24
#define SNDRV_SEQ_DEV_ID_OPL4 "opl4-synth"
struct opl4_sound ;
struct opl4_region ;
struct opl4_region_ptr ;
struct opl4_voice ;
struct snd_opl4 ;
void snd_opl4_write(struct snd_opl4 *opl4, u8 reg, u8 value);
u8 snd_opl4_read(struct snd_opl4 *opl4, u8 reg);
void snd_opl4_read_memory(struct snd_opl4 *opl4, char *buf, int offset, int size);
void snd_opl4_write_memory(struct snd_opl4 *opl4, const char *buf, int offset, int size);
int snd_opl4_create_mixer(struct snd_opl4 *opl4);
int snd_opl4_create_proc(struct snd_opl4 *opl4);
void snd_opl4_free_proc(struct snd_opl4 *opl4);
extern int volume_boost;
void snd_opl4_synth_reset(struct snd_opl4 *opl4);
void snd_opl4_synth_shutdown(struct snd_opl4 *opl4);
void snd_opl4_note_on(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_opl4_note_off(void *p, int note, int vel, struct snd_midi_channel *chan);
void snd_opl4_terminate_note(void *p, int note, struct snd_midi_channel *chan);
void snd_opl4_control(void *p, int type, struct snd_midi_channel *chan);
void snd_opl4_sysex(void *p, unsigned char *buf, int len, int parsed, struct snd_midi_channel_set *chset);
int snd_yrw801_detect(struct snd_opl4 *opl4);
extern const struct opl4_region_ptr snd_yrw801_regions[];
