static int
select_task_rq_stop(struct task_struct *p, int sd_flag, int flags)
static void
check_preempt_curr_stop(struct rq *rq, struct task_struct *p, int flags)
static struct task_struct *pick_next_task_stop(struct rq *rq)
static void
enqueue_task_stop(struct rq *rq, struct task_struct *p, int flags)
static void
dequeue_task_stop(struct rq *rq, struct task_struct *p, int flags)
static void yield_task_stop(struct rq *rq)
static void put_prev_task_stop(struct rq *rq, struct task_struct *prev)
static void task_tick_stop(struct rq *rq, struct task_struct *curr, int queued)
static void set_curr_task_stop(struct rq *rq)
static void switched_to_stop(struct rq *rq, struct task_struct *p)
static void
prio_changed_stop(struct rq *rq, struct task_struct *p, int oldprio)
static unsigned int
get_rr_interval_stop(struct rq *rq, struct task_struct *task)
static const struct sched_class stop_sched_class = ;
