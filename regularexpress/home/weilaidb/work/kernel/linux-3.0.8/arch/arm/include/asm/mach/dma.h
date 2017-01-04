struct dma_struct;
typedef struct dma_struct dma_t;
struct dma_ops ;
struct dma_struct ;
extern int isa_dma_add(unsigned int, dma_t *dma);
extern void isa_init_dma(void);
