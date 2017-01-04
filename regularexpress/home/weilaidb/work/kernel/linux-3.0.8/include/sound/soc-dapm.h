#define __LINUX_SND_SOC_DAPM_H
#define SND_SOC_NOPM	-1
#define SND_SOC_DAPM_VMID(wname) \
#define SND_SOC_DAPM_INPUT(wname) \
#define SND_SOC_DAPM_OUTPUT(wname) \
#define SND_SOC_DAPM_MIC(wname, wevent) \
#define SND_SOC_DAPM_HP(wname, wevent) \
#define SND_SOC_DAPM_SPK(wname, wevent) \
#define SND_SOC_DAPM_LINE(wname, wevent) \
#define SND_SOC_DAPM_PGA(wname, wreg, wshift, winvert,\
wcontrols, wncontrols) \
#define SND_SOC_DAPM_OUT_DRV(wname, wreg, wshift, winvert,\
wcontrols, wncontrols) \
#define SND_SOC_DAPM_MIXER(wname, wreg, wshift, winvert, \
wcontrols, wncontrols)\
#define SND_SOC_DAPM_MIXER_NAMED_CTL(wname, wreg, wshift, winvert, \
wcontrols, wncontrols)\
#define SND_SOC_DAPM_MICBIAS(wname, wreg, wshift, winvert) \
#define SND_SOC_DAPM_SWITCH(wname, wreg, wshift, winvert, wcontrols) \
#define SND_SOC_DAPM_MUX(wname, wreg, wshift, winvert, wcontrols) \
#define SND_SOC_DAPM_VIRT_MUX(wname, wreg, wshift, winvert, wcontrols) \
#define SND_SOC_DAPM_VALUE_MUX(wname, wreg, wshift, winvert, wcontrols) \
#define SOC_PGA_ARRAY(wname, wreg, wshift, winvert,\
wcontrols) \
#define SOC_MIXER_ARRAY(wname, wreg, wshift, winvert, \
wcontrols)\
#define SOC_MIXER_NAMED_CTL_ARRAY(wname, wreg, wshift, winvert, \
wcontrols)\
#define SND_SOC_DAPM_PGA_E(wname, wreg, wshift, winvert, wcontrols, \
wncontrols, wevent, wflags) \
#define SND_SOC_DAPM_OUT_DRV_E(wname, wreg, wshift, winvert, wcontrols, \
wncontrols, wevent, wflags) \
#define SND_SOC_DAPM_MIXER_E(wname, wreg, wshift, winvert, wcontrols, \
wncontrols, wevent, wflags) \
#define SND_SOC_DAPM_MIXER_NAMED_CTL_E(wname, wreg, wshift, winvert, \
wcontrols, wncontrols, wevent, wflags) \
#define SND_SOC_DAPM_MICBIAS_E(wname, wreg, wshift, winvert, wevent, wflags) \
#define SND_SOC_DAPM_SWITCH_E(wname, wreg, wshift, winvert, wcontrols, \
wevent, wflags) \
#define SND_SOC_DAPM_MUX_E(wname, wreg, wshift, winvert, wcontrols, \
wevent, wflags) \
#define SND_SOC_DAPM_VIRT_MUX_E(wname, wreg, wshift, winvert, wcontrols, \
wevent, wflags) \
#define SND_SOC_DAPM_PGA_S(wname, wsubseq, wreg, wshift, winvert, \
wevent, wflags) \
#define SND_SOC_DAPM_SUPPLY_S(wname, wsubseq, wreg, wshift, winvert, wevent, \
wflags)	\
#define SOC_PGA_E_ARRAY(wname, wreg, wshift, winvert, wcontrols, \
wevent, wflags) \
#define SOC_MIXER_E_ARRAY(wname, wreg, wshift, winvert, wcontrols, \
wevent, wflags) \
#define SOC_MIXER_NAMED_CTL_E_ARRAY(wname, wreg, wshift, winvert, \
wcontrols, wevent, wflags) \
#define SND_SOC_DAPM_PRE(wname, wevent) \
#define SND_SOC_DAPM_POST(wname, wevent) \
#define SND_SOC_DAPM_AIF_IN(wname, stname, wslot, wreg, wshift, winvert) \
#define SND_SOC_DAPM_AIF_IN_E(wname, stname, wslot, wreg, wshift, winvert, \
wevent, wflags)				\
#define SND_SOC_DAPM_AIF_OUT(wname, stname, wslot, wreg, wshift, winvert) \
#define SND_SOC_DAPM_AIF_OUT_E(wname, stname, wslot, wreg, wshift, winvert, \
wevent, wflags)				\
#define SND_SOC_DAPM_DAC(wname, stname, wreg, wshift, winvert) \
#define SND_SOC_DAPM_DAC_E(wname, stname, wreg, wshift, winvert, \
wevent, wflags)				\
#define SND_SOC_DAPM_ADC(wname, stname, wreg, wshift, winvert) \
#define SND_SOC_DAPM_ADC_E(wname, stname, wreg, wshift, winvert, \
wevent, wflags)				\
#define SND_SOC_DAPM_REG(wid, wname, wreg, wshift, wmask, won_val, woff_val) \
#define SND_SOC_DAPM_SUPPLY(wname, wreg, wshift, winvert, wevent, wflags) \
#define SOC_DAPM_SINGLE(xname, reg, shift, max, invert) \
#define SOC_DAPM_SINGLE_TLV(xname, reg, shift, max, invert, tlv_array) \
#define SOC_DAPM_ENUM(xname, xenum) \
#define SOC_DAPM_ENUM_VIRT(xname, xenum)		    \
#define SOC_DAPM_VALUE_ENUM(xname, xenum) \
#define SOC_DAPM_PIN_SWITCH(xname) \
#define SND_SOC_DAPM_STREAM_NOP			0x0
#define SND_SOC_DAPM_STREAM_START		0x1
#define SND_SOC_DAPM_STREAM_STOP		0x2
#define SND_SOC_DAPM_STREAM_SUSPEND		0x4
#define SND_SOC_DAPM_STREAM_RESUME		0x8
#define SND_SOC_DAPM_STREAM_PAUSE_PUSH	0x10
#define SND_SOC_DAPM_STREAM_PAUSE_RELEASE	0x20
#define SND_SOC_DAPM_PRE_PMU	0x1
#define SND_SOC_DAPM_POST_PMU	0x2
#define SND_SOC_DAPM_PRE_PMD	0x4
#define SND_SOC_DAPM_POST_PMD	0x8
#define SND_SOC_DAPM_PRE_REG	0x10
#define SND_SOC_DAPM_POST_REG	0x20
#define SND_SOC_DAPM_PRE_POST_PMD \
(SND_SOC_DAPM_PRE_PMD | SND_SOC_DAPM_POST_PMD)
#define SND_SOC_DAPM_EVENT_ON(e)	\
(e & (SND_SOC_DAPM_PRE_PMU | SND_SOC_DAPM_POST_PMU))
#define SND_SOC_DAPM_EVENT_OFF(e)	\
(e & (SND_SOC_DAPM_PRE_PMD | SND_SOC_DAPM_POST_PMD))
struct snd_soc_dapm_widget;
enum snd_soc_dapm_type;
struct snd_soc_dapm_path;
struct snd_soc_dapm_pin;
struct snd_soc_dapm_route;
struct snd_soc_dapm_context;
int dapm_reg_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event);
int snd_soc_dapm_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_get_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_put_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_get_enum_virt(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_put_enum_virt(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_get_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_put_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_dapm_info_pin_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_soc_dapm_get_pin_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uncontrol);
int snd_soc_dapm_put_pin_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *uncontrol);
int snd_soc_dapm_new_control(struct snd_soc_dapm_context *dapm,
const struct snd_soc_dapm_widget *widget);
int snd_soc_dapm_new_controls(struct snd_soc_dapm_context *dapm,
const struct snd_soc_dapm_widget *widget,
int num);
int snd_soc_dapm_new_widgets(struct snd_soc_dapm_context *dapm);
void snd_soc_dapm_free(struct snd_soc_dapm_context *dapm);
int snd_soc_dapm_add_routes(struct snd_soc_dapm_context *dapm,
const struct snd_soc_dapm_route *route, int num);
int snd_soc_dapm_stream_event(struct snd_soc_pcm_runtime *rtd,
const char *stream, int event);
void snd_soc_dapm_shutdown(struct snd_soc_card *card);
int snd_soc_dapm_sys_add(struct device *dev);
void snd_soc_dapm_debugfs_init(struct snd_soc_dapm_context *dapm,
struct dentry *parent);
int snd_soc_dapm_enable_pin(struct snd_soc_dapm_context *dapm,
const char *pin);
int snd_soc_dapm_disable_pin(struct snd_soc_dapm_context *dapm,
const char *pin);
int snd_soc_dapm_nc_pin(struct snd_soc_dapm_context *dapm, const char *pin);
int snd_soc_dapm_get_pin_status(struct snd_soc_dapm_context *dapm,
const char *pin);
int snd_soc_dapm_sync(struct snd_soc_dapm_context *dapm);
int snd_soc_dapm_force_enable_pin(struct snd_soc_dapm_context *dapm,
const char *pin);
int snd_soc_dapm_ignore_suspend(struct snd_soc_dapm_context *dapm,
const char *pin);
enum snd_soc_dapm_type ;
struct snd_soc_dapm_route ;
struct snd_soc_dapm_path ;
struct snd_soc_dapm_widget ;
struct snd_soc_dapm_update ;
struct snd_soc_dapm_context ;
struct snd_soc_dapm_widget_list ;
