#define CONF_DEBUG_VDMA 0
static VDMA_PGTBL_ENTRY *pgtbl;
static DEFINE_SPINLOCK(vdma_lock);
#define vdma_debug     ((CONF_DEBUG_VDMA) ? debuglvl : 0)
static int debuglvl = 3;
static inline void vdma_pgtbl_init(void)
static int __init vdma_init(void)
unsigned long vdma_alloc(unsigned long paddr, unsigned long size)
EXPORT_SYMBOL(vdma_alloc);
int vdma_free(unsigned long laddr)
EXPORT_SYMBOL(vdma_free);
int vdma_remap(unsigned long laddr, unsigned long paddr, unsigned long size)
unsigned long vdma_phys2log(unsigned long paddr)
EXPORT_SYMBOL(vdma_phys2log);
unsigned long vdma_log2phys(unsigned long laddr)
EXPORT_SYMBOL(vdma_log2phys);
void vdma_stats(void)
void vdma_enable(int channel)
EXPORT_SYMBOL(vdma_enable);
void vdma_disable(int channel)
EXPORT_SYMBOL(vdma_disable);
void vdma_set_mode(int channel, int mode)
EXPORT_SYMBOL(vdma_set_mode);
void vdma_set_addr(int channel, long addr)
EXPORT_SYMBOL(vdma_set_addr);
void vdma_set_count(int channel, int count)
EXPORT_SYMBOL(vdma_set_count);
int vdma_get_residue(int channel)
int vdma_get_enable(int channel)
arch_initcall(vdma_init);
