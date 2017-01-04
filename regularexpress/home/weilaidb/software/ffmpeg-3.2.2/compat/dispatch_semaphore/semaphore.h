#define COMPAT_DISPATCH_SEMAPHORE_SEMAPHORE_H
#define sem_t dispatch_semaphore_t
#define sem_post(psem)              dispatch_semaphore_signal(*psem)
#define sem_wait(psem)              dispatch_semaphore_wait(*psem, DISPATCH_TIME_FOREVER)
#define sem_timedwait(psem, val)    dispatch_semaphore_wait(*psem, dispatch_walltime(val, 0))
#define sem_destroy(psem)           dispatch_release(*psem)
static inline int compat_sem_init(dispatch_semaphore_t *psem,
int unused, int val)
#define sem_init compat_sem_init
