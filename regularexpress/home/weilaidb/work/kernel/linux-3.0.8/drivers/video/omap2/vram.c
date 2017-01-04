#define DBG(format, ...) pr_debug("VRAM: " format, ## __VA_ARGS__)
#define DBG(format, ...)
#define OMAP2_SRAM_START		0x40200000
#define OMAP2_SRAM_SIZE			0xa0000
#define MAX_POSTPONED_REGIONS 10
static bool vram_initialized;
static int postponed_cnt;
static struct  postponed_regions[MAX_POSTPONED_REGIONS];
struct vram_alloc ;
struct vram_region ;
static DEFINE_MUTEX(region_mutex);
static LIST_HEAD(region_list);
static inline int region_mem_type(unsigned long paddr)
static struct vram_region *omap_vram_create_region(unsigned long paddr,
unsigned pages)
static struct vram_alloc *omap_vram_create_allocation(struct vram_region *vr,
unsigned long paddr, unsigned pages)
static void omap_vram_free_allocation(struct vram_alloc *va)
int omap_vram_add_region(unsigned long paddr, size_t size)
int omap_vram_free(unsigned long paddr, size_t size)
EXPORT_SYMBOL(omap_vram_free);
static int _omap_vram_reserve(unsigned long paddr, unsigned pages)
int omap_vram_reserve(unsigned long paddr, size_t size)
EXPORT_SYMBOL(omap_vram_reserve);
static void _omap_vram_dma_cb(int lch, u16 ch_status, void *data)
static int _omap_vram_clear(u32 paddr, unsigned pages)
static int _omap_vram_alloc(int mtype, unsigned pages, unsigned long *paddr)
int omap_vram_alloc(int mtype, size_t size, unsigned long *paddr)
EXPORT_SYMBOL(omap_vram_alloc);
void omap_vram_get_info(unsigned long *vram,
unsigned long *free_vram,
unsigned long *largest_free_block)
EXPORT_SYMBOL(omap_vram_get_info);
#if defined(CONFIG_DEBUG_FS)
static int vram_debug_show(struct seq_file *s, void *unused)
static int vram_debug_open(struct inode *inode, struct file *file)
static const struct file_operations vram_debug_fops = ;
static int __init omap_vram_create_debugfs(void)
static __init int omap_vram_init(void)
arch_initcall(omap_vram_init);
static u32 omap_vram_sram_start __initdata;
static u32 omap_vram_sram_size __initdata;
static u32 omap_vram_sdram_start __initdata;
static u32 omap_vram_sdram_size __initdata;
static u32 omap_vram_def_sdram_size __initdata;
static u32 omap_vram_def_sdram_start __initdata;
static int __init omap_vram_early_vram(char *p)
early_param("vram", omap_vram_early_vram);
void __init omap_vram_reserve_sdram_memblock(void)
unsigned long __init omap_vram_reserve_sram(unsigned long sram_pstart,
unsigned long sram_vstart,
unsigned long sram_size,
unsigned long pstart_avail,
unsigned long size_avail)
void __init omap_vram_set_sdram_vram(u32 size, u32 start)
void __init omap_vram_set_sram_vram(u32 size, u32 start)
