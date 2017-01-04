struct autogroup ;
static inline struct task_group *
autogroup_task_group(struct task_struct *p, struct task_group *tg);
static inline void autogroup_init(struct task_struct *init_task)
static inline void autogroup_free(struct task_group *tg)
static inline bool task_group_is_autogroup(struct task_group *tg)
static inline struct task_group *
autogroup_task_group(struct task_struct *p, struct task_group *tg)
static inline int autogroup_path(struct task_group *tg, char *buf, int buflen)
