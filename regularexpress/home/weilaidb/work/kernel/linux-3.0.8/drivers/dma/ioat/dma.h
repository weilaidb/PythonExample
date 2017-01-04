#define IOATDMA_H
#define IOAT_DMA_VERSION  "4.00"
#define IOAT_LOW_COMPLETION_MASK	0xffffffc0
#define IOAT_DMA_DCA_ANY_CPU		~0
#define to_ioatdma_device(dev) container_of(dev, struct ioatdma_device, common)
#define to_ioat_desc(lh) container_of(lh, struct ioat_desc_sw, node)
#define tx_to_ioat_desc(tx) container_of(tx, struct ioat_desc_sw, txd)
#define to_dev(ioat_chan) (&(ioat_chan)->device->pdev->dev)
#define chan_num(ch) ((int)((ch)->reg_base - (ch)->device->reg_base) / 0x80)
#define NULL_DESC_BUFFER_SIZE 1
struct ioatdma_device ;
struct ioat_chan_common ;
struct ioat_sysfs_entry ;
struct ioat_dma_chan ;
static inline struct ioat_chan_common *to_chan_common(struct dma_chan *c)
static inline struct ioat_dma_chan *to_ioat_chan(struct dma_chan *c)
static inline enum dma_status
ioat_tx_status(struct dma_chan *c, dma_cookie_t cookie,
struct dma_tx_state *txstate)
struct ioat_desc_sw ;
#define set_desc_id(desc, i) ((desc)->id = (i))
#define desc_id(desc) ((desc)->id)
#define set_desc_id(desc, i)
#define desc_id(desc) (0)
static inline void
__dump_desc_dbg(struct ioat_chan_common *chan, struct ioat_dma_descriptor *hw,
struct dma_async_tx_descriptor *tx, int id)
#define dump_desc_dbg(c, d) \
()
static inline void ioat_set_tcp_copy_break(unsigned long copybreak)
static inline struct ioat_chan_common *
ioat_chan_by_index(struct ioatdma_device *device, int index)
static inline u64 ioat_chansts(struct ioat_chan_common *chan)
static inline void ioat_start(struct ioat_chan_common *chan)
static inline u64 ioat_chansts_to_addr(u64 status)
static inline u32 ioat_chanerr(struct ioat_chan_common *chan)
static inline void ioat_suspend(struct ioat_chan_common *chan)
static inline void ioat_reset(struct ioat_chan_common *chan)
static inline bool ioat_reset_pending(struct ioat_chan_common *chan)
static inline void ioat_set_chainaddr(struct ioat_dma_chan *ioat, u64 addr)
static inline bool is_ioat_active(unsigned long status)
static inline bool is_ioat_idle(unsigned long status)
static inline bool is_ioat_halted(unsigned long status)
static inline bool is_ioat_suspended(unsigned long status)
static inline bool is_ioat_bug(unsigned long err)
static inline void ioat_unmap(struct pci_dev *pdev, dma_addr_t addr, size_t len,
int direction, enum dma_ctrl_flags flags, bool dst)
int __devinit ioat_probe(struct ioatdma_device *device);
int __devinit ioat_register(struct ioatdma_device *device);
int __devinit ioat1_dma_probe(struct ioatdma_device *dev, int dca);
int __devinit ioat_dma_self_test(struct ioatdma_device *device);
void __devexit ioat_dma_remove(struct ioatdma_device *device);
struct dca_provider * __devinit ioat_dca_init(struct pci_dev *pdev,
void __iomem *iobase);
unsigned long ioat_get_current_completion(struct ioat_chan_common *chan);
void ioat_init_channel(struct ioatdma_device *device,
struct ioat_chan_common *chan, int idx);
enum dma_status ioat_dma_tx_status(struct dma_chan *c, dma_cookie_t cookie,
struct dma_tx_state *txstate);
void ioat_dma_unmap(struct ioat_chan_common *chan, enum dma_ctrl_flags flags,
size_t len, struct ioat_dma_descriptor *hw);
bool ioat_cleanup_preamble(struct ioat_chan_common *chan,
unsigned long *phys_complete);
void ioat_kobject_add(struct ioatdma_device *device, struct kobj_type *type);
void ioat_kobject_del(struct ioatdma_device *device);
extern const struct sysfs_ops ioat_sysfs_ops;
extern struct ioat_sysfs_entry ioat_version_attr;
extern struct ioat_sysfs_entry ioat_cap_attr;
