#define AZF_USE_AC97_LAYER 1
MODULE_AUTHOR("Andreas Mohr <andi AT lisas.de>");
MODULE_DESCRIPTION("Aztech AZF3328 (PCI168)");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_GAMEPORT 1
#define DEBUG_MISC	0
#define DEBUG_CALLS	0
#define DEBUG_MIXER	0
#define DEBUG_CODEC	0
#define DEBUG_TIMER	0
#define DEBUG_GAME	0
#define DEBUG_PM	0
#define MIXER_TESTING	0
#if DEBUG_MISC
#define snd_azf3328_dbgmisc(format, args...) printk(KERN_DEBUG format, ##args)
#define snd_azf3328_dbgmisc(format, args...)
#if DEBUG_CALLS
#define snd_azf3328_dbgcalls(format, args...) printk(format, ##args)
#define snd_azf3328_dbgcallenter() printk(KERN_DEBUG "--> %s\n", __func__)
#define snd_azf3328_dbgcallleave() printk(KERN_DEBUG "<-- %s\n", __func__)
#define snd_azf3328_dbgcalls(format, args...)
#define snd_azf3328_dbgcallenter()
#define snd_azf3328_dbgcallleave()
#if DEBUG_MIXER
#define snd_azf3328_dbgmixer(format, args...) printk(KERN_DEBUG format, ##args)
#define snd_azf3328_dbgmixer(format, args...)
#if DEBUG_CODEC
#define snd_azf3328_dbgcodec(format, args...) printk(KERN_DEBUG format, ##args)
#define snd_azf3328_dbgcodec(format, args...)
#if DEBUG_MISC
#define snd_azf3328_dbgtimer(format, args...) printk(KERN_DEBUG format, ##args)
#define snd_azf3328_dbgtimer(format, args...)
#if DEBUG_GAME
#define snd_azf3328_dbggame(format, args...) printk(KERN_DEBUG format, ##args)
#define snd_azf3328_dbggame(format, args...)
#if DEBUG_PM
#define snd_azf3328_dbgpm(format, args...) printk(KERN_DEBUG format, ##args)
#define snd_azf3328_dbgpm(format, args...)
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for AZF3328 soundcard.");
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for AZF3328 soundcard.");
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable AZF3328 soundcard.");
static int seqtimer_scaling = 128;
module_param(seqtimer_scaling, int, 0444);
MODULE_PARM_DESC(seqtimer_scaling, "Set 1024000Hz sequencer timer scale factor (lockup danger!). Default 128.");
enum snd_azf3328_codec_type ;
struct snd_azf3328_codec_data ;
struct snd_azf3328 ;
static DEFINE_PCI_DEVICE_TABLE(snd_azf3328_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_azf3328_ids);
static int
snd_azf3328_io_reg_setb(unsigned reg, u8 mask, bool do_set)
static inline void
snd_azf3328_codec_outb(const struct snd_azf3328_codec_data *codec,
unsigned reg,
u8 value
)
static inline u8
snd_azf3328_codec_inb(const struct snd_azf3328_codec_data *codec, unsigned reg)
static inline void
snd_azf3328_codec_outw(const struct snd_azf3328_codec_data *codec,
unsigned reg,
u16 value
)
static inline u16
snd_azf3328_codec_inw(const struct snd_azf3328_codec_data *codec, unsigned reg)
static inline void
snd_azf3328_codec_outl(const struct snd_azf3328_codec_data *codec,
unsigned reg,
u32 value
)
static inline void
snd_azf3328_codec_outl_multi(const struct snd_azf3328_codec_data *codec,
unsigned reg, const void *buffer, int count
)
static inline u32
snd_azf3328_codec_inl(const struct snd_azf3328_codec_data *codec, unsigned reg)
static inline void
snd_azf3328_ctrl_outb(const struct snd_azf3328 *chip, unsigned reg, u8 value)
static inline u8
snd_azf3328_ctrl_inb(const struct snd_azf3328 *chip, unsigned reg)
static inline void
snd_azf3328_ctrl_outw(const struct snd_azf3328 *chip, unsigned reg, u16 value)
static inline void
snd_azf3328_ctrl_outl(const struct snd_azf3328 *chip, unsigned reg, u32 value)
static inline void
snd_azf3328_game_outb(const struct snd_azf3328 *chip, unsigned reg, u8 value)
static inline void
snd_azf3328_game_outw(const struct snd_azf3328 *chip, unsigned reg, u16 value)
static inline u8
snd_azf3328_game_inb(const struct snd_azf3328 *chip, unsigned reg)
static inline u16
snd_azf3328_game_inw(const struct snd_azf3328 *chip, unsigned reg)
static inline void
snd_azf3328_mixer_outw(const struct snd_azf3328 *chip, unsigned reg, u16 value)
static inline u16
snd_azf3328_mixer_inw(const struct snd_azf3328 *chip, unsigned reg)
#define AZF_MUTE_BIT 0x80
static bool
snd_azf3328_mixer_mute_control(const struct snd_azf3328 *chip,
unsigned reg, bool do_mute
)
static inline bool
snd_azf3328_mixer_mute_control_master(const struct snd_azf3328 *chip,
bool do_mute
)
static inline bool
snd_azf3328_mixer_mute_control_pcm(const struct snd_azf3328 *chip,
bool do_mute
)
static inline void
snd_azf3328_mixer_reset(const struct snd_azf3328 *chip)
static inline void
snd_azf3328_mixer_ac97_map_unsupported(unsigned short reg, const char *mode)
#define AZF_REG_MASK 0x3f
#define AZF_AC97_REG_UNSUPPORTED 0x8000
#define AZF_AC97_REG_REAL_IO_READ 0x4000
#define AZF_AC97_REG_REAL_IO_WRITE 0x2000
#define AZF_AC97_REG_REAL_IO_RW \
(AZF_AC97_REG_REAL_IO_READ | AZF_AC97_REG_REAL_IO_WRITE)
#define AZF_AC97_REG_EMU_IO_READ 0x0400
#define AZF_AC97_REG_EMU_IO_WRITE 0x0200
#define AZF_AC97_REG_EMU_IO_RW \
(AZF_AC97_REG_EMU_IO_READ | AZF_AC97_REG_EMU_IO_WRITE)
static unsigned short
snd_azf3328_mixer_ac97_map_reg_idx(unsigned short reg)
static const unsigned short
azf_emulated_ac97_caps =
AC97_BC_DEDICATED_MIC |
AC97_BC_BASS_TREBLE |
AC97_BC_HEADPHONE |
(13 << 10);
static const unsigned short
azf_emulated_ac97_powerdown =
AC97_PD_ADC_STATUS |
AC97_PD_DAC_STATUS |
AC97_PD_MIXER_STATUS |
AC97_PD_VREF_STATUS;
static const unsigned int
azf_emulated_ac97_vendor_id = 0x415a5401;
static unsigned short
snd_azf3328_mixer_ac97_read(struct snd_ac97 *ac97, unsigned short reg_ac97)
static void
snd_azf3328_mixer_ac97_write(struct snd_ac97 *ac97,
unsigned short reg_ac97, unsigned short val)
static int __devinit
snd_azf3328_mixer_new(struct snd_azf3328 *chip)
static void
snd_azf3328_mixer_write_volume_gradually(const struct snd_azf3328 *chip,
unsigned reg,
unsigned char dst_vol_left,
unsigned char dst_vol_right,
int chan_sel, int delay
)
struct azf3328_mixer_reg ;
#define COMPOSE_MIXER_REG(reg,lchan_shift,rchan_shift,mask,invert,stereo,enum_c) \
((reg) | (lchan_shift << 8) | (rchan_shift << 12) | \
(mask << 16) | \
(invert << 24) | \
(stereo << 25) | \
(enum_c << 26))
static void snd_azf3328_mixer_reg_decode(struct azf3328_mixer_reg *r, unsigned long val)
#define AZF3328_MIXER_SWITCH(xname, reg, shift, invert) \
#define AZF3328_MIXER_VOL_STEREO(xname, reg, mask, invert) \
#define AZF3328_MIXER_VOL_MONO(xname, reg, mask, is_right_chan) \
#define AZF3328_MIXER_VOL_SPECIAL(xname, reg, mask, shift, invert) \
#define AZF3328_MIXER_ENUM(xname, reg, enum_c, shift) \
static int
snd_azf3328_info_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int
snd_azf3328_get_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_azf3328_put_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_azf3328_info_mixer_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int
snd_azf3328_get_mixer_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_azf3328_put_mixer_enum(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_azf3328_mixer_controls[] __devinitdata = ;
static u16 __devinitdata snd_azf3328_init_values[][2] = ;
static int __devinit
snd_azf3328_mixer_new(struct snd_azf3328 *chip)
static int
snd_azf3328_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int
snd_azf3328_hw_free(struct snd_pcm_substream *substream)
static void
snd_azf3328_codec_setfmt(struct snd_azf3328_codec_data *codec,
enum azf_freq_t bitrate,
unsigned int format_width,
unsigned int channels
)
static inline void
snd_azf3328_codec_setfmt_lowpower(struct snd_azf3328_codec_data *codec
)
static void
snd_azf3328_ctrl_reg_6AH_update(struct snd_azf3328 *chip,
unsigned bitmask,
bool enable
)
static inline void
snd_azf3328_ctrl_enable_codecs(struct snd_azf3328 *chip, bool enable)
static void
snd_azf3328_ctrl_codec_activity(struct snd_azf3328 *chip,
enum snd_azf3328_codec_type codec_type,
bool enable
)
static void
snd_azf3328_codec_setdmaa(struct snd_azf3328_codec_data *codec,
unsigned long addr,
unsigned int period_bytes,
unsigned int buffer_bytes
)
static int
snd_azf3328_pcm_prepare(struct snd_pcm_substream *substream)
static int
snd_azf3328_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
snd_azf3328_pcm_pointer(struct snd_pcm_substream *substream
)
static inline void
snd_azf3328_gameport_irq_enable(struct snd_azf3328 *chip,
bool enable
)
static inline void
snd_azf3328_gameport_legacy_address_enable(struct snd_azf3328 *chip,
bool enable
)
static void
snd_azf3328_gameport_set_counter_frequency(struct snd_azf3328 *chip,
unsigned int freq_cfg
)
static inline void
snd_azf3328_gameport_axis_circuit_enable(struct snd_azf3328 *chip, bool enable)
static inline void
snd_azf3328_gameport_interrupt(struct snd_azf3328 *chip)
static int
snd_azf3328_gameport_open(struct gameport *gameport, int mode)
static void
snd_azf3328_gameport_close(struct gameport *gameport)
static int
snd_azf3328_gameport_cooked_read(struct gameport *gameport,
int *axes,
int *buttons
)
static int __devinit
snd_azf3328_gameport(struct snd_azf3328 *chip, int dev)
static void
snd_azf3328_gameport_free(struct snd_azf3328 *chip)
static inline int
snd_azf3328_gameport(struct snd_azf3328 *chip, int dev)
static inline void
snd_azf3328_gameport_free(struct snd_azf3328 *chip)
static inline void
snd_azf3328_gameport_interrupt(struct snd_azf3328 *chip)
static inline void
snd_azf3328_irq_log_unknown_type(u8 which)
static inline void
snd_azf3328_pcm_interrupt(const struct snd_azf3328_codec_data *first_codec,
u8 status
)
static irqreturn_t
snd_azf3328_interrupt(int irq, void *dev_id)
static const struct snd_pcm_hardware snd_azf3328_hardware =
;
static unsigned int snd_azf3328_fixed_rates[] = ;
static struct snd_pcm_hw_constraint_list snd_azf3328_hw_constraints_rates = ;
static int
snd_azf3328_pcm_open(struct snd_pcm_substream *substream,
enum snd_azf3328_codec_type codec_type
)
static int
snd_azf3328_pcm_playback_open(struct snd_pcm_substream *substream)
static int
snd_azf3328_pcm_capture_open(struct snd_pcm_substream *substream)
static int
snd_azf3328_pcm_i2s_out_open(struct snd_pcm_substream *substream)
static int
snd_azf3328_pcm_close(struct snd_pcm_substream *substream
)
static struct snd_pcm_ops snd_azf3328_playback_ops = ;
static struct snd_pcm_ops snd_azf3328_capture_ops = ;
static struct snd_pcm_ops snd_azf3328_i2s_out_ops = ;
static int __devinit
snd_azf3328_pcm(struct snd_azf3328 *chip)
static int
snd_azf3328_timer_start(struct snd_timer *timer)
static int
snd_azf3328_timer_stop(struct snd_timer *timer)
static int
snd_azf3328_timer_precise_resolution(struct snd_timer *timer,
unsigned long *num, unsigned long *den)
static struct snd_timer_hardware snd_azf3328_timer_hw = ;
static int __devinit
snd_azf3328_timer(struct snd_azf3328 *chip, int device)
static int
snd_azf3328_free(struct snd_azf3328 *chip)
static int
snd_azf3328_dev_free(struct snd_device *device)
static inline void
snd_azf3328_debug_show_ports(const struct snd_azf3328 *chip)
static int __devinit
snd_azf3328_create(struct snd_card *card,
struct pci_dev *pci,
unsigned long device_type,
struct snd_azf3328 **rchip)
static int __devinit
snd_azf3328_probe(struct pci_dev *pci, const struct pci_device_id *pci_id)
static void __devexit
snd_azf3328_remove(struct pci_dev *pci)
static inline void
snd_azf3328_suspend_regs(unsigned long io_addr, unsigned count, u32 *saved_regs)
static inline void
snd_azf3328_resume_regs(const u32 *saved_regs,
unsigned long io_addr,
unsigned count
)
static inline void
snd_azf3328_suspend_ac97(struct snd_azf3328 *chip)
static inline void
snd_azf3328_resume_ac97(const struct snd_azf3328 *chip)
static int
snd_azf3328_suspend(struct pci_dev *pci, pm_message_t state)
static int
snd_azf3328_resume(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init
alsa_card_azf3328_init(void)
static void __exit
alsa_card_azf3328_exit(void)
module_init(alsa_card_azf3328_init)
module_exit(alsa_card_azf3328_exit)
