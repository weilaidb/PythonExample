#define LIBHDFS_THREAD_H
typedef void (*threadProcedure)(void *);
typedef struct  thread;
int threadCreate(thread *t);
int threadJoin(const thread *t);
