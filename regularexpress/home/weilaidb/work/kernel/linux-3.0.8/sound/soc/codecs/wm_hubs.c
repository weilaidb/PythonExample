const DECLARE_TLV_DB_SCALE(wm_hubs_spkmix_tlv, -300, 300, 0);
EXPORT_SYMBOL_GPL(wm_hubs_spkmix_tlv);
static const DECLARE_TLV_DB_SCALE(inpga_tlv, -1650, 150, 0);
static const DECLARE_TLV_DB_SCALE(inmix_sw_tlv, 0, 3000, 0);
static const DECLARE_TLV_DB_SCALE(inmix_tlv, -1500, 300, 1);
static const DECLARE_TLV_DB_SCALE(earpiece_tlv, -600, 600, 0);
static const DECLARE_TLV_DB_SCALE(outmix_tlv, -2100, 300, 0);
static const DECLARE_TLV_DB_SCALE(spkmixout_tlv, -1800, 600, 1);
static const DECLARE_TLV_DB_SCALE(outpga_tlv, -5700, 100, 0);
static const unsigned int spkboost_tlv[] = ;
static const DECLARE_TLV_DB_SCALE(line_tlv, -600, 600, 0);
static const char *speaker_ref_text[] = ;
static const struct soc_enum speaker_ref =
SOC_ENUM_SINGLE(WM8993_SPEAKER_MIXER, 8, 2, speaker_ref_text);
static const char *speaker_mode_text[] = ;
static const struct soc_enum speaker_mode =
SOC_ENUM_SINGLE(WM8993_SPKMIXR_ATTENUATION, 8, 2, speaker_mode_text);
static void wait_for_dc_servo(struct snd_soc_codec *codec, unsigned int op)
static void calibrate_dc_servo(struct snd_soc_codec *codec)
static int wm8993_put_dc_servo(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new analogue_snd_controls[] = ;
static int hp_supply_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int earpiece_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *control, int event)
static const struct snd_kcontrol_new in1l_pga[] = ;
static const struct snd_kcontrol_new in1r_pga[] = ;
static const struct snd_kcontrol_new in2l_pga[] = ;
static const struct snd_kcontrol_new in2r_pga[] = ;
static const struct snd_kcontrol_new mixinl[] = ;
static const struct snd_kcontrol_new mixinr[] = ;
static const struct snd_kcontrol_new left_output_mixer[] = ;
static const struct snd_kcontrol_new right_output_mixer[] = ;
static const struct snd_kcontrol_new earpiece_mixer[] = ;
static const struct snd_kcontrol_new left_speaker_boost[] = ;
static const struct snd_kcontrol_new right_speaker_boost[] = ;
static const struct snd_kcontrol_new line1_mix[] = ;
static const struct snd_kcontrol_new line1n_mix[] = ;
static const struct snd_kcontrol_new line1p_mix[] = ;
static const struct snd_kcontrol_new line2_mix[] = ;
static const struct snd_kcontrol_new line2n_mix[] = ;
static const struct snd_kcontrol_new line2p_mix[] = ;
static const struct snd_soc_dapm_widget analogue_dapm_widgets[] = ;
static const struct snd_soc_dapm_route analogue_routes[] = ;
static const struct snd_soc_dapm_route lineout1_diff_routes[] = ;
static const struct snd_soc_dapm_route lineout1_se_routes[] = ;
static const struct snd_soc_dapm_route lineout2_diff_routes[] = ;
static const struct snd_soc_dapm_route lineout2_se_routes[] = ;
int wm_hubs_add_analogue_controls(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(wm_hubs_add_analogue_controls);
int wm_hubs_add_analogue_routes(struct snd_soc_codec *codec,
int lineout1_diff, int lineout2_diff)
EXPORT_SYMBOL_GPL(wm_hubs_add_analogue_routes);
int wm_hubs_handle_analogue_pdata(struct snd_soc_codec *codec,
int lineout1_diff, int lineout2_diff,
int lineout1fb, int lineout2fb,
int jd_scthr, int jd_thr, int micbias1_lvl,
int micbias2_lvl)
EXPORT_SYMBOL_GPL(wm_hubs_handle_analogue_pdata);
MODULE_DESCRIPTION("Shared support for Wolfson hubs products");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
