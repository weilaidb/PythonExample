struct reference ;
struct ref_table ;
static struct ref_table tipc_ref_table;
static DEFINE_RWLOCK(ref_table_lock);
int tipc_ref_table_init(u32 requested_size, u32 start)
void tipc_ref_table_stop(void)
u32 tipc_ref_acquire(void *object, spinlock_t **lock)
void tipc_ref_discard(u32 ref)
void *tipc_ref_lock(u32 ref)
void *tipc_ref_deref(u32 ref)
