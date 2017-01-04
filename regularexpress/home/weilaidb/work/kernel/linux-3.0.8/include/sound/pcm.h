#define __SOUND_PCM_H
#define snd_pcm_substream_chip(substream) ((substream)->private_data)
#define snd_pcm_chip(pcm) ((pcm)->private_data)
#if defined(CONFIG_SND_PCM_OSS) || defined(CONFIG_SND_PCM_OSS_MODULE)
struct snd_pcm_hardware ;
struct snd_pcm_substream;
struct snd_pcm_ops ;
#if defined(CONFIG_SND_DYNAMIC_MINORS)
#define SNDRV_PCM_DEVICES	(SNDRV_OS_MINORS-2)
#define SNDRV_PCM_DEVICES	8
#define SNDRV_PCM_IOCTL1_FALSE		((void *)0)
#define SNDRV_PCM_IOCTL1_TRUE		((void *)1)
#define SNDRV_PCM_IOCTL1_RESET		0
#define SNDRV_PCM_IOCTL1_INFO		1
#define SNDRV_PCM_IOCTL1_CHANNEL_INFO	2
#define SNDRV_PCM_IOCTL1_GSTATE		3
#define SNDRV_PCM_IOCTL1_FIFO_SIZE	4
#define SNDRV_PCM_TRIGGER_STOP		0
#define SNDRV_PCM_TRIGGER_START		1
#define SNDRV_PCM_TRIGGER_PAUSE_PUSH	3
#define SNDRV_PCM_TRIGGER_PAUSE_RELEASE	4
#define SNDRV_PCM_TRIGGER_SUSPEND	5
#define SNDRV_PCM_TRIGGER_RESUME	6
#define SNDRV_PCM_POS_XRUN		((snd_pcm_uframes_t)-1)
#define SNDRV_PCM_RATE_5512		(1<<0)
#define SNDRV_PCM_RATE_8000		(1<<1)
#define SNDRV_PCM_RATE_11025		(1<<2)
#define SNDRV_PCM_RATE_16000		(1<<3)
#define SNDRV_PCM_RATE_22050		(1<<4)
#define SNDRV_PCM_RATE_32000		(1<<5)
#define SNDRV_PCM_RATE_44100		(1<<6)
#define SNDRV_PCM_RATE_48000		(1<<7)
#define SNDRV_PCM_RATE_64000		(1<<8)
#define SNDRV_PCM_RATE_88200		(1<<9)
#define SNDRV_PCM_RATE_96000		(1<<10)
#define SNDRV_PCM_RATE_176400		(1<<11)
#define SNDRV_PCM_RATE_192000		(1<<12)
#define SNDRV_PCM_RATE_CONTINUOUS	(1<<30)
#define SNDRV_PCM_RATE_KNOT		(1<<31)
#define SNDRV_PCM_RATE_8000_44100	(SNDRV_PCM_RATE_8000|SNDRV_PCM_RATE_11025|\
SNDRV_PCM_RATE_16000|SNDRV_PCM_RATE_22050|\
SNDRV_PCM_RATE_32000|SNDRV_PCM_RATE_44100)
#define SNDRV_PCM_RATE_8000_48000	(SNDRV_PCM_RATE_8000_44100|SNDRV_PCM_RATE_48000)
#define SNDRV_PCM_RATE_8000_96000	(SNDRV_PCM_RATE_8000_48000|SNDRV_PCM_RATE_64000|\
SNDRV_PCM_RATE_88200|SNDRV_PCM_RATE_96000)
#define SNDRV_PCM_RATE_8000_192000	(SNDRV_PCM_RATE_8000_96000|SNDRV_PCM_RATE_176400|\
SNDRV_PCM_RATE_192000)
#define _SNDRV_PCM_FMTBIT(fmt)		(1ULL << (__force int)SNDRV_PCM_FORMAT_##fmt)
#define SNDRV_PCM_FMTBIT_S8		_SNDRV_PCM_FMTBIT(S8)
#define SNDRV_PCM_FMTBIT_U8		_SNDRV_PCM_FMTBIT(U8)
#define SNDRV_PCM_FMTBIT_S16_LE		_SNDRV_PCM_FMTBIT(S16_LE)
#define SNDRV_PCM_FMTBIT_S16_BE		_SNDRV_PCM_FMTBIT(S16_BE)
#define SNDRV_PCM_FMTBIT_U16_LE		_SNDRV_PCM_FMTBIT(U16_LE)
#define SNDRV_PCM_FMTBIT_U16_BE		_SNDRV_PCM_FMTBIT(U16_BE)
#define SNDRV_PCM_FMTBIT_S24_LE		_SNDRV_PCM_FMTBIT(S24_LE)
#define SNDRV_PCM_FMTBIT_S24_BE		_SNDRV_PCM_FMTBIT(S24_BE)
#define SNDRV_PCM_FMTBIT_U24_LE		_SNDRV_PCM_FMTBIT(U24_LE)
#define SNDRV_PCM_FMTBIT_U24_BE		_SNDRV_PCM_FMTBIT(U24_BE)
#define SNDRV_PCM_FMTBIT_S32_LE		_SNDRV_PCM_FMTBIT(S32_LE)
#define SNDRV_PCM_FMTBIT_S32_BE		_SNDRV_PCM_FMTBIT(S32_BE)
#define SNDRV_PCM_FMTBIT_U32_LE		_SNDRV_PCM_FMTBIT(U32_LE)
#define SNDRV_PCM_FMTBIT_U32_BE		_SNDRV_PCM_FMTBIT(U32_BE)
#define SNDRV_PCM_FMTBIT_FLOAT_LE	_SNDRV_PCM_FMTBIT(FLOAT_LE)
#define SNDRV_PCM_FMTBIT_FLOAT_BE	_SNDRV_PCM_FMTBIT(FLOAT_BE)
#define SNDRV_PCM_FMTBIT_FLOAT64_LE	_SNDRV_PCM_FMTBIT(FLOAT64_LE)
#define SNDRV_PCM_FMTBIT_FLOAT64_BE	_SNDRV_PCM_FMTBIT(FLOAT64_BE)
#define SNDRV_PCM_FMTBIT_IEC958_SUBFRAME_LE _SNDRV_PCM_FMTBIT(IEC958_SUBFRAME_LE)
#define SNDRV_PCM_FMTBIT_IEC958_SUBFRAME_BE _SNDRV_PCM_FMTBIT(IEC958_SUBFRAME_BE)
#define SNDRV_PCM_FMTBIT_MU_LAW		_SNDRV_PCM_FMTBIT(MU_LAW)
#define SNDRV_PCM_FMTBIT_A_LAW		_SNDRV_PCM_FMTBIT(A_LAW)
#define SNDRV_PCM_FMTBIT_IMA_ADPCM	_SNDRV_PCM_FMTBIT(IMA_ADPCM)
#define SNDRV_PCM_FMTBIT_MPEG		_SNDRV_PCM_FMTBIT(MPEG)
#define SNDRV_PCM_FMTBIT_GSM		_SNDRV_PCM_FMTBIT(GSM)
#define SNDRV_PCM_FMTBIT_SPECIAL	_SNDRV_PCM_FMTBIT(SPECIAL)
#define SNDRV_PCM_FMTBIT_S24_3LE	_SNDRV_PCM_FMTBIT(S24_3LE)
#define SNDRV_PCM_FMTBIT_U24_3LE	_SNDRV_PCM_FMTBIT(U24_3LE)
#define SNDRV_PCM_FMTBIT_S24_3BE	_SNDRV_PCM_FMTBIT(S24_3BE)
#define SNDRV_PCM_FMTBIT_U24_3BE	_SNDRV_PCM_FMTBIT(U24_3BE)
#define SNDRV_PCM_FMTBIT_S20_3LE	_SNDRV_PCM_FMTBIT(S20_3LE)
#define SNDRV_PCM_FMTBIT_U20_3LE	_SNDRV_PCM_FMTBIT(U20_3LE)
#define SNDRV_PCM_FMTBIT_S20_3BE	_SNDRV_PCM_FMTBIT(S20_3BE)
#define SNDRV_PCM_FMTBIT_U20_3BE	_SNDRV_PCM_FMTBIT(U20_3BE)
#define SNDRV_PCM_FMTBIT_S18_3LE	_SNDRV_PCM_FMTBIT(S18_3LE)
#define SNDRV_PCM_FMTBIT_U18_3LE	_SNDRV_PCM_FMTBIT(U18_3LE)
#define SNDRV_PCM_FMTBIT_S18_3BE	_SNDRV_PCM_FMTBIT(S18_3BE)
#define SNDRV_PCM_FMTBIT_U18_3BE	_SNDRV_PCM_FMTBIT(U18_3BE)
#define SNDRV_PCM_FMTBIT_G723_24	_SNDRV_PCM_FMTBIT(G723_24)
#define SNDRV_PCM_FMTBIT_G723_24_1B	_SNDRV_PCM_FMTBIT(G723_24_1B)
#define SNDRV_PCM_FMTBIT_G723_40	_SNDRV_PCM_FMTBIT(G723_40)
#define SNDRV_PCM_FMTBIT_G723_40_1B	_SNDRV_PCM_FMTBIT(G723_40_1B)
#define SNDRV_PCM_FMTBIT_S16		SNDRV_PCM_FMTBIT_S16_LE
#define SNDRV_PCM_FMTBIT_U16		SNDRV_PCM_FMTBIT_U16_LE
#define SNDRV_PCM_FMTBIT_S24		SNDRV_PCM_FMTBIT_S24_LE
#define SNDRV_PCM_FMTBIT_U24		SNDRV_PCM_FMTBIT_U24_LE
#define SNDRV_PCM_FMTBIT_S32		SNDRV_PCM_FMTBIT_S32_LE
#define SNDRV_PCM_FMTBIT_U32		SNDRV_PCM_FMTBIT_U32_LE
#define SNDRV_PCM_FMTBIT_FLOAT		SNDRV_PCM_FMTBIT_FLOAT_LE
#define SNDRV_PCM_FMTBIT_FLOAT64	SNDRV_PCM_FMTBIT_FLOAT64_LE
#define SNDRV_PCM_FMTBIT_IEC958_SUBFRAME SNDRV_PCM_FMTBIT_IEC958_SUBFRAME_LE
#define SNDRV_PCM_FMTBIT_S16		SNDRV_PCM_FMTBIT_S16_BE
#define SNDRV_PCM_FMTBIT_U16		SNDRV_PCM_FMTBIT_U16_BE
#define SNDRV_PCM_FMTBIT_S24		SNDRV_PCM_FMTBIT_S24_BE
#define SNDRV_PCM_FMTBIT_U24		SNDRV_PCM_FMTBIT_U24_BE
#define SNDRV_PCM_FMTBIT_S32		SNDRV_PCM_FMTBIT_S32_BE
#define SNDRV_PCM_FMTBIT_U32		SNDRV_PCM_FMTBIT_U32_BE
#define SNDRV_PCM_FMTBIT_FLOAT		SNDRV_PCM_FMTBIT_FLOAT_BE
#define SNDRV_PCM_FMTBIT_FLOAT64	SNDRV_PCM_FMTBIT_FLOAT64_BE
#define SNDRV_PCM_FMTBIT_IEC958_SUBFRAME SNDRV_PCM_FMTBIT_IEC958_SUBFRAME_BE
struct snd_pcm_file ;
struct snd_pcm_hw_rule;
typedef int (*snd_pcm_hw_rule_func_t)(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule);
struct snd_pcm_hw_rule ;
struct snd_pcm_hw_constraints ;
static inline struct snd_mask *constrs_mask(struct snd_pcm_hw_constraints *constrs,
snd_pcm_hw_param_t var)
static inline struct snd_interval *constrs_interval(struct snd_pcm_hw_constraints *constrs,
snd_pcm_hw_param_t var)
struct snd_ratnum ;
struct snd_ratden ;
struct snd_pcm_hw_constraint_ratnums ;
struct snd_pcm_hw_constraint_ratdens ;
struct snd_pcm_hw_constraint_list ;
struct snd_pcm_hwptr_log;
struct snd_pcm_runtime ;
struct snd_pcm_group ;
struct pid;
struct snd_pcm_substream ;
#define SUBSTREAM_BUSY(substream) ((substream)->ref_count > 0)
struct snd_pcm_str ;
struct snd_pcm ;
struct snd_pcm_notify ;
extern const struct file_operations snd_pcm_f_ops[2];
int snd_pcm_new(struct snd_card *card, const char *id, int device,
int playback_count, int capture_count,
struct snd_pcm **rpcm);
int snd_pcm_new_stream(struct snd_pcm *pcm, int stream, int substream_count);
int snd_pcm_notify(struct snd_pcm_notify *notify, int nfree);
extern rwlock_t snd_pcm_link_rwlock;
int snd_pcm_info(struct snd_pcm_substream *substream, struct snd_pcm_info *info);
int snd_pcm_info_user(struct snd_pcm_substream *substream,
struct snd_pcm_info __user *info);
int snd_pcm_status(struct snd_pcm_substream *substream,
struct snd_pcm_status *status);
int snd_pcm_start(struct snd_pcm_substream *substream);
int snd_pcm_stop(struct snd_pcm_substream *substream, snd_pcm_state_t status);
int snd_pcm_drain_done(struct snd_pcm_substream *substream);
int snd_pcm_suspend(struct snd_pcm_substream *substream);
int snd_pcm_suspend_all(struct snd_pcm *pcm);
int snd_pcm_kernel_ioctl(struct snd_pcm_substream *substream, unsigned int cmd, void *arg);
int snd_pcm_open_substream(struct snd_pcm *pcm, int stream, struct file *file,
struct snd_pcm_substream **rsubstream);
void snd_pcm_release_substream(struct snd_pcm_substream *substream);
int snd_pcm_attach_substream(struct snd_pcm *pcm, int stream, struct file *file,
struct snd_pcm_substream **rsubstream);
void snd_pcm_detach_substream(struct snd_pcm_substream *substream);
void snd_pcm_vma_notify_data(void *client, void *data);
int snd_pcm_mmap_data(struct snd_pcm_substream *substream, struct file *file, struct vm_area_struct *area);
static inline int snd_pcm_stream_linked(struct snd_pcm_substream *substream)
static inline void snd_pcm_stream_lock(struct snd_pcm_substream *substream)
static inline void snd_pcm_stream_unlock(struct snd_pcm_substream *substream)
static inline void snd_pcm_stream_lock_irq(struct snd_pcm_substream *substream)
static inline void snd_pcm_stream_unlock_irq(struct snd_pcm_substream *substream)
#define snd_pcm_stream_lock_irqsave(substream, flags) \
do  while (0)
#define snd_pcm_stream_unlock_irqrestore(substream, flags) \
do  while (0)
#define snd_pcm_group_for_each_entry(s, substream) \
list_for_each_entry(s, &substream->group->substreams, link_list)
static inline int snd_pcm_running(struct snd_pcm_substream *substream)
static inline ssize_t bytes_to_samples(struct snd_pcm_runtime *runtime, ssize_t size)
static inline snd_pcm_sframes_t bytes_to_frames(struct snd_pcm_runtime *runtime, ssize_t size)
static inline ssize_t samples_to_bytes(struct snd_pcm_runtime *runtime, ssize_t size)
static inline ssize_t frames_to_bytes(struct snd_pcm_runtime *runtime, snd_pcm_sframes_t size)
static inline int frame_aligned(struct snd_pcm_runtime *runtime, ssize_t bytes)
static inline size_t snd_pcm_lib_buffer_bytes(struct snd_pcm_substream *substream)
static inline size_t snd_pcm_lib_period_bytes(struct snd_pcm_substream *substream)
static inline snd_pcm_uframes_t snd_pcm_playback_avail(struct snd_pcm_runtime *runtime)
static inline snd_pcm_uframes_t snd_pcm_capture_avail(struct snd_pcm_runtime *runtime)
static inline snd_pcm_sframes_t snd_pcm_playback_hw_avail(struct snd_pcm_runtime *runtime)
static inline snd_pcm_sframes_t snd_pcm_capture_hw_avail(struct snd_pcm_runtime *runtime)
static inline int snd_pcm_playback_ready(struct snd_pcm_substream *substream)
static inline int snd_pcm_capture_ready(struct snd_pcm_substream *substream)
static inline int snd_pcm_playback_data(struct snd_pcm_substream *substream)
static inline int snd_pcm_playback_empty(struct snd_pcm_substream *substream)
static inline int snd_pcm_capture_empty(struct snd_pcm_substream *substream)
static inline void snd_pcm_trigger_done(struct snd_pcm_substream *substream,
struct snd_pcm_substream *master)
static inline int hw_is_mask(int var)
static inline int hw_is_interval(int var)
static inline struct snd_mask *hw_param_mask(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
static inline struct snd_interval *hw_param_interval(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
static inline const struct snd_mask *hw_param_mask_c(const struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
static inline const struct snd_interval *hw_param_interval_c(const struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
#define params_access(p) ((__force snd_pcm_access_t)snd_mask_min(hw_param_mask((p), SNDRV_PCM_HW_PARAM_ACCESS)))
#define params_format(p) ((__force snd_pcm_format_t)snd_mask_min(hw_param_mask((p), SNDRV_PCM_HW_PARAM_FORMAT)))
#define params_subformat(p) snd_mask_min(hw_param_mask((p), SNDRV_PCM_HW_PARAM_SUBFORMAT))
#define params_channels(p) hw_param_interval((p), SNDRV_PCM_HW_PARAM_CHANNELS)->min
#define params_rate(p) hw_param_interval((p), SNDRV_PCM_HW_PARAM_RATE)->min
#define params_period_size(p) hw_param_interval((p), SNDRV_PCM_HW_PARAM_PERIOD_SIZE)->min
#define params_period_bytes(p) ((params_period_size(p)*snd_pcm_format_physical_width(params_format(p))*params_channels(p))/8)
#define params_periods(p) hw_param_interval((p), SNDRV_PCM_HW_PARAM_PERIODS)->min
#define params_buffer_size(p) hw_param_interval((p), SNDRV_PCM_HW_PARAM_BUFFER_SIZE)->min
#define params_buffer_bytes(p) hw_param_interval((p), SNDRV_PCM_HW_PARAM_BUFFER_BYTES)->min
int snd_interval_refine(struct snd_interval *i, const struct snd_interval *v);
void snd_interval_mul(const struct snd_interval *a, const struct snd_interval *b, struct snd_interval *c);
void snd_interval_div(const struct snd_interval *a, const struct snd_interval *b, struct snd_interval *c);
void snd_interval_muldivk(const struct snd_interval *a, const struct snd_interval *b,
unsigned int k, struct snd_interval *c);
void snd_interval_mulkdiv(const struct snd_interval *a, unsigned int k,
const struct snd_interval *b, struct snd_interval *c);
int snd_interval_list(struct snd_interval *i, unsigned int count, unsigned int *list, unsigned int mask);
int snd_interval_ratnum(struct snd_interval *i,
unsigned int rats_count, struct snd_ratnum *rats,
unsigned int *nump, unsigned int *denp);
void _snd_pcm_hw_params_any(struct snd_pcm_hw_params *params);
void _snd_pcm_hw_param_setempty(struct snd_pcm_hw_params *params, snd_pcm_hw_param_t var);
int snd_pcm_hw_params_choose(struct snd_pcm_substream *substream, struct snd_pcm_hw_params *params);
int snd_pcm_hw_refine(struct snd_pcm_substream *substream, struct snd_pcm_hw_params *params);
int snd_pcm_hw_constraints_init(struct snd_pcm_substream *substream);
int snd_pcm_hw_constraints_complete(struct snd_pcm_substream *substream);
int snd_pcm_hw_constraint_mask(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var,
u_int32_t mask);
int snd_pcm_hw_constraint_mask64(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var,
u_int64_t mask);
int snd_pcm_hw_constraint_minmax(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var,
unsigned int min, unsigned int max);
int snd_pcm_hw_constraint_integer(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var);
int snd_pcm_hw_constraint_list(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
struct snd_pcm_hw_constraint_list *l);
int snd_pcm_hw_constraint_ratnums(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
struct snd_pcm_hw_constraint_ratnums *r);
int snd_pcm_hw_constraint_ratdens(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
struct snd_pcm_hw_constraint_ratdens *r);
int snd_pcm_hw_constraint_msbits(struct snd_pcm_runtime *runtime,
unsigned int cond,
unsigned int width,
unsigned int msbits);
int snd_pcm_hw_constraint_step(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
unsigned long step);
int snd_pcm_hw_constraint_pow2(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var);
int snd_pcm_hw_rule_add(struct snd_pcm_runtime *runtime,
unsigned int cond,
int var,
snd_pcm_hw_rule_func_t func, void *private,
int dep, ...);
int snd_pcm_format_signed(snd_pcm_format_t format);
int snd_pcm_format_unsigned(snd_pcm_format_t format);
int snd_pcm_format_linear(snd_pcm_format_t format);
int snd_pcm_format_little_endian(snd_pcm_format_t format);
int snd_pcm_format_big_endian(snd_pcm_format_t format);
#define snd_pcm_format_cpu_endian(format) snd_pcm_format_little_endian(format)
#define snd_pcm_format_cpu_endian(format) snd_pcm_format_big_endian(format)
int snd_pcm_format_width(snd_pcm_format_t format);
int snd_pcm_format_physical_width(snd_pcm_format_t format);
ssize_t snd_pcm_format_size(snd_pcm_format_t format, size_t samples);
const unsigned char *snd_pcm_format_silence_64(snd_pcm_format_t format);
int snd_pcm_format_set_silence(snd_pcm_format_t format, void *buf, unsigned int frames);
snd_pcm_format_t snd_pcm_build_linear_format(int width, int unsignd, int big_endian);
void snd_pcm_set_ops(struct snd_pcm * pcm, int direction, struct snd_pcm_ops *ops);
void snd_pcm_set_sync(struct snd_pcm_substream *substream);
int snd_pcm_lib_interleave_len(struct snd_pcm_substream *substream);
int snd_pcm_lib_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg);
int snd_pcm_update_state(struct snd_pcm_substream *substream,
struct snd_pcm_runtime *runtime);
int snd_pcm_update_hw_ptr(struct snd_pcm_substream *substream);
int snd_pcm_playback_xrun_check(struct snd_pcm_substream *substream);
int snd_pcm_capture_xrun_check(struct snd_pcm_substream *substream);
int snd_pcm_playback_xrun_asap(struct snd_pcm_substream *substream);
int snd_pcm_capture_xrun_asap(struct snd_pcm_substream *substream);
void snd_pcm_playback_silence(struct snd_pcm_substream *substream, snd_pcm_uframes_t new_hw_ptr);
void snd_pcm_period_elapsed(struct snd_pcm_substream *substream);
snd_pcm_sframes_t snd_pcm_lib_write(struct snd_pcm_substream *substream,
const void __user *buf,
snd_pcm_uframes_t frames);
snd_pcm_sframes_t snd_pcm_lib_read(struct snd_pcm_substream *substream,
void __user *buf, snd_pcm_uframes_t frames);
snd_pcm_sframes_t snd_pcm_lib_writev(struct snd_pcm_substream *substream,
void __user **bufs, snd_pcm_uframes_t frames);
snd_pcm_sframes_t snd_pcm_lib_readv(struct snd_pcm_substream *substream,
void __user **bufs, snd_pcm_uframes_t frames);
extern const struct snd_pcm_hw_constraint_list snd_pcm_known_rates;
int snd_pcm_limit_hw_rates(struct snd_pcm_runtime *runtime);
unsigned int snd_pcm_rate_to_rate_bit(unsigned int rate);
static inline void snd_pcm_set_runtime_buffer(struct snd_pcm_substream *substream,
struct snd_dma_buffer *bufp)
void snd_pcm_timer_resolution_change(struct snd_pcm_substream *substream);
void snd_pcm_timer_init(struct snd_pcm_substream *substream);
void snd_pcm_timer_done(struct snd_pcm_substream *substream);
static inline void snd_pcm_gettime(struct snd_pcm_runtime *runtime,
struct timespec *tv)
int snd_pcm_lib_preallocate_free(struct snd_pcm_substream *substream);
int snd_pcm_lib_preallocate_free_for_all(struct snd_pcm *pcm);
int snd_pcm_lib_preallocate_pages(struct snd_pcm_substream *substream,
int type, struct device *data,
size_t size, size_t max);
int snd_pcm_lib_preallocate_pages_for_all(struct snd_pcm *pcm,
int type, void *data,
size_t size, size_t max);
int snd_pcm_lib_malloc_pages(struct snd_pcm_substream *substream, size_t size);
int snd_pcm_lib_free_pages(struct snd_pcm_substream *substream);
int _snd_pcm_lib_alloc_vmalloc_buffer(struct snd_pcm_substream *substream,
size_t size, gfp_t gfp_flags);
int snd_pcm_lib_free_vmalloc_buffer(struct snd_pcm_substream *substream);
struct page *snd_pcm_lib_get_vmalloc_page(struct snd_pcm_substream *substream,
unsigned long offset);
#define snd_pcm_lib_alloc_vmalloc_buffer(subs, size) \
_snd_pcm_lib_alloc_vmalloc_buffer \
(subs, size, GFP_KERNEL | __GFP_HIGHMEM | __GFP_ZERO)
#define snd_pcm_lib_alloc_vmalloc_32_buffer(subs, size) \
_snd_pcm_lib_alloc_vmalloc_buffer \
(subs, size, GFP_KERNEL | GFP_DMA32 | __GFP_ZERO)
#define snd_pcm_substream_sgbuf(substream) \
((substream)->runtime->dma_buffer_p->private_data)
static inline dma_addr_t
snd_pcm_sgbuf_get_addr(struct snd_pcm_substream *substream, unsigned int ofs)
static inline void *
snd_pcm_sgbuf_get_ptr(struct snd_pcm_substream *substream, unsigned int ofs)
struct page *snd_pcm_sgbuf_ops_page(struct snd_pcm_substream *substream,
unsigned long offset);
unsigned int snd_pcm_sgbuf_get_chunk_size(struct snd_pcm_substream *substream,
unsigned int ofs, unsigned int size);
static inline dma_addr_t
snd_pcm_sgbuf_get_addr(struct snd_pcm_substream *substream, unsigned int ofs)
static inline void *
snd_pcm_sgbuf_get_ptr(struct snd_pcm_substream *substream, unsigned int ofs)
#define snd_pcm_sgbuf_ops_page	NULL
#define snd_pcm_sgbuf_get_chunk_size(subs, ofs, size)	(size)
static inline void snd_pcm_mmap_data_open(struct vm_area_struct *area)
static inline void snd_pcm_mmap_data_close(struct vm_area_struct *area)
#if defined(CONFIG_X86) || defined(CONFIG_PPC) || defined(CONFIG_ALPHA)
#define SNDRV_PCM_INFO_MMAP_IOMEM	SNDRV_PCM_INFO_MMAP
int snd_pcm_lib_mmap_iomem(struct snd_pcm_substream *substream, struct vm_area_struct *area);
#define SNDRV_PCM_INFO_MMAP_IOMEM	0
#define snd_pcm_lib_mmap_iomem	NULL
#define snd_pcm_lib_mmap_vmalloc NULL
static inline void snd_pcm_limit_isa_dma_size(int dma, size_t *max)
#define SNDRV_PCM_DEFAULT_CON_SPDIF	(IEC958_AES0_CON_EMPHASIS_NONE|\
(IEC958_AES1_CON_ORIGINAL<<8)|\
(IEC958_AES1_CON_PCM_CODER<<8)|\
(IEC958_AES3_CON_FS_48000<<24))
#define PCM_RUNTIME_CHECK(sub) snd_BUG_ON(!(sub) || !(sub)->runtime)
const char *snd_pcm_format_name(snd_pcm_format_t format);
