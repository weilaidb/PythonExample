#define _ASM_SCORE_SEGMENT_H
typedef struct  mm_segment_t;
#define KERNEL_DS	((mm_segment_t))
#define USER_DS	KERNEL_DS
# define get_ds()	(KERNEL_DS)
# define get_fs()	(current_thread_info()->addr_limit)
# define set_fs(x)	\
do  while (0)
# define segment_eq(a, b)	((a).seg == (b).seg)
# endif
