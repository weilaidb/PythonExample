#define DBG(format, arg...) do  while (0)
struct capilib_msgidqueue ;
struct capilib_ncci ;
static inline void mq_init(struct capilib_ncci * np)
static inline int mq_enqueue(struct capilib_ncci * np, u16 msgid)
static inline int mq_dequeue(struct capilib_ncci * np, u16 msgid)
void capilib_new_ncci(struct list_head *head, u16 applid, u32 ncci, u32 winsize)
EXPORT_SYMBOL(capilib_new_ncci);
void capilib_free_ncci(struct list_head *head, u16 applid, u32 ncci)
EXPORT_SYMBOL(capilib_free_ncci);
void capilib_release_appl(struct list_head *head, u16 applid)
EXPORT_SYMBOL(capilib_release_appl);
void capilib_release(struct list_head *head)
EXPORT_SYMBOL(capilib_release);
u16 capilib_data_b3_req(struct list_head *head, u16 applid, u32 ncci, u16 msgid)
EXPORT_SYMBOL(capilib_data_b3_req);
void capilib_data_b3_conf(struct list_head *head, u16 applid, u32 ncci, u16 msgid)
EXPORT_SYMBOL(capilib_data_b3_conf);
