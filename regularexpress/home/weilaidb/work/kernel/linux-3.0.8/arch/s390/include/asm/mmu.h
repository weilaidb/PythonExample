#define __MMU_H
typedef struct  mm_context_t;
#define INIT_MM_CONTEXT(name)						      \
.context.list_lock    = __SPIN_LOCK_UNLOCKED(name.context.list_lock), \
.context.pgtable_list = LIST_HEAD_INIT(name.context.pgtable_list),
