#define __RES_COUNTER_H__
struct res_counter ;
#define RESOURCE_MAX (unsigned long long)LLONG_MAX
u64 res_counter_read_u64(struct res_counter *counter, int member);
ssize_t res_counter_read(struct res_counter *counter, int member,
const char __user *buf, size_t nbytes, loff_t *pos,
int (*read_strategy)(unsigned long long val, char *s));
typedef int (*write_strategy_fn)(const char *buf, unsigned long long *val);
int res_counter_memparse_write_strategy(const char *buf,
unsigned long long *res);
int res_counter_write(struct res_counter *counter, int member,
const char *buffer, write_strategy_fn write_strategy);
enum ;
void res_counter_init(struct res_counter *counter, struct res_counter *parent);
int __must_check res_counter_charge_locked(struct res_counter *counter,
unsigned long val);
int __must_check res_counter_charge(struct res_counter *counter,
unsigned long val, struct res_counter **limit_fail_at);
void res_counter_uncharge_locked(struct res_counter *counter, unsigned long val);
void res_counter_uncharge(struct res_counter *counter, unsigned long val);
static inline unsigned long long res_counter_margin(struct res_counter *cnt)
static inline unsigned long long
res_counter_soft_limit_excess(struct res_counter *cnt)
static inline void res_counter_reset_max(struct res_counter *cnt)
static inline void res_counter_reset_failcnt(struct res_counter *cnt)
static inline int res_counter_set_limit(struct res_counter *cnt,
unsigned long long limit)
static inline int
res_counter_set_soft_limit(struct res_counter *cnt,
unsigned long long soft_limit)
