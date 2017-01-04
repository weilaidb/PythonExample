#define __set_tlb_bus(trident,page,ptr,addr) \
do  while (0)
#define __tlb_to_ptr(trident,page) \
(void*)((trident)->tlb.shadow_entries[page])
#define __tlb_to_addr(trident,page) \
(dma_addr_t)le32_to_cpu((trident->tlb.entries[page]) & ~(SNDRV_TRIDENT_PAGE_SIZE - 1))
#if PAGE_SIZE == 4096
#define ALIGN_PAGE_SIZE		PAGE_SIZE
#define MAX_ALIGN_PAGES		SNDRV_TRIDENT_MAX_PAGES
#define set_tlb_bus(trident,page,ptr,addr) __set_tlb_bus(trident,page,ptr,addr)
#define set_silent_tlb(trident,page)	__set_tlb_bus(trident, page, (unsigned long)trident->tlb.silent_page.area, trident->tlb.silent_page.addr)
#define get_aligned_page(offset)	((offset) >> 12)
#define aligned_page_offset(page)	((page) << 12)
#define page_to_ptr(trident,page)	__tlb_to_ptr(trident, page)
#define page_to_addr(trident,page)	__tlb_to_addr(trident, page)
#elif PAGE_SIZE == 8192
#define ALIGN_PAGE_SIZE		PAGE_SIZE
#define MAX_ALIGN_PAGES		(SNDRV_TRIDENT_MAX_PAGES / 2)
#define get_aligned_page(offset)	((offset) >> 13)
#define aligned_page_offset(page)	((page) << 13)
#define page_to_ptr(trident,page)	__tlb_to_ptr(trident, (page) << 1)
#define page_to_addr(trident,page)	__tlb_to_addr(trident, (page) << 1)
static inline void set_tlb_bus(struct snd_trident *trident, int page,
unsigned long ptr, dma_addr_t addr)
static inline void set_silent_tlb(struct snd_trident *trident, int page)
#define UNIT_PAGES		(PAGE_SIZE / SNDRV_TRIDENT_PAGE_SIZE)
#define ALIGN_PAGE_SIZE		(SNDRV_TRIDENT_PAGE_SIZE * UNIT_PAGES)
#define MAX_ALIGN_PAGES		(SNDRV_TRIDENT_MAX_PAGES / UNIT_PAGES)
#define get_aligned_page(offset)	((offset) / ALIGN_PAGE_SIZE)
#define aligned_page_offset(page)	((page) * ALIGN_PAGE_SIZE)
#define page_to_ptr(trident,page)	__tlb_to_ptr(trident, (page) * UNIT_PAGES)
#define page_to_addr(trident,page)	__tlb_to_addr(trident, (page) * UNIT_PAGES)
static inline void set_tlb_bus(struct snd_trident *trident, int page,
unsigned long ptr, dma_addr_t addr)
static inline void set_silent_tlb(struct snd_trident *trident, int page)
static inline void *offset_ptr(struct snd_trident *trident, int offset)
#define firstpg(blk)	(((struct snd_trident_memblk_arg *)snd_util_memblk_argptr(blk))->first_page)
#define lastpg(blk)	(((struct snd_trident_memblk_arg *)snd_util_memblk_argptr(blk))->last_page)
static struct snd_util_memblk *
search_empty(struct snd_util_memhdr *hdr, int size)
static int is_valid_page(unsigned long ptr)
static struct snd_util_memblk *
snd_trident_alloc_sg_pages(struct snd_trident *trident,
struct snd_pcm_substream *substream)
static struct snd_util_memblk *
snd_trident_alloc_cont_pages(struct snd_trident *trident,
struct snd_pcm_substream *substream)
struct snd_util_memblk *
snd_trident_alloc_pages(struct snd_trident *trident,
struct snd_pcm_substream *substream)
int snd_trident_free_pages(struct snd_trident *trident,
struct snd_util_memblk *blk)
