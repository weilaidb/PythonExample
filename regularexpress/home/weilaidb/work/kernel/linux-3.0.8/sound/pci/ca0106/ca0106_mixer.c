static void ca0106_spdif_enable(struct snd_ca0106 *emu)
static void ca0106_set_capture_source(struct snd_ca0106 *emu)
static void ca0106_set_i2c_capture_source(struct snd_ca0106 *emu,
unsigned int val, int force)
static void ca0106_set_capture_mic_line_in(struct snd_ca0106 *emu)
static void ca0106_set_spdif_bits(struct snd_ca0106 *emu, int idx)
static const DECLARE_TLV_DB_SCALE(snd_ca0106_db_scale1, -5175, 25, 1);
static const DECLARE_TLV_DB_SCALE(snd_ca0106_db_scale2, -10350, 50, 1);
#define snd_ca0106_shared_spdif_info	snd_ctl_boolean_mono_info
static int snd_ca0106_shared_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_shared_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ca0106_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_i2c_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ca0106_i2c_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_i2c_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_capture_line_in_side_out_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ca0106_capture_mic_line_in_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ca0106_capture_mic_line_in_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_capture_mic_line_in_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ca0106_capture_mic_line_in __devinitdata =
;
static struct snd_kcontrol_new snd_ca0106_capture_line_in_side_out __devinitdata =
;
static int snd_ca0106_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static void decode_spdif_bits(unsigned char *status, unsigned int bits)
static int snd_ca0106_spdif_get_default(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_spdif_get_stream(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_spdif_get_mask(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static unsigned int encode_spdif_bits(unsigned char *status)
static int snd_ca0106_spdif_put_default(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_spdif_put_stream(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ca0106_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_i2c_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ca0106_i2c_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ca0106_i2c_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define spi_mute_info	snd_ctl_boolean_mono_info
static int spi_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int spi_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CA_VOLUME(xname,chid,reg) \
static struct snd_kcontrol_new snd_ca0106_volume_ctls[] __devinitdata = ;
#define I2C_VOLUME(xname,chid) \
static struct snd_kcontrol_new snd_ca0106_volume_i2c_adc_ctls[] __devinitdata = ;
static const int spi_dmute_reg[] = ;
static const int spi_dmute_bit[] = ;
static struct snd_kcontrol_new __devinit
snd_ca0106_volume_spi_dac_ctl(struct snd_ca0106_details *details,
int channel_id)
static int __devinit remove_ctl(struct snd_card *card, const char *name)
static struct snd_kcontrol __devinit *ctl_find(struct snd_card *card, const char *name)
static int __devinit rename_ctl(struct snd_card *card, const char *src, const char *dst)
#define ADD_CTLS(emu, ctls)						\
do  while (0)
static __devinitdata
DECLARE_TLV_DB_SCALE(snd_ca0106_master_db_scale, -6375, 25, 1);
static char *slave_vols[] __devinitdata = ;
static char *slave_sws[] __devinitdata = ;
static void __devinit add_slaves(struct snd_card *card,
struct snd_kcontrol *master, char **list)
int __devinit snd_ca0106_mixer(struct snd_ca0106 *emu)
struct ca0106_vol_tbl ;
static struct ca0106_vol_tbl saved_volumes[NUM_SAVED_VOLUMES] = ;
void snd_ca0106_mixer_suspend(struct snd_ca0106 *chip)
void snd_ca0106_mixer_resume(struct snd_ca0106  *chip)
