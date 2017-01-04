#define __set_ptb_entry(emu,page,addr) \
(((u32 *)(emu)->ptb_pages.area)[page] = cpu_to_le32(((addr) << 1) | (page)))
#define UNIT_PAGES		(PAGE_SIZE / EMUPAGESIZE)
#define MAX_ALIGN_PAGES		(MAXPAGES / UNIT_PAGES)
#define get_aligned_page(offset)	((offset) >> PAGE_SHIFT)
#define aligned_page_offset(page)	((page) << PAGE_SHIFT)
#if PAGE_SIZE == 4096
#define set_ptb_entry(emu,page,addr)	__set_ptb_entry(emu,page,addr)
#define set_silent_ptb(emu,page)	__set_ptb_entry(emu,page,emu->silent_page.addr)
static inline void set_ptb_entry(struct snd_emu10k1 *emu, int page, dma_addr_t addr)
static inline void set_silent_ptb(struct snd_emu10k1 *emu, int page)
static int synth_alloc_pages(struct snd_emu10k1 *hw, struct snd_emu10k1_memblk *blk);
static int synth_free_pages(struct snd_emu10k1 *hw, struct snd_emu10k1_memblk *blk);
#define get_emu10k1_memblk(l,member)	list_entry(l, struct snd_emu10k1_memblk, member)
static void emu10k1_memblk_init(struct snd_emu10k1_memblk *blk)
static int search_empty_map_area(struct snd_emu10k1 *emu, int npages, struct list_head **nextp)
static int map_memblk(struct snd_emu10k1 *emu, struct snd_emu10k1_memblk *blk)
static int unmap_memblk(struct snd_emu10k1 *emu, struct snd_emu10k1_memblk *blk)
static struct snd_emu10k1_memblk *
search_empty(struct snd_emu10k1 *emu, int size)
static int is_valid_page(struct snd_emu10k1 *emu, dma_addr_t addr)
int snd_emu10k1_memblk_map(struct snd_emu10k1 *emu, struct snd_emu10k1_memblk *blk)
EXPORT_SYMBOL(snd_emu10k1_memblk_map);
struct snd_util_memblk *
snd_emu10k1_alloc_pages(struct snd_emu10k1 *emu, struct snd_pcm_substream *substream)
int snd_emu10k1_free_pages(struct snd_emu10k1 *emu, struct snd_util_memblk *blk)
struct snd_util_memblk *
snd_emu10k1_synth_alloc(struct snd_emu10k1 *hw, unsigned int size)
EXPORT_SYMBOL(snd_emu10k1_synth_alloc);
int
snd_emu10k1_synth_free(struct snd_emu10k1 *emu, struct snd_util_memblk *memblk)
EXPORT_SYMBOL(snd_emu10k1_synth_free);
static void get_single_page_range(struct snd_util_memhdr *hdr,
struct snd_emu10k1_memblk *blk,
int *first_page_ret, int *last_page_ret)
static void __synth_free_pages(struct snd_emu10k1 *emu, int first_page,
int last_page)
static int synth_alloc_pages(struct snd_emu10k1 *emu, struct snd_emu10k1_memblk *blk)
static int synth_free_pages(struct snd_emu10k1 *emu, struct snd_emu10k1_memblk *blk)
static inline void *offset_ptr(struct snd_emu10k1 *emu, int page, int offset)
int snd_emu10k1_synth_bzero(struct snd_emu10k1 *emu, struct snd_util_memblk *blk,
int offset, int size)
EXPORT_SYMBOL(snd_emu10k1_synth_bzero);
int snd_emu10k1_synth_copy_from_user(struct snd_emu10k1 *emu, struct snd_util_memblk *blk,
int offset, const char __user *data, int size)
EXPORT_SYMBOL(snd_emu10k1_synth_copy_from_user);
