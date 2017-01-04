#define _INCLUDED_CYANBLKDEV_QUEUE_H_
struct request;
struct task_struct;
struct cyasblkdev_queue ;
extern int cyasblkdev_init_queue(struct cyasblkdev_queue *, spinlock_t *);
extern void cyasblkdev_cleanup_queue(struct cyasblkdev_queue *);
extern void cyasblkdev_queue_suspend(struct cyasblkdev_queue *);
extern void cyasblkdev_queue_resume(struct cyasblkdev_queue *);
extern cy_as_device_handle cyasdevice_getdevhandle(void);
#define MOD_LOGS 1
void verbose_rq_flags(int flags);
