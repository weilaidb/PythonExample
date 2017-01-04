MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>, Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Memory allocator for ALSA system.");
MODULE_LICENSE("GPL");
static DEFINE_MUTEX(list_mutex);
static LIST_HEAD(mem_list_head);
struct snd_mem_list ;
#define SNDRV_DMA_DEVICE_UNUSED (unsigned int)-1
static long snd_allocated_pages;
static inline void inc_snd_pages(int order)
static inline void dec_snd_pages(int order)
void *snd_malloc_pages(size_t size, gfp_t gfp_flags)
void snd_free_pages(void *ptr, size_t size)
static void *snd_malloc_dev_pages(struct device *dev, size_t size, dma_addr_t *dma)
static void snd_free_dev_pages(struct device *dev, size_t size, void *ptr,
dma_addr_t dma)
int snd_dma_alloc_pages(int type, struct device *device, size_t size,
struct snd_dma_buffer *dmab)
int snd_dma_alloc_pages_fallback(int type, struct device *device, size_t size,
struct snd_dma_buffer *dmab)
void snd_dma_free_pages(struct snd_dma_buffer *dmab)
size_t snd_dma_get_reserved_buf(struct snd_dma_buffer *dmab, unsigned int id)
int snd_dma_reserve_buf(struct snd_dma_buffer *dmab, unsigned int id)
static void free_all_reserved_pages(void)
#define SND_MEM_PROC_FILE	"driver/snd-page-alloc"
static struct proc_dir_entry *snd_mem_proc;
static int snd_mem_proc_read(struct seq_file *seq, void *offset)
static int snd_mem_proc_open(struct inode *inode, struct file *file)
#define gettoken(bufp) strsep(bufp, " \t\n")
static ssize_t snd_mem_proc_write(struct file *file, const char __user * buffer,
size_t count, loff_t * ppos)
static const struct file_operations snd_mem_proc_fops = ;
static int __init snd_mem_init(void)
static void __exit snd_mem_exit(void)
module_init(snd_mem_init)
module_exit(snd_mem_exit)
EXPORT_SYMBOL(snd_dma_alloc_pages);
EXPORT_SYMBOL(snd_dma_alloc_pages_fallback);
EXPORT_SYMBOL(snd_dma_free_pages);
EXPORT_SYMBOL(snd_dma_get_reserved_buf);
EXPORT_SYMBOL(snd_dma_reserve_buf);
EXPORT_SYMBOL(snd_malloc_pages);
EXPORT_SYMBOL(snd_free_pages);
