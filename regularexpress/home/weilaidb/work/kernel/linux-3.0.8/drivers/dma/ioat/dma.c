int ioat_pending_level = 4;
module_param(ioat_pending_level, int, 0644);
MODULE_PARM_DESC(ioat_pending_level,
"high-water mark for pushing ioat descriptors (default: 4)");
static void ioat1_cleanup(struct ioat_dma_chan *ioat);
static void ioat1_dma_start_null_desc(struct ioat_dma_chan *ioat);
static irqreturn_t ioat_dma_do_interrupt(int irq, void *data)
static irqreturn_t ioat_dma_do_interrupt_msix(int irq, void *data)
void ioat_init_channel(struct ioatdma_device *device, struct ioat_chan_common *chan, int idx)
static int ioat1_enumerate_channels(struct ioatdma_device *device)
static inline void
__ioat1_dma_memcpy_issue_pending(struct ioat_dma_chan *ioat)
static void ioat1_dma_memcpy_issue_pending(struct dma_chan *chan)
static void ioat1_reset_channel(struct ioat_dma_chan *ioat)
static dma_cookie_t ioat1_tx_submit(struct dma_async_tx_descriptor *tx)
static struct ioat_desc_sw *
ioat_dma_alloc_descriptor(struct ioat_dma_chan *ioat, gfp_t flags)
static int ioat_initial_desc_count = 256;
module_param(ioat_initial_desc_count, int, 0644);
MODULE_PARM_DESC(ioat_initial_desc_count,
"ioat1: initial descriptors per channel (default: 256)");
static int ioat1_dma_alloc_chan_resources(struct dma_chan *c)
static void ioat1_dma_free_chan_resources(struct dma_chan *c)
static struct ioat_desc_sw *
ioat1_dma_get_next_descriptor(struct ioat_dma_chan *ioat)
static struct dma_async_tx_descriptor *
ioat1_dma_prep_memcpy(struct dma_chan *c, dma_addr_t dma_dest,
dma_addr_t dma_src, size_t len, unsigned long flags)
static void ioat1_cleanup_event(unsigned long data)
void ioat_dma_unmap(struct ioat_chan_common *chan, enum dma_ctrl_flags flags,
size_t len, struct ioat_dma_descriptor *hw)
unsigned long ioat_get_current_completion(struct ioat_chan_common *chan)
bool ioat_cleanup_preamble(struct ioat_chan_common *chan,
unsigned long *phys_complete)
static void __cleanup(struct ioat_dma_chan *ioat, unsigned long phys_complete)
static void ioat1_cleanup(struct ioat_dma_chan *ioat)
static void ioat1_timer_event(unsigned long data)
enum dma_status
ioat_dma_tx_status(struct dma_chan *c, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void ioat1_dma_start_null_desc(struct ioat_dma_chan *ioat)
#define IOAT_TEST_SIZE 2000
static void __devinit ioat_dma_test_callback(void *dma_async_param)
int __devinit ioat_dma_self_test(struct ioatdma_device *device)
static char ioat_interrupt_style[32] = "msix";
module_param_string(ioat_interrupt_style, ioat_interrupt_style,
sizeof(ioat_interrupt_style), 0644);
MODULE_PARM_DESC(ioat_interrupt_style,
"set ioat interrupt style: msix (default), "
"msix-single-vector, msi, intx)");
static int ioat_dma_setup_interrupts(struct ioatdma_device *device)
static void ioat_disable_interrupts(struct ioatdma_device *device)
int __devinit ioat_probe(struct ioatdma_device *device)
int __devinit ioat_register(struct ioatdma_device *device)
static void ioat1_intr_quirk(struct ioatdma_device *device)
static ssize_t ring_size_show(struct dma_chan *c, char *page)
static struct ioat_sysfs_entry ring_size_attr = __ATTR_RO(ring_size);
static ssize_t ring_active_show(struct dma_chan *c, char *page)
static struct ioat_sysfs_entry ring_active_attr = __ATTR_RO(ring_active);
static ssize_t cap_show(struct dma_chan *c, char *page)
struct ioat_sysfs_entry ioat_cap_attr = __ATTR_RO(cap);
static ssize_t version_show(struct dma_chan *c, char *page)
struct ioat_sysfs_entry ioat_version_attr = __ATTR_RO(version);
static struct attribute *ioat1_attrs[] = ;
static ssize_t
ioat_attr_show(struct kobject *kobj, struct attribute *attr, char *page)
const struct sysfs_ops ioat_sysfs_ops = ;
static struct kobj_type ioat1_ktype = ;
void ioat_kobject_add(struct ioatdma_device *device, struct kobj_type *type)
void ioat_kobject_del(struct ioatdma_device *device)
int __devinit ioat1_dma_probe(struct ioatdma_device *device, int dca)
void __devexit ioat_dma_remove(struct ioatdma_device *device)
