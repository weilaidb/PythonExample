#define IOPRIO_H
#define IOPRIO_BITS		(16)
#define IOPRIO_CLASS_SHIFT	(13)
#define IOPRIO_PRIO_MASK	((1UL << IOPRIO_CLASS_SHIFT) - 1)
#define IOPRIO_PRIO_CLASS(mask)	((mask) >> IOPRIO_CLASS_SHIFT)
#define IOPRIO_PRIO_DATA(mask)	((mask) & IOPRIO_PRIO_MASK)
#define IOPRIO_PRIO_VALUE(class, data)	(((class) << IOPRIO_CLASS_SHIFT) | data)
#define ioprio_valid(mask)	(IOPRIO_PRIO_CLASS((mask)) != IOPRIO_CLASS_NONE)
enum ;
#define IOPRIO_BE_NR	(8)
enum ;
#define IOPRIO_NORM	(4)
static inline int task_ioprio(struct io_context *ioc)
static inline int task_ioprio_class(struct io_context *ioc)
static inline int task_nice_ioprio(struct task_struct *task)
static inline int task_nice_ioclass(struct task_struct *task)
extern int ioprio_best(unsigned short aprio, unsigned short bprio);
extern int set_task_ioprio(struct task_struct *task, int ioprio);
