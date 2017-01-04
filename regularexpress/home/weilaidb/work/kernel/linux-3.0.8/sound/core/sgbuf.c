#define SGBUF_TBL_ALIGN		32
#define sgbuf_align_table(tbl)	ALIGN((tbl), SGBUF_TBL_ALIGN)
int snd_free_sgbuf_pages(struct snd_dma_buffer *dmab)
#define MAX_ALLOC_PAGES		32
void *snd_malloc_sgbuf_pages(struct device *device,
size_t size, struct snd_dma_buffer *dmab,
size_t *res_size)
