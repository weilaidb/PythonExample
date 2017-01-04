#undef HAVE_REALLY_SLOW_DMA_CONTROLLER
void snd_dma_program(unsigned long dma,
unsigned long addr, unsigned int size,
unsigned short mode)
EXPORT_SYMBOL(snd_dma_program);
void snd_dma_disable(unsigned long dma)
EXPORT_SYMBOL(snd_dma_disable);
unsigned int snd_dma_pointer(unsigned long dma, unsigned int size)
EXPORT_SYMBOL(snd_dma_pointer);
