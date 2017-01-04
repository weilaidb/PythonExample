#define CREATE_TRACE_POINTS
#define NAME_SIZE	32
static DEFINE_MUTEX(pcm_mutex);
static DECLARE_WAIT_QUEUE_HEAD(soc_pm_waitq);
struct dentry *snd_soc_debugfs_root;
EXPORT_SYMBOL_GPL(snd_soc_debugfs_root);
static DEFINE_MUTEX(client_mutex);
static LIST_HEAD(card_list);
static LIST_HEAD(dai_list);
static LIST_HEAD(platform_list);
static LIST_HEAD(codec_list);
static int soc_new_pcm(struct snd_soc_pcm_runtime *rtd, int num);
static int pmdown_time = 5000;
module_param(pmdown_time, int, 0);
MODULE_PARM_DESC(pmdown_time, "DAPM stream powerdown time (msecs)");
static int min_bytes_needed(unsigned long val)
static int format_register_str(struct snd_soc_codec *codec,
unsigned int reg, char *buf, size_t len)
static ssize_t soc_codec_reg_show(struct snd_soc_codec *codec, char *buf,
size_t count, loff_t pos)
static ssize_t codec_reg_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(codec_reg, 0444, codec_reg_show, NULL);
static ssize_t pmdown_time_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pmdown_time_set(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(pmdown_time, 0644, pmdown_time_show, pmdown_time_set);
static int codec_reg_open_file(struct inode *inode, struct file *file)
static ssize_t codec_reg_read_file(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t codec_reg_write_file(struct file *file,
const char __user *user_buf, size_t count, loff_t *ppos)
static const struct file_operations codec_reg_fops = ;
static void soc_init_codec_debugfs(struct snd_soc_codec *codec)
static void soc_cleanup_codec_debugfs(struct snd_soc_codec *codec)
static ssize_t codec_list_read_file(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations codec_list_fops = ;
static ssize_t dai_list_read_file(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations dai_list_fops = ;
static ssize_t platform_list_read_file(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations platform_list_fops = ;
static void soc_init_card_debugfs(struct snd_soc_card *card)
static void soc_cleanup_card_debugfs(struct snd_soc_card *card)
static inline void soc_init_codec_debugfs(struct snd_soc_codec *codec)
static inline void soc_cleanup_codec_debugfs(struct snd_soc_codec *codec)
static inline void soc_init_card_debugfs(struct snd_soc_card *card)
static inline void soc_cleanup_card_debugfs(struct snd_soc_card *card)
static int soc_ac97_dev_unregister(struct snd_soc_codec *codec)
static void soc_ac97_device_release(struct device *dev)
static int soc_ac97_dev_register(struct snd_soc_codec *codec)
static int soc_pcm_apply_symmetry(struct snd_pcm_substream *substream)
static int soc_pcm_open(struct snd_pcm_substream *substream)
static void close_delayed_work(struct work_struct *work)
static int soc_codec_close(struct snd_pcm_substream *substream)
static int soc_pcm_prepare(struct snd_pcm_substream *substream)
static int soc_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int soc_pcm_hw_free(struct snd_pcm_substream *substream)
static int soc_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t soc_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops soc_pcm_ops = ;
int snd_soc_suspend(struct device *dev)
EXPORT_SYMBOL_GPL(snd_soc_suspend);
static void soc_resume_deferred(struct work_struct *work)
int snd_soc_resume(struct device *dev)
EXPORT_SYMBOL_GPL(snd_soc_resume);
#define snd_soc_suspend NULL
#define snd_soc_resume NULL
static struct snd_soc_dai_ops null_dai_ops = ;
static int soc_bind_dai_link(struct snd_soc_card *card, int num)
static void soc_remove_codec(struct snd_soc_codec *codec)
static void soc_remove_dai_link(struct snd_soc_card *card, int num)
static void soc_remove_dai_links(struct snd_soc_card *card)
static void soc_set_name_prefix(struct snd_soc_card *card,
struct snd_soc_codec *codec)
static int soc_probe_codec(struct snd_soc_card *card,
struct snd_soc_codec *codec)
static void rtd_release(struct device *dev)
static int soc_post_component_init(struct snd_soc_card *card,
struct snd_soc_codec *codec,
int num, int dailess)
static int soc_probe_dai_link(struct snd_soc_card *card, int num)
static int soc_register_ac97_dai_link(struct snd_soc_pcm_runtime *rtd)
static void soc_unregister_ac97_dai_link(struct snd_soc_codec *codec)
static int soc_probe_aux_dev(struct snd_soc_card *card, int num)
static void soc_remove_aux_dev(struct snd_soc_card *card, int num)
static int snd_soc_init_codec_cache(struct snd_soc_codec *codec,
enum snd_soc_compress_type compress_type)
static void snd_soc_instantiate_card(struct snd_soc_card *card)
static void snd_soc_instantiate_cards(void)
static int soc_probe(struct platform_device *pdev)
static int soc_cleanup_card_resources(struct snd_soc_card *card)
static int soc_remove(struct platform_device *pdev)
int snd_soc_poweroff(struct device *dev)
EXPORT_SYMBOL_GPL(snd_soc_poweroff);
const struct dev_pm_ops snd_soc_pm_ops = ;
EXPORT_SYMBOL_GPL(snd_soc_pm_ops);
static struct platform_driver soc_driver = ;
static int soc_new_pcm(struct snd_soc_pcm_runtime *rtd, int num)
int snd_soc_codec_volatile_register(struct snd_soc_codec *codec,
unsigned int reg)
EXPORT_SYMBOL_GPL(snd_soc_codec_volatile_register);
int snd_soc_codec_readable_register(struct snd_soc_codec *codec,
unsigned int reg)
EXPORT_SYMBOL_GPL(snd_soc_codec_readable_register);
int snd_soc_codec_writable_register(struct snd_soc_codec *codec,
unsigned int reg)
EXPORT_SYMBOL_GPL(snd_soc_codec_writable_register);
int snd_soc_new_ac97_codec(struct snd_soc_codec *codec,
struct snd_ac97_bus_ops *ops, int num)
EXPORT_SYMBOL_GPL(snd_soc_new_ac97_codec);
void snd_soc_free_ac97_codec(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(snd_soc_free_ac97_codec);
unsigned int snd_soc_read(struct snd_soc_codec *codec, unsigned int reg)
EXPORT_SYMBOL_GPL(snd_soc_read);
unsigned int snd_soc_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int val)
EXPORT_SYMBOL_GPL(snd_soc_write);
unsigned int snd_soc_bulk_write_raw(struct snd_soc_codec *codec,
unsigned int reg, const void *data, size_t len)
EXPORT_SYMBOL_GPL(snd_soc_bulk_write_raw);
int snd_soc_update_bits(struct snd_soc_codec *codec, unsigned short reg,
unsigned int mask, unsigned int value)
EXPORT_SYMBOL_GPL(snd_soc_update_bits);
int snd_soc_update_bits_locked(struct snd_soc_codec *codec,
unsigned short reg, unsigned int mask,
unsigned int value)
EXPORT_SYMBOL_GPL(snd_soc_update_bits_locked);
int snd_soc_test_bits(struct snd_soc_codec *codec, unsigned short reg,
unsigned int mask, unsigned int value)
EXPORT_SYMBOL_GPL(snd_soc_test_bits);
int snd_soc_set_runtime_hwparams(struct snd_pcm_substream *substream,
const struct snd_pcm_hardware *hw)
EXPORT_SYMBOL_GPL(snd_soc_set_runtime_hwparams);
struct snd_kcontrol *snd_soc_cnew(const struct snd_kcontrol_new *_template,
void *data, char *long_name,
const char *prefix)
EXPORT_SYMBOL_GPL(snd_soc_cnew);
int snd_soc_add_controls(struct snd_soc_codec *codec,
const struct snd_kcontrol_new *controls, int num_controls)
EXPORT_SYMBOL_GPL(snd_soc_add_controls);
int snd_soc_info_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_info_enum_double);
int snd_soc_get_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_get_enum_double);
int snd_soc_put_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_put_enum_double);
int snd_soc_get_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_get_value_enum_double);
int snd_soc_put_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_put_value_enum_double);
int snd_soc_info_enum_ext(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_info_enum_ext);
int snd_soc_info_volsw_ext(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_info_volsw_ext);
int snd_soc_info_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_info_volsw);
int snd_soc_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_get_volsw);
int snd_soc_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_put_volsw);
int snd_soc_info_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_info_volsw_2r);
int snd_soc_get_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_get_volsw_2r);
int snd_soc_put_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_put_volsw_2r);
int snd_soc_info_volsw_s8(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_info_volsw_s8);
int snd_soc_get_volsw_s8(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_get_volsw_s8);
int snd_soc_put_volsw_s8(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_put_volsw_s8);
int snd_soc_limit_volume(struct snd_soc_codec *codec,
const char *name, int max)
EXPORT_SYMBOL_GPL(snd_soc_limit_volume);
int snd_soc_info_volsw_2r_sx(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_info_volsw_2r_sx);
int snd_soc_get_volsw_2r_sx(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_get_volsw_2r_sx);
int snd_soc_put_volsw_2r_sx(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_put_volsw_2r_sx);
int snd_soc_dai_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
EXPORT_SYMBOL_GPL(snd_soc_dai_set_sysclk);
int snd_soc_codec_set_sysclk(struct snd_soc_codec *codec, int clk_id,
unsigned int freq, int dir)
EXPORT_SYMBOL_GPL(snd_soc_codec_set_sysclk);
int snd_soc_dai_set_clkdiv(struct snd_soc_dai *dai,
int div_id, int div)
EXPORT_SYMBOL_GPL(snd_soc_dai_set_clkdiv);
int snd_soc_dai_set_pll(struct snd_soc_dai *dai, int pll_id, int source,
unsigned int freq_in, unsigned int freq_out)
EXPORT_SYMBOL_GPL(snd_soc_dai_set_pll);
int snd_soc_codec_set_pll(struct snd_soc_codec *codec, int pll_id, int source,
unsigned int freq_in, unsigned int freq_out)
EXPORT_SYMBOL_GPL(snd_soc_codec_set_pll);
int snd_soc_dai_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
EXPORT_SYMBOL_GPL(snd_soc_dai_set_fmt);
int snd_soc_dai_set_tdm_slot(struct snd_soc_dai *dai,
unsigned int tx_mask, unsigned int rx_mask, int slots, int slot_width)
EXPORT_SYMBOL_GPL(snd_soc_dai_set_tdm_slot);
int snd_soc_dai_set_channel_map(struct snd_soc_dai *dai,
unsigned int tx_num, unsigned int *tx_slot,
unsigned int rx_num, unsigned int *rx_slot)
EXPORT_SYMBOL_GPL(snd_soc_dai_set_channel_map);
int snd_soc_dai_set_tristate(struct snd_soc_dai *dai, int tristate)
EXPORT_SYMBOL_GPL(snd_soc_dai_set_tristate);
int snd_soc_dai_digital_mute(struct snd_soc_dai *dai, int mute)
EXPORT_SYMBOL_GPL(snd_soc_dai_digital_mute);
int snd_soc_register_card(struct snd_soc_card *card)
EXPORT_SYMBOL_GPL(snd_soc_register_card);
int snd_soc_unregister_card(struct snd_soc_card *card)
EXPORT_SYMBOL_GPL(snd_soc_unregister_card);
static char *fmt_single_name(struct device *dev, int *id)
static inline char *fmt_multiple_name(struct device *dev,
struct snd_soc_dai_driver *dai_drv)
int snd_soc_register_dai(struct device *dev,
struct snd_soc_dai_driver *dai_drv)
EXPORT_SYMBOL_GPL(snd_soc_register_dai);
void snd_soc_unregister_dai(struct device *dev)
EXPORT_SYMBOL_GPL(snd_soc_unregister_dai);
int snd_soc_register_dais(struct device *dev,
struct snd_soc_dai_driver *dai_drv, size_t count)
EXPORT_SYMBOL_GPL(snd_soc_register_dais);
void snd_soc_unregister_dais(struct device *dev, size_t count)
EXPORT_SYMBOL_GPL(snd_soc_unregister_dais);
int snd_soc_register_platform(struct device *dev,
struct snd_soc_platform_driver *platform_drv)
EXPORT_SYMBOL_GPL(snd_soc_register_platform);
void snd_soc_unregister_platform(struct device *dev)
EXPORT_SYMBOL_GPL(snd_soc_unregister_platform);
static u64 codec_format_map[] = ;
static void fixup_codec_formats(struct snd_soc_pcm_stream *stream)
int snd_soc_register_codec(struct device *dev,
const struct snd_soc_codec_driver *codec_drv,
struct snd_soc_dai_driver *dai_drv,
int num_dai)
EXPORT_SYMBOL_GPL(snd_soc_register_codec);
void snd_soc_unregister_codec(struct device *dev)
EXPORT_SYMBOL_GPL(snd_soc_unregister_codec);
static int __init snd_soc_init(void)
module_init(snd_soc_init);
static void __exit snd_soc_exit(void)
module_exit(snd_soc_exit);
MODULE_AUTHOR("Liam Girdwood, lrg@slimlogic.co.uk");
MODULE_DESCRIPTION("ALSA SoC Core");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:soc-audio");
