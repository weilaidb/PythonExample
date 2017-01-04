#define DRV_VERSION "2.6"
#define SOFTSYNTH_MINOR 26
#define PROCSPEECH 0x0d
#define CLEAR_SYNTH 0x18
static int softsynth_probe(struct spk_synth *synth);
static void softsynth_release(void);
static int softsynth_is_alive(struct spk_synth *synth);
static unsigned char get_index(void);
static struct miscdevice synth_device;
static int initialized;
static int misc_registered;
static struct var_t vars[] = ;
static struct kobj_attribute caps_start_attribute =
__ATTR(caps_start, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute caps_stop_attribute =
__ATTR(caps_stop, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute freq_attribute =
__ATTR(freq, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute pitch_attribute =
__ATTR(pitch, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute punct_attribute =
__ATTR(punct, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute rate_attribute =
__ATTR(rate, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute tone_attribute =
__ATTR(tone, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute voice_attribute =
__ATTR(voice, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute vol_attribute =
__ATTR(vol, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute delay_time_attribute =
__ATTR(delay_time, ROOT_W, spk_var_show, spk_var_store);
static struct kobj_attribute direct_attribute =
__ATTR(direct, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute full_time_attribute =
__ATTR(full_time, ROOT_W, spk_var_show, spk_var_store);
static struct kobj_attribute jiffy_delta_attribute =
__ATTR(jiffy_delta, ROOT_W, spk_var_show, spk_var_store);
static struct kobj_attribute trigger_time_attribute =
__ATTR(trigger_time, ROOT_W, spk_var_show, spk_var_store);
static struct attribute *synth_attrs[] = ;
static struct spk_synth synth_soft = ;
static char *get_initstring(void)
static int softsynth_open(struct inode *inode, struct file *fp)
static int softsynth_close(struct inode *inode, struct file *fp)
static ssize_t softsynth_read(struct file *fp, char *buf, size_t count,
loff_t *pos)
static int last_index;
static ssize_t softsynth_write(struct file *fp, const char *buf, size_t count,
loff_t *pos)
static unsigned int softsynth_poll(struct file *fp,
struct poll_table_struct *wait)
static unsigned char get_index(void)
static const struct file_operations softsynth_fops = ;
static int softsynth_probe(struct spk_synth *synth)
static void softsynth_release(void)
static int softsynth_is_alive(struct spk_synth *synth)
module_param_named(start, synth_soft.startup, short, S_IRUGO);
MODULE_PARM_DESC(start, "Start the synthesizer once it is loaded.");
static int __init soft_init(void)
static void __exit soft_exit(void)
module_init(soft_init);
module_exit(soft_exit);
MODULE_AUTHOR("Kirk Reiser <kirk@braille.uwo.ca>");
MODULE_DESCRIPTION("Speakup userspace software synthesizer support");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
