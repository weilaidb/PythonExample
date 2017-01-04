static inline void
snd_pmac_burgundy_busy_wait(struct snd_pmac *chip)
static inline void
snd_pmac_burgundy_extend_wait(struct snd_pmac *chip)
static void
snd_pmac_burgundy_wcw(struct snd_pmac *chip, unsigned addr, unsigned val)
static unsigned
snd_pmac_burgundy_rcw(struct snd_pmac *chip, unsigned addr)
static void
snd_pmac_burgundy_wcb(struct snd_pmac *chip, unsigned int addr,
unsigned int val)
static unsigned
snd_pmac_burgundy_rcb(struct snd_pmac *chip, unsigned int addr)
#define BASE2ADDR(base)	((base) << 12)
#define ADDR2BASE(addr)	((addr) >> 12)
static void
snd_pmac_burgundy_write_volume(struct snd_pmac *chip, unsigned int address,
long *volume, int shift)
static void
snd_pmac_burgundy_read_volume(struct snd_pmac *chip, unsigned int address,
long *volume, int shift)
static int snd_pmac_burgundy_info_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_burgundy_get_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_burgundy_put_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define BURGUNDY_VOLUME_W(xname, xindex, addr, shift) \
static void
snd_pmac_burgundy_write_volume_2b(struct snd_pmac *chip, unsigned int address,
long *volume, int off)
static void
snd_pmac_burgundy_read_volume_2b(struct snd_pmac *chip, unsigned int address,
long *volume, int off)
static int snd_pmac_burgundy_info_volume_2b(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_burgundy_get_volume_2b(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_burgundy_put_volume_2b(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define BURGUNDY_VOLUME_2B(xname, xindex, addr, off) \
static int snd_pmac_burgundy_info_gain(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_burgundy_get_gain(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_burgundy_put_gain(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define BURGUNDY_VOLUME_B(xname, xindex, addr, stereo, atten) \
static int snd_pmac_burgundy_info_switch_w(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_burgundy_get_switch_w(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_burgundy_put_switch_w(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define BURGUNDY_SWITCH_W(xname, xindex, addr, lbit, rbit, stereo) \
static int snd_pmac_burgundy_info_switch_b(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pmac_burgundy_get_switch_b(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pmac_burgundy_put_switch_b(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define BURGUNDY_SWITCH_B(xname, xindex, addr, lmask, rmask, stereo) \
static struct snd_kcontrol_new snd_pmac_burgundy_mixers[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_burgundy_mixers_imac[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_burgundy_mixers_pmac[] __devinitdata = ;
static struct snd_kcontrol_new snd_pmac_burgundy_master_sw_imac __devinitdata =
BURGUNDY_SWITCH_B("Master Playback Switch", 0,
MASK_ADDR_BURGUNDY_MORE_OUTPUTENABLES,
BURGUNDY_OUTPUT_LEFT | BURGUNDY_LINEOUT_LEFT | BURGUNDY_HP_LEFT,
BURGUNDY_OUTPUT_RIGHT | BURGUNDY_LINEOUT_RIGHT | BURGUNDY_HP_RIGHT, 1);
static struct snd_kcontrol_new snd_pmac_burgundy_master_sw_pmac __devinitdata =
BURGUNDY_SWITCH_B("Master Playback Switch", 0,
MASK_ADDR_BURGUNDY_MORE_OUTPUTENABLES,
BURGUNDY_OUTPUT_INTERN
| BURGUNDY_OUTPUT_LEFT, BURGUNDY_OUTPUT_RIGHT, 1);
static struct snd_kcontrol_new snd_pmac_burgundy_speaker_sw_imac __devinitdata =
BURGUNDY_SWITCH_B("Speaker Playback Switch", 0,
MASK_ADDR_BURGUNDY_MORE_OUTPUTENABLES,
BURGUNDY_OUTPUT_LEFT, BURGUNDY_OUTPUT_RIGHT, 1);
static struct snd_kcontrol_new snd_pmac_burgundy_speaker_sw_pmac __devinitdata =
BURGUNDY_SWITCH_B("Speaker Playback Switch", 0,
MASK_ADDR_BURGUNDY_MORE_OUTPUTENABLES,
BURGUNDY_OUTPUT_INTERN, 0, 0);
static struct snd_kcontrol_new snd_pmac_burgundy_line_sw_imac __devinitdata =
BURGUNDY_SWITCH_B("Line out Playback Switch", 0,
MASK_ADDR_BURGUNDY_MORE_OUTPUTENABLES,
BURGUNDY_LINEOUT_LEFT, BURGUNDY_LINEOUT_RIGHT, 1);
static struct snd_kcontrol_new snd_pmac_burgundy_line_sw_pmac __devinitdata =
BURGUNDY_SWITCH_B("Line out Playback Switch", 0,
MASK_ADDR_BURGUNDY_MORE_OUTPUTENABLES,
BURGUNDY_OUTPUT_LEFT, BURGUNDY_OUTPUT_RIGHT, 1);
static struct snd_kcontrol_new snd_pmac_burgundy_hp_sw_imac __devinitdata =
BURGUNDY_SWITCH_B("Headphone Playback Switch", 0,
MASK_ADDR_BURGUNDY_MORE_OUTPUTENABLES,
BURGUNDY_HP_LEFT, BURGUNDY_HP_RIGHT, 1);
static int snd_pmac_burgundy_detect_headphone(struct snd_pmac *chip)
static void snd_pmac_burgundy_update_automute(struct snd_pmac *chip, int do_notify)
int __devinit snd_pmac_burgundy_init(struct snd_pmac *chip)
