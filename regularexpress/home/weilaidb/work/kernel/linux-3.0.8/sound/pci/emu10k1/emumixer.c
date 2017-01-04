#define AC97_ID_STAC9758	0x83847658
static const DECLARE_TLV_DB_SCALE(snd_audigy_db_scale2, -10350, 50, 1);
static int snd_emu10k1_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_spdif_get_mask(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static char *emu1010_src_texts[] = ;
static char *emu1616_src_texts[] = ;
static unsigned int emu1010_src_regs[] = ;
static unsigned int emu1616_src_regs[] = ;
static unsigned int emu1010_output_dst[] = ;
static unsigned int emu1616_output_dst[] = ;
static unsigned int emu1010_input_dst[] = ;
static int snd_emu1010_input_output_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_emu1010_output_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu1010_output_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu1010_input_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu1010_input_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define EMU1010_SOURCE_OUTPUT(xname,chid) \
static struct snd_kcontrol_new snd_emu1010_output_enum_ctls[] __devinitdata = ;
static struct snd_kcontrol_new snd_emu1616_output_enum_ctls[] __devinitdata = ;
#define EMU1010_SOURCE_INPUT(xname,chid) \
static struct snd_kcontrol_new snd_emu1010_input_enum_ctls[] __devinitdata = ;
#define snd_emu1010_adc_pads_info	snd_ctl_boolean_mono_info
static int snd_emu1010_adc_pads_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_emu1010_adc_pads_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define EMU1010_ADC_PADS(xname,chid) \
static struct snd_kcontrol_new snd_emu1010_adc_pads[] __devinitdata = ;
#define snd_emu1010_dac_pads_info	snd_ctl_boolean_mono_info
static int snd_emu1010_dac_pads_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_emu1010_dac_pads_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define EMU1010_DAC_PADS(xname,chid) \
static struct snd_kcontrol_new snd_emu1010_dac_pads[] __devinitdata = ;
static int snd_emu1010_internal_clock_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_emu1010_internal_clock_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu1010_internal_clock_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu1010_internal_clock =
;
static int snd_audigy_i2c_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_audigy_i2c_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_audigy_i2c_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_audigy_i2c_capture_source =
;
static int snd_audigy_i2c_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_audigy_i2c_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_audigy_i2c_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define I2C_VOLUME(xname,chid) \
static struct snd_kcontrol_new snd_audigy_i2c_volume_ctls[] __devinitdata = ;
static int snd_emu10k1_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_spdif_mask_control =
;
static struct snd_kcontrol_new snd_emu10k1_spdif_control =
;
static void update_emu10k1_fxrt(struct snd_emu10k1 *emu, int voice, unsigned char *route)
static void update_emu10k1_send_volume(struct snd_emu10k1 *emu, int voice, unsigned char *volume)
static int snd_emu10k1_send_routing_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_send_routing_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_send_routing_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_send_routing_control =
;
static int snd_emu10k1_send_volume_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_send_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_send_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_send_volume_control =
;
static int snd_emu10k1_attn_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_attn_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_attn_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_attn_control =
;
static int snd_emu10k1_efx_send_routing_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_efx_send_routing_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_efx_send_routing_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_efx_send_routing_control =
;
static int snd_emu10k1_efx_send_volume_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_efx_send_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_efx_send_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_efx_send_volume_control =
;
static int snd_emu10k1_efx_attn_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_emu10k1_efx_attn_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_efx_attn_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_efx_attn_control =
;
#define snd_emu10k1_shared_spdif_info	snd_ctl_boolean_mono_info
static int snd_emu10k1_shared_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_emu10k1_shared_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_emu10k1_shared_spdif __devinitdata =
;
static struct snd_kcontrol_new snd_audigy_shared_spdif __devinitdata =
;
#define snd_audigy_capture_boost_info	snd_ctl_boolean_mono_info
static int snd_audigy_capture_boost_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_audigy_capture_boost_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_audigy_capture_boost __devinitdata =
;
static void snd_emu10k1_mixer_free_ac97(struct snd_ac97 *ac97)
static int remove_ctl(struct snd_card *card, const char *name)
static struct snd_kcontrol *ctl_find(struct snd_card *card, const char *name)
static int rename_ctl(struct snd_card *card, const char *src, const char *dst)
int __devinit snd_emu10k1_mixer(struct snd_emu10k1 *emu,
int pcm_device, int multi_device)
