static struct snd_kcontrol *snd_ac97_find_mixer_ctl(struct snd_ac97 *ac97,
const char *name);
static int snd_ac97_add_vmaster(struct snd_ac97 *ac97, char *name,
const unsigned int *tlv, const char **slaves);
static int patch_build_controls(struct snd_ac97 * ac97, const struct snd_kcontrol_new *controls, int count)
static void reset_tlv(struct snd_ac97 *ac97, const char *name,
const unsigned int *tlv)
static int ac97_update_bits_page(struct snd_ac97 *ac97, unsigned short reg, unsigned short mask, unsigned short value, unsigned short page)
static int ac97_enum_text_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo,
const char **texts, unsigned int nums)
static int ac97_surround_jack_mode_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int ac97_surround_jack_mode_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int ac97_surround_jack_mode_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int ac97_channel_mode_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int ac97_channel_mode_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int ac97_channel_mode_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define AC97_SURROUND_JACK_MODE_CTL \
#define AC97_CHANNEL_MODE_CTL \
#define AC97_CHANNEL_MODE_4CH_CTL \
#define AC97_CHANNEL_MODE_8CH_CTL \
static inline int is_surround_on(struct snd_ac97 *ac97)
static inline int is_clfe_on(struct snd_ac97 *ac97)
static inline int is_shared_surrout(struct snd_ac97 *ac97)
static inline int is_shared_clfeout(struct snd_ac97 *ac97)
static inline int is_shared_linein(struct snd_ac97 *ac97)
static inline int is_shared_micin(struct snd_ac97 *ac97)
static inline int alc850_is_aux_back_surround(struct snd_ac97 *ac97)
static int snd_ac97_ymf7x3_info_speaker(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ymf7x3_get_speaker(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ymf7x3_put_speaker(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_ymf7x3_controls_speaker =
;
static int snd_ac97_ymf7x3_spdif_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ymf7x3_spdif_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ymf7x3_spdif_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int patch_yamaha_ymf7x3_3d(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_yamaha_ymf743_controls_spdif[3] =
;
static int patch_yamaha_ymf743_build_spdif(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_yamaha_ymf743_ops = ;
static int patch_yamaha_ymf743(struct snd_ac97 *ac97)
static int snd_ac97_ymf753_spdif_output_pin_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ymf753_spdif_output_pin_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ymf753_spdif_output_pin_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_ymf753_controls_spdif[3] = ;
static int patch_yamaha_ymf753_post_spdif(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_yamaha_ymf753_ops = ;
static int patch_yamaha_ymf753(struct snd_ac97 * ac97)
static const struct snd_kcontrol_new wm97xx_snd_ac97_controls[] = ;
static int patch_wolfson_wm9703_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_wolfson_wm9703_ops = ;
static int patch_wolfson03(struct snd_ac97 * ac97)
static const struct snd_kcontrol_new wm9704_snd_ac97_controls[] = ;
static int patch_wolfson_wm9704_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_wolfson_wm9704_ops = ;
static int patch_wolfson04(struct snd_ac97 * ac97)
static int patch_wolfson05(struct snd_ac97 * ac97)
static const char* wm9711_alc_select[] = ;
static const char* wm9711_alc_mix[] = ;
static const char* wm9711_out3_src[] = ;
static const char* wm9711_out3_lrsrc[] = ;
static const char* wm9711_rec_adc[] = ;
static const char* wm9711_base[] = ;
static const char* wm9711_rec_gain[] = ;
static const char* wm9711_mic[] = ;
static const char* wm9711_rec_sel[] =
;
static const char* wm9711_ng_type[] = ;
static const struct ac97_enum wm9711_enum[] = ;
static const struct snd_kcontrol_new wm9711_snd_ac97_controls[] = ;
static int patch_wolfson_wm9711_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_wolfson_wm9711_ops = ;
static int patch_wolfson11(struct snd_ac97 * ac97)
static const char* wm9713_mic_mixer[] = ;
static const char* wm9713_rec_mux[] = ;
static const char* wm9713_rec_src[] =
;
static const char* wm9713_rec_gain[] = ;
static const char* wm9713_alc_select[] = ;
static const char* wm9713_mono_pga[] = ;
static const char* wm9713_spk_pga[] =
;
static const char* wm9713_hp_pga[] = ;
static const char* wm9713_out3_pga[] = ;
static const char* wm9713_out4_pga[] = ;
static const char* wm9713_dac_inv[] =
;
static const char* wm9713_base[] = ;
static const char* wm9713_ng_type[] = ;
static const struct ac97_enum wm9713_enum[] = ;
static const struct snd_kcontrol_new wm13_snd_ac97_controls[] = ;
static const struct snd_kcontrol_new wm13_snd_ac97_controls_3d[] = ;
static int patch_wolfson_wm9713_3d (struct snd_ac97 * ac97)
static int patch_wolfson_wm9713_specific(struct snd_ac97 * ac97)
static void patch_wolfson_wm9713_suspend (struct snd_ac97 * ac97)
static void patch_wolfson_wm9713_resume (struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_wolfson_wm9713_ops = ;
static int patch_wolfson13(struct snd_ac97 * ac97)
static int patch_tritech_tr28028(struct snd_ac97 * ac97)
static int patch_sigmatel_stac9700_3d(struct snd_ac97 * ac97)
static int patch_sigmatel_stac9708_3d(struct snd_ac97 * ac97)
static const struct snd_kcontrol_new snd_ac97_sigmatel_4speaker =
AC97_SINGLE("Sigmatel 4-Speaker Stereo Playback Switch",
AC97_SIGMATEL_DAC2INVERT, 2, 1, 0);
static const struct snd_kcontrol_new snd_ac97_sigmatel_phaseinvert =
AC97_SINGLE("Surround Phase Inversion Playback Switch",
AC97_SIGMATEL_DAC2INVERT, 3, 1, 0);
static const struct snd_kcontrol_new snd_ac97_sigmatel_controls[] = ;
static int patch_sigmatel_stac97xx_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_sigmatel_stac9700_ops = ;
static int patch_sigmatel_stac9700(struct snd_ac97 * ac97)
static int snd_ac97_stac9708_put_bias(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_stac9708_bias_control = ;
static int patch_sigmatel_stac9708_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_sigmatel_stac9708_ops = ;
static int patch_sigmatel_stac9708(struct snd_ac97 * ac97)
static int patch_sigmatel_stac9721(struct snd_ac97 * ac97)
static int patch_sigmatel_stac9744(struct snd_ac97 * ac97)
static int patch_sigmatel_stac9756(struct snd_ac97 * ac97)
static int snd_ac97_stac9758_output_jack_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_stac9758_output_jack_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_stac9758_output_jack_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_stac9758_input_jack_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_stac9758_input_jack_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_stac9758_input_jack_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_stac9758_phonesel_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_stac9758_phonesel_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_stac9758_phonesel_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define STAC9758_OUTPUT_JACK(xname, shift) \
#define STAC9758_INPUT_JACK(xname, shift) \
static const struct snd_kcontrol_new snd_ac97_sigmatel_stac9758_controls[] = ;
static int patch_sigmatel_stac9758_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_sigmatel_stac9758_ops = ;
static int patch_sigmatel_stac9758(struct snd_ac97 * ac97)
static const struct snd_kcontrol_new snd_ac97_cirrus_controls_spdif[2] = ;
static int patch_cirrus_build_spdif(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_cirrus_ops = ;
static int patch_cirrus_spdif(struct snd_ac97 * ac97)
static int patch_cirrus_cs4299(struct snd_ac97 * ac97)
static const struct snd_kcontrol_new snd_ac97_conexant_controls_spdif[1] = ;
static int patch_conexant_build_spdif(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_conexant_ops = ;
static int patch_conexant(struct snd_ac97 * ac97)
static int patch_cx20551(struct snd_ac97 *ac97)
static void ad18xx_resume(struct snd_ac97 *ac97)
static void ad1888_resume(struct snd_ac97 *ac97)
static const struct snd_ac97_res_table ad1819_restbl[] = ;
static int patch_ad1819(struct snd_ac97 * ac97)
static unsigned short patch_ad1881_unchained(struct snd_ac97 * ac97, int idx, unsigned short mask)
static int patch_ad1881_chained1(struct snd_ac97 * ac97, int idx, unsigned short codec_bits)
static void patch_ad1881_chained(struct snd_ac97 * ac97, int unchained_idx, int cidx1, int cidx2)
static const struct snd_ac97_build_ops patch_ad1881_build_ops = ;
static int patch_ad1881(struct snd_ac97 * ac97)
static const struct snd_kcontrol_new snd_ac97_controls_ad1885[] = ;
static const DECLARE_TLV_DB_SCALE(db_scale_6bit_6db_max, -8850, 150, 0);
static int patch_ad1885_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_ad1885_build_ops = ;
static int patch_ad1885(struct snd_ac97 * ac97)
static int patch_ad1886_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_ad1886_build_ops = ;
static int patch_ad1886(struct snd_ac97 * ac97)
#define AC97_AD198X_MBC		0x0003
#define AC97_AD198X_MBC_20	0x0000
#define AC97_AD198X_MBC_10	0x0001
#define AC97_AD198X_MBC_30	0x0002
#define AC97_AD198X_VREFD	0x0004
#define AC97_AD198X_VREFH	0x0008
#define AC97_AD198X_VREF_0	0x000c
#define AC97_AD198X_VREF_MASK	(AC97_AD198X_VREFH | AC97_AD198X_VREFD)
#define AC97_AD198X_VREF_SHIFT	2
#define AC97_AD198X_SRU		0x0010
#define AC97_AD198X_LOSEL	0x0020
#define AC97_AD198X_2MIC	0x0040
#define AC97_AD198X_SPRD	0x0080
#define AC97_AD198X_DMIX0	0x0100
#define AC97_AD198X_DMIX1	0x0200
#define AC97_AD198X_HPSEL	0x0400
#define AC97_AD198X_CLDIS	0x0800
#define AC97_AD198X_LODIS	0x1000
#define AC97_AD198X_MSPLT	0x2000
#define AC97_AD198X_AC97NC	0x4000
#define AC97_AD198X_DACZ	0x8000
#define AC97_AD1986_MBC		0x0003
#define AC97_AD1986_MBC_20	0x0000
#define AC97_AD1986_MBC_10	0x0001
#define AC97_AD1986_MBC_30	0x0002
#define AC97_AD1986_LISEL0	0x0004
#define AC97_AD1986_LISEL1	0x0008
#define AC97_AD1986_LISEL_MASK	(AC97_AD1986_LISEL1 | AC97_AD1986_LISEL0)
#define AC97_AD1986_LISEL_LI	0x0000
#define AC97_AD1986_LISEL_SURR	0x0004
#define AC97_AD1986_LISEL_MIC	0x0008
#define AC97_AD1986_SRU		0x0010
#define AC97_AD1986_SOSEL	0x0020
#define AC97_AD1986_2MIC	0x0040
#define AC97_AD1986_SPRD	0x0080
#define AC97_AD1986_DMIX0	0x0100
#define AC97_AD1986_DMIX1	0x0200
#define AC97_AD1986_CLDIS	0x0800
#define AC97_AD1986_SODIS	0x1000
#define AC97_AD1986_MSPLT	0x2000
#define AC97_AD1986_AC97NC	0x4000
#define AC97_AD1986_DACZ	0x8000
#define AC97_AD_MISC2		0x70
#define AC97_AD1986_CVREF0	0x0004
#define AC97_AD1986_CVREF1	0x0008
#define AC97_AD1986_CVREF2	0x0010
#define AC97_AD1986_CVREF_MASK \
(AC97_AD1986_CVREF2 | AC97_AD1986_CVREF1 | AC97_AD1986_CVREF0)
#define AC97_AD1986_JSMAP	0x0020
#define AC97_AD1986_MMDIS	0x0080
#define AC97_AD1986_MVREF0	0x0400
#define AC97_AD1986_MVREF1	0x0800
#define AC97_AD1986_MVREF2	0x1000
#define AC97_AD1986_MVREF_MASK \
(AC97_AD1986_MVREF2 | AC97_AD1986_MVREF1 | AC97_AD1986_MVREF0)
#define AC97_AD_MISC3		0x7a
#define AC97_AD1986_MMIX	0x0004
#define AC97_AD1986_GPO		0x0008
#define AC97_AD1986_LOHPEN	0x0010
#define AC97_AD1986_LVREF0	0x0100
#define AC97_AD1986_LVREF1	0x0200
#define AC97_AD1986_LVREF2	0x0400
#define AC97_AD1986_LVREF_MASK \
(AC97_AD1986_LVREF2 | AC97_AD1986_LVREF1 | AC97_AD1986_LVREF0)
#define AC97_AD1986_JSINVA	0x0800
#define AC97_AD1986_LOSEL	0x1000
#define AC97_AD1986_HPSEL0	0x2000
#define AC97_AD1986_HPSEL1	0x4000
#define AC97_AD1986_JSINVB	0x8000
#define AC97_AD1986_OMS0	0x0100
#define AC97_AD1986_OMS1	0x0200
#define AC97_AD1986_OMS2	0x0400
#define AC97_AD1986_OMS_MASK \
(AC97_AD1986_OMS2 | AC97_AD1986_OMS1 | AC97_AD1986_OMS0)
#define AC97_AD1986_OMS_M	0x0000
#define AC97_AD1986_OMS_L	0x0100
#define AC97_AD1986_OMS_C	0x0200
#define AC97_AD1986_OMS_MC	0x0400
#define AC97_AD1986_OMS_ML	0x0500
#define AC97_AD1986_OMS_LC	0x0600
#define AC97_AD1986_OMS_MLC	0x0700
static int snd_ac97_ad198x_spdif_source_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ad198x_spdif_source_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad198x_spdif_source_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_ad198x_spdif_source = ;
static int patch_ad198x_post_spdif(struct snd_ac97 * ac97)
static const struct snd_kcontrol_new snd_ac97_ad1981x_jack_sense[] = ;
static unsigned int ad1981_jacks_blacklist[] = ;
static int check_list(struct snd_ac97 *ac97, const unsigned int *list)
static int patch_ad1981a_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_ad1981a_build_ops = ;
static unsigned int ad1981_jacks_whitelist[] = ;
static void check_ad1981_hp_jack_sense(struct snd_ac97 *ac97)
static int patch_ad1981a(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_ad198x_2cmic =
AC97_SINGLE("Stereo Mic", AC97_AD_MISC, 6, 1, 0);
static int patch_ad1981b_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_ad1981b_build_ops = ;
static int patch_ad1981b(struct snd_ac97 *ac97)
#define snd_ac97_ad1888_lohpsel_info	snd_ctl_boolean_mono_info
static int snd_ac97_ad1888_lohpsel_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1888_lohpsel_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1888_downmix_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ad1888_downmix_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1888_downmix_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static void ad1888_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_ad1888_controls[] = ;
static int patch_ad1888_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_ad1888_build_ops = ;
static int patch_ad1888(struct snd_ac97 * ac97)
static int patch_ad1980_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_ad1980_build_ops = ;
static int patch_ad1980(struct snd_ac97 * ac97)
static int snd_ac97_ad1985_vrefout_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ad1985_vrefout_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1985_vrefout_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_ad1985_controls[] = ;
static void ad1985_update_jacks(struct snd_ac97 *ac97)
static int patch_ad1985_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_ad1985_build_ops = ;
static int patch_ad1985(struct snd_ac97 * ac97)
#define snd_ac97_ad1986_bool_info	snd_ctl_boolean_mono_info
static int snd_ac97_ad1986_lososel_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1986_lososel_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1986_spread_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1986_spread_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1986_miclisel_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1986_miclisel_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1986_vrefout_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad1986_vrefout_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_ad1986_controls[] = ;
static void ad1986_update_jacks(struct snd_ac97 *ac97)
static int patch_ad1986_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_ad1986_build_ops = ;
static int patch_ad1986(struct snd_ac97 * ac97)
static int patch_alc203(struct snd_ac97 *ac97)
static void alc650_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_controls_alc650[] = ;
static const struct snd_kcontrol_new snd_ac97_spdif_controls_alc650[] = ;
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_3db_max, -4350, 150, 0);
static int patch_alc650_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_alc650_ops = ;
static int patch_alc650(struct snd_ac97 * ac97)
static void alc655_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_controls_alc655[] = ;
static int alc655_iec958_route_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int alc655_iec958_route_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int alc655_iec958_route_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_spdif_controls_alc655[] = ;
static int patch_alc655_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_alc655_ops = ;
static int patch_alc655(struct snd_ac97 * ac97)
#define AC97_ALC850_JACK_SELECT	0x76
#define AC97_ALC850_MISC1	0x7a
#define AC97_ALC850_MULTICH    0x6a
static void alc850_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_controls_alc850[] = ;
static int patch_alc850_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_alc850_ops = ;
static int patch_alc850(struct snd_ac97 *ac97)
static int patch_aztech_azf3328_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_aztech_azf3328_ops = ;
static int patch_aztech_azf3328(struct snd_ac97 *ac97)
static void cm9738_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_cm9738_controls[] = ;
static int patch_cm9738_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_cm9738_ops = ;
static int patch_cm9738(struct snd_ac97 * ac97)
static int snd_ac97_cmedia_spdif_playback_source_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_cmedia_spdif_playback_source_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_cmedia_spdif_playback_source_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_cm9739_controls_spdif[] = ;
static void cm9739_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_cm9739_controls[] = ;
static int patch_cm9739_specific(struct snd_ac97 * ac97)
static int patch_cm9739_post_spdif(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_cm9739_ops = ;
static int patch_cm9739(struct snd_ac97 * ac97)
#define AC97_CM9761_MULTI_CHAN	0x64
#define AC97_CM9761_FUNC	0x66
#define AC97_CM9761_SPDIF_CTRL	0x6c
static void cm9761_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_cm9761_controls[] = ;
static int cm9761_spdif_out_source_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int cm9761_spdif_out_source_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int cm9761_spdif_out_source_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const char *cm9761_dac_clock[] = ;
static const struct ac97_enum cm9761_dac_clock_enum =
AC97_ENUM_SINGLE(AC97_CM9761_SPDIF_CTRL, 9, 3, cm9761_dac_clock);
static const struct snd_kcontrol_new snd_ac97_cm9761_controls_spdif[] = ;
static int patch_cm9761_post_spdif(struct snd_ac97 * ac97)
static int patch_cm9761_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_cm9761_ops = ;
static int patch_cm9761(struct snd_ac97 *ac97)
#define AC97_CM9780_SIDE	0x60
#define AC97_CM9780_JACK	0x62
#define AC97_CM9780_MIXER	0x64
#define AC97_CM9780_MULTI_CHAN	0x66
#define AC97_CM9780_SPDIF	0x6c
static const char *cm9780_ch_select[] = ;
static const struct ac97_enum cm9780_ch_select_enum =
AC97_ENUM_SINGLE(AC97_CM9780_MULTI_CHAN, 6, 4, cm9780_ch_select);
static const struct snd_kcontrol_new cm9780_controls[] = ;
static int patch_cm9780_specific(struct snd_ac97 *ac97)
static const struct snd_ac97_build_ops patch_cm9780_ops = ;
static int patch_cm9780(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_controls_vt1616[] = ;
static const char *slave_vols_vt1616[] = ;
static const char *slave_sws_vt1616[] = ;
static struct snd_kcontrol *snd_ac97_find_mixer_ctl(struct snd_ac97 *ac97,
const char *name)
static int snd_ac97_add_vmaster(struct snd_ac97 *ac97, char *name,
const unsigned int *tlv, const char **slaves)
static int patch_vt1616_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_vt1616_ops = ;
static int patch_vt1616(struct snd_ac97 * ac97)
static int snd_ac97_vt1617a_smart51_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_vt1617a_smart51_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_vt1617a_smart51_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_controls_vt1617a[] = ;
static int patch_vt1617a(struct snd_ac97 * ac97)
struct vt1618_uaj_item ;
static struct vt1618_uaj_item vt1618_uaj[3] = ;
static int snd_ac97_vt1618_UAJ_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_vt1618_UAJ_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_vt1618_UAJ_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_vt1618_aux_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_vt1618_aux_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_vt1618_aux_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_controls_vt1618[] = ;
static int patch_vt1618(struct snd_ac97 *ac97)
static void it2646_update_jacks(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_controls_it2646[] = ;
static const struct snd_kcontrol_new snd_ac97_spdif_controls_it2646[] = ;
static int patch_it2646_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_it2646_ops = ;
static int patch_it2646(struct snd_ac97 * ac97)
#define AC97_SI3036_CHIP_ID     0x5a
#define AC97_SI3036_LINE_CFG    0x5c
static const struct snd_kcontrol_new snd_ac97_controls_si3036[] = ;
static int patch_si3036_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_si3036_ops = ;
static int mpatch_si3036(struct snd_ac97 * ac97)
static struct snd_ac97_res_table lm4550_restbl[] = ;
static int patch_lm4550(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_controls_ucb1400[] = ;
static int patch_ucb1400_specific(struct snd_ac97 * ac97)
static const struct snd_ac97_build_ops patch_ucb1400_ops = ;
static int patch_ucb1400(struct snd_ac97 * ac97)
