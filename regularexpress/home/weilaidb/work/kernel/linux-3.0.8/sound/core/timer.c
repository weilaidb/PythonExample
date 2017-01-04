#if defined(CONFIG_SND_HRTIMER) || defined(CONFIG_SND_HRTIMER_MODULE)
#define DEFAULT_TIMER_LIMIT 4
#elif defined(CONFIG_SND_RTCTIMER) || defined(CONFIG_SND_RTCTIMER_MODULE)
#define DEFAULT_TIMER_LIMIT 2
#define DEFAULT_TIMER_LIMIT 1
static int timer_limit = DEFAULT_TIMER_LIMIT;
static int timer_tstamp_monotonic = 1;
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>, Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("ALSA timer interface");
MODULE_LICENSE("GPL");
module_param(timer_limit, int, 0444);
MODULE_PARM_DESC(timer_limit, "Maximum global timers in system.");
module_param(timer_tstamp_monotonic, int, 0444);
MODULE_PARM_DESC(timer_tstamp_monotonic, "Use posix monotonic clock source for timestamps (default).");
MODULE_ALIAS_CHARDEV(CONFIG_SND_MAJOR, SNDRV_MINOR_TIMER);
MODULE_ALIAS("devname:snd/timer");
struct snd_timer_user ;
static LIST_HEAD(snd_timer_list);
static LIST_HEAD(snd_timer_slave_list);
static DEFINE_SPINLOCK(slave_active_lock);
static DEFINE_MUTEX(register_mutex);
static int snd_timer_free(struct snd_timer *timer);
static int snd_timer_dev_free(struct snd_device *device);
static int snd_timer_dev_register(struct snd_device *device);
static int snd_timer_dev_disconnect(struct snd_device *device);
static void snd_timer_reschedule(struct snd_timer * timer, unsigned long ticks_left);
static struct snd_timer_instance *snd_timer_instance_new(char *owner,
struct snd_timer *timer)
static struct snd_timer *snd_timer_find(struct snd_timer_id *tid)
static void snd_timer_request(struct snd_timer_id *tid)
static void snd_timer_check_slave(struct snd_timer_instance *slave)
static void snd_timer_check_master(struct snd_timer_instance *master)
int snd_timer_open(struct snd_timer_instance **ti,
char *owner, struct snd_timer_id *tid,
unsigned int slave_id)
static int _snd_timer_stop(struct snd_timer_instance *timeri,
int keep_flag, int event);
int snd_timer_close(struct snd_timer_instance *timeri)
unsigned long snd_timer_resolution(struct snd_timer_instance *timeri)
static void snd_timer_notify1(struct snd_timer_instance *ti, int event)
static int snd_timer_start1(struct snd_timer *timer, struct snd_timer_instance *timeri,
unsigned long sticks)
static int snd_timer_start_slave(struct snd_timer_instance *timeri)
int snd_timer_start(struct snd_timer_instance *timeri, unsigned int ticks)
static int _snd_timer_stop(struct snd_timer_instance * timeri,
int keep_flag, int event)
int snd_timer_stop(struct snd_timer_instance *timeri)
int snd_timer_continue(struct snd_timer_instance *timeri)
int snd_timer_pause(struct snd_timer_instance * timeri)
static void snd_timer_reschedule(struct snd_timer * timer, unsigned long ticks_left)
static void snd_timer_tasklet(unsigned long arg)
void snd_timer_interrupt(struct snd_timer * timer, unsigned long ticks_left)
int snd_timer_new(struct snd_card *card, char *id, struct snd_timer_id *tid,
struct snd_timer **rtimer)
static int snd_timer_free(struct snd_timer *timer)
static int snd_timer_dev_free(struct snd_device *device)
static int snd_timer_dev_register(struct snd_device *dev)
static int snd_timer_dev_disconnect(struct snd_device *device)
void snd_timer_notify(struct snd_timer *timer, int event, struct timespec *tstamp)
int snd_timer_global_new(char *id, int device, struct snd_timer **rtimer)
int snd_timer_global_free(struct snd_timer *timer)
int snd_timer_global_register(struct snd_timer *timer)
struct snd_timer_system_private ;
static void snd_timer_s_function(unsigned long data)
static int snd_timer_s_start(struct snd_timer * timer)
static int snd_timer_s_stop(struct snd_timer * timer)
static struct snd_timer_hardware snd_timer_system =
;
static void snd_timer_free_system(struct snd_timer *timer)
static int snd_timer_register_system(void)
static void snd_timer_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static struct snd_info_entry *snd_timer_proc_entry;
static void __init snd_timer_proc_init(void)
static void __exit snd_timer_proc_done(void)
#define snd_timer_proc_init()
#define snd_timer_proc_done()
static void snd_timer_user_interrupt(struct snd_timer_instance *timeri,
unsigned long resolution,
unsigned long ticks)
static void snd_timer_user_append_to_tqueue(struct snd_timer_user *tu,
struct snd_timer_tread *tread)
static void snd_timer_user_ccallback(struct snd_timer_instance *timeri,
int event,
struct timespec *tstamp,
unsigned long resolution)
static void snd_timer_user_tinterrupt(struct snd_timer_instance *timeri,
unsigned long resolution,
unsigned long ticks)
static int snd_timer_user_open(struct inode *inode, struct file *file)
static int snd_timer_user_release(struct inode *inode, struct file *file)
static void snd_timer_user_zero_id(struct snd_timer_id *id)
static void snd_timer_user_copy_id(struct snd_timer_id *id, struct snd_timer *timer)
static int snd_timer_user_next_device(struct snd_timer_id __user *_tid)
static int snd_timer_user_ginfo(struct file *file,
struct snd_timer_ginfo __user *_ginfo)
static int snd_timer_user_gparams(struct file *file,
struct snd_timer_gparams __user *_gparams)
static int snd_timer_user_gstatus(struct file *file,
struct snd_timer_gstatus __user *_gstatus)
static int snd_timer_user_tselect(struct file *file,
struct snd_timer_select __user *_tselect)
static int snd_timer_user_info(struct file *file,
struct snd_timer_info __user *_info)
static int snd_timer_user_params(struct file *file,
struct snd_timer_params __user *_params)
static int snd_timer_user_status(struct file *file,
struct snd_timer_status __user *_status)
static int snd_timer_user_start(struct file *file)
static int snd_timer_user_stop(struct file *file)
static int snd_timer_user_continue(struct file *file)
static int snd_timer_user_pause(struct file *file)
enum ;
static long snd_timer_user_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int snd_timer_user_fasync(int fd, struct file * file, int on)
static ssize_t snd_timer_user_read(struct file *file, char __user *buffer,
size_t count, loff_t *offset)
static unsigned int snd_timer_user_poll(struct file *file, poll_table * wait)
#define snd_timer_user_ioctl_compat	NULL
static const struct file_operations snd_timer_f_ops =
;
static int __init alsa_timer_init(void)
static void __exit alsa_timer_exit(void)
module_init(alsa_timer_init)
module_exit(alsa_timer_exit)
EXPORT_SYMBOL(snd_timer_open);
EXPORT_SYMBOL(snd_timer_close);
EXPORT_SYMBOL(snd_timer_resolution);
EXPORT_SYMBOL(snd_timer_start);
EXPORT_SYMBOL(snd_timer_stop);
EXPORT_SYMBOL(snd_timer_continue);
EXPORT_SYMBOL(snd_timer_pause);
EXPORT_SYMBOL(snd_timer_new);
EXPORT_SYMBOL(snd_timer_notify);
EXPORT_SYMBOL(snd_timer_global_new);
EXPORT_SYMBOL(snd_timer_global_free);
EXPORT_SYMBOL(snd_timer_global_register);
EXPORT_SYMBOL(snd_timer_interrupt);
