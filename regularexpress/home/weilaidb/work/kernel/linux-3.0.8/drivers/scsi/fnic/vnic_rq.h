#define _VNIC_RQ_H_
#define vnic_rq_desc_avail fnic_rq_desc_avail
#define vnic_rq_desc_used fnic_rq_desc_used
#define vnic_rq_next_desc fnic_rq_next_desc
#define vnic_rq_next_index fnic_rq_next_index
#define vnic_rq_next_buf_index fnic_rq_next_buf_index
#define vnic_rq_post fnic_rq_post
#define vnic_rq_posting_soon fnic_rq_posting_soon
#define vnic_rq_return_descs fnic_rq_return_descs
#define vnic_rq_service fnic_rq_service
#define vnic_rq_fill fnic_rq_fill
#define vnic_rq_free fnic_rq_free
#define vnic_rq_alloc fnic_rq_alloc
#define vnic_rq_init fnic_rq_init
#define vnic_rq_error_status fnic_rq_error_status
#define vnic_rq_enable fnic_rq_enable
#define vnic_rq_disable fnic_rq_disable
#define vnic_rq_clean fnic_rq_clean
struct vnic_rq_ctrl ;
#define VNIC_RQ_BUF_BLK_ENTRIES 64
#define VNIC_RQ_BUF_BLK_SZ \
(VNIC_RQ_BUF_BLK_ENTRIES * sizeof(struct vnic_rq_buf))
#define VNIC_RQ_BUF_BLKS_NEEDED(entries) \
DIV_ROUND_UP(entries, VNIC_RQ_BUF_BLK_ENTRIES)
#define VNIC_RQ_BUF_BLKS_MAX VNIC_RQ_BUF_BLKS_NEEDED(4096)
struct vnic_rq_buf ;
struct vnic_rq ;
static inline unsigned int vnic_rq_desc_avail(struct vnic_rq *rq)
static inline unsigned int vnic_rq_desc_used(struct vnic_rq *rq)
static inline void *vnic_rq_next_desc(struct vnic_rq *rq)
static inline unsigned int vnic_rq_next_index(struct vnic_rq *rq)
static inline unsigned int vnic_rq_next_buf_index(struct vnic_rq *rq)
static inline void vnic_rq_post(struct vnic_rq *rq,
void *os_buf, unsigned int os_buf_index,
dma_addr_t dma_addr, unsigned int len)
static inline int vnic_rq_posting_soon(struct vnic_rq *rq)
static inline void vnic_rq_return_descs(struct vnic_rq *rq, unsigned int count)
enum desc_return_options ;
static inline void vnic_rq_service(struct vnic_rq *rq,
struct cq_desc *cq_desc, u16 completed_index,
int desc_return, void (*buf_service)(struct vnic_rq *rq,
struct cq_desc *cq_desc, struct vnic_rq_buf *buf,
int skipped, void *opaque), void *opaque)
static inline int vnic_rq_fill(struct vnic_rq *rq,
int (*buf_fill)(struct vnic_rq *rq))
void vnic_rq_free(struct vnic_rq *rq);
int vnic_rq_alloc(struct vnic_dev *vdev, struct vnic_rq *rq, unsigned int index,
unsigned int desc_count, unsigned int desc_size);
void vnic_rq_init(struct vnic_rq *rq, unsigned int cq_index,
unsigned int error_interrupt_enable,
unsigned int error_interrupt_offset);
unsigned int vnic_rq_error_status(struct vnic_rq *rq);
void vnic_rq_enable(struct vnic_rq *rq);
int vnic_rq_disable(struct vnic_rq *rq);
void vnic_rq_clean(struct vnic_rq *rq,
void (*buf_clean)(struct vnic_rq *rq, struct vnic_rq_buf *buf));
