#define _VNIC_WQ_H_
#define vnic_wq_desc_avail fnic_wq_desc_avail
#define vnic_wq_desc_used fnic_wq_desc_used
#define vnic_wq_next_desc fni_cwq_next_desc
#define vnic_wq_post fnic_wq_post
#define vnic_wq_service fnic_wq_service
#define vnic_wq_free fnic_wq_free
#define vnic_wq_alloc fnic_wq_alloc
#define vnic_wq_init fnic_wq_init
#define vnic_wq_error_status fnic_wq_error_status
#define vnic_wq_enable fnic_wq_enable
#define vnic_wq_disable fnic_wq_disable
#define vnic_wq_clean fnic_wq_clean
struct vnic_wq_ctrl ;
struct vnic_wq_buf ;
#define VNIC_WQ_BUF_BLK_ENTRIES 64
#define VNIC_WQ_BUF_BLK_SZ \
(VNIC_WQ_BUF_BLK_ENTRIES * sizeof(struct vnic_wq_buf))
#define VNIC_WQ_BUF_BLKS_NEEDED(entries) \
DIV_ROUND_UP(entries, VNIC_WQ_BUF_BLK_ENTRIES)
#define VNIC_WQ_BUF_BLKS_MAX VNIC_WQ_BUF_BLKS_NEEDED(4096)
struct vnic_wq ;
static inline unsigned int vnic_wq_desc_avail(struct vnic_wq *wq)
static inline unsigned int vnic_wq_desc_used(struct vnic_wq *wq)
static inline void *vnic_wq_next_desc(struct vnic_wq *wq)
static inline void vnic_wq_post(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr,
unsigned int len, int sop, int eop)
static inline void vnic_wq_service(struct vnic_wq *wq,
struct cq_desc *cq_desc, u16 completed_index,
void (*buf_service)(struct vnic_wq *wq,
struct cq_desc *cq_desc, struct vnic_wq_buf *buf, void *opaque),
void *opaque)
void vnic_wq_free(struct vnic_wq *wq);
int vnic_wq_alloc(struct vnic_dev *vdev, struct vnic_wq *wq, unsigned int index,
unsigned int desc_count, unsigned int desc_size);
void vnic_wq_init(struct vnic_wq *wq, unsigned int cq_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset);
unsigned int vnic_wq_error_status(struct vnic_wq *wq);
void vnic_wq_enable(struct vnic_wq *wq);
int vnic_wq_disable(struct vnic_wq *wq);
void vnic_wq_clean(struct vnic_wq *wq,
void (*buf_clean)(struct vnic_wq *wq, struct vnic_wq_buf *buf));
