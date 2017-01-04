#define __SOUND_VX_COMMON_H
#if defined(CONFIG_FW_LOADER) || defined(CONFIG_FW_LOADER_MODULE)
#if !defined(CONFIG_USE_VXLOADER) && !defined(CONFIG_SND_VX_LIB)
#define SND_VX_FW_LOADER
struct firmware;
struct device;
#define VX_DRIVER_VERSION	0x010000
#define SIZE_MAX_CMD    0x10
#define SIZE_MAX_STATUS 0x10
struct vx_rmh ;
typedef u64 pcx_time_t;
#define VX_MAX_PIPES	16
#define VX_MAX_PERIODS	32
#define VX_MAX_CODECS	2
struct vx_ibl_info ;
struct vx_pipe ;
struct vx_core;
struct snd_vx_ops ;
struct snd_vx_hardware ;
#define SND_VX_HWDEP_ID		"VX Loader"
enum ;
enum ;
#define VX_ANALOG_OUT_LEVEL_MAX		0xe3
struct vx_core ;
struct vx_core *snd_vx_create(struct snd_card *card, struct snd_vx_hardware *hw,
struct snd_vx_ops *ops, int extra_size);
int snd_vx_setup_firmware(struct vx_core *chip);
int snd_vx_load_boot_image(struct vx_core *chip, const struct firmware *dsp);
int snd_vx_dsp_boot(struct vx_core *chip, const struct firmware *dsp);
int snd_vx_dsp_load(struct vx_core *chip, const struct firmware *dsp);
void snd_vx_free_firmware(struct vx_core *chip);
irqreturn_t snd_vx_irq_handler(int irq, void *dev);
static inline int vx_test_and_ack(struct vx_core *chip)
static inline void vx_validate_irq(struct vx_core *chip, int enable)
static inline unsigned char snd_vx_inb(struct vx_core *chip, int reg)
static inline unsigned int snd_vx_inl(struct vx_core *chip, int reg)
static inline void snd_vx_outb(struct vx_core *chip, int reg, unsigned char val)
static inline void snd_vx_outl(struct vx_core *chip, int reg, unsigned int val)
#define vx_inb(chip,reg)	snd_vx_inb(chip, VX_##reg)
#define vx_outb(chip,reg,val)	snd_vx_outb(chip, VX_##reg,val)
#define vx_inl(chip,reg)	snd_vx_inl(chip, VX_##reg)
#define vx_outl(chip,reg,val)	snd_vx_outl(chip, VX_##reg,val)
static inline void vx_reset_dsp(struct vx_core *chip)
int vx_send_msg(struct vx_core *chip, struct vx_rmh *rmh);
int vx_send_msg_nolock(struct vx_core *chip, struct vx_rmh *rmh);
int vx_send_rih(struct vx_core *chip, int cmd);
int vx_send_rih_nolock(struct vx_core *chip, int cmd);
void vx_reset_codec(struct vx_core *chip, int cold_reset);
int snd_vx_check_reg_bit(struct vx_core *chip, int reg, int mask, int bit, int time);
#define vx_check_isr(chip,mask,bit,time) snd_vx_check_reg_bit(chip, VX_ISR, mask, bit, time)
#define vx_wait_isr_bit(chip,bit) vx_check_isr(chip, bit, bit, 200)
#define vx_wait_for_rx_full(chip) vx_wait_isr_bit(chip, ISR_RX_FULL)
static inline void vx_pseudo_dma_write(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int count)
static inline void vx_pseudo_dma_read(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int count)
#define VX_ERR_MASK	0x1000000
#define vx_get_error(err)	(-(err) & ~VX_ERR_MASK)
int snd_vx_pcm_new(struct vx_core *chip);
void vx_pcm_update_intr(struct vx_core *chip, unsigned int events);
int snd_vx_mixer_new(struct vx_core *chip);
void vx_toggle_dac_mute(struct vx_core *chip, int mute);
int vx_sync_audio_source(struct vx_core *chip);
int vx_set_monitor_level(struct vx_core *chip, int audio, int level, int active);
void vx_set_iec958_status(struct vx_core *chip, unsigned int bits);
int vx_set_clock(struct vx_core *chip, unsigned int freq);
void vx_set_internal_clock(struct vx_core *chip, unsigned int freq);
int vx_change_frequency(struct vx_core *chip);
int snd_vx_suspend(struct vx_core *card, pm_message_t state);
int snd_vx_resume(struct vx_core *card);
#define vx_has_new_dsp(chip)	((chip)->type != VX_TYPE_BOARD)
#define vx_is_pcmcia(chip)	((chip)->type >= VX_TYPE_VXPOCKET)
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define ICR_HF1		0x10
#define ICR_HF0		0x08
#define ICR_TREQ	0x02
#define ICR_RREQ	0x01
#define CVR_HC		0x80
#define ISR_HF3		0x10
#define ISR_HF2		0x08
#define ISR_CHK		0x10
#define ISR_ERR		0x08
#define ISR_TX_READY	0x04
#define ISR_TX_EMPTY	0x02
#define ISR_RX_FULL	0x01
#define VX_DATA_CODEC_MASK	0x80
#define VX_DATA_XICOR_MASK	0x80
#define VX_SUER_FREQ_MASK		0x0c
#define VX_SUER_FREQ_32KHz_MASK		0x0c
#define VX_SUER_FREQ_44KHz_MASK		0x00
#define VX_SUER_FREQ_48KHz_MASK		0x04
#define VX_SUER_DATA_PRESENT_MASK	0x02
#define VX_SUER_CLOCK_PRESENT_MASK	0x01
#define VX_CUER_HH_BITC_SEL_MASK	0x08
#define VX_CUER_MH_BITC_SEL_MASK	0x04
#define VX_CUER_ML_BITC_SEL_MASK	0x02
#define VX_CUER_LL_BITC_SEL_MASK	0x01
#define XX_UER_CBITS_OFFSET_MASK	0x1f
#define VX_AUDIO_INFO_REAL_TIME	(1<<0)
#define VX_AUDIO_INFO_OFFLINE	(1<<1)
#define VX_AUDIO_INFO_MPEG1	(1<<5)
#define VX_AUDIO_INFO_MPEG2	(1<<6)
#define VX_AUDIO_INFO_LINEAR_8	(1<<7)
#define VX_AUDIO_INFO_LINEAR_16	(1<<8)
#define VX_AUDIO_INFO_LINEAR_24	(1<<9)
#define VXP_IRQ_OFFSET		0x40
#define IRQ_MESS_WRITE_END          0x30
#define IRQ_MESS_WRITE_NEXT         0x32
#define IRQ_MESS_READ_NEXT          0x34
#define IRQ_MESS_READ_END           0x36
#define IRQ_MESSAGE                 0x38
#define IRQ_RESET_CHK               0x3A
#define IRQ_CONNECT_STREAM_NEXT     0x26
#define IRQ_CONNECT_STREAM_END      0x28
#define IRQ_PAUSE_START_CONNECT     0x2A
#define IRQ_END_CONNECTION          0x2C
#define ASYNC_EVENTS_PENDING            0x008000
#define HBUFFER_EVENTS_PENDING          0x004000
#define NOTIF_EVENTS_PENDING            0x002000
#define TIME_CODE_EVENT_PENDING         0x001000
#define FREQUENCY_CHANGE_EVENT_PENDING  0x000800
#define END_OF_BUFFER_EVENTS_PENDING    0x000400
#define FATAL_DSP_ERROR                 0xff0000
#define HEADER_FMT_BASE			0xFED00000
#define HEADER_FMT_MONO			0x000000C0
#define HEADER_FMT_INTEL		0x00008000
#define HEADER_FMT_16BITS		0x00002000
#define HEADER_FMT_24BITS		0x00004000
#define HEADER_FMT_UPTO11		0x00000200
#define HEADER_FMT_UPTO32		0x00000100
#define XX_CODEC_SELECTOR               0x20
#define XX_CODEC_ADC_CONTROL_REGISTER   0x01
#define XX_CODEC_DAC_CONTROL_REGISTER   0x02
#define XX_CODEC_LEVEL_LEFT_REGISTER    0x03
#define XX_CODEC_LEVEL_RIGHT_REGISTER   0x04
#define XX_CODEC_PORT_MODE_REGISTER     0x05
#define XX_CODEC_STATUS_REPORT_REGISTER 0x06
#define XX_CODEC_CLOCK_CONTROL_REGISTER 0x07
#define CVAL_M110DB		0x000
#define CVAL_M99DB		0x02C
#define CVAL_M21DB		0x163
#define CVAL_M18DB		0x16F
#define CVAL_M10DB		0x18F
#define CVAL_0DB		0x1B7
#define CVAL_18DB		0x1FF
#define CVAL_MAX		0x1FF
#define AUDIO_IO_HAS_MUTE_LEVEL			0x400000
#define AUDIO_IO_HAS_MUTE_MONITORING_1		0x200000
#define AUDIO_IO_HAS_MUTE_MONITORING_2		0x100000
#define VALID_AUDIO_IO_DIGITAL_LEVEL		0x01
#define VALID_AUDIO_IO_MONITORING_LEVEL		0x02
#define VALID_AUDIO_IO_MUTE_LEVEL		0x04
#define VALID_AUDIO_IO_MUTE_MONITORING_1	0x08
#define VALID_AUDIO_IO_MUTE_MONITORING_2	0x10
