#define IOATDMA_V2_H
extern int ioat_pending_level;
extern int ioat_ring_alloc_order;
#define NULL_DESC_BUFFER_SIZE 1
#define IOAT_MAX_ORDER 16
#define ioat_get_alloc_order() \
(min(ioat_ring_alloc_order, IOAT_MAX_ORDER))
#define ioat_get_max_alloc_order() \
(min(ioat_ring_max_alloc_order, IOAT_MAX_ORDER))
struct ioat2_dma_chan ;
static inline struct ioat2_dma_chan *to_ioat2_chan(struct dma_chan *c)
static inline u16 ioat2_ring_size(struct ioat2_dma_chan *ioat)
static inline u16 ioat2_ring_active(struct ioat2_dma_chan *ioat)
static inline u16 ioat2_ring_pending(struct ioat2_dma_chan *ioat)
static inline u16 ioat2_ring_space(struct ioat2_dma_chan *ioat)
static inline u16 ioat2_xferlen_to_descs(struct ioat2_dma_chan *ioat, size_t len)
struct ioat_ring_ent ;
static inline struct ioat_ring_ent *
ioat2_get_ring_ent(struct ioat2_dma_chan *ioat, u16 idx)
static inline void ioat2_set_chainaddr(struct ioat2_dma_chan *ioat, u64 addr)
int __devinit ioat2_dma_probe(struct ioatdma_device *dev, int dca);
int __devinit ioat3_dma_probe(struct ioatdma_device *dev, int dca);
struct dca_provider * __devinit ioat2_dca_init(struct pci_dev *pdev, void __iomem *iobase);
struct dca_provider * __devinit ioat3_dca_init(struct pci_dev *pdev, void __iomem *iobase);
int ioat2_check_space_lock(struct ioat2_dma_chan *ioat, int num_descs);
int ioat2_enumerate_channels(struct ioatdma_device *device);
struct dma_async_tx_descriptor *
ioat2_dma_prep_memcpy_lock(struct dma_chan *c, dma_addr_t dma_dest,
dma_addr_t dma_src, size_t len, unsigned long flags);
void ioat2_issue_pending(struct dma_chan *chan);
int ioat2_alloc_chan_resources(struct dma_chan *c);
void ioat2_free_chan_resources(struct dma_chan *c);
void __ioat2_restart_chan(struct ioat2_dma_chan *ioat);
bool reshape_ring(struct ioat2_dma_chan *ioat, int order);
void __ioat2_issue_pending(struct ioat2_dma_chan *ioat);
void ioat2_cleanup_event(unsigned long data);
void ioat2_timer_event(unsigned long data);
int ioat2_quiesce(struct ioat_chan_common *chan, unsigned long tmo);
int ioat2_reset_sync(struct ioat_chan_common *chan, unsigned long tmo);
extern struct kobj_type ioat2_ktype;
extern struct kmem_cache *ioat2_cache;
