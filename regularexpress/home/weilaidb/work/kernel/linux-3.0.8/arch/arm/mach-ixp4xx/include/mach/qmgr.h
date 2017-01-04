#define IXP4XX_QMGR_H
#define DEBUG_QMGR	0
#define HALF_QUEUES	32
#define QUEUES		64
#define MAX_QUEUE_LENGTH 4
#define QUEUE_STAT1_EMPTY		1
#define QUEUE_STAT1_NEARLY_EMPTY	2
#define QUEUE_STAT1_NEARLY_FULL		4
#define QUEUE_STAT1_FULL		8
#define QUEUE_STAT2_UNDERFLOW		1
#define QUEUE_STAT2_OVERFLOW		2
#define QUEUE_WATERMARK_0_ENTRIES	0
#define QUEUE_WATERMARK_1_ENTRY		1
#define QUEUE_WATERMARK_2_ENTRIES	2
#define QUEUE_WATERMARK_4_ENTRIES	3
#define QUEUE_WATERMARK_8_ENTRIES	4
#define QUEUE_WATERMARK_16_ENTRIES	5
#define QUEUE_WATERMARK_32_ENTRIES	6
#define QUEUE_WATERMARK_64_ENTRIES	7
#define QUEUE_IRQ_SRC_EMPTY		0
#define QUEUE_IRQ_SRC_NEARLY_EMPTY	1
#define QUEUE_IRQ_SRC_NEARLY_FULL	2
#define QUEUE_IRQ_SRC_FULL		3
#define QUEUE_IRQ_SRC_NOT_EMPTY		4
#define QUEUE_IRQ_SRC_NOT_NEARLY_EMPTY	5
#define QUEUE_IRQ_SRC_NOT_NEARLY_FULL	6
#define QUEUE_IRQ_SRC_NOT_FULL		7
struct qmgr_regs ;
void qmgr_set_irq(unsigned int queue, int src,
void (*handler)(void *pdev), void *pdev);
void qmgr_enable_irq(unsigned int queue);
void qmgr_disable_irq(unsigned int queue);
#if DEBUG_QMGR
extern char qmgr_queue_descs[QUEUES][32];
int qmgr_request_queue(unsigned int queue, unsigned int len,
unsigned int nearly_empty_watermark,
unsigned int nearly_full_watermark,
const char *desc_format, const char* name);
int __qmgr_request_queue(unsigned int queue, unsigned int len,
unsigned int nearly_empty_watermark,
unsigned int nearly_full_watermark);
#define qmgr_request_queue(queue, len, nearly_empty_watermark,		\
nearly_full_watermark, desc_format, name)	\
__qmgr_request_queue(queue, len, nearly_empty_watermark,	\
nearly_full_watermark)
void qmgr_release_queue(unsigned int queue);
static inline void qmgr_put_entry(unsigned int queue, u32 val)
static inline u32 qmgr_get_entry(unsigned int queue)
static inline int __qmgr_get_stat1(unsigned int queue)
static inline int __qmgr_get_stat2(unsigned int queue)
static inline int qmgr_stat_empty(unsigned int queue)
static inline int qmgr_stat_below_low_watermark(unsigned int queue)
static inline int qmgr_stat_above_high_watermark(unsigned int queue)
static inline int qmgr_stat_full(unsigned int queue)
static inline int qmgr_stat_underflow(unsigned int queue)
static inline int qmgr_stat_overflow(unsigned int queue)
