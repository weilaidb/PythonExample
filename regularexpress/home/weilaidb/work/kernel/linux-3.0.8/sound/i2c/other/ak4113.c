MODULE_AUTHOR("Pavel Hofman <pavel.hofman@ivitera.com>");
MODULE_DESCRIPTION("AK4113 IEC958 (S/PDIF) receiver by Asahi Kasei");
MODULE_LICENSE("GPL");
#define AK4113_ADDR			0x00
static void ak4113_stats(struct work_struct *work);
static void ak4113_init_regs(struct ak4113 *chip);
static void reg_write(struct ak4113 *ak4113, unsigned char reg,
unsigned char val)
static inline unsigned char reg_read(struct ak4113 *ak4113, unsigned char reg)
static void snd_ak4113_free(struct ak4113 *chip)
static int snd_ak4113_dev_free(struct snd_device *device)
int snd_ak4113_create(struct snd_card *card, ak4113_read_t *read,
ak4113_write_t *write, const unsigned char *pgm,
void *private_data, struct ak4113 **r_ak4113)
EXPORT_SYMBOL_GPL(snd_ak4113_create);
void snd_ak4113_reg_write(struct ak4113 *chip, unsigned char reg,
unsigned char mask, unsigned char val)
EXPORT_SYMBOL_GPL(snd_ak4113_reg_write);
static void ak4113_init_regs(struct ak4113 *chip)
void snd_ak4113_reinit(struct ak4113 *chip)
EXPORT_SYMBOL_GPL(snd_ak4113_reinit);
static unsigned int external_rate(unsigned char rcs1)
static int snd_ak4113_in_error_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4113_in_error_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_ak4113_in_bit_info		snd_ctl_boolean_mono_info
static int snd_ak4113_in_bit_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4113_rx_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4113_rx_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4113_rx_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4113_rate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4113_rate_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4113_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4113_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4113_spdif_mask_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4113_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4113_spdif_pinfo(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4113_spdif_pget(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4113_spdif_qinfo(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4113_spdif_qget(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ak4113_iec958_controls[] = ;
static void snd_ak4113_proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ak4113_proc_init(struct ak4113 *ak4113)
int snd_ak4113_build(struct ak4113 *ak4113,
struct snd_pcm_substream *cap_substream)
EXPORT_SYMBOL_GPL(snd_ak4113_build);
int snd_ak4113_external_rate(struct ak4113 *ak4113)
EXPORT_SYMBOL_GPL(snd_ak4113_external_rate);
int snd_ak4113_check_rate_and_errors(struct ak4113 *ak4113, unsigned int flags)
EXPORT_SYMBOL_GPL(snd_ak4113_check_rate_and_errors);
static void ak4113_stats(struct work_struct *work)
