#define LPFC_MBUF_POOL_SIZE     64
#define LPFC_MEM_POOL_SIZE      64
int
lpfc_mem_alloc(struct lpfc_hba *phba, int align)
void
lpfc_mem_free(struct lpfc_hba *phba)
void
lpfc_mem_free_all(struct lpfc_hba *phba)
void *
lpfc_mbuf_alloc(struct lpfc_hba *phba, int mem_flags, dma_addr_t *handle)
void
__lpfc_mbuf_free(struct lpfc_hba * phba, void *virt, dma_addr_t dma)
void
lpfc_mbuf_free(struct lpfc_hba * phba, void *virt, dma_addr_t dma)
struct hbq_dmabuf *
lpfc_els_hbq_alloc(struct lpfc_hba *phba)
void
lpfc_els_hbq_free(struct lpfc_hba *phba, struct hbq_dmabuf *hbqbp)
struct hbq_dmabuf *
lpfc_sli4_rb_alloc(struct lpfc_hba *phba)
void
lpfc_sli4_rb_free(struct lpfc_hba *phba, struct hbq_dmabuf *dmab)
void
lpfc_in_buf_free(struct lpfc_hba *phba, struct lpfc_dmabuf *mp)
