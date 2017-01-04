MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("AK4114 IEC958 (S/PDIF) receiver by Asahi Kasei");
MODULE_LICENSE("GPL");
#define AK4114_ADDR			0x00
static void ak4114_stats(struct work_struct *work);
static void ak4114_init_regs(struct ak4114 *chip);
static void reg_write(struct ak4114 *ak4114, unsigned char reg, unsigned char val)
static inline unsigned char reg_read(struct ak4114 *ak4114, unsigned char reg)
static void snd_ak4114_free(struct ak4114 *chip)
static int snd_ak4114_dev_free(struct snd_device *device)
int snd_ak4114_create(struct snd_card *card,
ak4114_read_t *read, ak4114_write_t *write,
const unsigned char pgm[7], const unsigned char txcsb[5],
void *private_data, struct ak4114 **r_ak4114)
void snd_ak4114_reg_write(struct ak4114 *chip, unsigned char reg, unsigned char mask, unsigned char val)
static void ak4114_init_regs(struct ak4114 *chip)
void snd_ak4114_reinit(struct ak4114 *chip)
static unsigned int external_rate(unsigned char rcs1)
static int snd_ak4114_in_error_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4114_in_error_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_ak4114_in_bit_info		snd_ctl_boolean_mono_info
static int snd_ak4114_in_bit_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4114_rate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ak4114_rate_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4114_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4114_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4114_spdif_playback_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4114_spdif_playback_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4114_spdif_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4114_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4114_spdif_pinfo(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4114_spdif_pget(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ak4114_spdif_qinfo(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ak4114_spdif_qget(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ak4114_iec958_controls[] = ;
static void snd_ak4114_proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ak4114_proc_init(struct ak4114 *ak4114)
int snd_ak4114_build(struct ak4114 *ak4114,
struct snd_pcm_substream *ply_substream,
struct snd_pcm_substream *cap_substream)
static void ak4114_notify(struct ak4114 *ak4114,
unsigned char rcs0, unsigned char rcs1,
unsigned char c0, unsigned char c1)
int snd_ak4114_external_rate(struct ak4114 *ak4114)
int snd_ak4114_check_rate_and_errors(struct ak4114 *ak4114, unsigned int flags)
static void ak4114_stats(struct work_struct *work)
EXPORT_SYMBOL(snd_ak4114_create);
EXPORT_SYMBOL(snd_ak4114_reg_write);
EXPORT_SYMBOL(snd_ak4114_reinit);
EXPORT_SYMBOL(snd_ak4114_build);
EXPORT_SYMBOL(snd_ak4114_external_rate);
EXPORT_SYMBOL(snd_ak4114_check_rate_and_errors);
