static int pxa2xx_pcm_prepare(struct snd_pcm_substream *substream)
static int pxa2xx_pcm_open(struct snd_pcm_substream *substream)
static int pxa2xx_pcm_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops pxa2xx_pcm_ops = ;
static u64 pxa2xx_pcm_dmamask = 0xffffffff;
int pxa2xx_pcm_new(struct snd_card *card, struct pxa2xx_pcm_client *client,
struct snd_pcm **rpcm)
EXPORT_SYMBOL(pxa2xx_pcm_new);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_DESCRIPTION("Intel PXA2xx PCM DMA module");
MODULE_LICENSE("GPL");
