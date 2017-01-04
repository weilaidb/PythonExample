static inline int dB_to_cx18_av_vol(int dB)
static inline int cx18_av_vol_to_dB(int v)
static int snd_cx18_mixer_tv_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cx18_mixer_tv_vol_get(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static int snd_cx18_mixer_tv_vol_put(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static DECLARE_TLV_DB_SCALE(snd_cx18_mixer_tv_vol_db_scale, -9600, 100, 0);
static struct snd_kcontrol_new snd_cx18_mixer_tv_vol __initdata = ;
int __init snd_cx18_mixer_create(struct snd_cx18_card *cxsc)
