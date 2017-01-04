#define SND_CS8403
static void ap_cs8427_write_byte(struct snd_ice1712 *ice, unsigned char data, unsigned char tmp)
static unsigned char ap_cs8427_read_byte(struct snd_ice1712 *ice, unsigned char tmp)
static unsigned char ap_cs8427_codec_select(struct snd_ice1712 *ice)
static void ap_cs8427_codec_deassert(struct snd_ice1712 *ice, unsigned char tmp)
static int ap_cs8427_sendbytes(struct snd_i2c_device *device, unsigned char *bytes, int count)
static int ap_cs8427_readbytes(struct snd_i2c_device *device, unsigned char *bytes, int count)
static int ap_cs8427_probeaddr(struct snd_i2c_bus *bus, unsigned short addr)
static struct snd_i2c_ops ap_cs8427_i2c_ops = ;
static void snd_ice1712_delta_cs8403_spdif_write(struct snd_ice1712 *ice, unsigned char bits)
static void delta_spdif_default_get(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static int delta_spdif_default_put(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static void delta_spdif_stream_get(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static int delta_spdif_stream_put(struct snd_ice1712 *ice, struct snd_ctl_elem_value *ucontrol)
static void delta_ak4524_lock(struct snd_akm4xxx *ak, int chip)
static void delta1010lt_ak4524_lock(struct snd_akm4xxx *ak, int chip)
static void delta66e_ak4524_lock(struct snd_akm4xxx *ak, int chip)
static void vx442_ak4524_lock(struct snd_akm4xxx *ak, int chip)
static void delta_1010_set_rate_val(struct snd_ice1712 *ice, unsigned int rate)
static void delta_ak4524_set_rate_val(struct snd_akm4xxx *ak, unsigned int rate)
static void vx442_ak4524_set_rate_val(struct snd_akm4xxx *ak, unsigned int rate)
static void delta_open_spdif(struct snd_ice1712 *ice, struct snd_pcm_substream *substream)
static void delta_setup_spdif(struct snd_ice1712 *ice, int rate)
#define snd_ice1712_delta1010lt_wordclock_status_info \
snd_ctl_boolean_mono_info
static int snd_ice1712_delta1010lt_wordclock_status_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_ice1712_delta1010lt_wordclock_status __devinitdata =
;
static struct snd_akm4xxx akm_audiophile __devinitdata = ;
static struct snd_ak4xxx_private akm_audiophile_priv __devinitdata = ;
static struct snd_akm4xxx akm_delta410 __devinitdata = ;
static struct snd_ak4xxx_private akm_delta410_priv __devinitdata = ;
static struct snd_akm4xxx akm_delta1010lt __devinitdata = ;
static struct snd_ak4xxx_private akm_delta1010lt_priv __devinitdata = ;
static struct snd_akm4xxx akm_delta66e __devinitdata = ;
static struct snd_ak4xxx_private akm_delta66e_priv __devinitdata = ;
static struct snd_akm4xxx akm_delta44 __devinitdata = ;
static struct snd_ak4xxx_private akm_delta44_priv __devinitdata = ;
static struct snd_akm4xxx akm_vx442 __devinitdata = ;
static struct snd_ak4xxx_private akm_vx442_priv __devinitdata = ;
static int __devinit snd_ice1712_delta_init(struct snd_ice1712 *ice)
static struct snd_kcontrol_new snd_ice1712_delta1010_wordclock_select __devinitdata =
ICE1712_GPIO(SNDRV_CTL_ELEM_IFACE_MIXER, "Word Clock Sync", 0, ICE1712_DELTA_WORD_CLOCK_SELECT, 1, 0);
static struct snd_kcontrol_new snd_ice1712_delta1010lt_wordclock_select __devinitdata =
ICE1712_GPIO(SNDRV_CTL_ELEM_IFACE_MIXER, "Word Clock Sync", 0, ICE1712_DELTA_1010LT_WORDCLOCK, 0, 0);
static struct snd_kcontrol_new snd_ice1712_delta1010_wordclock_status __devinitdata =
ICE1712_GPIO(SNDRV_CTL_ELEM_IFACE_MIXER, "Word Clock Status", 0, ICE1712_DELTA_WORD_CLOCK_STATUS, 1, SNDRV_CTL_ELEM_ACCESS_READ | SNDRV_CTL_ELEM_ACCESS_VOLATILE);
static struct snd_kcontrol_new snd_ice1712_deltadio2496_spdif_in_select __devinitdata =
ICE1712_GPIO(SNDRV_CTL_ELEM_IFACE_MIXER, "IEC958 Input Optical", 0, ICE1712_DELTA_SPDIF_INPUT_SELECT, 0, 0);
static struct snd_kcontrol_new snd_ice1712_delta_spdif_in_status __devinitdata =
ICE1712_GPIO(SNDRV_CTL_ELEM_IFACE_MIXER, "Delta IEC958 Input Status", 0, ICE1712_DELTA_SPDIF_IN_STAT, 1, SNDRV_CTL_ELEM_ACCESS_READ | SNDRV_CTL_ELEM_ACCESS_VOLATILE);
static int __devinit snd_ice1712_delta_add_controls(struct snd_ice1712 *ice)
struct snd_ice1712_card_info snd_ice1712_delta_cards[] __devinitdata = ;
