#define DEB(what)
extern int      pas_translate_code;
extern char     pas_model;
extern int     *pas_osp;
extern int      pas_audiodev;
static int      rec_devices = (SOUND_MASK_MIC);
static int      mode_control;
#define POSSIBLE_RECORDING_DEVICES	(SOUND_MASK_SYNTH | SOUND_MASK_SPEAKER | SOUND_MASK_LINE | SOUND_MASK_MIC | \
SOUND_MASK_CD | SOUND_MASK_ALTPCM)
#define SUPPORTED_MIXER_DEVICES		(SOUND_MASK_SYNTH | SOUND_MASK_PCM | SOUND_MASK_SPEAKER | SOUND_MASK_LINE | SOUND_MASK_MIC | \
SOUND_MASK_CD | SOUND_MASK_ALTPCM | SOUND_MASK_IMIX | \
SOUND_MASK_VOLUME | SOUND_MASK_BASS | SOUND_MASK_TREBLE | SOUND_MASK_RECLEV)
static int     *levels;
static int      default_levels[32] =
;
void
mix_write(unsigned char data, int ioaddr)
static int
mixer_output(int right_vol, int left_vol, int div, int bits,
int mixer)
static void
set_mode(int new_mode)
static int
pas_mixer_set(int whichDev, unsigned int level)
static void
pas_mixer_reset(void)
static int pas_mixer_ioctl(int dev, unsigned int cmd, void __user *arg)
static struct mixer_operations pas_mixer_operations =
;
int __init
pas_init_mixer(void)
