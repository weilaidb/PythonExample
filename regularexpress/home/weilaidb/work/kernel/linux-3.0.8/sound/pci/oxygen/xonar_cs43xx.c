#define GPI_EXT_POWER		0x01
#define GPIO_D1_OUTPUT_ENABLE	0x0001
#define GPIO_D1_FRONT_PANEL	0x0002
#define GPIO_D1_MAGIC		0x00c0
#define GPIO_D1_INPUT_ROUTE	0x0100
#define I2C_DEVICE_CS4398	0x9e
#define I2C_DEVICE_CS4362A	0x30
struct xonar_cs43xx ;
static void cs4398_write(struct oxygen *chip, u8 reg, u8 value)
static void cs4398_write_cached(struct oxygen *chip, u8 reg, u8 value)
static void cs4362a_write(struct oxygen *chip, u8 reg, u8 value)
static void cs4362a_write_cached(struct oxygen *chip, u8 reg, u8 value)
static void cs43xx_registers_init(struct oxygen *chip)
static void xonar_d1_init(struct oxygen *chip)
static void xonar_dx_init(struct oxygen *chip)
static void xonar_d1_cleanup(struct oxygen *chip)
static void xonar_d1_suspend(struct oxygen *chip)
static void xonar_d1_resume(struct oxygen *chip)
static void set_cs43xx_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void update_cs4362a_volumes(struct oxygen *chip)
static void update_cs43xx_volume(struct oxygen *chip)
static void update_cs43xx_mute(struct oxygen *chip)
static void update_cs43xx_center_lfe_mix(struct oxygen *chip, bool mixed)
static const struct snd_kcontrol_new front_panel_switch = ;
static int rolloff_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int rolloff_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int rolloff_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static const struct snd_kcontrol_new rolloff_control = ;
static void xonar_d1_line_mic_ac97_switch(struct oxygen *chip,
unsigned int reg, unsigned int mute)
static const DECLARE_TLV_DB_SCALE(cs4362a_db_scale, -6000, 100, 0);
static int xonar_d1_mixer_init(struct oxygen *chip)
static void dump_cs4362a_registers(struct xonar_cs43xx *data,
struct snd_info_buffer *buffer)
static void dump_d1_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static const struct oxygen_model model_xonar_d1 = ;
int __devinit get_xonar_cs43xx_model(struct oxygen *chip,
const struct pci_device_id *id)
