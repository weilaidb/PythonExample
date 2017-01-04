MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("VIA ICEnsemble ICE1724/1720 (Envy24HT/PT)");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static char *model[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for ICE1724 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for ICE1724 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable ICE1724 soundcard.");
module_param_array(model, charp, NULL, 0444);
MODULE_PARM_DESC(model, "Use the given board model.");
static DEFINE_PCI_DEVICE_TABLE(snd_vt1724_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_vt1724_ids);
static int PRO_RATE_LOCKED;
static int PRO_RATE_RESET = 1;
static unsigned int PRO_RATE_DEFAULT = 44100;
static char *ext_clock_names[1] = ;
static inline int stdclock_is_spdif_master(struct snd_ice1712 *ice)
static inline int is_pro_rate_locked(struct snd_ice1712 *ice)
static unsigned char snd_vt1724_ac97_ready(struct snd_ice1712 *ice)
static int snd_vt1724_ac97_wait_bit(struct snd_ice1712 *ice, unsigned char bit)
static void snd_vt1724_ac97_write(struct snd_ac97 *ac97,
unsigned short reg,
unsigned short val)
static unsigned short snd_vt1724_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static void snd_vt1724_set_gpio_dir(struct snd_ice1712 *ice, unsigned int data)
static unsigned int snd_vt1724_get_gpio_dir(struct snd_ice1712 *ice)
static void snd_vt1724_set_gpio_mask(struct snd_ice1712 *ice, unsigned int data)
static unsigned int snd_vt1724_get_gpio_mask(struct snd_ice1712 *ice)
static void snd_vt1724_set_gpio_data(struct snd_ice1712 *ice, unsigned int data)
static unsigned int snd_vt1724_get_gpio_data(struct snd_ice1712 *ice)
static void vt1724_midi_clear_rx(struct snd_ice1712 *ice)
static inline struct snd_rawmidi_substream *
get_rawmidi_substream(struct snd_ice1712 *ice, unsigned int stream)
static void enable_midi_irq(struct snd_ice1712 *ice, u8 flag, int enable);
static void vt1724_midi_write(struct snd_ice1712 *ice)
static void vt1724_midi_read(struct snd_ice1712 *ice)
static void enable_midi_irq(struct snd_ice1712 *ice, u8 flag, int enable)
static void vt1724_enable_midi_irq(struct snd_rawmidi_substream *substream,
u8 flag, int enable)
static int vt1724_midi_output_open(struct snd_rawmidi_substream *s)
static int vt1724_midi_output_close(struct snd_rawmidi_substream *s)
static void vt1724_midi_output_trigger(struct snd_rawmidi_substream *s, int up)
static void vt1724_midi_output_drain(struct snd_rawmidi_substream *s)
static struct snd_rawmidi_ops vt1724_midi_output_ops = ;
static int vt1724_midi_input_open(struct snd_rawmidi_substream *s)
static int vt1724_midi_input_close(struct snd_rawmidi_substream *s)
static void vt1724_midi_input_trigger(struct snd_rawmidi_substream *s, int up)
static struct snd_rawmidi_ops vt1724_midi_input_ops = ;
static irqreturn_t snd_vt1724_interrupt(int irq, void *dev_id)
static unsigned int rates[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates_96 = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates_48 = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates_192 = ;
struct vt1724_pcm_reg ;
static int snd_vt1724_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
#define DMA_STARTS	(VT1724_RDMA0_START|VT1724_PDMA0_START|VT1724_RDMA1_START|\
VT1724_PDMA1_START|VT1724_PDMA2_START|VT1724_PDMA3_START|VT1724_PDMA4_START)
#define DMA_PAUSES	(VT1724_RDMA0_PAUSE|VT1724_PDMA0_PAUSE|VT1724_RDMA1_PAUSE|\
VT1724_PDMA1_PAUSE|VT1724_PDMA2_PAUSE|VT1724_PDMA3_PAUSE|VT1724_PDMA4_PAUSE)
static const unsigned int stdclock_rate_list[16] = ;
static unsigned int stdclock_get_rate(struct snd_ice1712 *ice)
static void stdclock_set_rate(struct snd_ice1712 *ice, unsigned int rate)
static unsigned char stdclock_set_mclk(struct snd_ice1712 *ice,
unsigned int rate)
static int snd_vt1724_set_pro_rate(struct snd_ice1712 *ice, unsigned int rate,
int force)
static int snd_vt1724_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_vt1724_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_vt1724_playback_pro_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_vt1724_playback_pro_pointer(struct snd_pcm_substream *substream)
static int snd_vt1724_pcm_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_vt1724_pcm_pointer(struct snd_pcm_substream *substream)
static const struct vt1724_pcm_reg vt1724_pdma0_reg = ;
static const struct vt1724_pcm_reg vt1724_pdma4_reg = ;
static const struct vt1724_pcm_reg vt1724_rdma0_reg = ;
static const struct vt1724_pcm_reg vt1724_rdma1_reg = ;
#define vt1724_playback_pro_reg vt1724_pdma0_reg
#define vt1724_playback_spdif_reg vt1724_pdma4_reg
#define vt1724_capture_pro_reg vt1724_rdma0_reg
#define vt1724_capture_spdif_reg vt1724_rdma1_reg
static const struct snd_pcm_hardware snd_vt1724_playback_pro = ;
static const struct snd_pcm_hardware snd_vt1724_spdif = ;
static const struct snd_pcm_hardware snd_vt1724_2ch_stereo = ;
static void set_std_hw_rates(struct snd_ice1712 *ice)
static int set_rate_constraints(struct snd_ice1712 *ice,
struct snd_pcm_substream *substream)
#define VT1724_BUFFER_ALIGN	0x20
static int snd_vt1724_playback_pro_open(struct snd_pcm_substream *substream)
static int snd_vt1724_capture_pro_open(struct snd_pcm_substream *substream)
static int snd_vt1724_playback_pro_close(struct snd_pcm_substream *substream)
static int snd_vt1724_capture_pro_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_vt1724_playback_pro_ops = ;
static struct snd_pcm_ops snd_vt1724_capture_pro_ops = ;
static int __devinit snd_vt1724_pcm_profi(struct snd_ice1712 *ice, int device)
static void update_spdif_bits(struct snd_ice1712 *ice, unsigned int val)
static void update_spdif_rate(struct snd_ice1712 *ice, unsigned int rate)
static int snd_vt1724_playback_spdif_prepare(struct snd_pcm_substream *substream)
static int snd_vt1724_playback_spdif_open(struct snd_pcm_substream *substream)
static int snd_vt1724_playback_spdif_close(struct snd_pcm_substream *substream)
static int snd_vt1724_capture_spdif_open(struct snd_pcm_substream *substream)
static int snd_vt1724_capture_spdif_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_vt1724_playback_spdif_ops = ;
static struct snd_pcm_ops snd_vt1724_capture_spdif_ops = ;
static int __devinit snd_vt1724_pcm_spdif(struct snd_ice1712 *ice, int device)
static const struct vt1724_pcm_reg vt1724_playback_dma_regs[3] = ;
static int snd_vt1724_playback_indep_prepare(struct snd_pcm_substream *substream)
static int snd_vt1724_playback_indep_open(struct snd_pcm_substream *substream)
static int snd_vt1724_playback_indep_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_vt1724_playback_indep_ops = ;
static int __devinit snd_vt1724_pcm_indep(struct snd_ice1712 *ice, int device)
static int __devinit snd_vt1724_ac97_mixer(struct snd_ice1712 *ice)
static inline unsigned int eeprom_triple(struct snd_ice1712 *ice, int idx)
static void snd_vt1724_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_vt1724_proc_init(struct snd_ice1712 *ice)
static int snd_vt1724_eeprom_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_vt1724_eeprom_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_eeprom __devinitdata = ;
static int snd_vt1724_spdif_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static unsigned int encode_spdif_bits(struct snd_aes_iec958 *diga)
static void decode_spdif_bits(struct snd_aes_iec958 *diga, unsigned int val)
static int snd_vt1724_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_spdif_default __devinitdata =
;
static int snd_vt1724_spdif_maskc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_spdif_maskp_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_spdif_maskc __devinitdata =
;
static struct snd_kcontrol_new snd_vt1724_spdif_maskp __devinitdata =
;
#define snd_vt1724_spdif_sw_info		snd_ctl_boolean_mono_info
static int snd_vt1724_spdif_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_spdif_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_spdif_switch __devinitdata =
;
static int snd_vt1724_pro_internal_clock_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_vt1724_pro_internal_clock_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stdclock_get_spdif_master_type(struct snd_ice1712 *ice)
static int stdclock_set_spdif_clock(struct snd_ice1712 *ice, int type)
static int snd_vt1724_pro_internal_clock_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_pro_internal_clock __devinitdata = ;
#define snd_vt1724_pro_rate_locking_info	snd_ctl_boolean_mono_info
static int snd_vt1724_pro_rate_locking_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_pro_rate_locking_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_pro_rate_locking __devinitdata = ;
#define snd_vt1724_pro_rate_reset_info		snd_ctl_boolean_mono_info
static int snd_vt1724_pro_rate_reset_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_pro_rate_reset_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_pro_rate_reset __devinitdata = ;
static int snd_vt1724_pro_route_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static inline int analog_route_shift(int idx)
static inline int digital_route_shift(int idx)
int snd_ice1724_get_route_val(struct snd_ice1712 *ice, int shift)
int snd_ice1724_put_route_val(struct snd_ice1712 *ice, unsigned int val,
int shift)
static int snd_vt1724_pro_route_analog_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_pro_route_analog_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_pro_route_spdif_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_vt1724_pro_route_spdif_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_mixer_pro_analog_route __devinitdata =
;
static struct snd_kcontrol_new snd_vt1724_mixer_pro_spdif_route __devinitdata = ;
static int snd_vt1724_pro_peak_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_vt1724_pro_peak_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_vt1724_mixer_pro_peak __devinitdata = ;
static struct snd_ice1712_card_info no_matched __devinitdata;
static struct snd_ice1712_card_info *card_tables[] __devinitdata = ;
static void wait_i2c_busy(struct snd_ice1712 *ice)
unsigned char snd_vt1724_read_i2c(struct snd_ice1712 *ice,
unsigned char dev, unsigned char addr)
void snd_vt1724_write_i2c(struct snd_ice1712 *ice,
unsigned char dev, unsigned char addr, unsigned char data)
static int __devinit snd_vt1724_read_eeprom(struct snd_ice1712 *ice,
const char *modelname)
static void snd_vt1724_chip_reset(struct snd_ice1712 *ice)
static int snd_vt1724_chip_init(struct snd_ice1712 *ice)
static int __devinit snd_vt1724_spdif_build_controls(struct snd_ice1712 *ice)
static int __devinit snd_vt1724_build_controls(struct snd_ice1712 *ice)
static int snd_vt1724_free(struct snd_ice1712 *ice)
static int snd_vt1724_dev_free(struct snd_device *device)
static int __devinit snd_vt1724_create(struct snd_card *card,
struct pci_dev *pci,
const char *modelname,
struct snd_ice1712 **r_ice1712)
static int __devinit snd_vt1724_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_vt1724_remove(struct pci_dev *pci)
static int snd_vt1724_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_vt1724_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_ice1724_init(void)
static void __exit alsa_card_ice1724_exit(void)
module_init(alsa_card_ice1724_init)
module_exit(alsa_card_ice1724_exit)
