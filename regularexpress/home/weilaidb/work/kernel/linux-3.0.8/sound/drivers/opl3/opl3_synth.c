#if defined(CONFIG_SND_SEQUENCER) || defined(CONFIG_SND_SEQUENCER_MODULE)
#define OPL3_SUPPORT_SYNTH
char snd_opl3_regmap[MAX_OPL2_VOICES][4] =
;
EXPORT_SYMBOL(snd_opl3_regmap);
static int snd_opl3_play_note(struct snd_opl3 * opl3, struct snd_dm_fm_note * note);
static int snd_opl3_set_voice(struct snd_opl3 * opl3, struct snd_dm_fm_voice * voice);
static int snd_opl3_set_params(struct snd_opl3 * opl3, struct snd_dm_fm_params * params);
static int snd_opl3_set_mode(struct snd_opl3 * opl3, int mode);
static int snd_opl3_set_connection(struct snd_opl3 * opl3, int connection);
int snd_opl3_open(struct snd_hwdep * hw, struct file *file)
int snd_opl3_ioctl(struct snd_hwdep * hw, struct file *file,
unsigned int cmd, unsigned long arg)
int snd_opl3_release(struct snd_hwdep * hw, struct file *file)
long snd_opl3_write(struct snd_hwdep *hw, const char __user *buf, long count,
loff_t *offset)
#define AM_VIB		0
#define KSL_LEVEL	2
#define ATTACK_DECAY	4
#define SUSTAIN_RELEASE	6
#define WAVE_SELECT	8
#define CONNECTION	10
#define OFFSET_4OP	11
int snd_opl3_load_patch(struct snd_opl3 *opl3,
int prog, int bank, int type,
const char *name,
const unsigned char *ext,
const unsigned char *data)
EXPORT_SYMBOL(snd_opl3_load_patch);
struct fm_patch *snd_opl3_find_patch(struct snd_opl3 *opl3, int prog, int bank,
int create_patch)
EXPORT_SYMBOL(snd_opl3_find_patch);
void snd_opl3_clear_patches(struct snd_opl3 *opl3)
void snd_opl3_reset(struct snd_opl3 * opl3)
EXPORT_SYMBOL(snd_opl3_reset);
static int snd_opl3_play_note(struct snd_opl3 * opl3, struct snd_dm_fm_note * note)
static int snd_opl3_set_voice(struct snd_opl3 * opl3, struct snd_dm_fm_voice * voice)
static int snd_opl3_set_params(struct snd_opl3 * opl3, struct snd_dm_fm_params * params)
static int snd_opl3_set_mode(struct snd_opl3 * opl3, int mode)
static int snd_opl3_set_connection(struct snd_opl3 * opl3, int connection)
