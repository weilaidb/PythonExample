#define MAX_TXCH 64
#define MAX_RXCH 64
#define MAX_FLAGS 64
#define MAX_FUN 8
static struct pasdma_status *dma_status;
static void __iomem *iob_regs;
static void __iomem *mac_regs[6];
static void __iomem *dma_regs;
static int base_hw_irq;
static int num_txch, num_rxch;
static struct pci_dev *dma_pdev;
static DECLARE_BITMAP(txch_free, MAX_TXCH);
static DECLARE_BITMAP(rxch_free, MAX_RXCH);
static DECLARE_BITMAP(flags_free, MAX_FLAGS);
static DECLARE_BITMAP(fun_free, MAX_FUN);
unsigned int pasemi_read_iob_reg(unsigned int reg)
EXPORT_SYMBOL(pasemi_read_iob_reg);
void pasemi_write_iob_reg(unsigned int reg, unsigned int val)
EXPORT_SYMBOL(pasemi_write_iob_reg);
unsigned int pasemi_read_mac_reg(int intf, unsigned int reg)
EXPORT_SYMBOL(pasemi_read_mac_reg);
void pasemi_write_mac_reg(int intf, unsigned int reg, unsigned int val)
EXPORT_SYMBOL(pasemi_write_mac_reg);
unsigned int pasemi_read_dma_reg(unsigned int reg)
EXPORT_SYMBOL(pasemi_read_dma_reg);
void pasemi_write_dma_reg(unsigned int reg, unsigned int val)
EXPORT_SYMBOL(pasemi_write_dma_reg);
static int pasemi_alloc_tx_chan(enum pasemi_dmachan_type type)
static void pasemi_free_tx_chan(int chan)
static int pasemi_alloc_rx_chan(void)
static void pasemi_free_rx_chan(int chan)
void *pasemi_dma_alloc_chan(enum pasemi_dmachan_type type,
int total_size, int offset)
EXPORT_SYMBOL(pasemi_dma_alloc_chan);
void pasemi_dma_free_chan(struct pasemi_dmachan *chan)
EXPORT_SYMBOL(pasemi_dma_free_chan);
int pasemi_dma_alloc_ring(struct pasemi_dmachan *chan, int ring_size)
EXPORT_SYMBOL(pasemi_dma_alloc_ring);
void pasemi_dma_free_ring(struct pasemi_dmachan *chan)
EXPORT_SYMBOL(pasemi_dma_free_ring);
void pasemi_dma_start_chan(const struct pasemi_dmachan *chan, const u32 cmdsta)
EXPORT_SYMBOL(pasemi_dma_start_chan);
#define MAX_RETRIES 5000
int pasemi_dma_stop_chan(const struct pasemi_dmachan *chan)
EXPORT_SYMBOL(pasemi_dma_stop_chan);
void *pasemi_dma_alloc_buf(struct pasemi_dmachan *chan, int size,
dma_addr_t *handle)
EXPORT_SYMBOL(pasemi_dma_alloc_buf);
void pasemi_dma_free_buf(struct pasemi_dmachan *chan, int size,
dma_addr_t *handle)
EXPORT_SYMBOL(pasemi_dma_free_buf);
int pasemi_dma_alloc_flag(void)
EXPORT_SYMBOL(pasemi_dma_alloc_flag);
void pasemi_dma_free_flag(int flag)
EXPORT_SYMBOL(pasemi_dma_free_flag);
void pasemi_dma_set_flag(int flag)
EXPORT_SYMBOL(pasemi_dma_set_flag);
void pasemi_dma_clear_flag(int flag)
EXPORT_SYMBOL(pasemi_dma_clear_flag);
int pasemi_dma_alloc_fun(void)
EXPORT_SYMBOL(pasemi_dma_alloc_fun);
void pasemi_dma_free_fun(int fun)
EXPORT_SYMBOL(pasemi_dma_free_fun);
static void *map_onedev(struct pci_dev *p, int index)
int pasemi_dma_init(void)
EXPORT_SYMBOL(pasemi_dma_init);
