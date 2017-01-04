static int dac_volume_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int dac_volume_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int dac_volume_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int dac_mute_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int dac_mute_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static unsigned int upmix_item_count(struct oxygen *chip)
static int upmix_info(struct snd_kcontrol *ctl, struct snd_ctl_elem_info *info)
static int upmix_get(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
void oxygen_update_dac_routing(struct oxygen *chip)
static int upmix_put(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
static int spdif_switch_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static unsigned int oxygen_spdif_rate(unsigned int oxygen_rate)
void oxygen_update_spdif_source(struct oxygen *chip)
static int spdif_switch_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_info(struct snd_kcontrol *ctl, struct snd_ctl_elem_info *info)
static void oxygen_to_iec958(u32 bits, struct snd_ctl_elem_value *value)
static u32 iec958_to_oxygen(struct snd_ctl_elem_value *value)
static inline void write_spdif_bits(struct oxygen *chip, u32 bits)
static int spdif_default_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_default_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_mask_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_pcm_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_pcm_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_input_mask_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_input_default_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_bit_switch_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int spdif_bit_switch_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int monitor_volume_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int monitor_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int monitor_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int ac97_switch_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static void mute_ac97_ctl(struct oxygen *chip, unsigned int control)
static int ac97_switch_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int ac97_volume_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int ac97_volume_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int ac97_volume_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int mic_fmic_source_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int mic_fmic_source_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int mic_fmic_source_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int ac97_fp_rec_volume_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int ac97_fp_rec_volume_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int ac97_fp_rec_volume_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
#define AC97_SWITCH(xname, codec, index, bitnr, invert)
#define AC97_VOLUME(xname, codec, index, stereo)
static DECLARE_TLV_DB_SCALE(monitor_db_scale, -600, 600, 0);
static DECLARE_TLV_DB_SCALE(ac97_db_scale, -3450, 150, 0);
static DECLARE_TLV_DB_SCALE(ac97_rec_db_scale, 0, 150, 0);
static const struct snd_kcontrol_new controls[] = ;
static const struct snd_kcontrol_new spdif_input_controls[] = ;
static const struct  monitor_controls[] = ;
static const struct snd_kcontrol_new ac97_controls[] = ;
static const struct snd_kcontrol_new ac97_fp_controls[] = ;
static void oxygen_any_ctl_free(struct snd_kcontrol *ctl)
static int add_controls(struct oxygen *chip,
const struct snd_kcontrol_new controls[],
unsigned int count)
int oxygen_mixer_init(struct oxygen *chip)
