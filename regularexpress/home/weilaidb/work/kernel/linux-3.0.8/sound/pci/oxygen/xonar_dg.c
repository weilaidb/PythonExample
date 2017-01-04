#define GPIO_MAGIC		0x0008
#define GPIO_HP_DETECT		0x0010
#define GPIO_INPUT_ROUTE	0x0060
#define GPIO_HP_REAR		0x0080
#define GPIO_OUTPUT_ENABLE	0x0100
struct dg ;
static void cs4245_write(struct oxygen *chip, unsigned int reg, u8 value)
static void cs4245_write_cached(struct oxygen *chip, unsigned int reg, u8 value)
static void cs4245_registers_init(struct oxygen *chip)
static void cs4245_init(struct oxygen *chip)
static void dg_output_enable(struct oxygen *chip)
static void dg_init(struct oxygen *chip)
static void dg_cleanup(struct oxygen *chip)
static void dg_suspend(struct oxygen *chip)
static void dg_resume(struct oxygen *chip)
static void set_cs4245_dac_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void set_cs4245_adc_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static inline unsigned int shift_bits(unsigned int value,
unsigned int shift_from,
unsigned int shift_to,
unsigned int mask)
static unsigned int adjust_dg_dac_routing(struct oxygen *chip,
unsigned int play_routing)
static int output_switch_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int output_switch_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int output_switch_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int hp_volume_offset_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int hp_volume_offset_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int hp_volume_offset_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int input_vol_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int input_vol_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int input_vol_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static DECLARE_TLV_DB_SCALE(cs4245_pga_db_scale, -1200, 50, 0);
static int input_sel_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int input_sel_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int input_sel_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int hpf_info(struct snd_kcontrol *ctl, struct snd_ctl_elem_info *info)
static int hpf_get(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
static int hpf_put(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
#define INPUT_VOLUME(xname, index)
static const struct snd_kcontrol_new dg_controls[] = ;
static int dg_control_filter(struct snd_kcontrol_new *template)
static int dg_mixer_init(struct oxygen *chip)
static void dump_cs4245_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
struct oxygen_model model_xonar_dg = ;
