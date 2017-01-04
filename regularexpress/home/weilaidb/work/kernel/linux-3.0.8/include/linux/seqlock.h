#define __LINUX_SEQLOCK_H
typedef struct  seqlock_t;
#define __SEQLOCK_UNLOCKED(lockname) \
#define seqlock_init(x)					\
do  while (0)
#define DEFINE_SEQLOCK(x) \
seqlock_t x = __SEQLOCK_UNLOCKED(x)
static inline void write_seqlock(seqlock_t *sl)
static inline void write_sequnlock(seqlock_t *sl)
static inline int write_tryseqlock(seqlock_t *sl)
static __always_inline unsigned read_seqbegin(const seqlock_t *sl)
static __always_inline int read_seqretry(const seqlock_t *sl, unsigned start)
typedef struct seqcount  seqcount_t;
#define SEQCNT_ZERO
#define seqcount_init(x)	do  while (0)
static inline unsigned __read_seqcount_begin(const seqcount_t *s)
static inline unsigned read_seqcount_begin(const seqcount_t *s)
static inline int __read_seqcount_retry(const seqcount_t *s, unsigned start)
static inline int read_seqcount_retry(const seqcount_t *s, unsigned start)
static inline void write_seqcount_begin(seqcount_t *s)
static inline void write_seqcount_end(seqcount_t *s)
static inline void write_seqcount_barrier(seqcount_t *s)
#define write_seqlock_irqsave(lock, flags)				\
do  while (0)
#define write_seqlock_irq(lock)						\
do  while (0)
#define write_seqlock_bh(lock)						\
do  while (0)
#define write_sequnlock_irqrestore(lock, flags)				\
do  while(0)
#define write_sequnlock_irq(lock)					\
do  while(0)
#define write_sequnlock_bh(lock)					\
do  while(0)
#define read_seqbegin_irqsave(lock, flags)				\
()
#define read_seqretry_irqrestore(lock, iv, flags)			\
()
