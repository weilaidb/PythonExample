#define PMAC_AMP_AVAIL
struct awacs_amp ;
#define CHECK_CUDA_AMP() (sys_ctrler == SYS_CTRLER_CUDA)
static void snd_pmac_screamer_wait(struct snd_pmac *chip)
static void
snd_pmac_awacs_write(struct snd_pmac *chip, int val)
static void
snd_pmac_awacs_write_reg(struct snd_pmac *chip, int reg, int val)
static void
snd_pmac_awacs_write_noreg(struct snd_pmac *chip, int reg, int val)
static void screamer_recalibrate(struct snd_pmac *chip)
#define screamer_recalibrate(chip)
static void snd_pmac_awacs_set_format(struct snd_pmac *chip)
static int snd_pmac_awacs_info_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_awacs_get_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_put_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define AWACS_VOLUME(xname, xreg, xshift, xinverted) \
static int snd_pmac_awacs_get_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_put_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define AWACS_SWITCH(xname, xreg, xshift, xinvert) \
static void awacs_set_cuda(int reg, int val)
static void awacs_amp_set_tone(struct awacs_amp *amp, int bass, int treble)
static int awacs_amp_set_vol(struct awacs_amp *amp, int index,
int lvol, int rvol, int do_check)
static void awacs_amp_set_master(struct awacs_amp *amp, int vol)
static void awacs_amp_free(struct snd_pmac *chip)
static int snd_pmac_awacs_info_volume_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_awacs_get_volume_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_put_volume_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_get_switch_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_put_switch_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_info_tone_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_awacs_get_tone_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_put_tone_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_info_master_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_awacs_get_master_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_awacs_put_master_amp(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define AMP_CH_SPK	0
#define AMP_CH_HD	1
static struct snd_kcontrol_new snd_pmac_awacs_amp_vol[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_amp_hp_sw __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_amp_spk_sw __devinitdata = ;
static int snd_pmac_screamer_mic_boost_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_screamer_mic_boost_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_screamer_mic_boost_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_pmac_awacs_mixers[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_screamer_mixers_beige[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_screamer_mixers_lo[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_screamer_mixers_imac[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_screamer_mixers_g4agp[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_mixers_pmac7500[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_mixers_pmac5500[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_mixers_pmac[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_mixers2[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_screamer_mixers2[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_mixers2_pmac5500[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_master_sw __devinitdata =
AWACS_SWITCH("Master Playback Switch", 1, SHIFT_HDMUTE, 1);
static struct snd_kcontrol_new snd_pmac_awacs_master_sw_imac __devinitdata =
AWACS_SWITCH("Line out Playback Switch", 1, SHIFT_HDMUTE, 1);
static struct snd_kcontrol_new snd_pmac_awacs_master_sw_pmac5500 __devinitdata =
AWACS_SWITCH("Headphone Playback Switch", 1, SHIFT_HDMUTE, 1);
static struct snd_kcontrol_new snd_pmac_awacs_mic_boost[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_screamer_mic_boost[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_mic_boost_pmac7500[] __devinitdata =
;
static struct snd_kcontrol_new snd_pmac_screamer_mic_boost_beige[] __devinitdata =
;
static struct snd_kcontrol_new snd_pmac_screamer_mic_boost_imac[] __devinitdata =
;
static struct snd_kcontrol_new snd_pmac_awacs_speaker_vol[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_awacs_speaker_sw __devinitdata =
AWACS_SWITCH("Speaker Playback Switch", 1, SHIFT_SPKMUTE, 1);
static struct snd_kcontrol_new snd_pmac_awacs_speaker_sw_imac1 __devinitdata =
AWACS_SWITCH("Speaker Playback Switch", 1, SHIFT_PAROUT1, 1);
static struct snd_kcontrol_new snd_pmac_awacs_speaker_sw_imac2 __devinitdata =
AWACS_SWITCH("Speaker Playback Switch", 1, SHIFT_PAROUT1, 0);
static int build_mixers(struct snd_pmac *chip, int nums,
struct snd_kcontrol_new *mixers)
static void awacs_restore_all_regs(struct snd_pmac *chip)
static void snd_pmac_awacs_suspend(struct snd_pmac *chip)
static void snd_pmac_awacs_resume(struct snd_pmac *chip)
#define IS_PM7500 (of_machine_is_compatible("AAPL,7500") \
|| of_machine_is_compatible("AAPL,8500") \
|| of_machine_is_compatible("AAPL,9500"))
#define IS_PM5500 (of_machine_is_compatible("AAPL,e411"))
#define IS_BEIGE (of_machine_is_compatible("AAPL,Gossamer"))
#define IS_IMAC1 (of_machine_is_compatible("PowerMac2,1"))
#define IS_IMAC2 (of_machine_is_compatible("PowerMac2,2") \
|| of_machine_is_compatible("PowerMac4,1"))
#define IS_G4AGP (of_machine_is_compatible("PowerMac3,1"))
#define IS_LOMBARD (of_machine_is_compatible("PowerBook1,1"))
static int imac1, imac2;
static int snd_pmac_awacs_detect_headphone(struct snd_pmac *chip)
static int toggle_amp_mute(struct awacs_amp *amp, int index, int mute)
static void snd_pmac_awacs_update_automute(struct snd_pmac *chip, int do_notify)
int __devinit
snd_pmac_awacs_init(struct snd_pmac *chip)
