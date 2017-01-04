static int init_srcu_struct_fields(struct srcu_struct *sp)
int __init_srcu_struct(struct srcu_struct *sp, const char *name,
struct lock_class_key *key)
EXPORT_SYMBOL_GPL(__init_srcu_struct);
int init_srcu_struct(struct srcu_struct *sp)
EXPORT_SYMBOL_GPL(init_srcu_struct);
static int srcu_readers_active_idx(struct srcu_struct *sp, int idx)
static int srcu_readers_active(struct srcu_struct *sp)
void cleanup_srcu_struct(struct srcu_struct *sp)
EXPORT_SYMBOL_GPL(cleanup_srcu_struct);
int __srcu_read_lock(struct srcu_struct *sp)
EXPORT_SYMBOL_GPL(__srcu_read_lock);
void __srcu_read_unlock(struct srcu_struct *sp, int idx)
EXPORT_SYMBOL_GPL(__srcu_read_unlock);
#define SYNCHRONIZE_SRCU_READER_DELAY 10
static void __synchronize_srcu(struct srcu_struct *sp, void (*sync_func)(void))
void synchronize_srcu(struct srcu_struct *sp)
EXPORT_SYMBOL_GPL(synchronize_srcu);
void synchronize_srcu_expedited(struct srcu_struct *sp)
EXPORT_SYMBOL_GPL(synchronize_srcu_expedited);
long srcu_batches_completed(struct srcu_struct *sp)
EXPORT_SYMBOL_GPL(srcu_batches_completed);
