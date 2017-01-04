void res_counter_init(struct res_counter *counter, struct res_counter *parent)
int res_counter_charge_locked(struct res_counter *counter, unsigned long val)
int res_counter_charge(struct res_counter *counter, unsigned long val,
struct res_counter **limit_fail_at)
void res_counter_uncharge_locked(struct res_counter *counter, unsigned long val)
void res_counter_uncharge(struct res_counter *counter, unsigned long val)
static inline unsigned long long *
res_counter_member(struct res_counter *counter, int member)
ssize_t res_counter_read(struct res_counter *counter, int member,
const char __user *userbuf, size_t nbytes, loff_t *pos,
int (*read_strategy)(unsigned long long val, char *st_buf))
#if BITS_PER_LONG == 32
u64 res_counter_read_u64(struct res_counter *counter, int member)
u64 res_counter_read_u64(struct res_counter *counter, int member)
int res_counter_memparse_write_strategy(const char *buf,
unsigned long long *res)
int res_counter_write(struct res_counter *counter, int member,
const char *buf, write_strategy_fn write_strategy)
