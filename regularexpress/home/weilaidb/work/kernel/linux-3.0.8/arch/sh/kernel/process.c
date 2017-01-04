struct kmem_cache *task_xstate_cachep = NULL;
unsigned int xstate_size;
int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src)
void free_thread_xstate(struct task_struct *tsk)
#if THREAD_SHIFT < PAGE_SHIFT
static struct kmem_cache *thread_info_cache;
struct thread_info *alloc_thread_info_node(struct task_struct *tsk, int node)
void free_thread_info(struct thread_info *ti)
void thread_info_cache_init(void)
struct thread_info *alloc_thread_info_node(struct task_struct *tsk, int node)
void free_thread_info(struct thread_info *ti)
void arch_task_cache_init(void)
# define HAVE_SOFTFP	1
# define HAVE_SOFTFP	0
void __cpuinit init_thread_xstate(void)
