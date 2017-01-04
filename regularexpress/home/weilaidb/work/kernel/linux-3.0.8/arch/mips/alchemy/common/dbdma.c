#if defined(CONFIG_SOC_AU1550) || defined(CONFIG_SOC_AU1200)
static DEFINE_SPINLOCK(au1xxx_dbdma_spin_lock);
#define ALIGN_ADDR(x, a)	((((u32)(x)) + (a-1)) & ~(a-1))
static dbdma_global_t *dbdma_gptr =
(dbdma_global_t *)KSEG1ADDR(AU1550_DBDMA_CONF_PHYS_ADDR);
static int dbdma_initialized;
static dbdev_tab_t dbdev_tab[] = ;
#define DBDEV_TAB_SIZE	ARRAY_SIZE(dbdev_tab)
static chan_tab_t *chan_tab_ptr[NUM_DBDMA_CHANS];
static dbdev_tab_t *find_dbdev_id(u32 id)
void *au1xxx_ddma_get_nextptr_virt(au1x_ddma_desc_t *dp)
EXPORT_SYMBOL(au1xxx_ddma_get_nextptr_virt);
u32 au1xxx_ddma_add_device(dbdev_tab_t *dev)
EXPORT_SYMBOL(au1xxx_ddma_add_device);
void au1xxx_ddma_del_device(u32 devid)
EXPORT_SYMBOL(au1xxx_ddma_del_device);
u32 au1xxx_dbdma_chan_alloc(u32 srcid, u32 destid,
void (*callback)(int, void *), void *callparam)
EXPORT_SYMBOL(au1xxx_dbdma_chan_alloc);
u32 au1xxx_dbdma_set_devwidth(u32 chanid, int bits)
EXPORT_SYMBOL(au1xxx_dbdma_set_devwidth);
u32 au1xxx_dbdma_ring_alloc(u32 chanid, int entries)
EXPORT_SYMBOL(au1xxx_dbdma_ring_alloc);
u32 au1xxx_dbdma_put_source(u32 chanid, dma_addr_t buf, int nbytes, u32 flags)
EXPORT_SYMBOL(au1xxx_dbdma_put_source);
u32 au1xxx_dbdma_put_dest(u32 chanid, dma_addr_t buf, int nbytes, u32 flags)
EXPORT_SYMBOL(au1xxx_dbdma_put_dest);
u32 au1xxx_dbdma_get_dest(u32 chanid, void **buf, int *nbytes)
EXPORT_SYMBOL_GPL(au1xxx_dbdma_get_dest);
void au1xxx_dbdma_stop(u32 chanid)
EXPORT_SYMBOL(au1xxx_dbdma_stop);
void au1xxx_dbdma_start(u32 chanid)
EXPORT_SYMBOL(au1xxx_dbdma_start);
void au1xxx_dbdma_reset(u32 chanid)
EXPORT_SYMBOL(au1xxx_dbdma_reset);
u32 au1xxx_get_dma_residue(u32 chanid)
EXPORT_SYMBOL_GPL(au1xxx_get_dma_residue);
void au1xxx_dbdma_chan_free(u32 chanid)
EXPORT_SYMBOL(au1xxx_dbdma_chan_free);
static irqreturn_t dbdma_interrupt(int irq, void *dev_id)
void au1xxx_dbdma_dump(u32 chanid)
u32 au1xxx_dbdma_put_dscr(u32 chanid, au1x_ddma_desc_t *dscr)
static unsigned long alchemy_dbdma_pm_data[NUM_DBDMA_CHANS + 1][6];
static int alchemy_dbdma_suspend(void)
static void alchemy_dbdma_resume(void)
static struct syscore_ops alchemy_dbdma_syscore_ops = ;
static int __init au1xxx_dbdma_init(void)
subsys_initcall(au1xxx_dbdma_init);
