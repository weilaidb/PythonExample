#define __LINUX_LGLOCK_H
#define br_lock_init(name)	name##_lock_init()
#define br_read_lock(name)	name##_local_lock()
#define br_read_unlock(name)	name##_local_unlock()
#define br_write_lock(name)	name##_global_lock_online()
#define br_write_unlock(name)	name##_global_unlock_online()
#define DECLARE_BRLOCK(name)	DECLARE_LGLOCK(name)
#define DEFINE_BRLOCK(name)	DEFINE_LGLOCK(name)
#define lg_lock_init(name)	name##_lock_init()
#define lg_local_lock(name)	name##_local_lock()
#define lg_local_unlock(name)	name##_local_unlock()
#define lg_local_lock_cpu(name, cpu)	name##_local_lock_cpu(cpu)
#define lg_local_unlock_cpu(name, cpu)	name##_local_unlock_cpu(cpu)
#define lg_global_lock(name)	name##_global_lock()
#define lg_global_unlock(name)	name##_global_unlock()
#define lg_global_lock_online(name) name##_global_lock_online()
#define lg_global_unlock_online(name) name##_global_unlock_online()
#define LOCKDEP_INIT_MAP lockdep_init_map
#define DEFINE_LGLOCK_LOCKDEP(name)					\
struct lock_class_key name##_lock_key;					\
struct lockdep_map name##_lock_dep_map;				\
EXPORT_SYMBOL(name##_lock_dep_map)
#define LOCKDEP_INIT_MAP(a, b, c, d)
#define DEFINE_LGLOCK_LOCKDEP(name)
#define DECLARE_LGLOCK(name)						\
extern void name##_lock_init(void);					\
extern void name##_local_lock(void);					\
extern void name##_local_unlock(void);					\
extern void name##_local_lock_cpu(int cpu);				\
extern void name##_local_unlock_cpu(int cpu);				\
extern void name##_global_lock(void);					\
extern void name##_global_unlock(void);				\
extern void name##_global_lock_online(void);				\
extern void name##_global_unlock_online(void);				\
#define DEFINE_LGLOCK(name)						\
\
DEFINE_PER_CPU(arch_spinlock_t, name##_lock);				\
DEFINE_LGLOCK_LOCKDEP(name);						\
\
void name##_lock_init(void) 									\
EXPORT_SYMBOL(name##_lock_init);					\
\
void name##_local_lock(void) 									\
EXPORT_SYMBOL(name##_local_lock);					\
\
void name##_local_unlock(void) 									\
EXPORT_SYMBOL(name##_local_unlock);					\
\
void name##_local_lock_cpu(int cpu) 									\
EXPORT_SYMBOL(name##_local_lock_cpu);					\
\
void name##_local_unlock_cpu(int cpu) 									\
EXPORT_SYMBOL(name##_local_unlock_cpu);				\
\
void name##_global_lock_online(void) 									\
EXPORT_SYMBOL(name##_global_lock_online);				\
\
void name##_global_unlock_online(void) 									\
EXPORT_SYMBOL(name##_global_unlock_online);				\
\
void name##_global_lock(void) 									\
EXPORT_SYMBOL(name##_global_lock);					\
\
void name##_global_unlock(void) 									\
EXPORT_SYMBOL(name##_global_unlock);
