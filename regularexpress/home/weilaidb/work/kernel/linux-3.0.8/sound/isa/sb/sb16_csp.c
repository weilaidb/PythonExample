MODULE_AUTHOR("Uros Bizjak <uros@kss-loka.si>");
MODULE_DESCRIPTION("ALSA driver for SB16 Creative Signal Processor");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("sb16/mulaw_main.csp");
MODULE_FIRMWARE("sb16/alaw_main.csp");
MODULE_FIRMWARE("sb16/ima_adpcm_init.csp");
MODULE_FIRMWARE("sb16/ima_adpcm_playback.csp");
MODULE_FIRMWARE("sb16/ima_adpcm_capture.csp");
#define CSP_HDR_VALUE(a,b,c,d)	((a) | ((b)<<8) | ((c)<<16) | ((d)<<24))
#define CSP_HDR_VALUE(a,b,c,d)	((d) | ((c)<<8) | ((b)<<16) | ((a)<<24))
#define RIFF_HEADER	CSP_HDR_VALUE('R', 'I', 'F', 'F')
#define CSP__HEADER	CSP_HDR_VALUE('C', 'S', 'P', ' ')
#define LIST_HEADER	CSP_HDR_VALUE('L', 'I', 'S', 'T')
#define FUNC_HEADER	CSP_HDR_VALUE('f', 'u', 'n', 'c')
#define CODE_HEADER	CSP_HDR_VALUE('c', 'o', 'd', 'e')
#define INIT_HEADER	CSP_HDR_VALUE('i', 'n', 'i', 't')
#define MAIN_HEADER	CSP_HDR_VALUE('m', 'a', 'i', 'n')
struct riff_header ;
struct desc_header ;
static void snd_sb_csp_free(struct snd_hwdep *hw);
static int snd_sb_csp_open(struct snd_hwdep * hw, struct file *file);
static int snd_sb_csp_ioctl(struct snd_hwdep * hw, struct file *file, unsigned int cmd, unsigned long arg);
static int snd_sb_csp_release(struct snd_hwdep * hw, struct file *file);
static int csp_detect(struct snd_sb *chip, int *version);
static int set_codec_parameter(struct snd_sb *chip, unsigned char par, unsigned char val);
static int set_register(struct snd_sb *chip, unsigned char reg, unsigned char val);
static int read_register(struct snd_sb *chip, unsigned char reg);
static int set_mode_register(struct snd_sb *chip, unsigned char mode);
static int get_version(struct snd_sb *chip);
static int snd_sb_csp_riff_load(struct snd_sb_csp * p,
struct snd_sb_csp_microcode __user * code);
static int snd_sb_csp_unload(struct snd_sb_csp * p);
static int snd_sb_csp_load_user(struct snd_sb_csp * p, const unsigned char __user *buf, int size, int load_flags);
static int snd_sb_csp_autoload(struct snd_sb_csp * p, int pcm_sfmt, int play_rec_mode);
static int snd_sb_csp_check_version(struct snd_sb_csp * p);
static int snd_sb_csp_use(struct snd_sb_csp * p);
static int snd_sb_csp_unuse(struct snd_sb_csp * p);
static int snd_sb_csp_start(struct snd_sb_csp * p, int sample_width, int channels);
static int snd_sb_csp_stop(struct snd_sb_csp * p);
static int snd_sb_csp_pause(struct snd_sb_csp * p);
static int snd_sb_csp_restart(struct snd_sb_csp * p);
static int snd_sb_qsound_build(struct snd_sb_csp * p);
static void snd_sb_qsound_destroy(struct snd_sb_csp * p);
static int snd_sb_csp_qsound_transfer(struct snd_sb_csp * p);
static int init_proc_entry(struct snd_sb_csp * p, int device);
static void info_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer);
int snd_sb_csp_new(struct snd_sb *chip, int device, struct snd_hwdep ** rhwdep)
static void snd_sb_csp_free(struct snd_hwdep *hwdep)
static int snd_sb_csp_open(struct snd_hwdep * hw, struct file *file)
static int snd_sb_csp_ioctl(struct snd_hwdep * hw, struct file *file, unsigned int cmd, unsigned long arg)
static int snd_sb_csp_release(struct snd_hwdep * hw, struct file *file)
static int snd_sb_csp_use(struct snd_sb_csp * p)
static int snd_sb_csp_unuse(struct snd_sb_csp * p)
static int snd_sb_csp_riff_load(struct snd_sb_csp * p,
struct snd_sb_csp_microcode __user * mcode)
static int snd_sb_csp_unload(struct snd_sb_csp * p)
static inline int command_seq(struct snd_sb *chip, const unsigned char *seq, int size)
static int set_codec_parameter(struct snd_sb *chip, unsigned char par, unsigned char val)
static int set_register(struct snd_sb *chip, unsigned char reg, unsigned char val)
static int read_register(struct snd_sb *chip, unsigned char reg)
static int set_mode_register(struct snd_sb *chip, unsigned char mode)
static int csp_detect(struct snd_sb *chip, int *version)
static int get_version(struct snd_sb *chip)
static int snd_sb_csp_check_version(struct snd_sb_csp * p)
static int snd_sb_csp_load(struct snd_sb_csp * p, const unsigned char *buf, int size, int load_flags)
static int snd_sb_csp_load_user(struct snd_sb_csp * p, const unsigned char __user *buf, int size, int load_flags)
static int snd_sb_csp_firmware_load(struct snd_sb_csp *p, int index, int flags)
static int snd_sb_csp_autoload(struct snd_sb_csp * p, int pcm_sfmt, int play_rec_mode)
static int snd_sb_csp_start(struct snd_sb_csp * p, int sample_width, int channels)
static int snd_sb_csp_stop(struct snd_sb_csp * p)
static int snd_sb_csp_pause(struct snd_sb_csp * p)
static int snd_sb_csp_restart(struct snd_sb_csp * p)
#define snd_sb_qsound_switch_info	snd_ctl_boolean_mono_info
static int snd_sb_qsound_switch_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sb_qsound_switch_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sb_qsound_space_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_sb_qsound_space_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_sb_qsound_space_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_sb_qsound_switch = ;
static struct snd_kcontrol_new snd_sb_qsound_space = ;
static int snd_sb_qsound_build(struct snd_sb_csp * p)
static void snd_sb_qsound_destroy(struct snd_sb_csp * p)
static int snd_sb_csp_qsound_transfer(struct snd_sb_csp * p)
static int init_proc_entry(struct snd_sb_csp * p, int device)
static void info_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
EXPORT_SYMBOL(snd_sb_csp_new);
static int __init alsa_sb_csp_init(void)
static void __exit alsa_sb_csp_exit(void)
module_init(alsa_sb_csp_init)
module_exit(alsa_sb_csp_exit)
