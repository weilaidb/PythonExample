#define __BESTCOMM_H__
struct bcom_bd ;
struct bcom_task ;
#define BCOM_FLAGS_NONE         0x00000000ul
#define BCOM_FLAGS_ENABLE_TASK  (1ul <<  0)
extern void bcom_enable(struct bcom_task *tsk);
extern void bcom_disable(struct bcom_task *tsk);
static inline int
bcom_get_task_irq(struct bcom_task *tsk)
#define BCOM_BD_READY	0x40000000ul
static inline int
_bcom_next_index(struct bcom_task *tsk)
static inline int
_bcom_next_outdex(struct bcom_task *tsk)
static inline int
bcom_queue_empty(struct bcom_task *tsk)
static inline int
bcom_queue_full(struct bcom_task *tsk)
static inline struct bcom_bd
*bcom_get_bd(struct bcom_task *tsk, unsigned int index)
static inline int
bcom_buffer_done(struct bcom_task *tsk)
static inline struct bcom_bd *
bcom_prepare_next_buffer(struct bcom_task *tsk)
static inline void
bcom_submit_next_buffer(struct bcom_task *tsk, void *cookie)
static inline void *
bcom_retrieve_buffer(struct bcom_task *tsk, u32 *p_status, struct bcom_bd **p_bd)
