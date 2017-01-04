#define TOKEN_AGING_INTERVAL	(0xFF)
static DEFINE_SPINLOCK(swap_token_lock);
struct mm_struct *swap_token_mm;
struct mem_cgroup *swap_token_memcg;
static unsigned int global_faults;
static unsigned int last_aging;
static struct mem_cgroup *swap_token_memcg_from_mm(struct mm_struct *mm)
static struct mem_cgroup *swap_token_memcg_from_mm(struct mm_struct *mm)
void grab_swap_token(struct mm_struct *mm)
void __put_swap_token(struct mm_struct *mm)
static bool match_memcg(struct mem_cgroup *a, struct mem_cgroup *b)
void disable_swap_token(struct mem_cgroup *memcg)
