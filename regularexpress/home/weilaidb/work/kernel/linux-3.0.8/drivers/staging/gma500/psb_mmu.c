struct psb_mmu_driver ;
struct psb_mmu_pd;
struct psb_mmu_pt ;
struct psb_mmu_pd ;
static inline uint32_t psb_mmu_pt_index(uint32_t offset)
static inline uint32_t psb_mmu_pd_index(uint32_t offset)
static inline void psb_clflush(void *addr)
static inline void psb_mmu_clflush(struct psb_mmu_driver *driver,
void *addr)
static void psb_page_clflush(struct psb_mmu_driver *driver, struct page* page)
static void psb_pages_clflush(struct psb_mmu_driver *driver,
struct page *page[], unsigned long num_pages)
static void psb_mmu_flush_pd_locked(struct psb_mmu_driver *driver,
int force)
static void psb_mmu_flush_pd(struct psb_mmu_driver *driver, int force)
void psb_mmu_flush(struct psb_mmu_driver *driver, int rc_prot)
void psb_mmu_set_pd_context(struct psb_mmu_pd *pd, int hw_context)
static inline unsigned long psb_pd_addr_end(unsigned long addr,
unsigned long end)
static inline uint32_t psb_mmu_mask_pte(uint32_t pfn, int type)
struct psb_mmu_pd *psb_mmu_alloc_pd(struct psb_mmu_driver *driver,
int trap_pagefaults, int invalid_type)
void psb_mmu_free_pt(struct psb_mmu_pt *pt)
void psb_mmu_free_pagedir(struct psb_mmu_pd *pd)
static struct psb_mmu_pt *psb_mmu_alloc_pt(struct psb_mmu_pd *pd)
struct psb_mmu_pt *psb_mmu_pt_alloc_map_lock(struct psb_mmu_pd *pd,
unsigned long addr)
static struct psb_mmu_pt *psb_mmu_pt_map_lock(struct psb_mmu_pd *pd,
unsigned long addr)
static void psb_mmu_pt_unmap_unlock(struct psb_mmu_pt *pt)
static inline void psb_mmu_set_pte(struct psb_mmu_pt *pt,
unsigned long addr, uint32_t pte)
static inline void psb_mmu_invalidate_pte(struct psb_mmu_pt *pt,
unsigned long addr)
void psb_mmu_mirror_gtt(struct psb_mmu_pd *pd,
uint32_t mmu_offset, uint32_t gtt_start,
uint32_t gtt_pages)
struct psb_mmu_pd *psb_mmu_get_default_pd(struct psb_mmu_driver *driver)
uint32_t psb_get_default_pd_addr(struct psb_mmu_driver *driver)
void psb_mmu_driver_takedown(struct psb_mmu_driver *driver)
struct psb_mmu_driver *psb_mmu_driver_init(uint8_t __iomem * registers,
int trap_pagefaults,
int invalid_type,
struct drm_psb_private *dev_priv)
static void psb_mmu_flush_ptes(struct psb_mmu_pd *pd,
unsigned long address, uint32_t num_pages,
uint32_t desired_tile_stride,
uint32_t hw_tile_stride)
void psb_mmu_remove_pfn_sequence(struct psb_mmu_pd *pd,
unsigned long address, uint32_t num_pages)
void psb_mmu_remove_pages(struct psb_mmu_pd *pd, unsigned long address,
uint32_t num_pages, uint32_t desired_tile_stride,
uint32_t hw_tile_stride)
int psb_mmu_insert_pfn_sequence(struct psb_mmu_pd *pd, uint32_t start_pfn,
unsigned long address, uint32_t num_pages,
int type)
int psb_mmu_insert_pages(struct psb_mmu_pd *pd, struct page **pages,
unsigned long address, uint32_t num_pages,
uint32_t desired_tile_stride,
uint32_t hw_tile_stride, int type)
int psb_mmu_virtual_to_pfn(struct psb_mmu_pd *pd, uint32_t virtual,
unsigned long *pfn)
