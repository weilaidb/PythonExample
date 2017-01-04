#define _LINUX_DELAYACCT_H
#define DELAYACCT_PF_SWAPIN	0x00000001
#define DELAYACCT_PF_BLKIO	0x00000002
extern int delayacct_on;
extern struct kmem_cache *delayacct_cache;
extern void delayacct_init(void);
extern void __delayacct_tsk_init(struct task_struct *);
extern void __delayacct_tsk_exit(struct task_struct *);
extern void __delayacct_blkio_start(void);
extern void __delayacct_blkio_end(void);
extern int __delayacct_add_tsk(struct taskstats *, struct task_struct *);
extern __u64 __delayacct_blkio_ticks(struct task_struct *);
extern void __delayacct_freepages_start(void);
extern void __delayacct_freepages_end(void);
static inline int delayacct_is_task_waiting_on_io(struct task_struct *p)
static inline void delayacct_set_flag(int flag)
static inline void delayacct_clear_flag(int flag)
static inline void delayacct_tsk_init(struct task_struct *tsk)
static inline void delayacct_tsk_free(struct task_struct *tsk)
static inline void delayacct_blkio_start(void)
static inline void delayacct_blkio_end(void)
static inline int delayacct_add_tsk(struct taskstats *d,
struct task_struct *tsk)
static inline __u64 delayacct_blkio_ticks(struct task_struct *tsk)
static inline void delayacct_freepages_start(void)
static inline void delayacct_freepages_end(void)
static inline void delayacct_set_flag(int flag)
static inline void delayacct_clear_flag(int flag)
static inline void delayacct_init(void)
static inline void delayacct_tsk_init(struct task_struct *tsk)
static inline void delayacct_tsk_free(struct task_struct *tsk)
static inline void delayacct_blkio_start(void)
static inline void delayacct_blkio_end(void)
static inline int delayacct_add_tsk(struct taskstats *d,
struct task_struct *tsk)
static inline __u64 delayacct_blkio_ticks(struct task_struct *tsk)
static inline int delayacct_is_task_waiting_on_io(struct task_struct *p)
static inline void delayacct_freepages_start(void)
static inline void delayacct_freepages_end(void)
