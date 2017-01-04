#define _CRYSTALHD_MISC_H_
extern uint32_t g_linklog_level;
#define	BC_LINK_ELEM_POOL_SZ	((BC_TX_LIST_CNT * 2) + BC_RX_LIST_CNT + 2 + 4)
#define	CHD_IODATA_POOL_SZ    (BC_IOCTL_DATA_POOL_SIZE * BC_LINK_MAX_OPENS)
#define BC_LINK_SG_POOL_SZ    (BC_TX_LIST_CNT + BC_RX_LIST_CNT)
enum crystalhd_dio_sig ;
struct crystalhd_dio_user_info ;
struct crystalhd_dio_req ;
#define BC_LINK_DIOQ_SIG	(0x09223280)
struct crystalhd_elem ;
typedef void (*crystalhd_data_free_cb)(void *context, void *data);
struct crystalhd_dioq ;
typedef void (*hw_comp_callback)(struct crystalhd_dio_req *,
wait_queue_head_t *event, enum BC_STATUS sts);
uint32_t bc_dec_reg_rd(struct crystalhd_adp *, uint32_t);
void bc_dec_reg_wr(struct crystalhd_adp *, uint32_t, uint32_t);
uint32_t crystalhd_reg_rd(struct crystalhd_adp *, uint32_t);
void crystalhd_reg_wr(struct crystalhd_adp *, uint32_t, uint32_t);
enum BC_STATUS crystalhd_mem_rd(struct crystalhd_adp *, uint32_t, uint32_t, uint32_t *);
enum BC_STATUS crystalhd_mem_wr(struct crystalhd_adp *, uint32_t, uint32_t, uint32_t *);
enum BC_STATUS crystalhd_pci_cfg_rd(struct crystalhd_adp *, uint32_t, uint32_t, uint32_t *);
enum BC_STATUS crystalhd_pci_cfg_wr(struct crystalhd_adp *, uint32_t, uint32_t, uint32_t);
void *bc_kern_dma_alloc(struct crystalhd_adp *, uint32_t, dma_addr_t *);
void bc_kern_dma_free(struct crystalhd_adp *, uint32_t,
void *, dma_addr_t);
#define crystalhd_create_event(_ev)	init_waitqueue_head(_ev)
#define crystalhd_set_event(_ev)		wake_up_interruptible(_ev)
#define crystalhd_wait_on_event(ev, condition, timeout, ret, nosig)	\
do  while (0)
extern int crystalhd_create_dio_pool(struct crystalhd_adp *, uint32_t);
extern void crystalhd_destroy_dio_pool(struct crystalhd_adp *);
extern enum BC_STATUS crystalhd_map_dio(struct crystalhd_adp *, void *, uint32_t,
uint32_t, bool, bool, struct crystalhd_dio_req**);
extern enum BC_STATUS crystalhd_unmap_dio(struct crystalhd_adp *, struct crystalhd_dio_req*);
#define crystalhd_get_sgle_paddr(_dio, _ix) (cpu_to_le64(sg_dma_address(&_dio->sg[_ix])))
#define crystalhd_get_sgle_len(_dio, _ix) (cpu_to_le32(sg_dma_len(&_dio->sg[_ix])))
extern enum BC_STATUS crystalhd_create_dioq(struct crystalhd_adp *, struct crystalhd_dioq **, crystalhd_data_free_cb , void *);
extern void crystalhd_delete_dioq(struct crystalhd_adp *, struct crystalhd_dioq *);
extern enum BC_STATUS crystalhd_dioq_add(struct crystalhd_dioq *ioq, void *data, bool wake, uint32_t tag);
extern void *crystalhd_dioq_fetch(struct crystalhd_dioq *ioq);
extern void *crystalhd_dioq_find_and_fetch(struct crystalhd_dioq *ioq, uint32_t tag);
extern void *crystalhd_dioq_fetch_wait(struct crystalhd_dioq *ioq, uint32_t to_secs, uint32_t *sig_pend);
#define crystalhd_dioq_count(_ioq)	((_ioq) ? _ioq->count : 0)
extern int crystalhd_create_elem_pool(struct crystalhd_adp *, uint32_t);
extern void crystalhd_delete_elem_pool(struct crystalhd_adp *);
extern void crystalhd_show_buffer(uint32_t off, uint8_t *buff, uint32_t dwcount);
enum _chd_log_levels ;
#define BCMLOG_ENTER				\
if (g_linklog_level & BCMLOG_ENTER_LEAVE)
#define BCMLOG_LEAVE				\
if (g_linklog_level & BCMLOG_ENTER_LEAVE)
#define BCMLOG(trace, fmt, args...)		\
if (g_linklog_level & trace)
#define BCMLOG_ERR(fmt, args...)					\
do  while (0);
