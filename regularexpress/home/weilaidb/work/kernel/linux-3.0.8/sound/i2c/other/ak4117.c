MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("AK4117 IEC958 (S/PDIF) receiver by Asahi Kasei");
MODULE_LICENSE("GPL");
#define AK4117_ADDR			0x00
static void snd_ak4117_timer(unsigned long data);
static void reg_write(struct ak4117 *ak4117, unsigned char reg, unsigned char val)
static inline unsigned char reg_read(struct ak4117 *ak4117, unsigned char reg)
static void snd_ak4117_free(struct ak4117 *chip)
static int snd_ak4117_dev_free(struct snd_device *device)
int snd_ak4117_create(struct snd_card *card, ak4117_read_t *read, ak4117_write_t *write,
const unsigned char pgm[5], void *private_data, struct ak4117 **r_ak4117)
void snd_ak4117_reg_write(struct ak4117 *chip, unsigned char reg, unsigned char mask, unsigned char val)
void snd_ak4117_reinit(struct ak4117 *chip)
static unsigned int external_rate(unsigned char rcs1)
static int snd_ak4117_in_error_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4117_in_error_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_ak4117_in_bit_info		snd_ctl_boolean_mono_info
static int snd_ak4117_in_bit_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4117_rx_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4117_rx_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4117_rx_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4117_rate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4117_rate_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4117_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4117_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4117_spdif_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4117_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4117_spdif_pinfo(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4117_spdif_pget(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4117_spdif_qinfo(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4117_spdif_qget(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ak4117_iec958_controls[] = ;
int snd_ak4117_build(struct ak4117 *ak4117, struct snd_pcm_substream *cap_substream)
int snd_ak4117_external_rate(struct ak4117 *ak4117)
int snd_ak4117_check_rate_and_errors(struct ak4117 *ak4117, unsigned int flags)
static void snd_ak4117_timer(unsigned long data)
EXPORT_SYMBOL(snd_ak4117_create);
EXPORT_SYMBOL(snd_ak4117_reg_write);
EXPORT_SYMBOL(snd_ak4117_reinit);
EXPORT_SYMBOL(snd_ak4117_build);
EXPORT_SYMBOL(snd_ak4117_external_rate);
EXPORT_SYMBOL(snd_ak4117_check_rate_and_errors);
