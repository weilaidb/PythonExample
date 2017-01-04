#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_DESCRIPTION("v4l2 driver module for cx25821 based TV cards");
MODULE_AUTHOR("Hiep Huynh <hiep.huynh@conexant.com>");
MODULE_LICENSE("GPL");
static int _intr_msk = FLD_AUD_SRC_RISCI1 | FLD_AUD_SRC_OF |
FLD_AUD_SRC_SYNC | FLD_AUD_SRC_OPC_ERR;
int cx25821_sram_channel_setup_upstream_audio(struct cx25821_dev *dev,
struct sram_channel *ch,
unsigned int bpl, u32 risc)
static __le32 *cx25821_risc_field_upstream_audio(struct cx25821_dev *dev,
__le32 *rp,
dma_addr_t databuf_phys_addr,
unsigned int bpl,
int fifo_enable)
int cx25821_risc_buffer_upstream_audio(struct cx25821_dev *dev,
struct pci_dev *pci,
unsigned int bpl, unsigned int lines)
void cx25821_free_memory_audio(struct cx25821_dev *dev)
void cx25821_stop_upstream_audio(struct cx25821_dev *dev)
void cx25821_free_mem_upstream_audio(struct cx25821_dev *dev)
int cx25821_get_audio_data(struct cx25821_dev *dev,
struct sram_channel *sram_ch)
static void cx25821_audioups_handler(struct work_struct *work)
int cx25821_openfile_audio(struct cx25821_dev *dev,
struct sram_channel *sram_ch)
static int cx25821_audio_upstream_buffer_prepare(struct cx25821_dev *dev,
struct sram_channel *sram_ch,
int bpl)
int cx25821_audio_upstream_irq(struct cx25821_dev *dev, int chan_num,
u32 status)
static irqreturn_t cx25821_upstream_irq_audio(int irq, void *dev_id)
static void cx25821_wait_fifo_enable(struct cx25821_dev *dev,
struct sram_channel *sram_ch)
int cx25821_start_audio_dma_upstream(struct cx25821_dev *dev,
struct sram_channel *sram_ch)
int cx25821_audio_upstream_init(struct cx25821_dev *dev, int channel_select)
