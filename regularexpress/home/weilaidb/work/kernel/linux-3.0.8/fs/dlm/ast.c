#define WAKE_ASTS  0
static uint64_t			ast_seq_count;
static struct list_head		ast_queue;
static spinlock_t		ast_queue_lock;
static struct task_struct *	astd_task;
static unsigned long		astd_wakeflags;
static struct mutex		astd_running;
static void dlm_dump_lkb_callbacks(struct dlm_lkb *lkb)
void dlm_del_ast(struct dlm_lkb *lkb)
int dlm_add_lkb_callback(struct dlm_lkb *lkb, uint32_t flags, int mode,
int status, uint32_t sbflags, uint64_t seq)
int dlm_rem_lkb_callback(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_callback *cb, int *resid)
void dlm_add_ast(struct dlm_lkb *lkb, uint32_t flags, int mode, int status,
uint32_t sbflags)
static void process_asts(void)
static inline int no_asts(void)
static int dlm_astd(void *data)
void dlm_astd_wake(void)
int dlm_astd_start(void)
void dlm_astd_stop(void)
void dlm_astd_suspend(void)
void dlm_astd_resume(void)
