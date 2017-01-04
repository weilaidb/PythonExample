#define DRV_VERSION "2.10"
#define PROCSPEECH '\r'
static int synth_probe(struct spk_synth *synth);
static void accent_release(void);
static const char *synth_immediate(struct spk_synth *synth, const char *buf);
static void do_catch_up(struct spk_synth *synth);
static void synth_flush(struct spk_synth *synth);
static int synth_port_control;
static int port_forced;
static unsigned int synth_portlist[] = ;
static struct var_t vars[] = ;
static struct kobj_attribute caps_start_attribute =
__ATTR(caps_start, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute caps_stop_attribute =
__ATTR(caps_stop, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute pitch_attribute =
__ATTR(pitch, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute rate_attribute =
__ATTR(rate, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute tone_attribute =
__ATTR(tone, USER_RW, spk_var_show, spk_var_store);
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
static struct spk_synth synth_acntpc = ;
static inline bool synth_writable(void)
static inline bool synth_full(void)
static const char *synth_immediate(struct spk_synth *synth, const char *buf)
static void do_catch_up(struct spk_synth *synth)
static void synth_flush(struct spk_synth *synth)
static int synth_probe(struct spk_synth *synth)
static void accent_release(void)
module_param_named(port, port_forced, int, S_IRUGO);
module_param_named(start, synth_acntpc.startup, short, S_IRUGO);
MODULE_PARM_DESC(port, "Set the port for the synthesizer (override probing).");
MODULE_PARM_DESC(start, "Start the synthesizer once it is loaded.");
static int __init acntpc_init(void)
static void __exit acntpc_exit(void)
module_init(acntpc_init);
module_exit(acntpc_exit);
MODULE_AUTHOR("Kirk Reiser <kirk@braille.uwo.ca>");
MODULE_AUTHOR("David Borowski");
MODULE_DESCRIPTION("Speakup support for Accent PC synthesizer");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
