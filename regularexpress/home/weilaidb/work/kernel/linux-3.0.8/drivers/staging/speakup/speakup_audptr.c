#define DRV_VERSION "2.11"
#define SYNTH_CLEAR 0x18
#define PROCSPEECH '\r'
static int synth_probe(struct spk_synth *synth);
static void synth_flush(struct spk_synth *synth);
static struct var_t vars[] = ;
static struct kobj_attribute caps_start_attribute =
__ATTR(caps_start, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute caps_stop_attribute =
__ATTR(caps_stop, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute pitch_attribute =
__ATTR(pitch, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute punct_attribute =
__ATTR(punct, USER_RW, spk_var_show, spk_var_store);
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
static struct spk_synth synth_audptr = ;
static void synth_flush(struct spk_synth *synth)
static void synth_version(struct spk_synth *synth)
static int synth_probe(struct spk_synth *synth)
module_param_named(ser, synth_audptr.ser, int, S_IRUGO);
module_param_named(start, synth_audptr.startup, short, S_IRUGO);
MODULE_PARM_DESC(ser, "Set the serial port for the synthesizer (0-based).");
MODULE_PARM_DESC(start, "Start the synthesizer once it is loaded.");
static int __init audptr_init(void)
static void __exit audptr_exit(void)
module_init(audptr_init);
module_exit(audptr_exit);
MODULE_AUTHOR("Kirk Reiser <kirk@braille.uwo.ca>");
MODULE_AUTHOR("David Borowski");
MODULE_DESCRIPTION("Speakup support for Audapter synthesizer");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
