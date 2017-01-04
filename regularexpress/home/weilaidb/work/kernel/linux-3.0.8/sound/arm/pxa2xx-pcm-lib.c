static const struct snd_pcm_hardware pxa2xx_pcm_hardware = ;
int __pxa2xx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
EXPORT_SYMBOL(__pxa2xx_pcm_hw_params);
int __pxa2xx_pcm_hw_free(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(__pxa2xx_pcm_hw_free);
int pxa2xx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
EXPORT_SYMBOL(pxa2xx_pcm_trigger);
snd_pcm_uframes_t
pxa2xx_pcm_pointer(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(pxa2xx_pcm_pointer);
int __pxa2xx_pcm_prepare(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(__pxa2xx_pcm_prepare);
void pxa2xx_pcm_dma_irq(int dma_ch, void *dev_id)
EXPORT_SYMBOL(pxa2xx_pcm_dma_irq);
int __pxa2xx_pcm_open(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(__pxa2xx_pcm_open);
int __pxa2xx_pcm_close(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(__pxa2xx_pcm_close);
int pxa2xx_pcm_mmap(struct snd_pcm_substream *substream,
struct vm_area_struct *vma)
EXPORT_SYMBOL(pxa2xx_pcm_mmap);
int pxa2xx_pcm_preallocate_dma_buffer(struct snd_pcm *pcm, int stream)
EXPORT_SYMBOL(pxa2xx_pcm_preallocate_dma_buffer);
void pxa2xx_pcm_free_dma_buffers(struct snd_pcm *pcm)
EXPORT_SYMBOL(pxa2xx_pcm_free_dma_buffers);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_DESCRIPTION("Intel PXA2xx sound library");
MODULE_LICENSE("GPL");
