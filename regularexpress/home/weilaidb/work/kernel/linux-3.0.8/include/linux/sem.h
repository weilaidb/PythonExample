#define _LINUX_SEM_H
#define SEM_UNDO        0x1000
#define GETPID  11
#define GETVAL  12
#define GETALL  13
#define GETNCNT 14
#define GETZCNT 15
#define SETVAL  16
#define SETALL  17
#define SEM_STAT 18
#define SEM_INFO 19
struct semid_ds ;
struct sembuf ;
union semun ;
struct  seminfo ;
#define SEMMNI  128
#define SEMMSL  250
#define SEMMNS  (SEMMNI*SEMMSL)
#define SEMOPM  32
#define SEMVMX  32767
#define SEMAEM  SEMVMX
#define SEMUME  SEMOPM
#define SEMMNU  SEMMNS
#define SEMMAP  SEMMNS
#define SEMUSZ  20
struct task_struct;
struct sem ;
struct sem_array ;
struct sem_queue ;
struct sem_undo ;
struct sem_undo_list ;
struct sysv_sem ;
extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
static inline int copy_semundo(unsigned long clone_flags, struct task_struct *tsk)
static inline void exit_sem(struct task_struct *tsk)
