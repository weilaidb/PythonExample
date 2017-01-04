MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("ATI IXP MC97 controller");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = -2;
static char *id = SNDRV_DEFAULT_STR1;
static int ac97_clock = 48000;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for ATI IXP controller.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for ATI IXP controller.");
module_param(ac97_clock, int, 0444);
MODULE_PARM_DESC(ac97_clock, "AC'97 codec clock (default 48000Hz).");
static int enable;
module_param(enable, bool, 0444);
#define ATI_REG_ISR			0x00
#define  ATI_REG_ISR_MODEM_IN_XRUN	(1U<<0)
#define  ATI_REG_ISR_MODEM_IN_STATUS	(1U<<1)
#define  ATI_REG_ISR_MODEM_OUT1_XRUN	(1U<<2)
#define  ATI_REG_ISR_MODEM_OUT1_STATUS	(1U<<3)
#define  ATI_REG_ISR_MODEM_OUT2_XRUN	(1U<<4)
#define  ATI_REG_ISR_MODEM_OUT2_STATUS	(1U<<5)
#define  ATI_REG_ISR_MODEM_OUT3_XRUN	(1U<<6)
#define  ATI_REG_ISR_MODEM_OUT3_STATUS	(1U<<7)
#define  ATI_REG_ISR_PHYS_INTR		(1U<<8)
#define  ATI_REG_ISR_PHYS_MISMATCH	(1U<<9)
#define  ATI_REG_ISR_CODEC0_NOT_READY	(1U<<10)
#define  ATI_REG_ISR_CODEC1_NOT_READY	(1U<<11)
#define  ATI_REG_ISR_CODEC2_NOT_READY	(1U<<12)
#define  ATI_REG_ISR_NEW_FRAME		(1U<<13)
#define  ATI_REG_ISR_MODEM_GPIO_DATA	(1U<<14)
#define ATI_REG_IER			0x04
#define  ATI_REG_IER_MODEM_IN_XRUN_EN	(1U<<0)
#define  ATI_REG_IER_MODEM_STATUS_EN	(1U<<1)
#define  ATI_REG_IER_MODEM_OUT1_XRUN_EN	(1U<<2)
#define  ATI_REG_IER_MODEM_OUT2_XRUN_EN	(1U<<4)
#define  ATI_REG_IER_MODEM_OUT3_XRUN_EN	(1U<<6)
#define  ATI_REG_IER_PHYS_INTR_EN	(1U<<8)
#define  ATI_REG_IER_PHYS_MISMATCH_EN	(1U<<9)
#define  ATI_REG_IER_CODEC0_INTR_EN	(1U<<10)
#define  ATI_REG_IER_CODEC1_INTR_EN	(1U<<11)
#define  ATI_REG_IER_CODEC2_INTR_EN	(1U<<12)
#define  ATI_REG_IER_NEW_FRAME_EN	(1U<<13)
#define  ATI_REG_IER_MODEM_GPIO_DATA_EN	(1U<<14)
#define  ATI_REG_IER_MODEM_SET_BUS_BUSY	(1U<<15)
#define ATI_REG_CMD			0x08
#define  ATI_REG_CMD_POWERDOWN	(1U<<0)
#define  ATI_REG_CMD_MODEM_RECEIVE_EN	(1U<<1)
#define  ATI_REG_CMD_MODEM_SEND1_EN	(1U<<2)
#define  ATI_REG_CMD_MODEM_SEND2_EN	(1U<<3)
#define  ATI_REG_CMD_MODEM_SEND3_EN	(1U<<4)
#define  ATI_REG_CMD_MODEM_STATUS_MEM	(1U<<5)
#define  ATI_REG_CMD_MODEM_IN_DMA_EN	(1U<<8)
#define  ATI_REG_CMD_MODEM_OUT_DMA1_EN	(1U<<9)
#define  ATI_REG_CMD_MODEM_OUT_DMA2_EN	(1U<<10)
#define  ATI_REG_CMD_MODEM_OUT_DMA3_EN	(1U<<11)
#define  ATI_REG_CMD_AUDIO_PRESENT	(1U<<20)
#define  ATI_REG_CMD_MODEM_GPIO_THRU_DMA	(1U<<22)
#define  ATI_REG_CMD_LOOPBACK_EN	(1U<<23)
#define  ATI_REG_CMD_PACKED_DIS		(1U<<24)
#define  ATI_REG_CMD_BURST_EN		(1U<<25)
#define  ATI_REG_CMD_PANIC_EN		(1U<<26)
#define  ATI_REG_CMD_MODEM_PRESENT	(1U<<27)
#define  ATI_REG_CMD_ACLINK_ACTIVE	(1U<<28)
#define  ATI_REG_CMD_AC_SOFT_RESET	(1U<<29)
#define  ATI_REG_CMD_AC_SYNC		(1U<<30)
#define  ATI_REG_CMD_AC_RESET		(1U<<31)
#define ATI_REG_PHYS_OUT_ADDR		0x0c
#define  ATI_REG_PHYS_OUT_CODEC_MASK	(3U<<0)
#define  ATI_REG_PHYS_OUT_RW		(1U<<2)
#define  ATI_REG_PHYS_OUT_ADDR_EN	(1U<<8)
#define  ATI_REG_PHYS_OUT_ADDR_SHIFT	9
#define  ATI_REG_PHYS_OUT_DATA_SHIFT	16
#define ATI_REG_PHYS_IN_ADDR		0x10
#define  ATI_REG_PHYS_IN_READ_FLAG	(1U<<8)
#define  ATI_REG_PHYS_IN_ADDR_SHIFT	9
#define  ATI_REG_PHYS_IN_DATA_SHIFT	16
#define ATI_REG_SLOTREQ			0x14
#define ATI_REG_COUNTER			0x18
#define  ATI_REG_COUNTER_SLOT		(3U<<0)
#define  ATI_REG_COUNTER_BITCLOCK	(31U<<8)
#define ATI_REG_IN_FIFO_THRESHOLD	0x1c
#define ATI_REG_MODEM_IN_DMA_LINKPTR	0x20
#define ATI_REG_MODEM_IN_DMA_DT_START	0x24
#define ATI_REG_MODEM_IN_DMA_DT_NEXT	0x28
#define ATI_REG_MODEM_IN_DMA_DT_CUR	0x2c
#define ATI_REG_MODEM_IN_DMA_DT_SIZE	0x30
#define ATI_REG_MODEM_OUT_FIFO		0x34
#define  ATI_REG_MODEM_OUT1_DMA_THRESHOLD_MASK	(0xf<<16)
#define  ATI_REG_MODEM_OUT1_DMA_THRESHOLD_SHIFT	16
#define ATI_REG_MODEM_OUT_DMA1_LINKPTR	0x38
#define ATI_REG_MODEM_OUT_DMA2_LINKPTR	0x3c
#define ATI_REG_MODEM_OUT_DMA3_LINKPTR	0x40
#define ATI_REG_MODEM_OUT_DMA1_DT_START	0x44
#define ATI_REG_MODEM_OUT_DMA1_DT_NEXT	0x48
#define ATI_REG_MODEM_OUT_DMA1_DT_CUR	0x4c
#define ATI_REG_MODEM_OUT_DMA2_DT_START	0x50
#define ATI_REG_MODEM_OUT_DMA2_DT_NEXT	0x54
#define ATI_REG_MODEM_OUT_DMA2_DT_CUR	0x58
#define ATI_REG_MODEM_OUT_DMA3_DT_START	0x5c
#define ATI_REG_MODEM_OUT_DMA3_DT_NEXT	0x60
#define ATI_REG_MODEM_OUT_DMA3_DT_CUR	0x64
#define ATI_REG_MODEM_OUT_DMA12_DT_SIZE	0x68
#define ATI_REG_MODEM_OUT_DMA3_DT_SIZE	0x6c
#define ATI_REG_MODEM_OUT_FIFO_USED     0x70
#define ATI_REG_MODEM_OUT_GPIO		0x74
#define  ATI_REG_MODEM_OUT_GPIO_EN	   1
#define  ATI_REG_MODEM_OUT_GPIO_DATA_SHIFT 5
#define ATI_REG_MODEM_IN_GPIO		0x78
#define ATI_REG_MODEM_MIRROR		0x7c
#define ATI_REG_AUDIO_MIRROR		0x80
#define ATI_REG_MODEM_FIFO_FLUSH	0x88
#define  ATI_REG_MODEM_FIFO_OUT1_FLUSH	(1U<<0)
#define  ATI_REG_MODEM_FIFO_OUT2_FLUSH	(1U<<1)
#define  ATI_REG_MODEM_FIFO_OUT3_FLUSH	(1U<<2)
#define  ATI_REG_MODEM_FIFO_IN_FLUSH	(1U<<3)
#define  ATI_REG_LINKPTR_EN		(1U<<0)
#define ATI_MAX_DESCRIPTORS	256
struct atiixp_modem;
struct atiixp_dma_desc ;
enum ;
enum ;
enum ;
#define NUM_ATI_CODECS	3
struct atiixp_dma_ops ;
struct atiixp_dma ;
struct atiixp_modem ;
static DEFINE_PCI_DEVICE_TABLE(snd_atiixp_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_atiixp_ids);
static int snd_atiixp_update_bits(struct atiixp_modem *chip, unsigned int reg,
unsigned int mask, unsigned int value)
#define atiixp_write(chip,reg,value) \
writel(value, chip->remap_addr + ATI_REG_##reg)
#define atiixp_read(chip,reg) \
readl(chip->remap_addr + ATI_REG_##reg)
#define atiixp_update(chip,reg,mask,val) \
snd_atiixp_update_bits(chip, ATI_REG_##reg, mask, val)
#define ATI_DESC_LIST_SIZE \
PAGE_ALIGN(ATI_MAX_DESCRIPTORS * sizeof(struct atiixp_dma_desc))
static int atiixp_build_dma_packets(struct atiixp_modem *chip,
struct atiixp_dma *dma,
struct snd_pcm_substream *substream,
unsigned int periods,
unsigned int period_bytes)
static void atiixp_clear_dma_packets(struct atiixp_modem *chip,
struct atiixp_dma *dma,
struct snd_pcm_substream *substream)
static int snd_atiixp_acquire_codec(struct atiixp_modem *chip)
static unsigned short snd_atiixp_codec_read(struct atiixp_modem *chip,
unsigned short codec,
unsigned short reg)
static void snd_atiixp_codec_write(struct atiixp_modem *chip,
unsigned short codec,
unsigned short reg, unsigned short val)
static unsigned short snd_atiixp_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void snd_atiixp_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static int snd_atiixp_aclink_reset(struct atiixp_modem *chip)
static int snd_atiixp_aclink_down(struct atiixp_modem *chip)
#define ALL_CODEC_NOT_READY \
(ATI_REG_ISR_CODEC0_NOT_READY |\
ATI_REG_ISR_CODEC1_NOT_READY |\
ATI_REG_ISR_CODEC2_NOT_READY)
#define CODEC_CHECK_BITS (ALL_CODEC_NOT_READY|ATI_REG_ISR_NEW_FRAME)
static int snd_atiixp_codec_detect(struct atiixp_modem *chip)
static int snd_atiixp_chip_start(struct atiixp_modem *chip)
static int snd_atiixp_chip_stop(struct atiixp_modem *chip)
static snd_pcm_uframes_t snd_atiixp_pcm_pointer(struct snd_pcm_substream *substream)
static void snd_atiixp_xrun_dma(struct atiixp_modem *chip,
struct atiixp_dma *dma)
static void snd_atiixp_update_dma(struct atiixp_modem *chip,
struct atiixp_dma *dma)
static void snd_atiixp_check_bus_busy(struct atiixp_modem *chip)
static int snd_atiixp_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static void atiixp_out_flush_dma(struct atiixp_modem *chip)
static void atiixp_out_enable_dma(struct atiixp_modem *chip, int on)
static void atiixp_out_enable_transfer(struct atiixp_modem *chip, int on)
static void atiixp_in_enable_dma(struct atiixp_modem *chip, int on)
static void atiixp_in_enable_transfer(struct atiixp_modem *chip, int on)
static void atiixp_in_flush_dma(struct atiixp_modem *chip)
static int snd_atiixp_playback_prepare(struct snd_pcm_substream *substream)
static int snd_atiixp_capture_prepare(struct snd_pcm_substream *substream)
static int snd_atiixp_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_atiixp_pcm_hw_free(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_atiixp_pcm_hw =
;
static int snd_atiixp_pcm_open(struct snd_pcm_substream *substream,
struct atiixp_dma *dma, int pcm_type)
static int snd_atiixp_pcm_close(struct snd_pcm_substream *substream,
struct atiixp_dma *dma)
static int snd_atiixp_playback_open(struct snd_pcm_substream *substream)
static int snd_atiixp_playback_close(struct snd_pcm_substream *substream)
static int snd_atiixp_capture_open(struct snd_pcm_substream *substream)
static int snd_atiixp_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_atiixp_playback_ops = ;
static struct snd_pcm_ops snd_atiixp_capture_ops = ;
static struct atiixp_dma_ops snd_atiixp_playback_dma_ops = ;
static struct atiixp_dma_ops snd_atiixp_capture_dma_ops = ;
static int __devinit snd_atiixp_pcm_new(struct atiixp_modem *chip)
static irqreturn_t snd_atiixp_interrupt(int irq, void *dev_id)
static int __devinit snd_atiixp_mixer_new(struct atiixp_modem *chip, int clock)
static int snd_atiixp_suspend(struct pci_dev *pci, pm_message_t state)
static int snd_atiixp_resume(struct pci_dev *pci)
static void snd_atiixp_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_atiixp_proc_init(struct atiixp_modem *chip)
#define snd_atiixp_proc_init(chip)
static int snd_atiixp_free(struct atiixp_modem *chip)
static int snd_atiixp_dev_free(struct snd_device *device)
static int __devinit snd_atiixp_create(struct snd_card *card,
struct pci_dev *pci,
struct atiixp_modem **r_chip)
static int __devinit snd_atiixp_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_atiixp_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_atiixp_init(void)
static void __exit alsa_card_atiixp_exit(void)
module_init(alsa_card_atiixp_init)
module_exit(alsa_card_atiixp_exit)
