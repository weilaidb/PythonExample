#define _LINUX_PERCPU_COUNTER_H
struct percpu_counter ;
extern int percpu_counter_batch;
int __percpu_counter_init(struct percpu_counter *fbc, s64 amount,
struct lock_class_key *key);
#define percpu_counter_init(fbc, value)					\
()
void percpu_counter_destroy(struct percpu_counter *fbc);
void percpu_counter_set(struct percpu_counter *fbc, s64 amount);
void __percpu_counter_add(struct percpu_counter *fbc, s64 amount, s32 batch);
s64 __percpu_counter_sum(struct percpu_counter *fbc);
int percpu_counter_compare(struct percpu_counter *fbc, s64 rhs);
static inline void percpu_counter_add(struct percpu_counter *fbc, s64 amount)
static inline s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
static inline s64 percpu_counter_sum(struct percpu_counter *fbc)
static inline s64 percpu_counter_read(struct percpu_counter *fbc)
static inline s64 percpu_counter_read_positive(struct percpu_counter *fbc)
static inline int percpu_counter_initialized(struct percpu_counter *fbc)
struct percpu_counter ;
static inline int percpu_counter_init(struct percpu_counter *fbc, s64 amount)
static inline void percpu_counter_destroy(struct percpu_counter *fbc)
static inline void percpu_counter_set(struct percpu_counter *fbc, s64 amount)
static inline int percpu_counter_compare(struct percpu_counter *fbc, s64 rhs)
static inline void
percpu_counter_add(struct percpu_counter *fbc, s64 amount)
static inline void
__percpu_counter_add(struct percpu_counter *fbc, s64 amount, s32 batch)
static inline s64 percpu_counter_read(struct percpu_counter *fbc)
static inline s64 percpu_counter_read_positive(struct percpu_counter *fbc)
static inline s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
static inline s64 percpu_counter_sum(struct percpu_counter *fbc)
static inline int percpu_counter_initialized(struct percpu_counter *fbc)
static inline void percpu_counter_inc(struct percpu_counter *fbc)
static inline void percpu_counter_dec(struct percpu_counter *fbc)
static inline void percpu_counter_sub(struct percpu_counter *fbc, s64 amount)
