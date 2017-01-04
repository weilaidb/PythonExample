#define __SOUND_MEMALLOC_H
struct device;
struct snd_dma_device ;
#define snd_dma_pci_data(pci)	(&(pci)->dev)
#define snd_dma_isa_data()	NULL
#define snd_dma_continuous_data(x)	((struct device *)(unsigned long)(x))
#define SNDRV_DMA_TYPE_UNKNOWN		0
#define SNDRV_DMA_TYPE_CONTINUOUS	1
#define SNDRV_DMA_TYPE_DEV		2
#define SNDRV_DMA_TYPE_DEV_SG		3
#define SNDRV_DMA_TYPE_DEV_SG	SNDRV_DMA_TYPE_DEV
struct snd_dma_buffer ;
void *snd_malloc_sgbuf_pages(struct device *device,
size_t size, struct snd_dma_buffer *dmab,
size_t *res_size);
int snd_free_sgbuf_pages(struct snd_dma_buffer *dmab);
struct snd_sg_page ;
struct snd_sg_buf ;
static inline unsigned int snd_sgbuf_aligned_pages(size_t size)
static inline dma_addr_t snd_sgbuf_get_addr(struct snd_sg_buf *sgbuf, size_t offset)
static inline void *snd_sgbuf_get_ptr(struct snd_sg_buf *sgbuf, size_t offset)
int snd_dma_alloc_pages(int type, struct device *dev, size_t size,
struct snd_dma_buffer *dmab);
int snd_dma_alloc_pages_fallback(int type, struct device *dev, size_t size,
struct snd_dma_buffer *dmab);
void snd_dma_free_pages(struct snd_dma_buffer *dmab);
#define snd_dma_pci_buf_id(pci)	(((unsigned int)(pci)->vendor << 16) | (pci)->device)
size_t snd_dma_get_reserved_buf(struct snd_dma_buffer *dmab, unsigned int id);
int snd_dma_reserve_buf(struct snd_dma_buffer *dmab, unsigned int id);
void *snd_malloc_pages(size_t size, gfp_t gfp_flags);
void snd_free_pages(void *ptr, size_t size);
