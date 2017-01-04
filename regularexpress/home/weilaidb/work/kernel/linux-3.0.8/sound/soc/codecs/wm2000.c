enum wm2000_anc_mode ;
struct wm2000_priv ;
static struct i2c_client *wm2000_i2c;
static int wm2000_write(struct i2c_client *i2c, unsigned int reg,
unsigned int value)
static unsigned int wm2000_read(struct i2c_client *i2c, unsigned int r)
static void wm2000_reset(struct wm2000_priv *wm2000)
static int wm2000_poll_bit(struct i2c_client *i2c,
unsigned int reg, u8 mask, int timeout)
static int wm2000_power_up(struct i2c_client *i2c, int analogue)
static int wm2000_power_down(struct i2c_client *i2c, int analogue)
static int wm2000_enter_bypass(struct i2c_client *i2c, int analogue)
static int wm2000_exit_bypass(struct i2c_client *i2c, int analogue)
static int wm2000_enter_standby(struct i2c_client *i2c, int analogue)
static int wm2000_exit_standby(struct i2c_client *i2c, int analogue)
typedef int (*wm2000_mode_fn)(struct i2c_client *i2c, int analogue);
static struct  anc_transitions[] = ;
static int wm2000_anc_transition(struct wm2000_priv *wm2000,
enum wm2000_anc_mode mode)
static int wm2000_anc_set_mode(struct wm2000_priv *wm2000)
static int wm2000_anc_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm2000_anc_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm2000_speaker_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm2000_speaker_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new wm2000_controls[] = ;
static int wm2000_anc_power_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_soc_dapm_widget wm2000_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
int wm2000_add_controls(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(wm2000_add_controls);
static int __devinit wm2000_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *i2c_id)
static __devexit int wm2000_i2c_remove(struct i2c_client *i2c)
static void wm2000_i2c_shutdown(struct i2c_client *i2c)
static int wm2000_i2c_suspend(struct device *dev)
static int wm2000_i2c_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(wm2000_pm, wm2000_i2c_suspend, wm2000_i2c_resume);
static const struct i2c_device_id wm2000_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm2000_i2c_id);
static struct i2c_driver wm2000_i2c_driver = ;
static int __init wm2000_init(void)
module_init(wm2000_init);
static void __exit wm2000_exit(void)
module_exit(wm2000_exit);
MODULE_DESCRIPTION("ASoC WM2000 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfonmicro.com>");
MODULE_LICENSE("GPL");
