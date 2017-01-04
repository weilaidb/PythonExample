MODULE_AUTHOR("Giuliano Pochini <pochini@shiny.it>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Echoaudio " ECHOCARD_NAME " soundcards driver");
MODULE_SUPPORTED_DEVICE("");
MODULE_DEVICE_TABLE(pci, snd_echo_ids);
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " ECHOCARD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " ECHOCARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " ECHOCARD_NAME " soundcard.");
static unsigned int channels_list[10] = ;
static const DECLARE_TLV_DB_SCALE(db_scale_output_gain, -12800, 100, 1);
static int get_firmware(const struct firmware **fw_entry,
struct echoaudio *chip, const short fw_index)
static void free_firmware(const struct firmware *fw_entry)
static void free_firmware_cache(struct echoaudio *chip)
static void audiopipe_free(struct snd_pcm_runtime *runtime)
static int hw_rule_capture_format_by_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int hw_rule_capture_channels_by_format(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int hw_rule_playback_format_by_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int hw_rule_playback_channels_by_format(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int hw_rule_sample_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int pcm_open(struct snd_pcm_substream *substream,
signed char max_channels)
static int pcm_analog_in_open(struct snd_pcm_substream *substream)
static int pcm_analog_out_open(struct snd_pcm_substream *substream)
static int pcm_digital_in_open(struct snd_pcm_substream *substream)
static int pcm_digital_out_open(struct snd_pcm_substream *substream)
static int pcm_close(struct snd_pcm_substream *substream)
static int init_engine(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params,
int pipe_index, int interleave)
static int pcm_analog_in_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int pcm_analog_out_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int pcm_digital_in_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int pcm_digital_out_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int pcm_hw_free(struct snd_pcm_substream *substream)
static int pcm_prepare(struct snd_pcm_substream *substream)
static int pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops analog_playback_ops = ;
static struct snd_pcm_ops analog_capture_ops = ;
static struct snd_pcm_ops digital_playback_ops = ;
static struct snd_pcm_ops digital_capture_ops = ;
static int snd_echo_preallocate_pages(struct snd_pcm *pcm, struct device *dev)
static int __devinit snd_echo_new_pcm(struct echoaudio *chip)
#if !defined(ECHOCARD_HAS_VMIXER) || defined(ECHOCARD_HAS_LINE_OUT_GAIN)
static int snd_echo_output_gain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_output_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_output_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_line_output_gain __devinitdata = ;
static struct snd_kcontrol_new snd_echo_pcm_output_gain __devinitdata = ;
static int snd_echo_input_gain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_input_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_input_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_input_gain, -2500, 50, 0);
static struct snd_kcontrol_new snd_echo_line_input_gain __devinitdata = ;
static int snd_echo_output_nominal_info (struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_output_nominal_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_output_nominal_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_output_nominal_level __devinitdata = ;
static int snd_echo_input_nominal_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_input_nominal_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_input_nominal_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_intput_nominal_level __devinitdata = ;
static int snd_echo_mixer_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_mixer_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_mixer_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_monitor_mixer __devinitdata = ;
static int snd_echo_vmixer_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_vmixer_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_vmixer_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_vmixer __devinitdata = ;
static int snd_echo_digital_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_digital_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_digital_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_digital_mode_switch __devinitdata = ;
static int snd_echo_spdif_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_spdif_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_spdif_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_spdif_mode_switch __devinitdata = ;
static int snd_echo_clock_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_clock_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_clock_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_clock_source_switch __devinitdata = ;
#define snd_echo_phantom_power_info	snd_ctl_boolean_mono_info
static int snd_echo_phantom_power_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_phantom_power_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_phantom_power_switch __devinitdata = ;
#define snd_echo_automute_info		snd_ctl_boolean_mono_info
static int snd_echo_automute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_echo_automute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_automute_switch __devinitdata = ;
#define snd_echo_vumeters_switch_info		snd_ctl_boolean_mono_info
static int snd_echo_vumeters_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_vumeters_switch __devinitdata = ;
static int snd_echo_vumeters_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_vumeters_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_vumeters __devinitdata = ;
static int snd_echo_channels_info_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_echo_channels_info_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_echo_channels_info __devinitdata = ;
static irqreturn_t snd_echo_interrupt(int irq, void *dev_id)
static int snd_echo_free(struct echoaudio *chip)
static int snd_echo_dev_free(struct snd_device *device)
static __devinit int snd_echo_create(struct snd_card *card,
struct pci_dev *pci,
struct echoaudio **rchip)
static int __devinit snd_echo_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
#if defined(CONFIG_PM)
static int snd_echo_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_echo_resume(struct pci_dev *pci)
static void __devexit snd_echo_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_echo_init(void)
static void __exit alsa_card_echo_exit(void)
module_init(alsa_card_echo_init)
module_exit(alsa_card_echo_exit)
