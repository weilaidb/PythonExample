#define _WM8994_H
#define WM8994_SYSCLK_MCLK1 1
#define WM8994_SYSCLK_MCLK2 2
#define WM8994_SYSCLK_FLL1  3
#define WM8994_SYSCLK_FLL2  4
#define WM8994_SYSCLK_OPCLK 5
#define WM8994_FLL1 1
#define WM8994_FLL2 2
#define WM8994_FLL_SRC_MCLK1  1
#define WM8994_FLL_SRC_MCLK2  2
#define WM8994_FLL_SRC_LRCLK  3
#define WM8994_FLL_SRC_BCLK   4
typedef void (*wm8958_micdet_cb)(u16 status, void *data);
int wm8994_mic_detect(struct snd_soc_codec *codec, struct snd_soc_jack *jack,
int micbias, int det, int shrt);
int wm8958_mic_detect(struct snd_soc_codec *codec, struct snd_soc_jack *jack,
wm8958_micdet_cb cb, void *cb_data);
#define WM8994_CACHE_SIZE 1570
struct wm8994_access_mask ;
extern const struct wm8994_access_mask wm8994_access_masks[WM8994_CACHE_SIZE];
extern const u16 wm8994_reg_defaults[WM8994_CACHE_SIZE];
int wm8958_aif_ev(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event);
void wm8958_dsp2_init(struct snd_soc_codec *codec);
struct wm8994_micdet ;
struct wm8994_fll_config ;
#define WM8994_NUM_DRC 3
#define WM8994_NUM_EQ  3
struct wm8994_priv ;
