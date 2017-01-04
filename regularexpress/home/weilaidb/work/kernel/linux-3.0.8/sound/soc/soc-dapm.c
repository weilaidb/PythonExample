static int dapm_up_seq[] = ;
static int dapm_down_seq[] = ;
static void pop_wait(u32 pop_time)
static void pop_dbg(struct device *dev, u32 pop_time, const char *fmt, ...)
static inline struct snd_soc_dapm_widget *dapm_cnew_widget(
const struct snd_soc_dapm_widget *_widget)
static int snd_soc_dapm_set_bias_level(struct snd_soc_dapm_context *dapm,
enum snd_soc_bias_level level)
static void dapm_set_path_status(struct snd_soc_dapm_widget *w,
struct snd_soc_dapm_path *p, int i)
static int dapm_connect_mux(struct snd_soc_dapm_context *dapm,
struct snd_soc_dapm_widget *src, struct snd_soc_dapm_widget *dest,
struct snd_soc_dapm_path *path, const char *control_name,
const struct snd_kcontrol_new *kcontrol)
static int dapm_connect_mixer(struct snd_soc_dapm_context *dapm,
struct snd_soc_dapm_widget *src, struct snd_soc_dapm_widget *dest,
struct snd_soc_dapm_path *path, const char *control_name)
static int dapm_is_shared_kcontrol(struct snd_soc_dapm_context *dapm,
struct snd_soc_dapm_widget *kcontrolw,
const struct snd_kcontrol_new *kcontrol_new,
struct snd_kcontrol **kcontrol)
static int dapm_new_mixer(struct snd_soc_dapm_widget *w)
static int dapm_new_mux(struct snd_soc_dapm_widget *w)
static int dapm_new_pga(struct snd_soc_dapm_widget *w)
static inline void dapm_clear_walk(struct snd_soc_dapm_context *dapm)
static int snd_soc_dapm_suspend_check(struct snd_soc_dapm_widget *widget)
static int is_connected_output_ep(struct snd_soc_dapm_widget *widget)
static int is_connected_input_ep(struct snd_soc_dapm_widget *widget)
int dapm_reg_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
EXPORT_SYMBOL_GPL(dapm_reg_event);
static int dapm_generic_check_power(struct snd_soc_dapm_widget *w)
static int dapm_adc_check_power(struct snd_soc_dapm_widget *w)
static int dapm_dac_check_power(struct snd_soc_dapm_widget *w)
static int dapm_supply_check_power(struct snd_soc_dapm_widget *w)
static int dapm_seq_compare(struct snd_soc_dapm_widget *a,
struct snd_soc_dapm_widget *b,
bool power_up)
static void dapm_seq_insert(struct snd_soc_dapm_widget *new_widget,
struct list_head *list,
bool power_up)
static void dapm_seq_check_event(struct snd_soc_dapm_context *dapm,
struct snd_soc_dapm_widget *w, int event)
static void dapm_seq_run_coalesced(struct snd_soc_dapm_context *dapm,
struct list_head *pending)
static void dapm_seq_run(struct snd_soc_dapm_context *dapm,
struct list_head *list, int event, bool power_up)
static void dapm_widget_update(struct snd_soc_dapm_context *dapm)
static void dapm_pre_sequence_async(void *data, async_cookie_t cookie)
static void dapm_post_sequence_async(void *data, async_cookie_t cookie)
static int dapm_power_widgets(struct snd_soc_dapm_context *dapm, int event)
static int dapm_widget_power_open_file(struct inode *inode, struct file *file)
static ssize_t dapm_widget_power_read_file(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations dapm_widget_power_fops = ;
static int dapm_bias_open_file(struct inode *inode, struct file *file)
static ssize_t dapm_bias_read_file(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations dapm_bias_fops = ;
void snd_soc_dapm_debugfs_init(struct snd_soc_dapm_context *dapm,
struct dentry *parent)
static void dapm_debugfs_add_widget(struct snd_soc_dapm_widget *w)
static void dapm_debugfs_cleanup(struct snd_soc_dapm_context *dapm)
void snd_soc_dapm_debugfs_init(struct snd_soc_dapm_context *dapm,
struct dentry *parent)
static inline void dapm_debugfs_add_widget(struct snd_soc_dapm_widget *w)
static inline void dapm_debugfs_cleanup(struct snd_soc_dapm_context *dapm)
static int dapm_mux_update_power(struct snd_soc_dapm_widget *widget,
struct snd_kcontrol *kcontrol, int change,
int mux, struct soc_enum *e)
static int dapm_mixer_update_power(struct snd_soc_dapm_widget *widget,
struct snd_kcontrol *kcontrol, int connect)
static ssize_t dapm_widget_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(dapm_widget, 0444, dapm_widget_show, NULL);
int snd_soc_dapm_sys_add(struct device *dev)
static void snd_soc_dapm_sys_remove(struct device *dev)
static void dapm_free_widgets(struct snd_soc_dapm_context *dapm)
static struct snd_soc_dapm_widget *dapm_find_widget(
struct snd_soc_dapm_context *dapm, const char *pin,
bool search_other_contexts)
static int snd_soc_dapm_set_pin(struct snd_soc_dapm_context *dapm,
const char *pin, int status)
int snd_soc_dapm_sync(struct snd_soc_dapm_context *dapm)
EXPORT_SYMBOL_GPL(snd_soc_dapm_sync);
static int snd_soc_dapm_add_route(struct snd_soc_dapm_context *dapm,
const struct snd_soc_dapm_route *route)
int snd_soc_dapm_add_routes(struct snd_soc_dapm_context *dapm,
const struct snd_soc_dapm_route *route, int num)
EXPORT_SYMBOL_GPL(snd_soc_dapm_add_routes);
int snd_soc_dapm_new_widgets(struct snd_soc_dapm_context *dapm)
EXPORT_SYMBOL_GPL(snd_soc_dapm_new_widgets);
int snd_soc_dapm_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_get_volsw);
int snd_soc_dapm_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_put_volsw);
int snd_soc_dapm_get_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_get_enum_double);
int snd_soc_dapm_put_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_put_enum_double);
int snd_soc_dapm_get_enum_virt(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_get_enum_virt);
int snd_soc_dapm_put_enum_virt(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_put_enum_virt);
int snd_soc_dapm_get_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_get_value_enum_double);
int snd_soc_dapm_put_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_put_value_enum_double);
int snd_soc_dapm_info_pin_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_GPL(snd_soc_dapm_info_pin_switch);
int snd_soc_dapm_get_pin_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_get_pin_switch);
int snd_soc_dapm_put_pin_switch(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_GPL(snd_soc_dapm_put_pin_switch);
int snd_soc_dapm_new_control(struct snd_soc_dapm_context *dapm,
const struct snd_soc_dapm_widget *widget)
EXPORT_SYMBOL_GPL(snd_soc_dapm_new_control);
int snd_soc_dapm_new_controls(struct snd_soc_dapm_context *dapm,
const struct snd_soc_dapm_widget *widget,
int num)
EXPORT_SYMBOL_GPL(snd_soc_dapm_new_controls);
static void soc_dapm_stream_event(struct snd_soc_dapm_context *dapm,
const char *stream, int event)
int snd_soc_dapm_stream_event(struct snd_soc_pcm_runtime *rtd,
const char *stream, int event)
int snd_soc_dapm_enable_pin(struct snd_soc_dapm_context *dapm, const char *pin)
EXPORT_SYMBOL_GPL(snd_soc_dapm_enable_pin);
int snd_soc_dapm_force_enable_pin(struct snd_soc_dapm_context *dapm,
const char *pin)
EXPORT_SYMBOL_GPL(snd_soc_dapm_force_enable_pin);
int snd_soc_dapm_disable_pin(struct snd_soc_dapm_context *dapm,
const char *pin)
EXPORT_SYMBOL_GPL(snd_soc_dapm_disable_pin);
int snd_soc_dapm_nc_pin(struct snd_soc_dapm_context *dapm, const char *pin)
EXPORT_SYMBOL_GPL(snd_soc_dapm_nc_pin);
int snd_soc_dapm_get_pin_status(struct snd_soc_dapm_context *dapm,
const char *pin)
EXPORT_SYMBOL_GPL(snd_soc_dapm_get_pin_status);
int snd_soc_dapm_ignore_suspend(struct snd_soc_dapm_context *dapm,
const char *pin)
EXPORT_SYMBOL_GPL(snd_soc_dapm_ignore_suspend);
void snd_soc_dapm_free(struct snd_soc_dapm_context *dapm)
EXPORT_SYMBOL_GPL(snd_soc_dapm_free);
static void soc_dapm_shutdown_codec(struct snd_soc_dapm_context *dapm)
void snd_soc_dapm_shutdown(struct snd_soc_card *card)
MODULE_AUTHOR("Liam Girdwood, lrg@slimlogic.co.uk");
MODULE_DESCRIPTION("Dynamic Audio Power Management core for ALSA SoC");
MODULE_LICENSE("GPL");
