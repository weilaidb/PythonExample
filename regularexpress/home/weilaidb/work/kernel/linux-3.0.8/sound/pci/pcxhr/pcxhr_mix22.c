#define PCXHR_DSP_RESET		0x20
#define PCXHR_XLX_CFG		0x24
#define PCXHR_XLX_RUER		0x28
#define PCXHR_XLX_DATA		0x2C
#define PCXHR_XLX_STATUS	0x30
#define PCXHR_XLX_LOFREQ	0x34
#define PCXHR_XLX_HIFREQ	0x38
#define PCXHR_XLX_CSUER		0x3C
#define PCXHR_XLX_SELMIC	0x40
#define PCXHR_DSP 2
#define PCXHR_INPB(mgr, x)	inb((mgr)->port[PCXHR_DSP] + (x))
#define PCXHR_OUTPB(mgr, x, data) outb((data), (mgr)->port[PCXHR_DSP] + (x))
#define PCXHR_DSP_RESET_DSP	0x01
#define PCXHR_DSP_RESET_MUTE	0x02
#define PCXHR_DSP_RESET_CODEC	0x08
#define PCXHR_DSP_RESET_GPO_OFFSET	5
#define PCXHR_DSP_RESET_GPO_MASK	0x60
#define PCXHR_CFG_SYNCDSP_MASK		0x80
#define PCXHR_CFG_DEPENDENCY_MASK	0x60
#define PCXHR_CFG_INDEPENDANT_SEL	0x00
#define PCXHR_CFG_MASTER_SEL		0x40
#define PCXHR_CFG_SLAVE_SEL		0x20
#define PCXHR_CFG_DATA_UER1_SEL_MASK	0x10
#define PCXHR_CFG_DATAIN_SEL_MASK	0x08
#define PCXHR_CFG_SRC_MASK		0x04
#define PCXHR_CFG_CLOCK_UER1_SEL_MASK	0x02
#define PCXHR_CFG_CLOCKIN_SEL_MASK	0x01
#define PCXHR_DATA_CODEC	0x80
#define AKM_POWER_CONTROL_CMD	0xA007
#define AKM_RESET_ON_CMD	0xA100
#define AKM_RESET_OFF_CMD	0xA103
#define AKM_CLOCK_INF_55K_CMD	0xA240
#define AKM_CLOCK_SUP_55K_CMD	0xA24D
#define AKM_MUTE_CMD		0xA38D
#define AKM_UNMUTE_CMD		0xA30D
#define AKM_LEFT_LEVEL_CMD	0xA600
#define AKM_RIGHT_LEVEL_CMD	0xA700
#define PCXHR_STAT_SRC_LOCK		0x01
#define PCXHR_STAT_LEVEL_IN		0x02
#define PCXHR_STAT_GPI_OFFSET		2
#define PCXHR_STAT_GPI_MASK		0x0C
#define PCXHR_STAT_MIC_CAPS		0x10
#define PCXHR_STAT_FREQ_SYNC_MASK	0x01
#define PCXHR_STAT_FREQ_UER1_MASK	0x02
#define PCXHR_STAT_FREQ_SAVE_MASK	0x80
#define PCXHR_SUER1_BIT_U_READ_MASK	0x80
#define PCXHR_SUER1_BIT_C_READ_MASK	0x40
#define PCXHR_SUER1_DATA_PRESENT_MASK	0x20
#define PCXHR_SUER1_CLOCK_PRESENT_MASK	0x10
#define PCXHR_SUER_BIT_U_READ_MASK	0x08
#define PCXHR_SUER_BIT_C_READ_MASK	0x04
#define PCXHR_SUER_DATA_PRESENT_MASK	0x02
#define PCXHR_SUER_CLOCK_PRESENT_MASK	0x01
#define PCXHR_SUER_BIT_U_WRITE_MASK	0x02
#define PCXHR_SUER_BIT_C_WRITE_MASK	0x01
#define PCXHR_SELMIC_PREAMPLI_OFFSET	2
#define PCXHR_SELMIC_PREAMPLI_MASK	0x0C
#define PCXHR_SELMIC_PHANTOM_ALIM	0x80
static const unsigned char g_hr222_p_level[] = ;
static void hr222_config_akm(struct pcxhr_mgr *mgr, unsigned short data)
static int hr222_set_hw_playback_level(struct pcxhr_mgr *mgr,
int idx, int level)
static int hr222_set_hw_capture_level(struct pcxhr_mgr *mgr,
int level_l, int level_r, int level_mic)
static void hr222_micro_boost(struct pcxhr_mgr *mgr, int level);
int hr222_sub_init(struct pcxhr_mgr *mgr)
static int hr222_pll_freq_register(unsigned int freq,
unsigned int *pllreg,
unsigned int *realfreq)
int hr222_sub_set_clock(struct pcxhr_mgr *mgr,
unsigned int rate,
int *changed)
int hr222_get_external_clock(struct pcxhr_mgr *mgr,
enum pcxhr_clock_type clock_type,
int *sample_rate)
int hr222_read_gpio(struct pcxhr_mgr *mgr, int is_gpi, int *value)
int hr222_write_gpo(struct pcxhr_mgr *mgr, int value)
int hr222_update_analog_audio_level(struct snd_pcxhr *chip,
int is_capture, int channel)
#define SOURCE_LINE	0
#define SOURCE_DIGITAL	1
#define SOURCE_DIGISRC	2
#define SOURCE_MIC	3
#define SOURCE_LINEMIC	4
int hr222_set_audio_source(struct snd_pcxhr *chip)
int hr222_iec958_capture_byte(struct snd_pcxhr *chip,
int aes_idx, unsigned char *aes_bits)
int hr222_iec958_update_byte(struct snd_pcxhr *chip,
int aes_idx, unsigned char aes_bits)
static void hr222_micro_boost(struct pcxhr_mgr *mgr, int level)
static void hr222_phantom_power(struct pcxhr_mgr *mgr, int power)
static const DECLARE_TLV_DB_SCALE(db_scale_mic_hr222, -9850, 50, 650);
static int hr222_mic_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int hr222_mic_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int hr222_mic_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new hr222_control_mic_level = ;
static const DECLARE_TLV_DB_SCALE(db_scale_micboost_hr222, 0, 1800, 5400);
static int hr222_mic_boost_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int hr222_mic_boost_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int hr222_mic_boost_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new hr222_control_mic_boost = ;
#define hr222_phantom_power_info	snd_ctl_boolean_mono_info
static int hr222_phantom_power_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int hr222_phantom_power_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new hr222_phantom_power_switch = ;
int hr222_add_mic_controls(struct snd_pcxhr *chip)
