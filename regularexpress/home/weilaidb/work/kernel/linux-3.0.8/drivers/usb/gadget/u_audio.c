#define FILE_PCM_PLAYBACK	"/dev/snd/pcmC0D0p"
#define FILE_PCM_CAPTURE	"/dev/snd/pcmC0D0c"
#define FILE_CONTROL		"/dev/snd/controlC0"
static char *fn_play = FILE_PCM_PLAYBACK;
module_param(fn_play, charp, S_IRUGO);
MODULE_PARM_DESC(fn_play, "Playback PCM device file name");
static char *fn_cap = FILE_PCM_CAPTURE;
module_param(fn_cap, charp, S_IRUGO);
MODULE_PARM_DESC(fn_cap, "Capture PCM device file name");
static char *fn_cntl = FILE_CONTROL;
module_param(fn_cntl, charp, S_IRUGO);
MODULE_PARM_DESC(fn_cntl, "Control device file name");
static int snd_interval_refine_set(struct snd_interval *i, unsigned int val)
static int _snd_pcm_hw_param_set(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int val,
int dir)
static int playback_default_hw_params(struct gaudio_snd_dev *snd)
static size_t u_audio_playback(struct gaudio *card, void *buf, size_t count)
static int u_audio_get_playback_channels(struct gaudio *card)
static int u_audio_get_playback_rate(struct gaudio *card)
static int gaudio_open_snd_dev(struct gaudio *card)
static int gaudio_close_snd_dev(struct gaudio *gau)
static struct gaudio *the_card;
int __init gaudio_setup(struct gaudio *card)
void gaudio_cleanup(void)
