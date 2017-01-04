static unsigned int audio_debug;
module_param(audio_debug, int, 0644);
MODULE_PARM_DESC(audio_debug, "enable debug messages [audio]");
static unsigned int always_analog;
module_param(always_analog,int,0644);
MODULE_PARM_DESC(always_analog,"force analog audio out");
static unsigned int radio_deemphasis;
module_param(radio_deemphasis,int,0644);
MODULE_PARM_DESC(radio_deemphasis, "Radio deemphasis time constant, "
"0=None, 1=50us (elsewhere), 2=75us (USA)");
#define dprintk(fmt, arg...)	if (audio_debug) \
printk(KERN_DEBUG "%s/0: " fmt, core->name , ## arg)
static const char * const aud_ctl_names[64] = ;
struct rlist ;
static void set_audio_registers(struct cx88_core *core, const struct rlist *l)
static void set_audio_start(struct cx88_core *core, u32 mode)
static void set_audio_finish(struct cx88_core *core, u32 ctl)
static void set_audio_standard_BTSC(struct cx88_core *core, unsigned int sap,
u32 mode)
static void set_audio_standard_NICAM(struct cx88_core *core, u32 mode)
static void set_audio_standard_A2(struct cx88_core *core, u32 mode)
static void set_audio_standard_EIAJ(struct cx88_core *core)
static void set_audio_standard_FM(struct cx88_core *core,
enum cx88_deemph_type deemph)
static int cx88_detect_nicam(struct cx88_core *core)
void cx88_set_tvaudio(struct cx88_core *core)
void cx88_newstation(struct cx88_core *core)
void cx88_get_stereo(struct cx88_core *core, struct v4l2_tuner *t)
void cx88_set_stereo(struct cx88_core *core, u32 mode, int manual)
int cx88_audio_thread(void *data)
EXPORT_SYMBOL(cx88_set_tvaudio);
EXPORT_SYMBOL(cx88_newstation);
EXPORT_SYMBOL(cx88_set_stereo);
EXPORT_SYMBOL(cx88_get_stereo);
EXPORT_SYMBOL(cx88_audio_thread);
