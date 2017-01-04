#define NR_CXN	4096
static unsigned long cxn_bitmap[NR_CXN / (sizeof(unsigned long) * 8)];
static LIST_HEAD(cxn_owners_lru);
static DEFINE_SPINLOCK(cxn_owners_lock);
int __nongpreldata cxn_pinned = -1;
int init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static unsigned get_cxn(mm_context_t *ctx)
void change_mm_context(mm_context_t *old, mm_context_t *ctx, pgd_t *pgd)
void destroy_context(struct mm_struct *mm)
char *proc_pid_status_frv_cxnr(struct mm_struct *mm, char *buffer)
int cxn_pin_by_pid(pid_t pid)
