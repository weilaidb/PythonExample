static int preallocate_dma = 1;
module_param(preallocate_dma, int, 0444);
MODULE_PARM_DESC(preallocate_dma, "Preallocate DMA memory when the PCM devices are initialized.");
static int maximum_substreams = 4;
module_param(maximum_substreams, int, 0444);
MODULE_PARM_DESC(maximum_substreams, "Maximum substreams with preallocated DMA memory.");
static const size_t snd_minimum_buffer = 16384;
static int preallocate_pcm_pages(struct snd_pcm_substream *substream, size_t size)
static void snd_pcm_lib_preallocate_dma_free(struct snd_pcm_substream *substream)
int snd_pcm_lib_preallocate_free(struct snd_pcm_substream *substream)
int snd_pcm_lib_preallocate_free_for_all(struct snd_pcm *pcm)
EXPORT_SYMBOL(snd_pcm_lib_preallocate_free_for_all);
static void snd_pcm_lib_preallocate_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_lib_preallocate_max_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_pcm_lib_preallocate_proc_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static inline void preallocate_info_init(struct snd_pcm_substream *substream)
#define preallocate_info_init(s)
static int snd_pcm_lib_preallocate_pages1(struct snd_pcm_substream *substream,
size_t size, size_t max)
int snd_pcm_lib_preallocate_pages(struct snd_pcm_substream *substream,
int type, struct device *data,
size_t size, size_t max)
EXPORT_SYMBOL(snd_pcm_lib_preallocate_pages);
int snd_pcm_lib_preallocate_pages_for_all(struct snd_pcm *pcm,
int type, void *data,
size_t size, size_t max)
EXPORT_SYMBOL(snd_pcm_lib_preallocate_pages_for_all);
struct page *snd_pcm_sgbuf_ops_page(struct snd_pcm_substream *substream, unsigned long offset)
EXPORT_SYMBOL(snd_pcm_sgbuf_ops_page);
unsigned int snd_pcm_sgbuf_get_chunk_size(struct snd_pcm_substream *substream,
unsigned int ofs, unsigned int size)
EXPORT_SYMBOL(snd_pcm_sgbuf_get_chunk_size);
int snd_pcm_lib_malloc_pages(struct snd_pcm_substream *substream, size_t size)
EXPORT_SYMBOL(snd_pcm_lib_malloc_pages);
int snd_pcm_lib_free_pages(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(snd_pcm_lib_free_pages);
int _snd_pcm_lib_alloc_vmalloc_buffer(struct snd_pcm_substream *substream,
size_t size, gfp_t gfp_flags)
EXPORT_SYMBOL(_snd_pcm_lib_alloc_vmalloc_buffer);
int snd_pcm_lib_free_vmalloc_buffer(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(snd_pcm_lib_free_vmalloc_buffer);
struct page *snd_pcm_lib_get_vmalloc_page(struct snd_pcm_substream *substream,
unsigned long offset)
EXPORT_SYMBOL(snd_pcm_lib_get_vmalloc_page);
