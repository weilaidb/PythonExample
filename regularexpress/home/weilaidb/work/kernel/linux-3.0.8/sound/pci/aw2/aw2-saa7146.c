#define AW2_SAA7146_M
#define WRITEREG(value, addr) writel((value), chip->base_addr + (addr))
#define READREG(addr) readl(chip->base_addr + (addr))
static struct snd_aw2_saa7146_cb_param
arr_substream_it_playback_cb[NB_STREAM_PLAYBACK];
static struct snd_aw2_saa7146_cb_param
arr_substream_it_capture_cb[NB_STREAM_CAPTURE];
static int snd_aw2_saa7146_get_limit(int size);
int snd_aw2_saa7146_free(struct snd_aw2_saa7146 *chip)
void snd_aw2_saa7146_setup(struct snd_aw2_saa7146 *chip,
void __iomem *pci_base_addr)
void snd_aw2_saa7146_pcm_init_playback(struct snd_aw2_saa7146 *chip,
int stream_number,
unsigned long dma_addr,
unsigned long period_size,
unsigned long buffer_size)
void snd_aw2_saa7146_pcm_init_capture(struct snd_aw2_saa7146 *chip,
int stream_number, unsigned long dma_addr,
unsigned long period_size,
unsigned long buffer_size)
void snd_aw2_saa7146_define_it_playback_callback(unsigned int stream_number,
snd_aw2_saa7146_it_cb
p_it_callback,
void *p_callback_param)
void snd_aw2_saa7146_define_it_capture_callback(unsigned int stream_number,
snd_aw2_saa7146_it_cb
p_it_callback,
void *p_callback_param)
void snd_aw2_saa7146_pcm_trigger_start_playback(struct snd_aw2_saa7146 *chip,
int stream_number)
void snd_aw2_saa7146_pcm_trigger_stop_playback(struct snd_aw2_saa7146 *chip,
int stream_number)
void snd_aw2_saa7146_pcm_trigger_start_capture(struct snd_aw2_saa7146 *chip,
int stream_number)
void snd_aw2_saa7146_pcm_trigger_stop_capture(struct snd_aw2_saa7146 *chip,
int stream_number)
irqreturn_t snd_aw2_saa7146_interrupt(int irq, void *dev_id)
unsigned int snd_aw2_saa7146_get_hw_ptr_playback(struct snd_aw2_saa7146 *chip,
int stream_number,
unsigned char *start_addr,
unsigned int buffer_size)
unsigned int snd_aw2_saa7146_get_hw_ptr_capture(struct snd_aw2_saa7146 *chip,
int stream_number,
unsigned char *start_addr,
unsigned int buffer_size)
void snd_aw2_saa7146_use_digital_input(struct snd_aw2_saa7146 *chip,
int use_digital)
int snd_aw2_saa7146_is_using_digital_input(struct snd_aw2_saa7146 *chip)
static int snd_aw2_saa7146_get_limit(int size)
