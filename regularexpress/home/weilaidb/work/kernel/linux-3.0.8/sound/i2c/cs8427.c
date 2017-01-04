static void snd_cs8427_reset(struct snd_i2c_device *cs8427);
MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("IEC958 (S/PDIF) receiver & transmitter by Cirrus Logic");
MODULE_LICENSE("GPL");
#define CS8427_ADDR			(0x20>>1)
struct cs8427_stream ;
struct cs8427 ;
int snd_cs8427_reg_write(struct snd_i2c_device *device, unsigned char reg,
unsigned char val)
EXPORT_SYMBOL(snd_cs8427_reg_write);
static int snd_cs8427_reg_read(struct snd_i2c_device *device, unsigned char reg)
static int snd_cs8427_select_corudata(struct snd_i2c_device *device, int udata)
static int snd_cs8427_send_corudata(struct snd_i2c_device *device,
int udata,
unsigned char *ndata,
int count)
static void snd_cs8427_free(struct snd_i2c_device *device)
int snd_cs8427_create(struct snd_i2c_bus *bus,
unsigned char addr,
unsigned int reset_timeout,
struct snd_i2c_device **r_cs8427)
EXPORT_SYMBOL(snd_cs8427_create);
static void snd_cs8427_reset(struct snd_i2c_device *cs8427)
static int snd_cs8427_in_status_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs8427_in_status_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs8427_qsubcode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs8427_qsubcode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs8427_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs8427_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs8427_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs8427_spdif_mask_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs8427_spdif_mask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_cs8427_iec958_controls[] = ;
int snd_cs8427_iec958_build(struct snd_i2c_device *cs8427,
struct snd_pcm_substream *play_substream,
struct snd_pcm_substream *cap_substream)
EXPORT_SYMBOL(snd_cs8427_iec958_build);
int snd_cs8427_iec958_active(struct snd_i2c_device *cs8427, int active)
EXPORT_SYMBOL(snd_cs8427_iec958_active);
int snd_cs8427_iec958_pcm(struct snd_i2c_device *cs8427, unsigned int rate)
EXPORT_SYMBOL(snd_cs8427_iec958_pcm);
static int __init alsa_cs8427_module_init(void)
static void __exit alsa_cs8427_module_exit(void)
module_init(alsa_cs8427_module_init)
module_exit(alsa_cs8427_module_exit)
