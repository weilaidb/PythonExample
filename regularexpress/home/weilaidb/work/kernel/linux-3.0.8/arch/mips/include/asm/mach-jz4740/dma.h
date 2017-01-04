#define __ASM_MACH_JZ4740_DMA_H__
struct jz4740_dma_chan;
enum jz4740_dma_request_type ;
enum jz4740_dma_width ;
enum jz4740_dma_transfer_size ;
enum jz4740_dma_flags ;
enum jz4740_dma_mode ;
struct jz4740_dma_config ;
typedef void (*jz4740_dma_complete_callback_t)(struct jz4740_dma_chan *, int, void *);
struct jz4740_dma_chan *jz4740_dma_request(void *dev, const char *name);
void jz4740_dma_free(struct jz4740_dma_chan *dma);
void jz4740_dma_configure(struct jz4740_dma_chan *dma,
const struct jz4740_dma_config *config);
void jz4740_dma_enable(struct jz4740_dma_chan *dma);
void jz4740_dma_disable(struct jz4740_dma_chan *dma);
void jz4740_dma_set_src_addr(struct jz4740_dma_chan *dma, dma_addr_t src);
void jz4740_dma_set_dst_addr(struct jz4740_dma_chan *dma, dma_addr_t dst);
void jz4740_dma_set_transfer_count(struct jz4740_dma_chan *dma, uint32_t count);
uint32_t jz4740_dma_get_residue(const struct jz4740_dma_chan *dma);
void jz4740_dma_set_complete_cb(struct jz4740_dma_chan *dma,
jz4740_dma_complete_callback_t cb);
