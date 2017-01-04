#define __C2_H
#define DRV_NAME     "c2"
#define DRV_VERSION  "1.1"
#define PFX          DRV_NAME ": "
#define BAR_0                0
#define BAR_2                2
#define BAR_4                4
#define RX_BUF_SIZE         (1536 + 8)
#define ETH_JUMBO_MTU        9000
#define C2_MAGIC            "CEPHEUS"
#define C2_VERSION           4
#define C2_IVN              (18 & 0x7fffffff)
#define C2_REG0_SIZE        (16 * 1024)
#define C2_REG2_SIZE        (2 * 1024 * 1024)
#define C2_REG4_SIZE        (256 * 1024 * 1024)
#define C2_NUM_TX_DESC       341
#define C2_NUM_RX_DESC       256
#define C2_PCI_REGS_OFFSET  (0x10000)
#define C2_RXP_HRXDQ_OFFSET (((C2_REG4_SIZE)/2))
#define C2_RXP_HRXDQ_SIZE   (4096)
#define C2_TXP_HTXDQ_OFFSET (((C2_REG4_SIZE)/2) + C2_RXP_HRXDQ_SIZE)
#define C2_TXP_HTXDQ_SIZE   (4096)
#define C2_TX_TIMEOUT	    (6*HZ)
static const u8 c2_magic[] = ;
enum adapter_pci_regs ;
struct c2_adapter_pci_regs ;
enum pci_regs ;
enum ;
struct c2_pci_regs ;
enum c2_txp_flags ;
enum c2_rxp_flags ;
enum c2_rxp_status ;
enum txp_desc ;
enum rxp_desc ;
struct c2_txp_desc  __attribute__ ((packed));
struct c2_rxp_desc  __attribute__ ((packed));
struct c2_rxp_hdr  __attribute__ ((packed));
struct c2_tx_desc ;
struct c2_rx_desc ;
struct c2_alloc ;
struct c2_array ;
struct sp_chunk ;
struct c2_pd_table ;
struct c2_qp_table ;
struct c2_element ;
struct c2_ring ;
struct c2_dev ;
struct c2_port ;
#define PCI_BAR0_HOST_HINT	0x100
#define PCI_BAR0_ADAPTER_HINT	0x2000
#define CQ_ARMED 	0x01
#define CQ_WAIT_FOR_DMA	0x80
#define C2_HINT_MAKE(q_index, hint_count) (((q_index) << 16) | hint_count)
#define C2_HINT_GET_INDEX(hint) (((hint) & 0x7FFF0000) >> 16)
#define C2_HINT_GET_COUNT(hint) ((hint) & 0x0000FFFF)
#define C2_ADAPTER_PCI_REGS_OFFSET 0x10000
static inline u64 readq(const void __iomem * addr)
static inline void __raw_writeq(u64 val, void __iomem * addr)
#define C2_SET_CUR_RX(c2dev, cur_rx) \
__raw_writel((__force u32) cpu_to_be32(cur_rx), c2dev->mmio_txp_ring + 4092)
#define C2_GET_CUR_RX(c2dev) \
be32_to_cpu((__force __be32) readl(c2dev->mmio_txp_ring + 4092))
static inline struct c2_dev *to_c2dev(struct ib_device *ibdev)
static inline int c2_errno(void *reply)
extern int c2_register_device(struct c2_dev *c2dev);
extern void c2_unregister_device(struct c2_dev *c2dev);
extern int c2_rnic_init(struct c2_dev *c2dev);
extern void c2_rnic_term(struct c2_dev *c2dev);
extern void c2_rnic_interrupt(struct c2_dev *c2dev);
extern int c2_del_addr(struct c2_dev *c2dev, __be32 inaddr, __be32 inmask);
extern int c2_add_addr(struct c2_dev *c2dev, __be32 inaddr, __be32 inmask);
extern int c2_alloc_qp(struct c2_dev *c2dev, struct c2_pd *pd,
struct ib_qp_init_attr *qp_attrs, struct c2_qp *qp);
extern void c2_free_qp(struct c2_dev *c2dev, struct c2_qp *qp);
extern struct ib_qp *c2_get_qp(struct ib_device *device, int qpn);
extern int c2_qp_modify(struct c2_dev *c2dev, struct c2_qp *qp,
struct ib_qp_attr *attr, int attr_mask);
extern int c2_qp_set_read_limits(struct c2_dev *c2dev, struct c2_qp *qp,
int ord, int ird);
extern int c2_post_send(struct ib_qp *ibqp, struct ib_send_wr *ib_wr,
struct ib_send_wr **bad_wr);
extern int c2_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *ib_wr,
struct ib_recv_wr **bad_wr);
extern void __devinit c2_init_qp_table(struct c2_dev *c2dev);
extern void __devexit c2_cleanup_qp_table(struct c2_dev *c2dev);
extern void c2_set_qp_state(struct c2_qp *, int);
extern struct c2_qp *c2_find_qpn(struct c2_dev *c2dev, int qpn);
extern int c2_pd_alloc(struct c2_dev *c2dev, int privileged, struct c2_pd *pd);
extern void c2_pd_free(struct c2_dev *c2dev, struct c2_pd *pd);
extern int __devinit c2_init_pd_table(struct c2_dev *c2dev);
extern void __devexit c2_cleanup_pd_table(struct c2_dev *c2dev);
extern int c2_init_cq(struct c2_dev *c2dev, int entries,
struct c2_ucontext *ctx, struct c2_cq *cq);
extern void c2_free_cq(struct c2_dev *c2dev, struct c2_cq *cq);
extern void c2_cq_event(struct c2_dev *c2dev, u32 mq_index);
extern void c2_cq_clean(struct c2_dev *c2dev, struct c2_qp *qp, u32 mq_index);
extern int c2_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *entry);
extern int c2_arm_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags flags);
extern int c2_llp_connect(struct iw_cm_id *cm_id,
struct iw_cm_conn_param *iw_param);
extern int c2_llp_accept(struct iw_cm_id *cm_id,
struct iw_cm_conn_param *iw_param);
extern int c2_llp_reject(struct iw_cm_id *cm_id, const void *pdata,
u8 pdata_len);
extern int c2_llp_service_create(struct iw_cm_id *cm_id, int backlog);
extern int c2_llp_service_destroy(struct iw_cm_id *cm_id);
extern int c2_nsmr_register_phys_kern(struct c2_dev *c2dev, u64 *addr_list,
int page_size, int pbl_depth, u32 length,
u32 off, u64 *va, enum c2_acf acf,
struct c2_mr *mr);
extern int c2_stag_dealloc(struct c2_dev *c2dev, u32 stag_index);
extern void c2_ae_event(struct c2_dev *c2dev, u32 mq_index);
extern int c2_init_mqsp_pool(struct c2_dev *c2dev, gfp_t gfp_mask,
struct sp_chunk **root);
extern void c2_free_mqsp_pool(struct c2_dev *c2dev, struct sp_chunk *root);
extern __be16 *c2_alloc_mqsp(struct c2_dev *c2dev, struct sp_chunk *head,
dma_addr_t *dma_addr, gfp_t gfp_mask);
extern void c2_free_mqsp(__be16* mqsp);
