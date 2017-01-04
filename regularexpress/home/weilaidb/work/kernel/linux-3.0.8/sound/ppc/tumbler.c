#undef DEBUG
#define DBG(fmt...) printk(KERN_DEBUG fmt)
#define DBG(fmt...)
#define IS_G4DA (of_machine_is_compatible("PowerMac3,4"))
#define TAS_I2C_ADDR	0x34
#define TAS_REG_MCS	0x01
#define TAS_REG_DRC	0x02
#define TAS_REG_VOL	0x04
#define TAS_REG_TREBLE	0x05
#define TAS_REG_BASS	0x06
#define TAS_REG_INPUT1	0x07
#define TAS_REG_INPUT2	0x08
#define TAS_REG_PCM	TAS_REG_INPUT1
#define TAS_REG_LMIX	TAS_REG_INPUT1
#define TAS_REG_RMIX	TAS_REG_INPUT2
#define TAS_REG_MCS2	0x43
#define TAS_REG_ACS	0x40
enum ;
enum ;
struct pmac_gpio ;
struct pmac_tumbler ;
static int send_init_client(struct pmac_keywest *i2c, unsigned int *regs)
static int tumbler_init_client(struct pmac_keywest *i2c)
static int snapper_init_client(struct pmac_keywest *i2c)
#define do_gpio_write(gp, val) \
pmac_call_feature(PMAC_FTR_WRITE_GPIO, NULL, (gp)->addr, val)
#define do_gpio_read(gp) \
pmac_call_feature(PMAC_FTR_READ_GPIO, NULL, (gp)->addr, 0)
#define tumbler_gpio_free(gp)
static void write_audio_gpio(struct pmac_gpio *gp, int active)
static int check_audio_gpio(struct pmac_gpio *gp)
static int read_audio_gpio(struct pmac_gpio *gp)
static int tumbler_set_master_volume(struct pmac_tumbler *mix)
static int tumbler_info_master_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tumbler_get_master_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_put_master_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_get_master_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_put_master_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define TAS3001_DRC_MAX		0x5f
static int tumbler_set_drc(struct pmac_tumbler *mix)
#define TAS3004_DRC_MAX		0xef
static int snapper_set_drc(struct pmac_tumbler *mix)
static int tumbler_info_drc_value(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tumbler_get_drc_value(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_put_drc_value(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_get_drc_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_put_drc_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
struct tumbler_mono_vol ;
static int tumbler_set_mono_volume(struct pmac_tumbler *mix,
struct tumbler_mono_vol *info)
static int tumbler_info_mono(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int tumbler_get_mono(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_put_mono(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct tumbler_mono_vol tumbler_pcm_vol_info = ;
static struct tumbler_mono_vol tumbler_bass_vol_info = ;
static struct tumbler_mono_vol tumbler_treble_vol_info = ;
static struct tumbler_mono_vol snapper_bass_vol_info = ;
static struct tumbler_mono_vol snapper_treble_vol_info = ;
#define DEFINE_MONO(xname,type)
#define DEFINE_SNAPPER_MONO(xname,type)
static int snapper_set_mix_vol1(struct pmac_tumbler *mix, int idx, int ch, int reg)
static int snapper_set_mix_vol(struct pmac_tumbler *mix, int idx)
static int snapper_info_mix(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snapper_get_mix(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snapper_put_mix(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
enum ;
static int tumbler_get_mute_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tumbler_put_mute_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snapper_set_capture_source(struct pmac_tumbler *mix)
static int snapper_info_capture_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snapper_get_capture_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snapper_put_capture_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define DEFINE_SNAPPER_MIX(xname,idx,ofs)
static struct snd_kcontrol_new tumbler_mixers[] __devinitdata = ;
static struct snd_kcontrol_new snapper_mixers[] __devinitdata = ;
static struct snd_kcontrol_new tumbler_hp_sw __devinitdata = ;
static struct snd_kcontrol_new tumbler_speaker_sw __devinitdata = ;
static struct snd_kcontrol_new tumbler_lineout_sw __devinitdata = ;
static struct snd_kcontrol_new tumbler_drc_sw __devinitdata = ;
static int tumbler_detect_headphone(struct snd_pmac *chip)
static int tumbler_detect_lineout(struct snd_pmac *chip)
static void check_mute(struct snd_pmac *chip, struct pmac_gpio *gp, int val, int do_notify,
struct snd_kcontrol *sw)
static struct work_struct device_change;
static struct snd_pmac *device_change_chip;
static void device_change_handler(struct work_struct *work)
static void tumbler_update_automute(struct snd_pmac *chip, int do_notify)
static irqreturn_t headphone_intr(int irq, void *devid)
static struct device_node *find_audio_device(const char *name)
static struct device_node *find_compatible_audio_device(const char *name)
static long tumbler_find_device(const char *device, const char *platform,
struct pmac_gpio *gp, int is_compatible)
static void tumbler_reset_audio(struct snd_pmac *chip)
static void tumbler_suspend(struct snd_pmac *chip)
static void tumbler_resume(struct snd_pmac *chip)
static int __devinit tumbler_init(struct snd_pmac *chip)
static void tumbler_cleanup(struct snd_pmac *chip)
int __devinit snd_pmac_tumbler_init(struct snd_pmac *chip)
