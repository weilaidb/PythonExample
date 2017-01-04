#define GET_MAX_PERIODS(buf_bytes, period_bytes) \
((buf_bytes) / (period_bytes))
#define PERIOD_OFFSET(buf_addr, period_num, period_bytes) \
((buf_addr) + ((period_num) * (period_bytes)))
#define RWF_STM_RD		0x01
#define RWF_STM_WT		0x02
struct siu_port *siu_ports[SIU_PORT_NUM];
static int siu_pcm_stmwrite_stop(struct siu_port *port_info)
static int siu_pcm_stmwrite_start(struct siu_port *port_info)
static void siu_dma_tx_complete(void *arg)
static int siu_pcm_wr_set(struct siu_port *port_info,
dma_addr_t buff, u32 size)
static int siu_pcm_rd_set(struct siu_port *port_info,
dma_addr_t buff, size_t size)
static void siu_io_tasklet(unsigned long data)
static int siu_pcm_stmread_start(struct siu_port *port_info)
static int siu_pcm_stmread_stop(struct siu_port *port_info)
static int siu_pcm_hw_params(struct snd_pcm_substream *ss,
struct snd_pcm_hw_params *hw_params)
static int siu_pcm_hw_free(struct snd_pcm_substream *ss)
static bool filter(struct dma_chan *chan, void *slave)
static int siu_pcm_open(struct snd_pcm_substream *ss)
static int siu_pcm_close(struct snd_pcm_substream *ss)
static int siu_pcm_prepare(struct snd_pcm_substream *ss)
static int siu_pcm_trigger(struct snd_pcm_substream *ss, int cmd)
static snd_pcm_uframes_t siu_pcm_pointer_dma(struct snd_pcm_substream *ss)
static int siu_pcm_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static void siu_pcm_free(struct snd_pcm *pcm)
static struct snd_pcm_ops siu_pcm_ops = ;
struct snd_soc_platform_driver siu_platform = ;
EXPORT_SYMBOL_GPL(siu_platform);
