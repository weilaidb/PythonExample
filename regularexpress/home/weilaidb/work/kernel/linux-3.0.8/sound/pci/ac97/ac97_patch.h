#define AC97_SINGLE_VALUE(reg,shift,mask,invert) \
((reg) | ((shift) << 8) | ((shift) << 12) | ((mask) << 16) | \
((invert) << 24))
#define AC97_PAGE_SINGLE_VALUE(reg,shift,mask,invert,page) \
(AC97_SINGLE_VALUE(reg,shift,mask,invert) | (1<<25) | ((page) << 26))
#define AC97_SINGLE(xname, reg, shift, mask, invert) \
#define AC97_PAGE_SINGLE(xname, reg, shift, mask, invert, page)		\
#define AC97_DOUBLE(xname, reg, shift_left, shift_right, mask, invert) \
struct ac97_enum ;
#define AC97_ENUM_DOUBLE(xreg, xshift_l, xshift_r, xmask, xtexts) \
#define AC97_ENUM_SINGLE(xreg, xshift, xmask, xtexts) \
AC97_ENUM_DOUBLE(xreg, xshift, xshift, xmask, xtexts)
#define AC97_ENUM(xname, xenum) \
static const struct snd_kcontrol_new snd_ac97_controls_3d[];
static const struct snd_kcontrol_new snd_ac97_controls_spdif[];
static struct snd_kcontrol *snd_ac97_cnew(const struct snd_kcontrol_new *_template,
struct snd_ac97 * ac97);
static int snd_ac97_info_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
static int snd_ac97_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static int snd_ac97_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static int snd_ac97_try_bit(struct snd_ac97 * ac97, int reg, int bit);
static int snd_ac97_remove_ctl(struct snd_ac97 *ac97, const char *name,
const char *suffix);
static int snd_ac97_rename_ctl(struct snd_ac97 *ac97, const char *src,
const char *dst, const char *suffix);
static int snd_ac97_swap_ctl(struct snd_ac97 *ac97, const char *s1,
const char *s2, const char *suffix);
static void snd_ac97_rename_vol_ctl(struct snd_ac97 *ac97, const char *src,
const char *dst);
static void snd_ac97_restore_status(struct snd_ac97 *ac97);
static void snd_ac97_restore_iec958(struct snd_ac97 *ac97);
static int snd_ac97_info_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
static int snd_ac97_get_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static int snd_ac97_put_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
