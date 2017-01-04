#define _DMA_ATTR_H
enum dma_attr ;
#define __DMA_ATTRS_LONGS BITS_TO_LONGS(DMA_ATTR_MAX)
struct dma_attrs ;
#define DEFINE_DMA_ATTRS(x) 					\
struct dma_attrs x =
static inline void init_dma_attrs(struct dma_attrs *attrs)
static inline void dma_set_attr(enum dma_attr attr, struct dma_attrs *attrs)
static inline int dma_get_attr(enum dma_attr attr, struct dma_attrs *attrs)
static inline void dma_set_attr(enum dma_attr attr, struct dma_attrs *attrs)
static inline int dma_get_attr(enum dma_attr attr, struct dma_attrs *attrs)
