#define OSS_ALSAEMULVER		_SIOR ('M', 249, int)
static int dsp_map[SNDRV_CARDS];
static int adsp_map[SNDRV_CARDS] = ;
static int nonblock_open = 1;
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, Abramo Bagnara <abramo@alsa-project.org>");
MODULE_DESCRIPTION("PCM OSS emulation for ALSA.");
MODULE_LICENSE("GPL");
module_param_array(dsp_map, int, NULL, 0444);
MODULE_PARM_DESC(dsp_map, "PCM device number assigned to 1st OSS device.");
module_param_array(adsp_map, int, NULL, 0444);
MODULE_PARM_DESC(adsp_map, "PCM device number assigned to 2nd OSS device.");
module_param(nonblock_open, bool, 0644);
MODULE_PARM_DESC(nonblock_open, "Don't block opening busy PCM devices.");
MODULE_ALIAS_SNDRV_MINOR(SNDRV_MINOR_OSS_PCM);
MODULE_ALIAS_SNDRV_MINOR(SNDRV_MINOR_OSS_PCM1);
static int snd_pcm_oss_get_rate(struct snd_pcm_oss_file *pcm_oss_file);
static int snd_pcm_oss_get_channels(struct snd_pcm_oss_file *pcm_oss_file);
static int snd_pcm_oss_get_format(struct snd_pcm_oss_file *pcm_oss_file);
static inline mm_segment_t snd_enter_user(void)
static inline void snd_leave_user(mm_segment_t fs)
static int snd_interval_refine_min(struct snd_interval *i, unsigned int min, int openmin)
static int snd_interval_refine_max(struct snd_interval *i, unsigned int max, int openmax)
static int snd_interval_refine_set(struct snd_interval *i, unsigned int val)
static unsigned int
snd_pcm_hw_param_value_min(const struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir)
static unsigned int
snd_pcm_hw_param_value_max(const struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir)
static int _snd_pcm_hw_param_mask(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var,
const struct snd_mask *val)
static int snd_pcm_hw_param_mask(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var,
const struct snd_mask *val)
static int _snd_pcm_hw_param_min(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int val,
int dir)
static int snd_pcm_hw_param_min(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int val,
int *dir)
static int _snd_pcm_hw_param_max(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int val,
int dir)
static int snd_pcm_hw_param_max(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int val,
int *dir)
static int boundary_sub(int a, int adir,
int b, int bdir,
int *c, int *cdir)
static int boundary_lt(unsigned int a, int adir,
unsigned int b, int bdir)
static int boundary_nearer(int min, int mindir,
int best, int bestdir,
int max, int maxdir)
static int snd_pcm_hw_param_near(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int best,
int *dir)
static int _snd_pcm_hw_param_set(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int val,
int dir)
static int snd_pcm_hw_param_set(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, unsigned int val,
int dir)
static int _snd_pcm_hw_param_setinteger(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
static int snd_pcm_oss_plugin_clear(struct snd_pcm_substream *substream)
static int snd_pcm_plugin_insert(struct snd_pcm_plugin *plugin)
int snd_pcm_plugin_append(struct snd_pcm_plugin *plugin)
static long snd_pcm_oss_bytes(struct snd_pcm_substream *substream, long frames)
static long snd_pcm_alsa_frames(struct snd_pcm_substream *substream, long bytes)
static inline
snd_pcm_uframes_t get_hw_ptr_period(struct snd_pcm_runtime *runtime)
#define AFMT_S32_LE      0x00001000
#define AFMT_S32_BE      0x00002000
#define AFMT_S24_LE      0x00008000
#define AFMT_S24_BE      0x00010000
#define AFMT_S24_PACKED  0x00040000
#define AFMT_FLOAT       0x00004000
#define AFMT_SPDIF_RAW   0x00020000
#define AFMT_AC3         0x00000400
#define AFMT_VORBIS      0x00000800
static snd_pcm_format_t snd_pcm_oss_format_from(int format)
static int snd_pcm_oss_format_to(snd_pcm_format_t format)
static int snd_pcm_oss_period_size(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *oss_params,
struct snd_pcm_hw_params *slave_params)
static int choose_rate(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params, unsigned int best_rate)
static int snd_pcm_oss_change_params(struct snd_pcm_substream *substream)
static int snd_pcm_oss_get_active_substream(struct snd_pcm_oss_file *pcm_oss_file, struct snd_pcm_substream **r_substream)
static int snd_pcm_oss_prepare(struct snd_pcm_substream *substream)
static int snd_pcm_oss_make_ready(struct snd_pcm_substream *substream)
static int snd_pcm_oss_capture_position_fixup(struct snd_pcm_substream *substream, snd_pcm_sframes_t *delay)
snd_pcm_sframes_t snd_pcm_oss_write3(struct snd_pcm_substream *substream, const char *ptr, snd_pcm_uframes_t frames, int in_kernel)
snd_pcm_sframes_t snd_pcm_oss_read3(struct snd_pcm_substream *substream, char *ptr, snd_pcm_uframes_t frames, int in_kernel)
snd_pcm_sframes_t snd_pcm_oss_writev3(struct snd_pcm_substream *substream, void **bufs, snd_pcm_uframes_t frames, int in_kernel)
snd_pcm_sframes_t snd_pcm_oss_readv3(struct snd_pcm_substream *substream, void **bufs, snd_pcm_uframes_t frames, int in_kernel)
static ssize_t snd_pcm_oss_write2(struct snd_pcm_substream *substream, const char *buf, size_t bytes, int in_kernel)
static ssize_t snd_pcm_oss_write1(struct snd_pcm_substream *substream, const char __user *buf, size_t bytes)
static ssize_t snd_pcm_oss_read2(struct snd_pcm_substream *substream, char *buf, size_t bytes, int in_kernel)
static ssize_t snd_pcm_oss_read1(struct snd_pcm_substream *substream, char __user *buf, size_t bytes)
static int snd_pcm_oss_reset(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_post(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_sync1(struct snd_pcm_substream *substream, size_t size)
static int snd_pcm_oss_sync(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_set_rate(struct snd_pcm_oss_file *pcm_oss_file, int rate)
static int snd_pcm_oss_get_rate(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_set_channels(struct snd_pcm_oss_file *pcm_oss_file, unsigned int channels)
static int snd_pcm_oss_get_channels(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_get_block_size(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_get_formats(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_set_format(struct snd_pcm_oss_file *pcm_oss_file, int format)
static int snd_pcm_oss_get_format(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_set_subdivide1(struct snd_pcm_substream *substream, int subdivide)
static int snd_pcm_oss_set_subdivide(struct snd_pcm_oss_file *pcm_oss_file, int subdivide)
static int snd_pcm_oss_set_fragment1(struct snd_pcm_substream *substream, unsigned int val)
static int snd_pcm_oss_set_fragment(struct snd_pcm_oss_file *pcm_oss_file, unsigned int val)
static int snd_pcm_oss_nonblock(struct file * file)
static int snd_pcm_oss_get_caps1(struct snd_pcm_substream *substream, int res)
static int snd_pcm_oss_get_caps(struct snd_pcm_oss_file *pcm_oss_file)
static void snd_pcm_oss_simulate_fill(struct snd_pcm_substream *substream,
snd_pcm_uframes_t hw_ptr)
static int snd_pcm_oss_set_trigger(struct snd_pcm_oss_file *pcm_oss_file, int trigger)
static int snd_pcm_oss_get_trigger(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_get_odelay(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_get_ptr(struct snd_pcm_oss_file *pcm_oss_file, int stream, struct count_info __user * _info)
static int snd_pcm_oss_get_space(struct snd_pcm_oss_file *pcm_oss_file, int stream, struct audio_buf_info __user *_info)
static int snd_pcm_oss_get_mapbuf(struct snd_pcm_oss_file *pcm_oss_file, int stream, struct buffmem_desc __user * _info)
static const char *strip_task_path(const char *path)
static void snd_pcm_oss_look_for_setup(struct snd_pcm *pcm, int stream,
const char *task_name,
struct snd_pcm_oss_setup *rsetup)
static void snd_pcm_oss_release_substream(struct snd_pcm_substream *substream)
static void snd_pcm_oss_init_substream(struct snd_pcm_substream *substream,
struct snd_pcm_oss_setup *setup,
int minor)
static int snd_pcm_oss_release_file(struct snd_pcm_oss_file *pcm_oss_file)
static int snd_pcm_oss_open_file(struct file *file,
struct snd_pcm *pcm,
struct snd_pcm_oss_file **rpcm_oss_file,
int minor,
struct snd_pcm_oss_setup *setup)
static int snd_task_name(struct task_struct *task, char *name, size_t size)
static int snd_pcm_oss_open(struct inode *inode, struct file *file)
static int snd_pcm_oss_release(struct inode *inode, struct file *file)
static long snd_pcm_oss_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
#define snd_pcm_oss_ioctl_compat	snd_pcm_oss_ioctl
#define snd_pcm_oss_ioctl_compat	NULL
static ssize_t snd_pcm_oss_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t snd_pcm_oss_write(struct file *file, const char __user *buf, size_t count, loff_t *offset)
static int snd_pcm_oss_playback_ready(struct snd_pcm_substream *substream)
static int snd_pcm_oss_capture_ready(struct snd_pcm_substream *substream)
static unsigned int snd_pcm_oss_poll(struct file *file, poll_table * wait)
static int snd_pcm_oss_mmap(struct file *file, struct vm_area_struct *area)
static void snd_pcm_oss_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_oss_proc_free_setup_list(struct snd_pcm_str * pstr)
static void snd_pcm_oss_proc_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_oss_proc_init(struct snd_pcm *pcm)
static void snd_pcm_oss_proc_done(struct snd_pcm *pcm)
#define snd_pcm_oss_proc_init(pcm)
#define snd_pcm_oss_proc_done(pcm)
static const struct file_operations snd_pcm_oss_f_reg =
;
static void register_oss_dsp(struct snd_pcm *pcm, int index)
static int snd_pcm_oss_register_minor(struct snd_pcm *pcm)
static int snd_pcm_oss_disconnect_minor(struct snd_pcm *pcm)
static int snd_pcm_oss_unregister_minor(struct snd_pcm *pcm)
static struct snd_pcm_notify snd_pcm_oss_notify =
;
static int __init alsa_pcm_oss_init(void)
static void __exit alsa_pcm_oss_exit(void)
module_init(alsa_pcm_oss_init)
module_exit(alsa_pcm_oss_exit)
