#define __INTELMID_H
#define DRIVER_NAME_MFLD "msic_audio"
#define DRIVER_NAME_MRST "pmic_audio"
#define DRIVER_NAME "intelmid_audio"
#define PMIC_SOUND_IRQ_TYPE_MASK (1 << 15)
#define AUDINT_BASE (0xFFFFEFF8 + (6 * sizeof(u8)))
#define REG_IRQ
#define MAX_DEVICES		1
#define MIN_RATE		8000
#define MAX_RATE		48000
#define MAX_BUFFER		(800*1024)
#define MIN_BUFFER		(800*1024)
#define MAX_PERIODS		(1024*2)
#define MIN_PERIODS		2
#define MAX_PERIOD_BYTES MAX_BUFFER
#define MIN_PERIOD_BYTES 32
#define MAX_MUTE		1
#define MIN_MUTE		0
#define MONO_CNTL		1
#define STEREO_CNTL		2
#define MIN_CHANNEL		1
#define MAX_CHANNEL_AMIC	2
#define MAX_CHANNEL_DMIC	5
#define FIFO_SIZE		0
#define INTEL_MAD		"Intel MAD"
#define MAX_CTRL_MRST		8
#define MAX_CTRL_MFLD		7
#define MAX_CTRL		8
#define MAX_VENDORS		4
#define MAX_VOL		64
#define MIN_VOL		0
#define PLAYBACK_COUNT  1
#define CAPTURE_COUNT	1
#define ADC_ONE_LSB_MULTIPLIER 2346
#define MID_JACK_HS_LONG_PRESS SND_JACK_BTN_0
#define MID_JACK_HS_SHORT_PRESS SND_JACK_BTN_1
extern int	sst_card_vendor_id;
struct mad_jack ;
struct mad_jack_msg_wq ;
struct snd_intelmad_probe_info ;
struct snd_intelmad ;
struct snd_control_val ;
struct mad_stream_pvt ;
enum mad_drv_status ;
enum mad_pmic_status ;
enum _widget_ctrl ;
enum _widget_ctrl_mfld ;
enum hw_chs ;
void period_elapsed(void *mad_substream);
int snd_intelmad_alloc_stream(struct snd_pcm_substream *substream);
int snd_intelmad_init_stream(struct snd_pcm_substream *substream);
int sst_sc_reg_access(struct sc_reg_access *sc_access,
int type, int num_val);
#define CPU_CHIP_LINCROFT       1
#define CPU_CHIP_PENWELL        2
extern struct snd_control_val intelmad_ctrl_val[];
extern struct snd_kcontrol_new snd_intelmad_controls_mrst[];
extern struct snd_kcontrol_new snd_intelmad_controls_mfld[];
extern struct snd_pmic_ops *intelmad_vendor_ops[];
void sst_mad_send_jack_report(struct snd_jack *jack,
int buttonpressevent , int status);
