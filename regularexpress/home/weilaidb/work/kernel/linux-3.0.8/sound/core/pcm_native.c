#if defined(CONFIG_MIPS) && defined(CONFIG_DMA_NONCOHERENT)
struct snd_pcm_hw_params_old ;
#define SNDRV_PCM_IOCTL_HW_REFINE_OLD _IOWR('A', 0x10, struct snd_pcm_hw_params_old)
#define SNDRV_PCM_IOCTL_HW_PARAMS_OLD _IOWR('A', 0x11, struct snd_pcm_hw_params_old)
static int snd_pcm_hw_refine_old_user(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params_old __user * _oparams);
static int snd_pcm_hw_params_old_user(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params_old __user * _oparams);
static int snd_pcm_open(struct file *file, struct snd_pcm *pcm, int stream);
DEFINE_RWLOCK(snd_pcm_link_rwlock);
EXPORT_SYMBOL(snd_pcm_link_rwlock);
static DECLARE_RWSEM(snd_pcm_link_rwsem);
static inline mm_segment_t snd_enter_user(void)
static inline void snd_leave_user(mm_segment_t fs)
int snd_pcm_info(struct snd_pcm_substream *substream, struct snd_pcm_info *info)
int snd_pcm_info_user(struct snd_pcm_substream *substream,
struct snd_pcm_info __user * _info)
#undef RULES_DEBUG
#define HW_PARAM(v) [SNDRV_PCM_HW_PARAM_##v] = #v
static const char * const snd_pcm_hw_param_names[] = ;
int snd_pcm_hw_refine(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
EXPORT_SYMBOL(snd_pcm_hw_refine);
static int snd_pcm_hw_refine_user(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params __user * _params)
static int period_to_usecs(struct snd_pcm_runtime *runtime)
static int snd_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_pcm_hw_params_user(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params __user * _params)
static int snd_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_pcm_sw_params(struct snd_pcm_substream *substream,
struct snd_pcm_sw_params *params)
static int snd_pcm_sw_params_user(struct snd_pcm_substream *substream,
struct snd_pcm_sw_params __user * _params)
int snd_pcm_status(struct snd_pcm_substream *substream,
struct snd_pcm_status *status)
static int snd_pcm_status_user(struct snd_pcm_substream *substream,
struct snd_pcm_status __user * _status)
static int snd_pcm_channel_info(struct snd_pcm_substream *substream,
struct snd_pcm_channel_info * info)
static int snd_pcm_channel_info_user(struct snd_pcm_substream *substream,
struct snd_pcm_channel_info __user * _info)
static void snd_pcm_trigger_tstamp(struct snd_pcm_substream *substream)
struct action_ops ;
static int snd_pcm_action_group(struct action_ops *ops,
struct snd_pcm_substream *substream,
int state, int do_lock)
static int snd_pcm_action_single(struct action_ops *ops,
struct snd_pcm_substream *substream,
int state)
static int snd_pcm_action(struct action_ops *ops,
struct snd_pcm_substream *substream,
int state)
static int snd_pcm_action_lock_irq(struct action_ops *ops,
struct snd_pcm_substream *substream,
int state)
static int snd_pcm_action_nonatomic(struct action_ops *ops,
struct snd_pcm_substream *substream,
int state)
static int snd_pcm_pre_start(struct snd_pcm_substream *substream, int state)
static int snd_pcm_do_start(struct snd_pcm_substream *substream, int state)
static void snd_pcm_undo_start(struct snd_pcm_substream *substream, int state)
static void snd_pcm_post_start(struct snd_pcm_substream *substream, int state)
static struct action_ops snd_pcm_action_start = ;
int snd_pcm_start(struct snd_pcm_substream *substream)
static int snd_pcm_pre_stop(struct snd_pcm_substream *substream, int state)
static int snd_pcm_do_stop(struct snd_pcm_substream *substream, int state)
static void snd_pcm_post_stop(struct snd_pcm_substream *substream, int state)
static struct action_ops snd_pcm_action_stop = ;
int snd_pcm_stop(struct snd_pcm_substream *substream, snd_pcm_state_t state)
EXPORT_SYMBOL(snd_pcm_stop);
int snd_pcm_drain_done(struct snd_pcm_substream *substream)
static int snd_pcm_pre_pause(struct snd_pcm_substream *substream, int push)
static int snd_pcm_do_pause(struct snd_pcm_substream *substream, int push)
static void snd_pcm_undo_pause(struct snd_pcm_substream *substream, int push)
static void snd_pcm_post_pause(struct snd_pcm_substream *substream, int push)
static struct action_ops snd_pcm_action_pause = ;
static int snd_pcm_pause(struct snd_pcm_substream *substream, int push)
static int snd_pcm_pre_suspend(struct snd_pcm_substream *substream, int state)
static int snd_pcm_do_suspend(struct snd_pcm_substream *substream, int state)
static void snd_pcm_post_suspend(struct snd_pcm_substream *substream, int state)
static struct action_ops snd_pcm_action_suspend = ;
int snd_pcm_suspend(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(snd_pcm_suspend);
int snd_pcm_suspend_all(struct snd_pcm *pcm)
EXPORT_SYMBOL(snd_pcm_suspend_all);
static int snd_pcm_pre_resume(struct snd_pcm_substream *substream, int state)
static int snd_pcm_do_resume(struct snd_pcm_substream *substream, int state)
static void snd_pcm_undo_resume(struct snd_pcm_substream *substream, int state)
static void snd_pcm_post_resume(struct snd_pcm_substream *substream, int state)
static struct action_ops snd_pcm_action_resume = ;
static int snd_pcm_resume(struct snd_pcm_substream *substream)
static int snd_pcm_resume(struct snd_pcm_substream *substream)
static int snd_pcm_xrun(struct snd_pcm_substream *substream)
static int snd_pcm_pre_reset(struct snd_pcm_substream *substream, int state)
static int snd_pcm_do_reset(struct snd_pcm_substream *substream, int state)
static void snd_pcm_post_reset(struct snd_pcm_substream *substream, int state)
static struct action_ops snd_pcm_action_reset = ;
static int snd_pcm_reset(struct snd_pcm_substream *substream)
static int snd_pcm_pre_prepare(struct snd_pcm_substream *substream,
int f_flags)
static int snd_pcm_do_prepare(struct snd_pcm_substream *substream, int state)
static void snd_pcm_post_prepare(struct snd_pcm_substream *substream, int state)
static struct action_ops snd_pcm_action_prepare = ;
static int snd_pcm_prepare(struct snd_pcm_substream *substream,
struct file *file)
static int snd_pcm_pre_drain_init(struct snd_pcm_substream *substream, int state)
static int snd_pcm_do_drain_init(struct snd_pcm_substream *substream, int state)
static void snd_pcm_post_drain_init(struct snd_pcm_substream *substream, int state)
static struct action_ops snd_pcm_action_drain_init = ;
static int snd_pcm_drop(struct snd_pcm_substream *substream);
static int snd_pcm_drain(struct snd_pcm_substream *substream,
struct file *file)
static int snd_pcm_drop(struct snd_pcm_substream *substream)
static struct file *snd_pcm_file_fd(int fd)
static int snd_pcm_link(struct snd_pcm_substream *substream, int fd)
static void relink_to_local(struct snd_pcm_substream *substream)
static int snd_pcm_unlink(struct snd_pcm_substream *substream)
static int snd_pcm_hw_rule_mul(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_pcm_hw_rule_div(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_pcm_hw_rule_muldivk(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_pcm_hw_rule_mulkdiv(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_pcm_hw_rule_format(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_pcm_hw_rule_sample_bits(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
#if SNDRV_PCM_RATE_5512 != 1 << 0 || SNDRV_PCM_RATE_192000 != 1 << 12
#error "Change this table"
static unsigned int rates[] = ;
const struct snd_pcm_hw_constraint_list snd_pcm_known_rates = ;
static int snd_pcm_hw_rule_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_pcm_hw_rule_buffer_bytes_max(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
int snd_pcm_hw_constraints_init(struct snd_pcm_substream *substream)
int snd_pcm_hw_constraints_complete(struct snd_pcm_substream *substream)
static void pcm_release_private(struct snd_pcm_substream *substream)
void snd_pcm_release_substream(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(snd_pcm_release_substream);
int snd_pcm_open_substream(struct snd_pcm *pcm, int stream,
struct file *file,
struct snd_pcm_substream **rsubstream)
EXPORT_SYMBOL(snd_pcm_open_substream);
static int snd_pcm_open_file(struct file *file,
struct snd_pcm *pcm,
int stream,
struct snd_pcm_file **rpcm_file)
static int snd_pcm_playback_open(struct inode *inode, struct file *file)
static int snd_pcm_capture_open(struct inode *inode, struct file *file)
static int snd_pcm_open(struct file *file, struct snd_pcm *pcm, int stream)
static int snd_pcm_release(struct inode *inode, struct file *file)
static snd_pcm_sframes_t snd_pcm_playback_rewind(struct snd_pcm_substream *substream,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t snd_pcm_capture_rewind(struct snd_pcm_substream *substream,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t snd_pcm_playback_forward(struct snd_pcm_substream *substream,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t snd_pcm_capture_forward(struct snd_pcm_substream *substream,
snd_pcm_uframes_t frames)
static int snd_pcm_hwsync(struct snd_pcm_substream *substream)
static int snd_pcm_delay(struct snd_pcm_substream *substream,
snd_pcm_sframes_t __user *res)
static int snd_pcm_sync_ptr(struct snd_pcm_substream *substream,
struct snd_pcm_sync_ptr __user *_sync_ptr)
static int snd_pcm_tstamp(struct snd_pcm_substream *substream, int __user *_arg)
static int snd_pcm_common_ioctl1(struct file *file,
struct snd_pcm_substream *substream,
unsigned int cmd, void __user *arg)
static int snd_pcm_playback_ioctl1(struct file *file,
struct snd_pcm_substream *substream,
unsigned int cmd, void __user *arg)
static int snd_pcm_capture_ioctl1(struct file *file,
struct snd_pcm_substream *substream,
unsigned int cmd, void __user *arg)
static long snd_pcm_playback_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long snd_pcm_capture_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
int snd_pcm_kernel_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
EXPORT_SYMBOL(snd_pcm_kernel_ioctl);
static ssize_t snd_pcm_read(struct file *file, char __user *buf, size_t count,
loff_t * offset)
static ssize_t snd_pcm_write(struct file *file, const char __user *buf,
size_t count, loff_t * offset)
static ssize_t snd_pcm_aio_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t snd_pcm_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static unsigned int snd_pcm_playback_poll(struct file *file, poll_table * wait)
static unsigned int snd_pcm_capture_poll(struct file *file, poll_table * wait)
#if defined(CONFIG_X86) || defined(CONFIG_PPC) || defined(CONFIG_ALPHA)
static int snd_pcm_mmap_status_fault(struct vm_area_struct *area,
struct vm_fault *vmf)
static const struct vm_operations_struct snd_pcm_vm_ops_status =
;
static int snd_pcm_mmap_status(struct snd_pcm_substream *substream, struct file *file,
struct vm_area_struct *area)
static int snd_pcm_mmap_control_fault(struct vm_area_struct *area,
struct vm_fault *vmf)
static const struct vm_operations_struct snd_pcm_vm_ops_control =
;
static int snd_pcm_mmap_control(struct snd_pcm_substream *substream, struct file *file,
struct vm_area_struct *area)
static int snd_pcm_mmap_status(struct snd_pcm_substream *substream, struct file *file,
struct vm_area_struct *area)
static int snd_pcm_mmap_control(struct snd_pcm_substream *substream, struct file *file,
struct vm_area_struct *area)
static inline struct page *
snd_pcm_default_page_ops(struct snd_pcm_substream *substream, unsigned long ofs)
static int snd_pcm_mmap_data_fault(struct vm_area_struct *area,
struct vm_fault *vmf)
static const struct vm_operations_struct snd_pcm_vm_ops_data = ;
static const struct vm_operations_struct snd_pcm_vm_ops_data_fault = ;
#define ARCH_HAS_DMA_MMAP_COHERENT
static int snd_pcm_default_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *area)
#if SNDRV_PCM_INFO_MMAP_IOMEM
int snd_pcm_lib_mmap_iomem(struct snd_pcm_substream *substream,
struct vm_area_struct *area)
EXPORT_SYMBOL(snd_pcm_lib_mmap_iomem);
int snd_pcm_mmap_data(struct snd_pcm_substream *substream, struct file *file,
struct vm_area_struct *area)
EXPORT_SYMBOL(snd_pcm_mmap_data);
static int snd_pcm_mmap(struct file *file, struct vm_area_struct *area)
static int snd_pcm_fasync(int fd, struct file * file, int on)
#define snd_pcm_ioctl_compat	NULL
#define __OLD_TO_NEW_MASK(x) ((x&7)|((x&0x07fffff8)<<5))
#define __NEW_TO_OLD_MASK(x) ((x&7)|((x&0xffffff00)>>5))
static void snd_pcm_hw_convert_from_old_params(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_params_old *oparams)
static void snd_pcm_hw_convert_to_old_params(struct snd_pcm_hw_params_old *oparams,
struct snd_pcm_hw_params *params)
static int snd_pcm_hw_refine_old_user(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params_old __user * _oparams)
static int snd_pcm_hw_params_old_user(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params_old __user * _oparams)
static unsigned long snd_pcm_get_unmapped_area(struct file *file,
unsigned long addr,
unsigned long len,
unsigned long pgoff,
unsigned long flags)
# define snd_pcm_get_unmapped_area NULL
const struct file_operations snd_pcm_f_ops[2] = ;
