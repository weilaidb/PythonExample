static void preload_index(struct index_state *index,
const struct pathspec *pathspec)
#define MAX_PARALLEL (20)
#define THREAD_COST (500)
struct thread_data ;
static void *preload_thread(void *_data)
static void preload_index(struct index_state *index,
const struct pathspec *pathspec)
int read_index_preload(struct index_state *index,
const struct pathspec *pathspec)
