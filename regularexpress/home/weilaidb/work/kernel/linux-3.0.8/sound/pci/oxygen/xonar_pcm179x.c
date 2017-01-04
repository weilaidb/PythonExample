#define GPIO_D2X_EXT_POWER	0x0020
#define GPIO_D2_ALT		0x0080
#define GPIO_D2_OUTPUT_ENABLE	0x0100
#define GPI_EXT_POWER		0x01
#define GPIO_INPUT_ROUTE	0x0100
#define GPIO_HDAV_OUTPUT_ENABLE	0x0001
#define GPIO_HDAV_MAGIC		0x00c0
#define GPIO_DB_MASK		0x0030
#define GPIO_DB_H6		0x0000
#define GPIO_ST_OUTPUT_ENABLE	0x0001
#define GPIO_ST_HP_REAR		0x0002
#define GPIO_ST_MAGIC		0x0040
#define GPIO_ST_HP		0x0080
#define I2C_DEVICE_PCM1796(i)	(0x98 + ((i) << 1))
#define I2C_DEVICE_CS2000	0x9c
#define PCM1796_REG_BASE	16
struct xonar_pcm179x ;
struct xonar_hdav ;
static inline void pcm1796_write_spi(struct oxygen *chip, unsigned int codec,
u8 reg, u8 value)
static inline void pcm1796_write_i2c(struct oxygen *chip, unsigned int codec,
u8 reg, u8 value)
static void pcm1796_write(struct oxygen *chip, unsigned int codec,
u8 reg, u8 value)
static void pcm1796_write_cached(struct oxygen *chip, unsigned int codec,
u8 reg, u8 value)
static void cs2000_write(struct oxygen *chip, u8 reg, u8 value)
static void cs2000_write_cached(struct oxygen *chip, u8 reg, u8 value)
static void pcm1796_registers_init(struct oxygen *chip)
static void pcm1796_init(struct oxygen *chip)
static void xonar_d2_init(struct oxygen *chip)
static void xonar_d2x_init(struct oxygen *chip)
static void xonar_hdav_init(struct oxygen *chip)
static void xonar_st_init_i2c(struct oxygen *chip)
static void xonar_st_init_common(struct oxygen *chip)
static void cs2000_registers_init(struct oxygen *chip)
static void xonar_st_init(struct oxygen *chip)
static void xonar_stx_init(struct oxygen *chip)
static void xonar_d2_cleanup(struct oxygen *chip)
static void xonar_hdav_cleanup(struct oxygen *chip)
static void xonar_st_cleanup(struct oxygen *chip)
static void xonar_d2_suspend(struct oxygen *chip)
static void xonar_hdav_suspend(struct oxygen *chip)
static void xonar_st_suspend(struct oxygen *chip)
static void xonar_d2_resume(struct oxygen *chip)
static void xonar_hdav_resume(struct oxygen *chip)
static void xonar_stx_resume(struct oxygen *chip)
static void xonar_st_resume(struct oxygen *chip)
static void update_pcm1796_oversampling(struct oxygen *chip)
static void set_pcm1796_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void update_pcm1796_volume(struct oxygen *chip)
static void update_pcm1796_mute(struct oxygen *chip)
static void update_cs2000_rate(struct oxygen *chip, unsigned int rate)
static void set_st_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void set_hdav_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static const struct snd_kcontrol_new alt_switch = ;
static int rolloff_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int rolloff_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int rolloff_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static const struct snd_kcontrol_new rolloff_control = ;
static const struct snd_kcontrol_new hdav_hdmi_control = ;
static int st_output_switch_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int st_output_switch_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int st_output_switch_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int st_hp_volume_offset_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int st_hp_volume_offset_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int st_hp_volume_offset_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static const struct snd_kcontrol_new st_controls[] = ;
static void xonar_line_mic_ac97_switch(struct oxygen *chip,
unsigned int reg, unsigned int mute)
static const DECLARE_TLV_DB_SCALE(pcm1796_db_scale, -6000, 50, 0);
static int xonar_d2_control_filter(struct snd_kcontrol_new *template)
static int xonar_st_h6_control_filter(struct snd_kcontrol_new *template)
static int add_pcm1796_controls(struct oxygen *chip)
static int xonar_d2_mixer_init(struct oxygen *chip)
static int xonar_hdav_mixer_init(struct oxygen *chip)
static int xonar_st_mixer_init(struct oxygen *chip)
static void dump_pcm1796_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static void dump_cs2000_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static void dump_st_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static const struct oxygen_model model_xonar_d2 = ;
static const struct oxygen_model model_xonar_hdav = ;
static const struct oxygen_model model_xonar_st = ;
int __devinit get_xonar_pcm179x_model(struct oxygen *chip,
const struct pci_device_id *id)
