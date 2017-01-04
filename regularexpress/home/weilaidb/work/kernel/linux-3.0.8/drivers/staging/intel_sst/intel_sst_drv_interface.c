#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
int sst_download_fw(void)
int sst_stalled(void)
void free_stream_context(unsigned int str_id)
int sst_get_stream_allocated(struct snd_sst_params *str_param,
struct snd_sst_lib_download **lib_dnld)
static int sst_get_sfreq(struct snd_sst_params *str_param)
int sst_get_stream(struct snd_sst_params *str_param)
void sst_process_mad_ops(struct work_struct *work)
void send_intial_rx_timeslot(void)
int sst_open_pcm_stream(struct snd_sst_params *str_param)
int sst_close_pcm_stream(unsigned int str_id)
int sst_device_control(int cmd, void *arg)
struct intel_sst_pcm_control pcm_ops = ;
struct intel_sst_card_ops sst_pmic_ops = ;
int register_sst_card(struct intel_sst_card_ops *card)
EXPORT_SYMBOL_GPL(register_sst_card);
void unregister_sst_card(struct intel_sst_card_ops *card)
EXPORT_SYMBOL_GPL(unregister_sst_card);
