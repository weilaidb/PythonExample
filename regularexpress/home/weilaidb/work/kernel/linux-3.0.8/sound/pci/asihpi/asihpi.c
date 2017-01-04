MODULE_LICENSE("GPL");
MODULE_AUTHOR("AudioScience inc. <support@audioscience.com>");
MODULE_DESCRIPTION("AudioScience ALSA ASI5000 ASI6000 ASI87xx ASI89xx");
#if defined CONFIG_SND_DEBUG
static void pcm_debug_name(struct snd_pcm_substream *substream,
char *name, size_t len)
#define DEBUG_NAME(substream, name) char name[16]; pcm_debug_name(substream, name, sizeof(name))
#define pcm_debug_name(s, n, l) do  while (0)
#define DEBUG_NAME(name, substream) do  while (0)
#if defined CONFIG_SND_DEBUG_VERBOSE
#define snd_printddd(format, args...) \
__snd_printk(3, __FILE__, __LINE__, format, ##args)
#define snd_printddd(format, args...) do  while (0)
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int enable_hpi_hwdep = 1;
module_param_array(index, int, NULL, S_IRUGO);
MODULE_PARM_DESC(index, "ALSA index value for AudioScience soundcard.");
module_param_array(id, charp, NULL, S_IRUGO);
MODULE_PARM_DESC(id, "ALSA ID string for AudioScience soundcard.");
module_param_array(enable, bool, NULL, S_IRUGO);
MODULE_PARM_DESC(enable, "ALSA enable AudioScience soundcard.");
module_param(enable_hpi_hwdep, bool, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(enable_hpi_hwdep,
"ALSA enable HPI hwdep for AudioScience soundcard ");
static char *build_info = "Built using headers from kernel source";
module_param(build_info, charp, S_IRUGO);
MODULE_PARM_DESC(build_info, "built using headers from kernel source");
static char *build_info = "Built within ALSA source";
module_param(build_info, charp, S_IRUGO);
MODULE_PARM_DESC(build_info, "built within ALSA source");
static const int mixer_dump;
#define DEFAULT_SAMPLERATE 44100
static int adapter_fs = DEFAULT_SAMPLERATE;
#define PERIODS_MIN 2
#define PERIOD_BYTES_MIN  2048
#define BUFFER_BYTES_MAX (512 * 1024)
#define MAX_CLOCKSOURCES (HPI_SAMPLECLOCK_SOURCE_LAST + 1 + 7)
struct clk_source ;
struct clk_cache ;
struct snd_card_asihpi ;
struct snd_card_asihpi_pcm ;
static u16 hpi_stream_host_buffer_attach(
u32 h_stream,
u32 size_in_bytes,
u32 pci_address
)
static u16 hpi_stream_host_buffer_detach(u32  h_stream)
static inline u16 hpi_stream_start(u32 h_stream)
static inline u16 hpi_stream_stop(u32 h_stream)
static inline u16 hpi_stream_get_info_ex(
u32 h_stream,
u16        *pw_state,
u32        *pbuffer_size,
u32        *pdata_in_buffer,
u32        *psample_count,
u32        *pauxiliary_data
)
static inline u16 hpi_stream_group_add(
u32 h_master,
u32 h_stream)
static inline u16 hpi_stream_group_reset(u32 h_stream)
static inline u16 hpi_stream_group_get_map(
u32 h_stream, u32 *mo, u32 *mi)
static u16 handle_error(u16 err, int line, char *filename)
#define hpi_handle_error(x)  handle_error(x, __LINE__, __FILE__)
static void print_hwparams(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *p)
static snd_pcm_format_t hpi_to_alsa_formats[] = ;
static int snd_card_asihpi_format_alsa2hpi(snd_pcm_format_t alsa_format,
u16 *hpi_format)
static void snd_card_asihpi_pcm_samplerates(struct snd_card_asihpi *asihpi,
struct snd_pcm_hardware *pcmhw)
static int snd_card_asihpi_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int
snd_card_asihpi_hw_free(struct snd_pcm_substream *substream)
static void snd_card_asihpi_runtime_free(struct snd_pcm_runtime *runtime)
static void snd_card_asihpi_pcm_timer_start(struct snd_pcm_substream *
substream)
static void snd_card_asihpi_pcm_timer_stop(struct snd_pcm_substream *substream)
static int snd_card_asihpi_trigger(struct snd_pcm_substream *substream,
int cmd)
static inline unsigned int modulo_min(unsigned int a, unsigned int b,
unsigned long int modulus)
static void snd_card_asihpi_timer_function(unsigned long data)
static int snd_card_asihpi_playback_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static int snd_card_asihpi_playback_prepare(struct snd_pcm_substream *
substream)
static snd_pcm_uframes_t
snd_card_asihpi_playback_pointer(struct snd_pcm_substream *substream)
static void snd_card_asihpi_playback_format(struct snd_card_asihpi *asihpi,
u32 h_stream,
struct snd_pcm_hardware *pcmhw)
static struct snd_pcm_hardware snd_card_asihpi_playback = ;
static int snd_card_asihpi_playback_open(struct snd_pcm_substream *substream)
static int snd_card_asihpi_playback_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_card_asihpi_playback_mmap_ops = ;
static snd_pcm_uframes_t
snd_card_asihpi_capture_pointer(struct snd_pcm_substream *substream)
static int snd_card_asihpi_capture_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static int snd_card_asihpi_capture_prepare(struct snd_pcm_substream *substream)
static void snd_card_asihpi_capture_format(struct snd_card_asihpi *asihpi,
u32 h_stream,
struct snd_pcm_hardware *pcmhw)
static struct snd_pcm_hardware snd_card_asihpi_capture = ;
static int snd_card_asihpi_capture_open(struct snd_pcm_substream *substream)
static int snd_card_asihpi_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_card_asihpi_capture_mmap_ops = ;
static int __devinit snd_card_asihpi_pcm_new(struct snd_card_asihpi *asihpi,
int device, int substreams)
struct hpi_control ;
static const char * const asihpi_tuner_band_names[] = ;
compile_time_assert(
(ARRAY_SIZE(asihpi_tuner_band_names) ==
(HPI_TUNER_BAND_LAST+1)),
assert_tuner_band_names_size);
static const char * const asihpi_src_names[] = ;
compile_time_assert(
(ARRAY_SIZE(asihpi_src_names) ==
(HPI_SOURCENODE_LAST_INDEX-HPI_SOURCENODE_NONE+1)),
assert_src_names_size);
static const char * const asihpi_dst_names[] = ;
compile_time_assert(
(ARRAY_SIZE(asihpi_dst_names) ==
(HPI_DESTNODE_LAST_INDEX-HPI_DESTNODE_NONE+1)),
assert_dst_names_size);
static inline int ctl_add(struct snd_card *card, struct snd_kcontrol_new *ctl,
struct snd_card_asihpi *asihpi)
static void asihpi_ctl_init(struct snd_kcontrol_new *snd_control,
struct hpi_control *hpi_ctl,
char *name)
#define VOL_STEP_mB 1
static int snd_asihpi_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_100, -10000, VOL_STEP_mB, 0);
static int __devinit snd_asihpi_volume_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static int snd_asihpi_level_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_level_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_level_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_level, -1000, 100, 0);
static int __devinit snd_asihpi_level_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static const char * const asihpi_aesebu_format_names[] = ;
static int snd_asihpi_aesebu_format_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_aesebu_format_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol,
u16 (*func)(u32, u16 *))
static int snd_asihpi_aesebu_format_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol,
u16 (*func)(u32, u16))
static int snd_asihpi_aesebu_rx_format_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_aesebu_rx_format_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_aesebu_rxstatus_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_aesebu_rxstatus_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __devinit snd_asihpi_aesebu_rx_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static int snd_asihpi_aesebu_tx_format_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_aesebu_tx_format_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __devinit snd_asihpi_aesebu_tx_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static int snd_asihpi_tuner_gain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_tuner_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_tuner_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int asihpi_tuner_band_query(struct snd_kcontrol *kcontrol,
u16 *band_list, u32 len)
static int snd_asihpi_tuner_band_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_tuner_band_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_tuner_band_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_tuner_freq_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_tuner_freq_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_tuner_freq_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __devinit snd_asihpi_tuner_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static int snd_asihpi_meter_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int log2lin[] = ;
static int snd_asihpi_meter_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __devinit snd_asihpi_meter_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl, int subidx)
static int snd_card_asihpi_mux_count_sources(struct snd_kcontrol *snd_control)
static int snd_asihpi_mux_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_mux_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_mux_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int  __devinit snd_asihpi_mux_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static int snd_asihpi_cmode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_cmode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_cmode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __devinit snd_asihpi_cmode_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static char *sampleclock_sources[MAX_CLOCKSOURCES] = ;
static int snd_asihpi_clksrc_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_clksrc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_clksrc_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_clklocal_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_clklocal_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_clklocal_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_asihpi_clkrate_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_asihpi_clkrate_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __devinit snd_asihpi_sampleclock_add(struct snd_card_asihpi *asihpi,
struct hpi_control *hpi_ctl)
static int __devinit snd_card_asihpi_mixer_new(struct snd_card_asihpi *asihpi)
static void
snd_asihpi_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_asihpi_proc_init(struct snd_card_asihpi *asihpi)
static int snd_asihpi_hpi_open(struct snd_hwdep *hw, struct file *file)
static int snd_asihpi_hpi_release(struct snd_hwdep *hw, struct file *file)
static int snd_asihpi_hpi_ioctl(struct snd_hwdep *hw, struct file *file,
unsigned int cmd, unsigned long arg)
static int __devinit snd_asihpi_hpi_new(struct snd_card_asihpi *asihpi,
int device, struct snd_hwdep **rhwdep)
static int __devinit snd_asihpi_probe(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void __devexit snd_asihpi_remove(struct pci_dev *pci_dev)
static DEFINE_PCI_DEVICE_TABLE(asihpi_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, asihpi_pci_tbl);
static struct pci_driver driver = ;
static int __init snd_asihpi_init(void)
static void __exit snd_asihpi_exit(void)
module_init(snd_asihpi_init)
module_exit(snd_asihpi_exit)
