#define MODE1_REC_DEVICES		(SOUND_MASK_LINE3 | SOUND_MASK_MIC | \
SOUND_MASK_LINE1 | SOUND_MASK_IMIX)
#define SPRO_REC_DEVICES		(SOUND_MASK_LINE | SOUND_MASK_MIC | \
SOUND_MASK_CD | SOUND_MASK_LINE1)
#define MODE1_MIXER_DEVICES		(SOUND_MASK_LINE1 | SOUND_MASK_MIC | \
SOUND_MASK_LINE2 | \
SOUND_MASK_IGAIN | \
SOUND_MASK_PCM | SOUND_MASK_IMIX)
#define MODE2_MIXER_DEVICES		(SOUND_MASK_LINE1 | SOUND_MASK_LINE2 | \
SOUND_MASK_MIC | \
SOUND_MASK_LINE3 | SOUND_MASK_SPEAKER | \
SOUND_MASK_IGAIN | \
SOUND_MASK_PCM | SOUND_MASK_IMIX)
#define MODE3_MIXER_DEVICES		(MODE2_MIXER_DEVICES | SOUND_MASK_VOLUME)
#define C930_MIXER_DEVICES	(SOUND_MASK_LINE1 | SOUND_MASK_LINE2 | \
SOUND_MASK_MIC | SOUND_MASK_VOLUME | \
SOUND_MASK_LINE3 | \
SOUND_MASK_IGAIN | SOUND_MASK_PCM)
#define SPRO_MIXER_DEVICES	(SOUND_MASK_VOLUME | SOUND_MASK_PCM | \
SOUND_MASK_LINE | SOUND_MASK_SYNTH | \
SOUND_MASK_CD | SOUND_MASK_MIC | \
SOUND_MASK_SPEAKER | SOUND_MASK_LINE1 | \
SOUND_MASK_OGAIN)
struct mixer_def ;
static char mix_cvt[101] = ;
typedef struct mixer_def mixer_ent;
typedef mixer_ent mixer_ents[2];
#define MIX_ENT(name, reg_l, pola_l, pos_l, len_l, reg_r, pola_r, pos_r, len_r, mute_bit)	\
[name] =
#define MIX_ENT2(name, reg_l, pola_l, pos_l, len_l, mute_reg_l, mute_pola_l, mute_pos_l, \
rec_reg_l, rec_pola_l, rec_pos_l,					 \
reg_r, pola_r, pos_r, len_r, mute_reg_r, mute_pola_r, mute_pos_r,	 \
rec_reg_r, rec_pola_r, rec_pos_r)					 \
[name] =
static mixer_ents ad1848_mix_devices[32] = ;
static mixer_ents iwave_mix_devices[32] = ;
static mixer_ents cs42xb_mix_devices[32] = ;
static mixer_ents c930_mix_devices[32] = ;
static mixer_ents spro_mix_devices[32] = ;
static int default_mixer_levels[32] =
;
#define LEFT_CHN	0
#define RIGHT_CHN	1
#define	AUDIO_SPEAKER		0x01
#define	AUDIO_HEADPHONE		0x02
#define	AUDIO_LINE_OUT		0x04
