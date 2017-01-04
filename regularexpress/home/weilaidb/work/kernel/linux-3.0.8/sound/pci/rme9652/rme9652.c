static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int precise_ptr[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for RME Digi9652 (Hammerfall) soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for RME Digi9652 (Hammerfall) soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable/disable specific RME96 soundcards.");
module_param_array(precise_ptr, bool, NULL, 0444);
MODULE_PARM_DESC(precise_ptr, "Enable precise pointer (doesn't work reliably).");
MODULE_AUTHOR("Paul Davis <pbd@op.net>, Winfried Ritsch");
MODULE_DESCRIPTION("RME Digi9652/Digi9636");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define RME9652_NCHANNELS       26
#define RME9636_NCHANNELS       18
#define RME9652_SYNC_FROM_SPDIF 0
#define RME9652_SYNC_FROM_ADAT1 1
#define RME9652_SYNC_FROM_ADAT2 2
#define RME9652_SYNC_FROM_ADAT3 3
#define RME9652_SPDIFIN_OPTICAL 0
#define RME9652_SPDIFIN_COAXIAL 1
#define RME9652_SPDIFIN_INTERN  2
#define RME9652_IRQ	   (1<<0)
#define RME9652_lock_2	   (1<<1)
#define RME9652_lock_1	   (1<<2)
#define RME9652_lock_0	   (1<<3)
#define RME9652_fs48	   (1<<4)
#define RME9652_wsel_rd	   (1<<5)
#define RME9652_sync_2	   (1<<16)
#define RME9652_sync_1	   (1<<17)
#define RME9652_sync_0	   (1<<18)
#define RME9652_DS_rd	   (1<<19)
#define RME9652_tc_busy	   (1<<20)
#define RME9652_tc_out	   (1<<21)
#define RME9652_F_0	   (1<<22)
#define RME9652_F_1	   (1<<23)
#define RME9652_F_2	   (1<<24)
#define RME9652_ERF	   (1<<25)
#define RME9652_buffer_id  (1<<26)
#define RME9652_tc_valid   (1<<27)
#define RME9652_SPDIF_READ (1<<28)
#define RME9652_sync	  (RME9652_sync_0|RME9652_sync_1|RME9652_sync_2)
#define RME9652_lock	  (RME9652_lock_0|RME9652_lock_1|RME9652_lock_2)
#define RME9652_F	  (RME9652_F_0|RME9652_F_1|RME9652_F_2)
#define rme9652_decode_spdif_rate(x) ((x)>>22)
#define RME9652_buf_pos	  0x000FFC0
#define RME9652_REV15_buf_pos(x) ((((x)&0xE0000000)>>26)|((x)&RME9652_buf_pos))
#define RME9652_IO_EXTENT     1024
#define RME9652_init_buffer       0
#define RME9652_play_buffer       32
#define RME9652_rec_buffer        36
#define RME9652_control_register  64
#define RME9652_irq_clear         96
#define RME9652_time_code         100
#define RME9652_thru_base         128
#define RME9652_status_register    0
#define RME9652_start_bit	   (1<<0)
#define RME9652_Master		   (1<<4)
#define RME9652_IE		   (1<<5)
#define RME9652_freq		   (1<<6)
#define RME9652_freq1		   (1<<7)
#define RME9652_DS                 (1<<8)
#define RME9652_PRO		   (1<<9)
#define RME9652_EMP		   (1<<10)
#define RME9652_Dolby		   (1<<11)
#define RME9652_opt_out	           (1<<12)
#define RME9652_wsel		   (1<<13)
#define RME9652_inp_0		   (1<<14)
#define RME9652_inp_1		   (1<<15)
#define RME9652_SyncPref_ADAT2	   (1<<16)
#define RME9652_SyncPref_ADAT3	   (1<<17)
#define RME9652_SPDIF_RESET        (1<<18)
#define RME9652_SPDIF_SELECT       (1<<19)
#define RME9652_SPDIF_CLOCK        (1<<20)
#define RME9652_SPDIF_WRITE        (1<<21)
#define RME9652_ADAT1_INTERNAL     (1<<22)
#define RME9652_latency            0x0e
#define rme9652_encode_latency(x)  (((x)&0x7)<<1)
#define rme9652_decode_latency(x)  (((x)>>1)&0x7)
#define rme9652_running_double_speed(s) ((s)->control_register & RME9652_DS)
#define RME9652_inp                (RME9652_inp_0|RME9652_inp_1)
#define rme9652_encode_spdif_in(x) (((x)&0x3)<<14)
#define rme9652_decode_spdif_in(x) (((x)>>14)&0x3)
#define RME9652_SyncPref_Mask      (RME9652_SyncPref_ADAT2|RME9652_SyncPref_ADAT3)
#define RME9652_SyncPref_ADAT1	   0
#define RME9652_SyncPref_SPDIF	   (RME9652_SyncPref_ADAT2|RME9652_SyncPref_ADAT3)
#define RME9652_CHANNEL_BUFFER_SAMPLES  (16*1024)
#define RME9652_CHANNEL_BUFFER_BYTES    (4*RME9652_CHANNEL_BUFFER_SAMPLES)
#define RME9652_DMA_AREA_BYTES ((RME9652_NCHANNELS+1) * RME9652_CHANNEL_BUFFER_BYTES)
#define RME9652_DMA_AREA_KILOBYTES (RME9652_DMA_AREA_BYTES/1024)
struct snd_rme9652 ;
static char channel_map_9652_ss[26] = ;
static char channel_map_9636_ss[26] = ;
static char channel_map_9652_ds[26] = ;
static char channel_map_9636_ds[26] = ;
static int snd_hammerfall_get_buffer(struct pci_dev *pci, struct snd_dma_buffer *dmab, size_t size)
static void snd_hammerfall_free_buffer(struct snd_dma_buffer *dmab, struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(snd_rme9652_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_rme9652_ids);
static inline void rme9652_write(struct snd_rme9652 *rme9652, int reg, int val)
static inline unsigned int rme9652_read(struct snd_rme9652 *rme9652, int reg)
static inline int snd_rme9652_use_is_exclusive(struct snd_rme9652 *rme9652)
static inline int rme9652_adat_sample_rate(struct snd_rme9652 *rme9652)
static inline void rme9652_compute_period_size(struct snd_rme9652 *rme9652)
static snd_pcm_uframes_t rme9652_hw_pointer(struct snd_rme9652 *rme9652)
static inline void rme9652_reset_hw_pointer(struct snd_rme9652 *rme9652)
static inline void rme9652_start(struct snd_rme9652 *s)
static inline void rme9652_stop(struct snd_rme9652 *s)
static int rme9652_set_interrupt_interval(struct snd_rme9652 *s,
unsigned int frames)
static int rme9652_set_rate(struct snd_rme9652 *rme9652, int rate)
static void rme9652_set_thru(struct snd_rme9652 *rme9652, int channel, int enable)
static int rme9652_set_passthru(struct snd_rme9652 *rme9652, int onoff)
static void rme9652_spdif_set_bit (struct snd_rme9652 *rme9652, int mask, int onoff)
static void rme9652_spdif_write_byte (struct snd_rme9652 *rme9652, const int val)
static int rme9652_spdif_read_byte (struct snd_rme9652 *rme9652)
static void rme9652_write_spdif_codec (struct snd_rme9652 *rme9652, const int address, const int data)
static int rme9652_spdif_read_codec (struct snd_rme9652 *rme9652, const int address)
static void rme9652_initialize_spdif_receiver (struct snd_rme9652 *rme9652)
static inline int rme9652_spdif_sample_rate(struct snd_rme9652 *s)
static u32 snd_rme9652_convert_from_aes(struct snd_aes_iec958 *aes)
static void snd_rme9652_convert_to_aes(struct snd_aes_iec958 *aes, u32 val)
static int snd_rme9652_control_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_control_spdif_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_control_spdif_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_control_spdif_stream_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_control_spdif_stream_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_control_spdif_stream_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_control_spdif_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_control_spdif_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_ADAT1_IN(xname, xindex) \
static unsigned int rme9652_adat1_in(struct snd_rme9652 *rme9652)
static int rme9652_set_adat1_input(struct snd_rme9652 *rme9652, int internal)
static int snd_rme9652_info_adat1_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_get_adat1_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_put_adat1_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_SPDIF_IN(xname, xindex) \
static unsigned int rme9652_spdif_in(struct snd_rme9652 *rme9652)
static int rme9652_set_spdif_input(struct snd_rme9652 *rme9652, int in)
static int snd_rme9652_info_spdif_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_get_spdif_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_put_spdif_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_SPDIF_OUT(xname, xindex) \
static int rme9652_spdif_out(struct snd_rme9652 *rme9652)
static int rme9652_set_spdif_output(struct snd_rme9652 *rme9652, int out)
#define snd_rme9652_info_spdif_out	snd_ctl_boolean_mono_info
static int snd_rme9652_get_spdif_out(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_put_spdif_out(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_SYNC_MODE(xname, xindex) \
static int rme9652_sync_mode(struct snd_rme9652 *rme9652)
static int rme9652_set_sync_mode(struct snd_rme9652 *rme9652, int mode)
static int snd_rme9652_info_sync_mode(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_get_sync_mode(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_put_sync_mode(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_SYNC_PREF(xname, xindex) \
static int rme9652_sync_pref(struct snd_rme9652 *rme9652)
static int rme9652_set_sync_pref(struct snd_rme9652 *rme9652, int pref)
static int snd_rme9652_info_sync_pref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_get_sync_pref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_put_sync_pref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_info_thru(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_get_thru(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_put_thru(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_PASSTHRU(xname, xindex) \
#define snd_rme9652_info_passthru	snd_ctl_boolean_mono_info
static int snd_rme9652_get_passthru(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_put_passthru(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_SPDIF_RATE(xname, xindex) \
static int snd_rme9652_info_spdif_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_get_spdif_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_ADAT_SYNC(xname, xindex, xidx) \
static int snd_rme9652_info_adat_sync(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_rme9652_get_adat_sync(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define RME9652_TC_VALID(xname, xindex) \
#define snd_rme9652_info_tc_valid	snd_ctl_boolean_mono_info
static int snd_rme9652_get_tc_valid(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_rme9652_get_tc_value(void *private_data,
snd_kswitch_t *kswitch,
snd_switch_t *uswitch)
static struct snd_kcontrol_new snd_rme9652_controls[] = ;
static struct snd_kcontrol_new snd_rme9652_adat3_check =
RME9652_ADAT_SYNC("ADAT3 Sync Check", 0, 2);
static struct snd_kcontrol_new snd_rme9652_adat1_input =
RME9652_ADAT1_IN("ADAT1 Input Source", 0);
static int snd_rme9652_create_controls(struct snd_card *card, struct snd_rme9652 *rme9652)
static void
snd_rme9652_proc_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void __devinit snd_rme9652_proc_init(struct snd_rme9652 *rme9652)
static void snd_rme9652_free_buffers(struct snd_rme9652 *rme9652)
static int snd_rme9652_free(struct snd_rme9652 *rme9652)
static int __devinit snd_rme9652_initialize_memory(struct snd_rme9652 *rme9652)
static void snd_rme9652_set_defaults(struct snd_rme9652 *rme9652)
static irqreturn_t snd_rme9652_interrupt(int irq, void *dev_id)
static snd_pcm_uframes_t snd_rme9652_hw_pointer(struct snd_pcm_substream *substream)
static char *rme9652_channel_buffer_location(struct snd_rme9652 *rme9652,
int stream,
int channel)
static int snd_rme9652_playback_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, void __user *src, snd_pcm_uframes_t count)
static int snd_rme9652_capture_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, void __user *dst, snd_pcm_uframes_t count)
static int snd_rme9652_hw_silence(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, snd_pcm_uframes_t count)
static int snd_rme9652_reset(struct snd_pcm_substream *substream)
static int snd_rme9652_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_rme9652_channel_info(struct snd_pcm_substream *substream,
struct snd_pcm_channel_info *info)
static int snd_rme9652_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static void rme9652_silence_playback(struct snd_rme9652 *rme9652)
static int snd_rme9652_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_rme9652_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_rme9652_playback_subinfo =
;
static struct snd_pcm_hardware snd_rme9652_capture_subinfo =
;
static unsigned int period_sizes[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_period_sizes = ;
static int snd_rme9652_hw_rule_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_rme9652_hw_rule_channels_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_rme9652_hw_rule_rate_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_rme9652_playback_open(struct snd_pcm_substream *substream)
static int snd_rme9652_playback_release(struct snd_pcm_substream *substream)
static int snd_rme9652_capture_open(struct snd_pcm_substream *substream)
static int snd_rme9652_capture_release(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_rme9652_playback_ops = ;
static struct snd_pcm_ops snd_rme9652_capture_ops = ;
static int __devinit snd_rme9652_create_pcm(struct snd_card *card,
struct snd_rme9652 *rme9652)
static int __devinit snd_rme9652_create(struct snd_card *card,
struct snd_rme9652 *rme9652,
int precise_ptr)
static void snd_rme9652_card_free(struct snd_card *card)
static int __devinit snd_rme9652_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_rme9652_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_hammerfall_init(void)
static void __exit alsa_card_hammerfall_exit(void)
module_init(alsa_card_hammerfall_init)
module_exit(alsa_card_hammerfall_exit)
