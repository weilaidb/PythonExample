#define CARD_NAME "ESS Maestro1/2"
#define DRIVER_NAME "ES1968"
MODULE_DESCRIPTION("ESS Maestro");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_JOYSTICK 1
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int total_bufsize[SNDRV_CARDS] = ;
static int pcm_substreams_p[SNDRV_CARDS] = ;
static int pcm_substreams_c[SNDRV_CARDS] = ;
static int clock[SNDRV_CARDS];
static int use_pm[SNDRV_CARDS] = ;
static int enable_mpu[SNDRV_CARDS] = ;
static int joystick[SNDRV_CARDS];
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable " CARD_NAME " soundcard.");
module_param_array(total_bufsize, int, NULL, 0444);
MODULE_PARM_DESC(total_bufsize, "Total buffer size in kB.");
module_param_array(pcm_substreams_p, int, NULL, 0444);
MODULE_PARM_DESC(pcm_substreams_p, "PCM Playback substreams for " CARD_NAME " soundcard.");
module_param_array(pcm_substreams_c, int, NULL, 0444);
MODULE_PARM_DESC(pcm_substreams_c, "PCM Capture substreams for " CARD_NAME " soundcard.");
module_param_array(clock, int, NULL, 0444);
MODULE_PARM_DESC(clock, "Clock on " CARD_NAME " soundcard.  (0 = auto-detect)");
module_param_array(use_pm, int, NULL, 0444);
MODULE_PARM_DESC(use_pm, "Toggle power-management.  (0 = off, 1 = on, 2 = auto)");
module_param_array(enable_mpu, int, NULL, 0444);
MODULE_PARM_DESC(enable_mpu, "Enable MPU401.  (0 = off, 1 = on, 2 = auto)");
module_param_array(joystick, bool, NULL, 0444);
MODULE_PARM_DESC(joystick, "Enable joystick.");
#define NR_APUS			64
#define NR_APU_REGS		16
#define NEC_VERSA_SUBID1	0x80581033
#define NEC_VERSA_SUBID2	0x803c1033
#define ESS_FMT_STEREO     	0x01
#define ESS_FMT_16BIT      	0x02
#define DAC_RUNNING		1
#define ADC_RUNNING		2
#define ESS_DISABLE_AUDIO	0x8000
#define ESS_ENABLE_SERIAL_IRQ	0x4000
#define IO_ADRESS_ALIAS		0x0020
#define MPU401_IRQ_ENABLE	0x0010
#define MPU401_IO_ENABLE	0x0008
#define GAME_IO_ENABLE		0x0004
#define FM_IO_ENABLE		0x0002
#define SB_IO_ENABLE		0x0001
#define PIC_SNOOP1		0x4000
#define PIC_SNOOP2		0x2000
#define SAFEGUARD		0x0800
#define DMA_CLEAR		0x0700
#define DMA_DDMA		0x0000
#define DMA_TDMA		0x0100
#define DMA_PCPCI		0x0200
#define POST_WRITE		0x0080
#define PCI_TIMING		0x0040
#define SWAP_LR			0x0020
#define SUBTR_DECODE		0x0002
#define SPDIF_CONFB		0x0100
#define HWV_CONFB		0x0080
#define DEBOUNCE		0x0040
#define GPIO_CONFB		0x0020
#define CHI_CONFB		0x0010
#define IDMA_CONFB		0x0008
#define MIDI_FIX		0x0004
#define IRQ_TO_ISA		0x0001
#define	RINGB_2CODEC_ID_MASK	0x0003
#define RINGB_DIS_VALIDATION	0x0008
#define RINGB_EN_SPDIF		0x0010
#define	RINGB_EN_2CODEC		0x0020
#define RINGB_SING_BIT_DUAL	0x0040
#define ESM_INDEX		0x02
#define ESM_DATA		0x00
#define ESM_AC97_INDEX		0x30
#define	ESM_AC97_DATA		0x32
#define ESM_RING_BUS_DEST	0x34
#define ESM_RING_BUS_CONTR_A	0x36
#define ESM_RING_BUS_CONTR_B	0x38
#define ESM_RING_BUS_SDO	0x3A
#define WC_INDEX		0x10
#define WC_DATA			0x12
#define WC_CONTROL		0x14
#define ASSP_INDEX		0x80
#define ASSP_MEMORY		0x82
#define ASSP_DATA		0x84
#define ASSP_CONTROL_A		0xA2
#define ASSP_CONTROL_B		0xA4
#define ASSP_CONTROL_C		0xA6
#define ASSP_HOSTW_INDEX	0xA8
#define ASSP_HOSTW_DATA		0xAA
#define ASSP_HOSTW_IRQ		0xAC
#define ESM_MPU401_PORT		0x98
#define ESM_PORT_HOST_IRQ	0x18
#define IDR0_DATA_PORT		0x00
#define IDR1_CRAM_POINTER	0x01
#define IDR2_CRAM_DATA		0x02
#define IDR3_WAVE_DATA		0x03
#define IDR4_WAVE_PTR_LOW	0x04
#define IDR5_WAVE_PTR_HI	0x05
#define IDR6_TIMER_CTRL		0x06
#define IDR7_WAVE_ROMRAM	0x07
#define WRITEABLE_MAP		0xEFFFFF
#define READABLE_MAP		0x64003F
#define ESM_LEGACY_AUDIO_CONTROL 0x40
#define ESM_ACPI_COMMAND	0x54
#define ESM_CONFIG_A		0x50
#define ESM_CONFIG_B		0x52
#define ESM_DDMA		0x60
#define ESM_BOB_ENABLE		0x0001
#define ESM_BOB_START		0x0001
#define ESM_RESET_MAESTRO	0x8000
#define ESM_RESET_DIRECTSOUND   0x4000
#define ESM_HIRQ_ClkRun		0x0100
#define ESM_HIRQ_HW_VOLUME	0x0040
#define ESM_HIRQ_HARPO		0x0030
#define ESM_HIRQ_ASSP		0x0010
#define	ESM_HIRQ_DSIE		0x0004
#define ESM_HIRQ_MPU401		0x0002
#define ESM_HIRQ_SB		0x0001
#define ESM_MPU401_IRQ		0x02
#define ESM_SB_IRQ		0x01
#define ESM_SOUND_IRQ		0x04
#define	ESM_ASSP_IRQ		0x10
#define ESM_HWVOL_IRQ		0x40
#define ESS_SYSCLK		50000000
#define ESM_BOB_FREQ 		200
#define ESM_BOB_FREQ_MAX	800
#define ESM_FREQ_ESM1  		(49152000L / 1024L)
#define ESM_FREQ_ESM2  		(50000000L / 1024L)
#define ESM_APU_MODE_SHIFT	4
#define ESM_APU_MODE_MASK	(0xf << 4)
#define	ESM_APU_OFF		0x00
#define	ESM_APU_16BITLINEAR	0x01
#define	ESM_APU_16BITSTEREO	0x02
#define	ESM_APU_8BITLINEAR	0x03
#define	ESM_APU_8BITSTEREO	0x04
#define	ESM_APU_8BITDIFF	0x05
#define	ESM_APU_DIGITALDELAY	0x06
#define	ESM_APU_DUALTAP		0x07
#define	ESM_APU_CORRELATOR	0x08
#define	ESM_APU_INPUTMIXER	0x09
#define	ESM_APU_WAVETABLE	0x0A
#define	ESM_APU_SRCONVERTOR	0x0B
#define	ESM_APU_16BITPINGPONG	0x0C
#define	ESM_APU_RESERVED1	0x0D
#define	ESM_APU_RESERVED2	0x0E
#define	ESM_APU_RESERVED3	0x0F
#define ESM_APU_FILTER_Q_SHIFT		0
#define ESM_APU_FILTER_Q_MASK		(3 << 0)
#define ESM_APU_FILTER_LESSQ	0x00
#define ESM_APU_FILTER_MOREQ	0x03
#define ESM_APU_FILTER_TYPE_SHIFT	2
#define ESM_APU_FILTER_TYPE_MASK	(3 << 2)
#define ESM_APU_ENV_TYPE_SHIFT		8
#define ESM_APU_ENV_TYPE_MASK		(3 << 8)
#define ESM_APU_ENV_STATE_SHIFT		10
#define ESM_APU_ENV_STATE_MASK		(3 << 10)
#define ESM_APU_END_CURVE		(1 << 12)
#define ESM_APU_INT_ON_LOOP		(1 << 13)
#define ESM_APU_DMA_ENABLE		(1 << 14)
#define ESM_APU_SUBMIX_GROUP_SHIRT	0
#define ESM_APU_SUBMIX_GROUP_MASK	(7 << 0)
#define ESM_APU_SUBMIX_MODE		(1 << 3)
#define ESM_APU_6dB			(1 << 4)
#define ESM_APU_DUAL_EFFECT		(1 << 5)
#define ESM_APU_EFFECT_CHANNELS_SHIFT	6
#define ESM_APU_EFFECT_CHANNELS_MASK	(3 << 6)
#define ESM_APU_STEP_SIZE_MASK		0x0fff
#define ESM_APU_PHASE_SHIFT		0
#define ESM_APU_PHASE_MASK		(0xff << 0)
#define ESM_APU_WAVE64K_PAGE_SHIFT	8
#define ESM_APU_WAVE64K_PAGE_MASK	(0xff << 8)
#define ESM_APU_EFFECT_GAIN_SHIFT	0
#define ESM_APU_EFFECT_GAIN_MASK	(0xff << 0)
#define ESM_APU_TREMOLO_DEPTH_SHIFT	8
#define ESM_APU_TREMOLO_DEPTH_MASK	(0xf << 8)
#define ESM_APU_TREMOLO_RATE_SHIFT	12
#define ESM_APU_TREMOLO_RATE_MASK	(0xf << 12)
#define ESM_APU_AMPLITUDE_NOW_SHIFT	8
#define ESM_APU_AMPLITUDE_NOW_MASK	(0xff << 8)
#define ESM_APU_POLAR_PAN_SHIFT		0
#define ESM_APU_POLAR_PAN_MASK		(0x3f << 0)
#define	ESM_APU_PAN_CENTER_CIRCLE		0x00
#define	ESM_APU_PAN_MIDDLE_RADIUS		0x01
#define	ESM_APU_PAN_OUTSIDE_RADIUS		0x02
#define ESM_APU_FILTER_TUNING_SHIFT	8
#define ESM_APU_FILTER_TUNING_MASK	(0xff << 8)
#define ESM_APU_DATA_SRC_A_SHIFT	0
#define ESM_APU_DATA_SRC_A_MASK		(0x7f << 0)
#define ESM_APU_INV_POL_A		(1 << 7)
#define ESM_APU_DATA_SRC_B_SHIFT	8
#define ESM_APU_DATA_SRC_B_MASK		(0x7f << 8)
#define ESM_APU_INV_POL_B		(1 << 15)
#define ESM_APU_VIBRATO_RATE_SHIFT	0
#define ESM_APU_VIBRATO_RATE_MASK	(0xf << 0)
#define ESM_APU_VIBRATO_DEPTH_SHIFT	4
#define ESM_APU_VIBRATO_DEPTH_MASK	(0xf << 4)
#define ESM_APU_VIBRATO_PHASE_SHIFT	8
#define ESM_APU_VIBRATO_PHASE_MASK	(0xff << 8)
#define ESM_APU_RADIUS_SELECT		(1 << 6)
#define	ESM_APU_FILTER_2POLE_LOPASS	0x00
#define	ESM_APU_FILTER_2POLE_BANDPASS	0x01
#define	ESM_APU_FILTER_2POLE_HIPASS	0x02
#define	ESM_APU_FILTER_1POLE_LOPASS	0x03
#define	ESM_APU_FILTER_1POLE_HIPASS	0x04
#define	ESM_APU_FILTER_OFF		0x05
#define	ESM_APU_ATFP_AMPLITUDE			0x00
#define	ESM_APU_ATFP_TREMELO			0x01
#define	ESM_APU_ATFP_FILTER			0x02
#define	ESM_APU_ATFP_PAN			0x03
#define	ESM_APU_ATFP_FLG_OFF			0x00
#define	ESM_APU_ATFP_FLG_WAIT			0x01
#define	ESM_APU_ATFP_FLG_DONE			0x02
#define	ESM_APU_ATFP_FLG_INPROCESS		0x03
#define ESM_MEM_ALIGN		0x1000
#define ESM_MIXBUF_SIZE		0x400
#define ESM_MODE_PLAY		0
#define ESM_MODE_CAPTURE	1
enum snd_enum_apu_type ;
enum ;
struct esm_memory ;
struct esschan ;
struct es1968 ;
static irqreturn_t snd_es1968_interrupt(int irq, void *dev_id);
static DEFINE_PCI_DEVICE_TABLE(snd_es1968_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_es1968_ids);
static void __maestro_write(struct es1968 *chip, u16 reg, u16 data)
static inline void maestro_write(struct es1968 *chip, u16 reg, u16 data)
static u16 __maestro_read(struct es1968 *chip, u16 reg)
static inline u16 maestro_read(struct es1968 *chip, u16 reg)
static int snd_es1968_ac97_wait(struct es1968 *chip)
static int snd_es1968_ac97_wait_poll(struct es1968 *chip)
static void snd_es1968_ac97_write(struct snd_ac97 *ac97, unsigned short reg, unsigned short val)
static unsigned short snd_es1968_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static void apu_index_set(struct es1968 *chip, u16 index)
static void apu_data_set(struct es1968 *chip, u16 data)
static void __apu_set_register(struct es1968 *chip, u16 channel, u8 reg, u16 data)
static void apu_set_register(struct es1968 *chip, u16 channel, u8 reg, u16 data)
static u16 __apu_get_register(struct es1968 *chip, u16 channel, u8 reg)
static u16 apu_get_register(struct es1968 *chip, u16 channel, u8 reg)
static void wave_set_register(struct es1968 *chip, u16 reg, u16 value)
static u16 wave_get_register(struct es1968 *chip, u16 reg)
static void snd_es1968_bob_stop(struct es1968 *chip)
static void snd_es1968_bob_start(struct es1968 *chip)
static void snd_es1968_bob_inc(struct es1968 *chip, int freq)
static void snd_es1968_bob_dec(struct es1968 *chip)
static int
snd_es1968_calc_bob_rate(struct es1968 *chip, struct esschan *es,
struct snd_pcm_runtime *runtime)
static u32 snd_es1968_compute_rate(struct es1968 *chip, u32 freq)
static inline unsigned int
snd_es1968_get_dma_ptr(struct es1968 *chip, struct esschan *es)
static void snd_es1968_apu_set_freq(struct es1968 *chip, int apu, int freq)
static inline void snd_es1968_trigger_apu(struct es1968 *esm, int apu, int mode)
static void snd_es1968_pcm_start(struct es1968 *chip, struct esschan *es)
static void snd_es1968_pcm_stop(struct es1968 *chip, struct esschan *es)
static void snd_es1968_program_wavecache(struct es1968 *chip, struct esschan *es,
int channel, u32 addr, int capture)
static void snd_es1968_playback_setup(struct es1968 *chip, struct esschan *es,
struct snd_pcm_runtime *runtime)
static void init_capture_apu(struct es1968 *chip, struct esschan *es, int channel,
unsigned int pa, unsigned int bsize,
int mode, int route)
static void snd_es1968_capture_setup(struct es1968 *chip, struct esschan *es,
struct snd_pcm_runtime *runtime)
static int snd_es1968_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_es1968_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_es1968_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_es1968_playback = ;
static struct snd_pcm_hardware snd_es1968_capture = ;
static int calc_available_memory_size(struct es1968 *chip)
static struct esm_memory *snd_es1968_new_memory(struct es1968 *chip, int size)
static void snd_es1968_free_memory(struct es1968 *chip, struct esm_memory *buf)
static void snd_es1968_free_dmabuf(struct es1968 *chip)
static int __devinit
snd_es1968_init_dmabuf(struct es1968 *chip)
static int snd_es1968_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_es1968_hw_free(struct snd_pcm_substream *substream)
static int snd_es1968_alloc_apu_pair(struct es1968 *chip, int type)
static void snd_es1968_free_apu_pair(struct es1968 *chip, int apu)
static int snd_es1968_playback_open(struct snd_pcm_substream *substream)
static int snd_es1968_capture_open(struct snd_pcm_substream *substream)
static int snd_es1968_playback_close(struct snd_pcm_substream *substream)
static int snd_es1968_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_es1968_playback_ops = ;
static struct snd_pcm_ops snd_es1968_capture_ops = ;
#define CLOCK_MEASURE_BUFSIZE	16768
static void __devinit es1968_measure_clock(struct es1968 *chip)
static void snd_es1968_pcm_free(struct snd_pcm *pcm)
static int __devinit
snd_es1968_pcm(struct es1968 *chip, int device)
static void snd_es1968_suppress_jitter(struct es1968 *chip, struct esschan *es)
static void snd_es1968_update_pcm(struct es1968 *chip, struct esschan *es)
static void es1968_update_hw_volume(unsigned long private_data)
static irqreturn_t snd_es1968_interrupt(int irq, void *dev_id)
static int __devinit
snd_es1968_mixer(struct es1968 *chip)
static void snd_es1968_ac97_reset(struct es1968 *chip)
static void snd_es1968_reset(struct es1968 *chip)
static void snd_es1968_chip_init(struct es1968 *chip)
static void snd_es1968_start_irq(struct es1968 *chip)
static int es1968_suspend(struct pci_dev *pci, pm_message_t state)
static int es1968_resume(struct pci_dev *pci)
#define JOYSTICK_ADDR	0x200
static int __devinit snd_es1968_create_gameport(struct es1968 *chip, int dev)
static void snd_es1968_free_gameport(struct es1968 *chip)
static inline int snd_es1968_create_gameport(struct es1968 *chip, int dev)
static inline void snd_es1968_free_gameport(struct es1968 *chip)
static int __devinit snd_es1968_input_register(struct es1968 *chip)
#define GPIO_DATA	0x60
#define IO_MASK		4
#define IO_DIR		8
#define STR_DATA	0x0040
#define STR_CLK		0x0080
#define STR_WREN	0x0100
#define STR_MOST	0x0200
static void snd_es1968_tea575x_set_pins(struct snd_tea575x *tea, u8 pins)
static u8 snd_es1968_tea575x_get_pins(struct snd_tea575x *tea)
static void snd_es1968_tea575x_set_direction(struct snd_tea575x *tea, bool output)
static struct snd_tea575x_ops snd_es1968_tea_ops = ;
static int snd_es1968_free(struct es1968 *chip)
static int snd_es1968_dev_free(struct snd_device *device)
struct ess_device_list ;
static struct ess_device_list pm_whitelist[] __devinitdata = ;
static struct ess_device_list mpu_blacklist[] __devinitdata = ;
static int __devinit snd_es1968_create(struct snd_card *card,
struct pci_dev *pci,
int total_bufsize,
int play_streams,
int capt_streams,
int chip_type,
int do_pm,
struct es1968 **chip_ret)
static int __devinit snd_es1968_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_es1968_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_es1968_init(void)
static void __exit alsa_card_es1968_exit(void)
module_init(alsa_card_es1968_init)
module_exit(alsa_card_es1968_exit)
