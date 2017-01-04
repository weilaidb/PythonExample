#define WM_FW_BLOCK_INFO 0xff
#define WM_FW_BLOCK_PM   0x00
#define WM_FW_BLOCK_X    0x01
#define WM_FW_BLOCK_Y    0x02
#define WM_FW_BLOCK_Z    0x03
#define WM_FW_BLOCK_I    0x06
#define WM_FW_BLOCK_A    0x08
#define WM_FW_BLOCK_C    0x0c
static int wm8958_dsp2_fw(struct snd_soc_codec *codec, const char *name,
const struct firmware *fw, bool check)
static void wm8958_dsp_start_mbc(struct snd_soc_codec *codec, int path)
static void wm8958_dsp_start_vss(struct snd_soc_codec *codec, int path)
static void wm8958_dsp_start_enh_eq(struct snd_soc_codec *codec, int path)
static void wm8958_dsp_apply(struct snd_soc_codec *codec, int path, int start)
int wm8958_aif_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int wm8958_dsp2_busy(struct wm8994_priv *wm8994, int aif)
static int wm8958_put_mbc_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_get_mbc_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_mbc_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm8958_mbc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_mbc_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define WM8958_MBC_SWITCH(xname, xval)
static int wm8958_put_vss_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_get_vss_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_put_vss_hpf_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_get_vss_hpf_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_vss_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm8958_vss_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_vss_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define WM8958_VSS_SWITCH(xname, xval)
static int wm8958_hpf_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm8958_hpf_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_hpf_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define WM8958_HPF_SWITCH(xname, xval)
static int wm8958_put_enh_eq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_get_enh_eq_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_enh_eq_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm8958_enh_eq_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8958_enh_eq_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define WM8958_ENH_EQ_SWITCH(xname, xval)
static const struct snd_kcontrol_new wm8958_mbc_snd_controls[] = ;
static const struct snd_kcontrol_new wm8958_vss_snd_controls[] = ;
static const struct snd_kcontrol_new wm8958_enh_eq_snd_controls[] = ;
static void wm8958_enh_eq_loaded(const struct firmware *fw, void *context)
static void wm8958_mbc_vss_loaded(const struct firmware *fw, void *context)
static void wm8958_mbc_loaded(const struct firmware *fw, void *context)
void wm8958_dsp2_init(struct snd_soc_codec *codec)
