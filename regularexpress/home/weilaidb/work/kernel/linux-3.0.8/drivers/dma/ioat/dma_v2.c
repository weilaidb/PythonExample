int ioat_ring_alloc_order = 8;
module_param(ioat_ring_alloc_order, int, 0644);
MODULE_PARM_DESC(ioat_ring_alloc_order,
"ioat2+: allocate 2^n descriptors per channel"
" (default: 8 max: 16)");
static int ioat_ring_max_alloc_order = IOAT_MAX_ORDER;
module_param(ioat_ring_max_alloc_order, int, 0644);
MODULE_PARM_DESC(ioat_ring_max_alloc_order,
"ioat2+: upper limit for ring size (default: 16)");
void __ioat2_issue_pending(struct ioat2_dma_chan *ioat)
void ioat2_issue_pending(struct dma_chan *c)
static void ioat2_update_pending(struct ioat2_dma_chan *ioat)
static void __ioat2_start_null_desc(struct ioat2_dma_chan *ioat)
static void ioat2_start_null_desc(struct ioat2_dma_chan *ioat)
static void __cleanup(struct ioat2_dma_chan *ioat, unsigned long phys_complete)
static void ioat2_cleanup(struct ioat2_dma_chan *ioat)
void ioat2_cleanup_event(unsigned long data)
void __ioat2_restart_chan(struct ioat2_dma_chan *ioat)
int ioat2_quiesce(struct ioat_chan_common *chan, unsigned long tmo)
int ioat2_reset_sync(struct ioat_chan_common *chan, unsigned long tmo)
static void ioat2_restart_channel(struct ioat2_dma_chan *ioat)
void ioat2_timer_event(unsigned long data)
static int ioat2_reset_hw(struct ioat_chan_common *chan)
int ioat2_enumerate_channels(struct ioatdma_device *device)
static dma_cookie_t ioat2_tx_submit_unlock(struct dma_async_tx_descriptor *tx)
static struct ioat_ring_ent *ioat2_alloc_ring_ent(struct dma_chan *chan, gfp_t flags)
static void ioat2_free_ring_ent(struct ioat_ring_ent *desc, struct dma_chan *chan)
static struct ioat_ring_ent **ioat2_alloc_ring(struct dma_chan *c, int order, gfp_t flags)
void ioat2_free_chan_resources(struct dma_chan *c);
int ioat2_alloc_chan_resources(struct dma_chan *c)
bool reshape_ring(struct ioat2_dma_chan *ioat, int order)
int ioat2_check_space_lock(struct ioat2_dma_chan *ioat, int num_descs)
struct dma_async_tx_descriptor *
ioat2_dma_prep_memcpy_lock(struct dma_chan *c, dma_addr_t dma_dest,
dma_addr_t dma_src, size_t len, unsigned long flags)
void ioat2_free_chan_resources(struct dma_chan *c)
static ssize_t ring_size_show(struct dma_chan *c, char *page)
static struct ioat_sysfs_entry ring_size_attr = __ATTR_RO(ring_size);
static ssize_t ring_active_show(struct dma_chan *c, char *page)
static struct ioat_sysfs_entry ring_active_attr = __ATTR_RO(ring_active);
static struct attribute *ioat2_attrs[] = ;
struct kobj_type ioat2_ktype = ;
int __devinit ioat2_dma_probe(struct ioatdma_device *device, int dca)
