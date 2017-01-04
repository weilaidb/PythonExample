#define FSCACHE_DEBUG_LEVEL OPERATION
atomic_t fscache_op_debug_id;
EXPORT_SYMBOL(fscache_op_debug_id);
void fscache_enqueue_operation(struct fscache_operation *op)
EXPORT_SYMBOL(fscache_enqueue_operation);
static void fscache_run_op(struct fscache_object *object,
struct fscache_operation *op)
int fscache_submit_exclusive_op(struct fscache_object *object,
struct fscache_operation *op)
static void fscache_report_unexpected_submission(struct fscache_object *object,
struct fscache_operation *op,
unsigned long ostate)
int fscache_submit_op(struct fscache_object *object,
struct fscache_operation *op)
void fscache_abort_object(struct fscache_object *object)
void fscache_start_operations(struct fscache_object *object)
int fscache_cancel_op(struct fscache_operation *op)
", op->object->debug_id, op->debug_id);
spin_lock(&object->lock);
ret = -EBUSY;
if (!list_empty(&op->pend_link))
spin_unlock(&object->lock);
_leave(" = %d", ret);
return ret;
}
void fscache_put_operation(struct fscache_operation *op)
EXPORT_SYMBOL(fscache_put_operation);
void fscache_operation_gc(struct work_struct *work)
void fscache_op_work_func(struct work_struct *work)
