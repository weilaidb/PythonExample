MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Routines for control of the TEA6330T circuit via i2c bus");
MODULE_LICENSE("GPL");
#define TEA6330T_ADDR			(0x80>>1)
#define TEA6330T_SADDR_VOLUME_LEFT	0x00
#define TEA6330T_SADDR_VOLUME_RIGHT	0x01
#define TEA6330T_SADDR_BASS		0x02
#define TEA6330T_SADDR_TREBLE		0x03
#define TEA6330T_SADDR_FADER		0x04
#define   TEA6330T_MFN			0x20
#define   TEA6330T_FCH			0x10
#define TEA6330T_SADDR_AUDIO_SWITCH	0x05
#define   TEA6330T_GMU			0x80
#define   TEA6330T_EQN			0x40
struct tea6330t ;
int snd_tea6330t_detect(struct snd_i2c_bus *bus, int equalizer)
snd_i2c_write(tea->bus, TEA6330T_ADDR, addr, value, 1);
}
#define TEA6330T_MASTER_VOLUME(xname, xindex) \
static int snd_tea6330t_info_master_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_tea6330t_get_master_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_tea6330t_put_master_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define TEA6330T_MASTER_SWITCH(xname, xindex) \
#define snd_tea6330t_info_master_switch		snd_ctl_boolean_stereo_info
static int snd_tea6330t_get_master_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_tea6330t_put_master_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define TEA6330T_BASS(xname, xindex) \
static int snd_tea6330t_info_bass(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_tea6330t_get_bass(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_tea6330t_put_bass(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define TEA6330T_TREBLE(xname, xindex) \
static int snd_tea6330t_info_treble(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_tea6330t_get_treble(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_tea6330t_put_treble(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_tea6330t_controls[] = ;
static void snd_tea6330_free(struct snd_i2c_device *device)
int snd_tea6330t_update_mixer(struct snd_card *card,
struct snd_i2c_bus *bus,
int equalizer, int fader)
EXPORT_SYMBOL(snd_tea6330t_detect);
EXPORT_SYMBOL(snd_tea6330t_update_mixer);
static int __init alsa_tea6330t_init(void)
static void __exit alsa_tea6330t_exit(void)
module_init(alsa_tea6330t_init)
module_exit(alsa_tea6330t_exit)
