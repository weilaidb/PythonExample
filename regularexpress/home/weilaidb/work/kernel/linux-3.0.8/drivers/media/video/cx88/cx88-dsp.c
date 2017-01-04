#define INT_PI			((s32)(3.141592653589 * 32768.0))
#define compat_remainder(a, b) \
((float)(((s32)((a)*100))%((s32)((b)*100)))/100.0)
#define baseband_freq(carrier, srate, tone) ((s32)( \
(compat_remainder(carrier + tone, srate)) / srate * 2 * INT_PI))
#define FREQ_A2_CARRIER         baseband_freq(54687.5, 2689.36, 0.0)
#define FREQ_A2_DUAL            baseband_freq(54687.5, 2689.36, 274.1)
#define FREQ_A2_STEREO          baseband_freq(54687.5, 2689.36, 117.5)
#define FREQ_A2M_CARRIER	((s32)(2.114516 * 32768.0))
#define FREQ_A2M_DUAL		((s32)(2.754916 * 32768.0))
#define FREQ_A2M_STEREO		((s32)(2.462326 * 32768.0))
#define FREQ_EIAJ_CARRIER	((s32)(1.963495 * 32768.0))
#define FREQ_EIAJ_DUAL		((s32)(2.562118 * 32768.0))
#define FREQ_EIAJ_STEREO	((s32)(2.601053 * 32768.0))
#define FREQ_BTSC_DUAL		((s32)(1.963495 * 32768.0))
#define FREQ_BTSC_DUAL_REF	((s32)(1.374446 * 32768.0))
#define FREQ_BTSC_SAP		((s32)(2.471532 * 32768.0))
#define FREQ_BTSC_SAP_REF	((s32)(1.730072 * 32768.0))
#define FREQ_NOISE_START	((s32)(0.100000 * 32768.0))
#define FREQ_NOISE_END		((s32)(1.200000 * 32768.0))
static unsigned int dsp_debug;
module_param(dsp_debug, int, 0644);
MODULE_PARM_DESC(dsp_debug, "enable audio dsp debug messages");
#define dprintk(level, fmt, arg...)	if (dsp_debug >= level) \
printk(KERN_DEBUG "%s/0: " fmt, core->name , ## arg)
static s32 int_cos(u32 x)
static u32 int_goertzel(s16 x[], u32 N, u32 freq)
static u32 freq_magnitude(s16 x[], u32 N, u32 freq)
static u32 noise_magnitude(s16 x[], u32 N, u32 freq_start, u32 freq_end)
static s32 detect_a2_a2m_eiaj(struct cx88_core *core, s16 x[], u32 N)
static s32 detect_btsc(struct cx88_core *core, s16 x[], u32 N)
static s16 *read_rds_samples(struct cx88_core *core, u32 *N)
s32 cx88_dsp_detect_stereo_sap(struct cx88_core *core)
EXPORT_SYMBOL(cx88_dsp_detect_stereo_sap);
