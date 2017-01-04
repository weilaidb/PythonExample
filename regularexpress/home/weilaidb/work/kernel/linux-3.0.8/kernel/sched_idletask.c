static int
select_task_rq_idle(struct task_struct *p, int sd_flag, int flags)
static void check_preempt_curr_idle(struct rq *rq, struct task_struct *p, int flags)
static struct task_struct *pick_next_task_idle(struct rq *rq)
static void
dequeue_task_idle(struct rq *rq, struct task_struct *p, int flags)
static void put_prev_task_idle(struct rq *rq, struct task_struct *prev)
static void task_tick_idle(struct rq *rq, struct task_struct *curr, int queued)
static void set_curr_task_idle(struct rq *rq)
static void switched_to_idle(struct rq *rq, struct task_struct *p)
static void
prio_changed_idle(struct rq *rq, struct task_struct *p, int oldprio)
static unsigned int get_rr_interval_idle(struct rq *rq, struct task_struct *task)
static const struct sched_class idle_sched_class = ;
