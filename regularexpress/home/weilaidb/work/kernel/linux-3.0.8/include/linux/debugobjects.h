#define _LINUX_DEBUGOBJECTS_H
enum debug_obj_state ;
struct debug_obj_descr;
struct debug_obj ;
struct debug_obj_descr ;
extern void debug_object_init      (void *addr, struct debug_obj_descr *descr);
extern void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr);
extern void debug_object_activate  (void *addr, struct debug_obj_descr *descr);
extern void debug_object_deactivate(void *addr, struct debug_obj_descr *descr);
extern void debug_object_destroy   (void *addr, struct debug_obj_descr *descr);
extern void debug_object_free      (void *addr, struct debug_obj_descr *descr);
extern void
debug_object_active_state(void *addr, struct debug_obj_descr *descr,
unsigned int expect, unsigned int next);
extern void debug_objects_early_init(void);
extern void debug_objects_mem_init(void);
static inline void
debug_object_init      (void *addr, struct debug_obj_descr *descr)
static inline void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr)
static inline void
debug_object_activate  (void *addr, struct debug_obj_descr *descr)
static inline void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr)
static inline void
debug_object_destroy   (void *addr, struct debug_obj_descr *descr)
static inline void
debug_object_free      (void *addr, struct debug_obj_descr *descr)
static inline void debug_objects_early_init(void)
static inline void debug_objects_mem_init(void)
extern void debug_check_no_obj_freed(const void *address, unsigned long size);
static inline void
debug_check_no_obj_freed(const void *address, unsigned long size)
