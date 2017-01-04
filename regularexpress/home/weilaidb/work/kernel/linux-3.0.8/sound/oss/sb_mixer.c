#define __SB_MIXER_C__
#define SBPRO_RECORDING_DEVICES	(SOUND_MASK_LINE | SOUND_MASK_MIC | SOUND_MASK_CD)
#define SGNXPRO_RECORDING_DEVICES SBPRO_RECORDING_DEVICES
#define SBPRO_MIXER_DEVICES		(SOUND_MASK_SYNTH | SOUND_MASK_PCM | SOUND_MASK_LINE | SOUND_MASK_MIC | \
SOUND_MASK_CD | SOUND_MASK_VOLUME)
#define SGNXPRO_MIXER_DEVICES	(SBPRO_MIXER_DEVICES|SOUND_MASK_BASS| \
SOUND_MASK_TREBLE|SOUND_MASK_SPEAKER )
#define SB16_RECORDING_DEVICES		(SOUND_MASK_SYNTH | SOUND_MASK_LINE | SOUND_MASK_MIC | \
SOUND_MASK_CD)
#define SB16_OUTFILTER_DEVICES		(SOUND_MASK_LINE | SOUND_MASK_MIC | \
SOUND_MASK_CD)
#define SB16_MIXER_DEVICES		(SOUND_MASK_SYNTH | SOUND_MASK_PCM | SOUND_MASK_SPEAKER | SOUND_MASK_LINE | SOUND_MASK_MIC | \
SOUND_MASK_CD | \
SOUND_MASK_IGAIN | SOUND_MASK_OGAIN | \
SOUND_MASK_VOLUME | SOUND_MASK_BASS | SOUND_MASK_TREBLE | \
SOUND_MASK_IMIX)
#define ALS007_MIXER_DEVICES	(SOUND_MASK_SYNTH | SOUND_MASK_LINE | \
SOUND_MASK_PCM | SOUND_MASK_MIC | \
SOUND_MASK_CD | \
SOUND_MASK_VOLUME)
static mixer_tab sbpro_mix = ;
static mixer_tab sb16_mix = ;
static mixer_tab als007_mix =
;
static int smg_default_levels[32] =
;
static int sb_default_levels[32] =
;
static unsigned char sb16_recmasks_L[SOUND_MIXER_NRDEVICES] =
;
static unsigned char sb16_recmasks_R[SOUND_MIXER_NRDEVICES] =
;
static char     smw_mix_regs[] =
;
static int      sbmixnum = 1;
static void     sb_mixer_reset(sb_devc * devc);
void sb_mixer_set_stereo(sb_devc * devc, int mode)
static int detect_mixer(sb_devc * devc)
static void change_bits(sb_devc * devc, unsigned char *regval, int dev, int chn, int newval)
static int sb_mixer_get(sb_devc * devc, int dev)
void smw_mixer_init(sb_devc * devc)
int sb_common_mixer_set(sb_devc * devc, int dev, int left, int right)
static int smw_mixer_set(sb_devc * devc, int dev, int left, int right)
static int sb_mixer_set(sb_devc * devc, int dev, int value)
static void set_recsrc(sb_devc * devc, int src)
static int set_recmask(sb_devc * devc, int mask)
static int set_outmask(sb_devc * devc, int mask)
static int sb_mixer_ioctl(int dev, unsigned int cmd, void __user *arg)
static struct mixer_operations sb_mixer_operations =
;
static struct mixer_operations als007_mixer_operations =
;
static void sb_mixer_reset(sb_devc * devc)
int sb_mixer_init(sb_devc * devc, struct module *owner)
void sb_mixer_unload(sb_devc *devc)
