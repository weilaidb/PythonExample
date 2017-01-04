#define CPDMA_TXIDVER		0x00
#define CPDMA_TXCONTROL		0x04
#define CPDMA_TXTEARDOWN	0x08
#define CPDMA_RXIDVER		0x10
#define CPDMA_RXCONTROL		0x14
#define CPDMA_SOFTRESET		0x1c
#define CPDMA_RXTEARDOWN	0x18
#define CPDMA_TXINTSTATRAW	0x80
#define CPDMA_TXINTSTATMASKED	0x84
#define CPDMA_TXINTMASKSET	0x88
#define CPDMA_TXINTMASKCLEAR	0x8c
#define CPDMA_MACINVECTOR	0x90
#define CPDMA_MACEOIVECTOR	0x94
#define CPDMA_RXINTSTATRAW	0xa0
#define CPDMA_RXINTSTATMASKED	0xa4
#define CPDMA_RXINTMASKSET	0xa8
#define CPDMA_RXINTMASKCLEAR	0xac
#define CPDMA_DMAINTSTATRAW	0xb0
#define CPDMA_DMAINTSTATMASKED	0xb4
#define CPDMA_DMAINTMASKSET	0xb8
#define CPDMA_DMAINTMASKCLEAR	0xbc
#define CPDMA_DMAINT_HOSTERR	BIT(1)
#define CPDMA_DMACONTROL	0x20
#define CPDMA_DMASTATUS		0x24
#define CPDMA_RXBUFFOFS		0x28
#define CPDMA_EM_CONTROL	0x2c
#define CPDMA_DESC_SOP		BIT(31)
#define CPDMA_DESC_EOP		BIT(30)
#define CPDMA_DESC_OWNER	BIT(29)
#define CPDMA_DESC_EOQ		BIT(28)
#define CPDMA_DESC_TD_COMPLETE	BIT(27)
#define CPDMA_DESC_PASS_CRC	BIT(26)
#define CPDMA_TEARDOWN_VALUE	0xfffffffc
struct cpdma_desc ;
struct cpdma_desc_pool ;
enum cpdma_state ;
const char *cpdma_state_str[] = ;
struct cpdma_ctlr ;
struct cpdma_chan ;
#define dmaregs		params.dmaregs
#define num_chan	params.num_chan
#define dma_reg_read(ctlr, ofs)		__raw_readl((ctlr)->dmaregs + (ofs))
#define chan_read(chan, fld)		__raw_readl((chan)->fld)
#define desc_read(desc, fld)		__raw_readl(&(desc)->fld)
#define dma_reg_write(ctlr, ofs, v)	__raw_writel(v, (ctlr)->dmaregs + (ofs))
#define chan_write(chan, fld, v)	__raw_writel(v, (chan)->fld)
#define desc_write(desc, fld, v)	__raw_writel((u32)(v), &(desc)->fld)
static struct cpdma_desc_pool *
cpdma_desc_pool_create(struct device *dev, u32 phys, u32 hw_addr,
int size, int align)
static void cpdma_desc_pool_destroy(struct cpdma_desc_pool *pool)
static inline dma_addr_t desc_phys(struct cpdma_desc_pool *pool,
struct cpdma_desc __iomem *desc)
static inline struct cpdma_desc __iomem *
desc_from_phys(struct cpdma_desc_pool *pool, dma_addr_t dma)
static struct cpdma_desc __iomem *
cpdma_desc_alloc(struct cpdma_desc_pool *pool, int num_desc)
static void cpdma_desc_free(struct cpdma_desc_pool *pool,
struct cpdma_desc __iomem *desc, int num_desc)
struct cpdma_ctlr *cpdma_ctlr_create(struct cpdma_params *params)
int cpdma_ctlr_start(struct cpdma_ctlr *ctlr)
int cpdma_ctlr_stop(struct cpdma_ctlr *ctlr)
int cpdma_ctlr_dump(struct cpdma_ctlr *ctlr)
int cpdma_ctlr_destroy(struct cpdma_ctlr *ctlr)
int cpdma_ctlr_int_ctrl(struct cpdma_ctlr *ctlr, bool enable)
void cpdma_ctlr_eoi(struct cpdma_ctlr *ctlr)
struct cpdma_chan *cpdma_chan_create(struct cpdma_ctlr *ctlr, int chan_num,
cpdma_handler_fn handler)
int cpdma_chan_destroy(struct cpdma_chan *chan)
int cpdma_chan_get_stats(struct cpdma_chan *chan,
struct cpdma_chan_stats *stats)
int cpdma_chan_dump(struct cpdma_chan *chan)
static void __cpdma_chan_submit(struct cpdma_chan *chan,
struct cpdma_desc __iomem *desc)
int cpdma_chan_submit(struct cpdma_chan *chan, void *token, void *data,
int len, gfp_t gfp_mask)
static void __cpdma_chan_free(struct cpdma_chan *chan,
struct cpdma_desc __iomem *desc,
int outlen, int status)
static int __cpdma_chan_process(struct cpdma_chan *chan)
int cpdma_chan_process(struct cpdma_chan *chan, int quota)
int cpdma_chan_start(struct cpdma_chan *chan)
int cpdma_chan_stop(struct cpdma_chan *chan)
int cpdma_chan_int_ctrl(struct cpdma_chan *chan, bool enable)
struct cpdma_control_info ;
struct cpdma_control_info controls[] = ;
int cpdma_control_get(struct cpdma_ctlr *ctlr, int control)
int cpdma_control_set(struct cpdma_ctlr *ctlr, int control, int value)
