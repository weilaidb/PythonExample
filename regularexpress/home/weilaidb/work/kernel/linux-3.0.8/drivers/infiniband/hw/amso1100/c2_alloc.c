static int c2_alloc_mqsp_chunk(struct c2_dev *c2dev, gfp_t gfp_mask,
struct sp_chunk **head)
int c2_init_mqsp_pool(struct c2_dev *c2dev, gfp_t gfp_mask,
struct sp_chunk **root)
void c2_free_mqsp_pool(struct c2_dev *c2dev, struct sp_chunk *root)
__be16 *c2_alloc_mqsp(struct c2_dev *c2dev, struct sp_chunk *head,
dma_addr_t *dma_addr, gfp_t gfp_mask)
void c2_free_mqsp(__be16 *mqsp)
