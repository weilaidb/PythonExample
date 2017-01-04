#if defined(CONFIG_FB_OMAP) || defined(CONFIG_FB_OMAP_MODULE)
static struct omapfb_platform_data omapfb_config;
static int config_invalid;
static int configured_regions;
static u64 omap_fb_dma_mask = ~(u32)0;
static struct platform_device omap_fb_device = ;
void omapfb_set_platform_data(struct omapfb_platform_data *data)
static inline int ranges_overlap(unsigned long start1, unsigned long size1,
unsigned long start2, unsigned long size2)
static inline int range_included(unsigned long start1, unsigned long size1,
unsigned long start2, unsigned long size2)
static int fbmem_region_reserved(unsigned long start, size_t size)
static int __init get_fbmem_region(int region_idx, struct omapfb_mem_region *rg)
static int set_fbmem_region_type(struct omapfb_mem_region *rg, int mem_type,
unsigned long mem_start,
unsigned long mem_size)
static int check_fbmem_region(int region_idx, struct omapfb_mem_region *rg,
unsigned long start_avail, unsigned size_avail)
static int valid_sdram(unsigned long addr, unsigned long size)
static int reserve_sdram(unsigned long addr, unsigned long size)
void __init omapfb_reserve_sdram_memblock(void)
unsigned long __init omapfb_reserve_sram(unsigned long sram_pstart,
unsigned long sram_vstart,
unsigned long sram_size,
unsigned long pstart_avail,
unsigned long size_avail)
void omapfb_set_ctrl_platform_data(void *data)
static int __init omap_init_fb(void)
arch_initcall(omap_init_fb);
#elif defined(CONFIG_FB_OMAP2) || defined(CONFIG_FB_OMAP2_MODULE)
static u64 omap_fb_dma_mask = ~(u32)0;
static struct omapfb_platform_data omapfb_config;
static struct platform_device omap_fb_device = ;
void omapfb_set_platform_data(struct omapfb_platform_data *data)
static int __init omap_init_fb(void)
arch_initcall(omap_init_fb);
void omapfb_reserve_sdram_memblock(void)
unsigned long __init omapfb_reserve_sram(unsigned long sram_pstart,
unsigned long sram_vstart,
unsigned long sram_size,
unsigned long start_avail,
unsigned long size_avail)
void omapfb_set_platform_data(struct omapfb_platform_data *data)
void omapfb_reserve_sdram_memblock(void)
unsigned long __init omapfb_reserve_sram(unsigned long sram_pstart,
unsigned long sram_vstart,
unsigned long sram_size,
unsigned long start_avail,
unsigned long size_avail)
