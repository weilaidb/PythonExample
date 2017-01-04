#define _LINUX_USER_RETURN_NOTIFIER_H
struct user_return_notifier ;
void user_return_notifier_register(struct user_return_notifier *urn);
void user_return_notifier_unregister(struct user_return_notifier *urn);
static inline void propagate_user_return_notify(struct task_struct *prev,
struct task_struct *next)
void fire_user_return_notifiers(void);
static inline void clear_user_return_notifier(struct task_struct *p)
struct user_return_notifier ;
static inline void propagate_user_return_notify(struct task_struct *prev,
struct task_struct *next)
static inline void fire_user_return_notifiers(void)
static inline void clear_user_return_notifier(struct task_struct *p)
