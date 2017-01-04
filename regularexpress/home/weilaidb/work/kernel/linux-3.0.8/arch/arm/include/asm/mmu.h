#define __ARM_MMU_H
typedef struct  mm_context_t;
#define ASID(mm)	((mm)->context.id & 255)
#define INIT_MM_CONTEXT(name)                                                 \
.context.id_lock    = __SPIN_LOCK_UNLOCKED(name.context.id_lock),
#define ASID(mm)	(0)
typedef struct  mm_context_t;
