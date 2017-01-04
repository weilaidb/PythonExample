struct vmw_fence ;
void vmw_fence_queue_init(struct vmw_fence_queue *queue)
void vmw_fence_queue_takedown(struct vmw_fence_queue *queue)
int vmw_fence_push(struct vmw_fence_queue *queue,
uint32_t sequence)
int vmw_fence_pull(struct vmw_fence_queue *queue,
uint32_t signaled_sequence)
static struct timespec vmw_timespec_add(struct timespec t1,
struct timespec t2)
static struct timespec vmw_fifo_lag(struct vmw_fence_queue *queue)
static bool vmw_lag_lt(struct vmw_fence_queue *queue,
uint32_t us)
int vmw_wait_lag(struct vmw_private *dev_priv,
struct vmw_fence_queue *queue, uint32_t us)
