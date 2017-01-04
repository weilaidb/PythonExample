#define __OMAP_VRAM_H__
#define OMAP_VRAM_MEMTYPE_SDRAM		0
#define OMAP_VRAM_MEMTYPE_SRAM		1
#define OMAP_VRAM_MEMTYPE_MAX		1
extern int omap_vram_add_region(unsigned long paddr, size_t size);
extern int omap_vram_free(unsigned long paddr, size_t size);
extern int omap_vram_alloc(int mtype, size_t size, unsigned long *paddr);
extern int omap_vram_reserve(unsigned long paddr, size_t size);
extern void omap_vram_get_info(unsigned long *vram, unsigned long *free_vram,
unsigned long *largest_free_block);
extern void omap_vram_set_sdram_vram(u32 size, u32 start);
extern void omap_vram_set_sram_vram(u32 size, u32 start);
extern void omap_vram_reserve_sdram_memblock(void);
extern unsigned long omap_vram_reserve_sram(unsigned long sram_pstart,
unsigned long sram_vstart,
unsigned long sram_size,
unsigned long pstart_avail,
unsigned long size_avail);
static inline void omap_vram_set_sdram_vram(u32 size, u32 start)
static inline void omap_vram_set_sram_vram(u32 size, u32 start)
static inline void omap_vram_reserve_sdram_memblock(void)
static inline unsigned long omap_vram_reserve_sram(unsigned long sram_pstart,
unsigned long sram_vstart,
unsigned long sram_size,
unsigned long pstart_avail,
unsigned long size_avail)
